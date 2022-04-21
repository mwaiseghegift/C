/*
CS 410 
Lab 07: Synchronozing Threads with POSIX Semaphores and Mutexes
NAGASWETHA_NEERUKONDA
*/

#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>

/*

using the pthread_mutex function to synchronize the increment of a variable. Create 10 threads that
will increment the variable in one each using a delay of one second. Displaying each time the
variable value and the number of the thread. At the end the total should be just 10.

*/

#define THREAD_COUNT 10

// define the thread id
#define THREAD_ID_LENGTH 10

void *increment(void *a);

// define the global variable
int total = 0;

// define the mutex
pthread_mutex_t mutex;

// pthread_mutex function to synchronize the increment of a variable
void *increment(void *a)
{
    int i;
    for(i = 0; i < 10; i++)
    {
        // lock the mutex
        pthread_mutex_lock(&mutex);
        // increment the global variable
        total++;
        // display the thread id and the value of the global variable
        printf("Thread %d: total = %d\n", (int)a, total);
        // unlock the mutex
        pthread_mutex_unlock(&mutex);
        // sleep for one second
        sleep(1);
    }
}

// main function
int main(int argc, char *argv[])
{
    // define the thread id
    pthread_t tid[THREAD_COUNT];
    // define the thread id
    char thread_id[THREAD_ID_LENGTH];
    // define the thread id
    int i;
    // create the mutex
    pthread_mutex_init(&mutex, NULL);
    // create the threads
    for(i = 0; i < THREAD_COUNT; i++)
    {
        // create the thread
        sprintf(thread_id, "%d", i);
        if(pthread_create(&tid[i], NULL, increment, (void *)thread_id))
        {
            printf("\n ERROR creating thread %d", i);
            exit(1);
        }
    }
    // join the threads
    for(i = 0; i < THREAD_COUNT; i++)
    {
        if(pthread_join(tid[i], NULL))
        {
            printf("\n ERROR joining thread %d", i);
            exit(1);
        }
    }
    // destroy the mutex
    pthread_mutex_destroy(&mutex);
    // display the total
    printf("\n total = %d\n", total);
    // return 0
    return 0;
}



