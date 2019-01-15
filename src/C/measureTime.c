#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

int main(int argc, char* argv[]) {

  struct timeval start, end;


  //we take the current time and store it in start
  gettimeofday(&start, NULL);

  //an empty loop, hopefully not removed by the compiler during optimization
  for(int i=0;i<1000000;i++) {

  }

  //we  store the current time in end
  gettimeofday(&end, NULL);


  //timeval is a struct with 2 parts for time, one in seconds and the other in
  //microseconds. So we convert everything to microseconds before computing
  //the elapsed time
  printf("%ld\n", ((end.tv_sec * 1000000 + end.tv_usec)
		  - (start.tv_sec * 1000000 + start.tv_usec)));
}
