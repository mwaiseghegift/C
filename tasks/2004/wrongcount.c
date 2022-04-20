#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>

#define ITERAT 1000000

int TOTAL = 0;

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
    pthread_t tid1, tid2;

    if(pthread_create(&tid1, NULL, Count, NULL))
    {
      printf("\n ERROR creating thread 1");
      exit(1);
    }

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

    if(pthread_join(tid2, NULL))        /* wait for the thread 2 to finish */
    {
      printf("\n ERROR joining thread");
      exit(1);
    }

    if (TOTAL != 2 * ITERAT) 
        printf("\n BOOM! TOTAL is [%d], should be %d\n\n", TOTAL, 2*ITERAT);
    else
        printf("\n OK! TOTAL is [%d]\n\n", TOTAL);
  
    pthread_exit(NULL);
}


