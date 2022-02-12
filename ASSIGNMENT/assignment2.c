#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the number\n");
    scanf("%d", &num1);
    printf("Enter the number\n");
    scanf("%d", &num2);
    if(num1>num2){
        printf("%d is greater than %d",num1, num2);
    }
    else if(num1==num2){
        printf("Both numbers are equal");
    }
    else{
        printf("%d is greater than %d",num2, num1);
    }
return 0;
}