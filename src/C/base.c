#include <stdio.h>
#include <stdlib.h>


int isAPrime(int i) {
   int divider = 2;
   while(divider <i) {
     if (i%divider ==0) {
       return 0;
     }
     divider++;
   }
   return 1;
}

void simpleLoop() {
   for(int i=0;i<1000;i++) {
     if (i==500) {
       printf("I'm halfway there !\n");
     }
   }
    printf("I'm done !\n");
}

void cpuIntensiveLoop() {
  for(int i=0;i<100;i++) {
      isAPrime(i);
  }
}

//This is the main function of your program
//it will be called automatically when you start
int main(int argc, char* argv[]) {
   printf("Hello world \n");

   int a = 10;
   printf("The value of a is %d \n", a);

   simpleLoop();

  //testing number to see if they are isAPrime
  //in C booleans can be implemeted with int (0 is false, any other value is true)
  for (int i=3;i<20;i++) {
    int result = isAPrime(i);
    if (result) {
      printf("%d is a prime \n" , i);
    } else {
      printf("%d is not a prime \n", i);
    }
  }

  cpuIntensiveLoop();

}
