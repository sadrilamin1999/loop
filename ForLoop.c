#include<stdio.h>
int main()
/*{
  int i;
  for(i=1; i<=15; i++)
    printf("Hello %d\n",i);
  getch();
}*/
{
  int i, sum;
  sum=0;
  for(i=1; i<=5; i++){
        sum+=i;
  }
  printf("The sum is= %d\n", sum);
  getch();
}
