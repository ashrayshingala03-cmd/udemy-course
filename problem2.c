#include<stdio.h>

int main(){
    int n, temp, sum = 0, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;   // original value store

    while(n){
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }

    if(sum == temp)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
