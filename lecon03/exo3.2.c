#include <stdio.h>

int main(void){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("The number %d is the largest\n", a);
    }else if (b>a && b>c){
        printf("The number %d is the largest\n", b);
    }
    else if (c>a && c>b){
        printf("The number %d is the largest\n", c);
    }else{
        printf("It's the same number\n");
    }
    return 0;
}