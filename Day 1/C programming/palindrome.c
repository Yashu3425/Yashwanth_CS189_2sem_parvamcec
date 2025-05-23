#include<stdio.h>
#include<string.h>
int main(){
    char str[20], rev[20];
    printf("enter any world:");
    scanf("%s", str);
    printf("original string: %s\n", str);
    strcpy(rev, str);
    strrev(str);
    printf("reversed string: %s\n", str);
    if(strcmp(str,rev) == 0){
        printf("the given word is a palindrome");
    }
    else{
        printf("the given word is not a palindrome");
    }
}