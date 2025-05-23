#include<stdio.h>
int main(){
    int a = 0, b = 0;
    printf("enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("the sum of two numbers: %d \n",(a+b));
    printf("the address of a: %p",&a);
    printf("the value of a: %d", *(&a));
    return 0;
}