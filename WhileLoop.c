#include<stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    do {
        sum += i;
        i++;

    } while (i <= 10);
    printf("The sum is= %d\n", sum);


    return 0;
}
