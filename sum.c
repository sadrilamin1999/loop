#include<stdio.h>

int main()
{
  int i,sum=0;
  for (i=30; i<=120; i++){
    if(i%3==0 && i%5==0){
      sum+=i;
    }
  }
  printf("The sum is= %d\n", sum);
  return 0;
}
