#include<stdio.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    switch(num%2){
        case 0:
        printf("The number is even");
        break;
        case 1:
        printf("The number is odd");
        break;
    }
return 0;
}