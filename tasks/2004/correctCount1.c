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
sem_t mySemaphore;


void print_count(int count)
{
    printf("count = %d\n", count);
}
//function to count
void *Count(void *a)
{
    int i, tmp;
    for(i = 0; i < ITERAT; i++)
    {
        tmp = TOTAL;      /* copy the global TOTAL locally */
        tmp = tmp+1;    /* increment the local copy */
        TOTAL = tmp;      /* store the local value into the global TOTAL */ 
    }
}
int main(int argc, char *argv[])
{
  //define the thread id
  pthread_t tid1, tid2;
  //create the thread 1
  if(pthread_create(&tid1, NULL, Count, NULL))
  { 
    //sem wait
    sem_wait(&mySemaphore);
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
  //sem_post(&mySemaphore);
  if(pthread_join(tid2, NULL))        /* wait for the thread 2 to finish */
  {
    printf("\n ERROR joining thread");
    exit(1);
  }
  //check if TOTAL is equal to 2 * ITERAT
  if (TOTAL != 2 * ITERAT) 
    {
      printf("\n BOOM! TOTAL is [%d], should be %d\n\n", 2*ITERAT, 2*ITERAT);
      exit(1);
    }
  //exit critical section
  sem_post(&sem_wait);
  //increment count==2*ITERAT
  count++;
  exit(1);
}

