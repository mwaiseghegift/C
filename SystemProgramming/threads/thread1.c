#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* func(void *p){
    printf("Thread id: %d\n", pthread_self());
    pthread_exit(NULL);
    return NULL;
}

main(){
    pthread_t thread; //dclaring thread
    pthread_create(&thread, NULL, func, NULL);
    printf("from the main thread func, thread id = %d\n", thread);
    pthread_join(thread, NULL); //join main thread
}