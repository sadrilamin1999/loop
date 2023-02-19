#include<stdio.h>
int main()
{
  int i, j;
  for(i=1; i<=2; i++){
    printf("Outer loop\n");
      for(j=1; j<=2; j++){
          printf("Inner loop\n");
    }

  }
  return 0;
}
