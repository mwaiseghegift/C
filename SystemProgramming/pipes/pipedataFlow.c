#include<stdio.h>
#include<unistd.h>

int main() {
   int pipefds[2];
   char writemessages[2][20]={"Hello"};
   char readmessage[20];
   
   if (pipe(pipefds) == -1) {
      printf("Unable to create pipe\n");
      return 1;
   }
   
   printf("Writing to pipe - Message 1 is %s\n", writemessages[0]);
   write(pipefds[1], writemessages[0], sizeof(writemessages[0]));
   read(pipefds[0], readmessage, sizeof(readmessage));
   printf("Reading from pipe – Message 1 is %s\n", readmessage);
   return 0;
}