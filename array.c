#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand( time(NULL) );

  //Step 1
  int ray[10];
  int *rp = ray;
  int i = 1;

  //Step 2
  while ( i < 10 ){
    ray[i] = rand();
    i++;
  }

  //Step 3
  ray[0] = 0;
  int k = 0;

  //Step 4
  while ( k < 10 ){
    printf("this the value of ray[%d]: %d\n", k, ray[k]);
    k++;
  }

  printf("\nNow dealing with ray2\n");
  
  //Step 5
  int ray2[10];
  int j = 0;

  //Step 6
  while (j < 10){
    ray2[j] = ray[9-j];
    j++;
  }

  //Step 7
  int m = 0;
  while ( m < 10 ){
    printf("this the value of ray2[%d]: %d\n", m, ray2[m]);
    m++;
  }
  
  return 0;
}
