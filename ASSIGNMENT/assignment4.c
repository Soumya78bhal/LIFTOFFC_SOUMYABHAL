
#include<stdio.h>
int main(){
    float num1, num2;
    char alpha[1];
    printf("Enter the first number\n");
    scanf("%f", &num1);
    printf("Enter the second number\n");
    scanf("%f", &num2);
    fflush(stdin);
    printf("Enter the operator\n");
    scanf("%c", &alpha[1]);
    switch(alpha[1]){
        case '*':
        printf("The multiplication of %f and %f is %f", num1,num2,num1*num2);
        break;
        case '+':
        printf("The sum of %f and %f is %f", num1, num2, num1+num2);
        break;
        case '-':
        printf("The subtraction of %f and %f is %f", num1, num2, num1-num2);
        break;
        case '/':
        printf("The division of %f and %f is %f", num1, num2, num1/num2);
        break;
        default:
        printf("Invalid operation");
    }

return 0;
}