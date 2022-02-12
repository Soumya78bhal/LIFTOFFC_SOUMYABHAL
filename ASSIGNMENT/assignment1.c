#include<stdio.h>
int main(){
    char name[30], branch[30],hobby[30];
    int reg;
    printf("Enter your name\n");
    gets(name);
    printf("Enter your branch\n");
    gets(branch);
    printf("Enter your Regd.No\n");
    scanf("%d", &reg);
    fflush(stdin);
    printf("Enter your hobby\n");
    gets(hobby);
    
    printf("Name: %s\n",name);
    printf("Branch: %s\n",branch);
    printf("Regd.No: %d\n",reg);
    printf("Hobby: %s\n",hobby);


return 0;
}