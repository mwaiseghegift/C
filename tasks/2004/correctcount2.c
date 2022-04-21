/* 
CS 410 
Lab 07: Synchronozing Threads with POSIX Semaphores and Mutexes
NAGASWETHA_NEERUKONDA
*/

#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>

#define ITERAT 1000000
int TOTAL = 0;
int n = 0;
int count = 0;

//program use mutex in order to synchronize the threads
pthread_mutex_t myMutex;

//function to count
void *Count(void *a)
{
    int i, tmp;
    for(i = 0; i < ITERAT; i++)
    {
        pthread_mutex_lock(&myMutex);
        tmp = TOTAL;      /* copy the global TOTAL locally */
        tmp = tmp+1;    /* increment the local copy */
        TOTAL = tmp;      /* store the local value into the global TOTAL */ 
        pthread_mutex_unlock(&myMutex);
    }
}
//function to print the count
void print_count(int count)
{
    printf("count = %d\n", count);
}
int main(int argc, char *argv[])
{
  //define the thread id
  pthread_t tid1, tid2;
  //create the thread 1
  if(pthread_create(&tid1, NULL, Count, NULL))
  { 
    //sem wait
    pthread_mutex_lock(&myMutex);
    printf("\n ERROR creating thread 1");
    exit(1);
  }
  //create the thread 2
  if(pthread_create(&tid2, NULL, Count, NULL))
  {
    printf("\n ERROR creating thread 2");
    exit(1);
  }
 
  if(pthread_join(tid1, NULL))	/* wait for the thread 1 to finish */
  {
    printf("\n ERROR joining thread");
    exit(1);
  }
  pthread_mutex_unlock(&myMutex);
  if(pthread_join(tid2, NULL))        /* wait for the thread 2 to finish */
  {
    printf("\n ERROR joining thread");
    exit(1);
  }
  print_count(TOTAL);
  return 0;
}
