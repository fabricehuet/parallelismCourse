#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

int main(int argc, char* argv[]) {
  //There is always one argument that is the name of the program
  printf("You have started %s\n", argv[0]);
  //We check if there are more arguments
  if (argc>2) {
    printf("With parameters\n");
    int i =1;
    while (i<argc) {
      printf("\t %s\n",argv[i]);
      i++;
    }
  }
}
