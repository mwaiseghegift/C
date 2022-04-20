/* 
CS 410 
Lab 07: Synchronozing Threads with POSIX Semaphores and Mutexes
NAGASWETHA_NEERUKONDA
*/
#include <unistd.h>     /* Symbolic Constants */
#include <sys/types.h>  /* Primitive System Data Types */ 
#include <errno.h>      /* Errors */
#include <stdio.h>      /* Input/Output */
#include <stdlib.h>     /* General Utilities */
#include <pthread.h>    /* POSIX Threads */
#include <string.h>     /* String handling */
#include <semaphore.h>  /* Semaphore */


#define ITERAT 1000000
//define max cores
#define MAX_CORE 2
 static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
 
 int counter = 0;
 int TOTAL = 0;

 void *output(void *arg);
 //declare semaphores as globa vars
  sem_t mySemaphore;

  //declare mutex as global var
  pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

  int main(int argc, char *argv[])
  {
    //declare thread id
    pthread_t tid1, tid2;



    //acquire lock
    pthread_mutex_lock(&mutex);
    //check if the number of cores is less than max cores
    //if yes then create threads
    //wait for thread 1 to finish
    if(pthread_create(&tid1, NULL, output, NULL))
    {
      printf("\n ERROR creating thread 1");
      exit(1);
    }
   //wait for thread 2 to finish
    if(pthread_create(&tid2, NULL, output, NULL))
    {
      printf("\n ERROR creating thread 2");
      exit(1);
    }
    //release lock
    pthread_mutex_unlock(&mutex);
    //wait for thread 1 to finish
    if(pthread_join(tid1, NULL))	/* wait for the thread 1 to finish */
    {
      printf("\n ERROR joining thread");
      exit(1);
    }
    //wait for thread 2 to finish
    if(pthread_join(tid2, NULL))        /* wait for the thread 2 to finish */
    {
      printf("\n ERROR joining thread");
      exit(1);
    }
    //check if the total is equal to the number of cores
    if (TOTAL != 2 * ITERAT) 
      printf("\n BOOM! TOTAL is [%d], should be %d\n\n", TOTAL, 2*ITERAT);
    else
      printf("\n OK! TOTAL is [%d]\n\n", TOTAL);
    //exit
    exit(0);
    return 0;
  }
  void *output(void *arg)
  {
    int n = *(int*)arg;
    //acquire lock
    pthread_mutex_lock(&mutex);
    //check if the number of cores is less than max cores
    //if yes then create threads
    //wait for thread 1 to finish
    if(pthread_create(&tid1, NULL, output, NULL))
    {
      printf("\n ERROR creating thread 1");
      exit(1);
    }
    //wait for thread 2 to finish
    if(pthread_create(&tid2, NULL, output, NULL))
    {
      printf("\n ERROR creating thread 2");
      exit(1);
    }
    //release lock
    pthread_mutex_unlock(&mutex);
    //wait for thread 1 to finish
    if(pthread_join(tid1, NULL))	/* wait for the thread 1 to finish */
    {
      printf("\n ERROR joining thread");
      exit(1);
    }
    //wait for thread 2 to finish
    if(pthread_join(tid2, NULL))        /* wait for the thread 2 to finish */
    {
      printf("\n ERROR joining thread");
      exit(1);
    }
    //check if the total is equal to the number of cores
    if (TOTAL != 2 * ITERAT) 
      printf("\n BOOM! TOTAL is [%d], should be %d\n\n", TOTAL, 2*ITERAT);
    else
      printf("\n OK! TOTAL is [%d]\n\n", TOTAL);
    //exit
    pthread_exit(NULL);
  }


    


      
      