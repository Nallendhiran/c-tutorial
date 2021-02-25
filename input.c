#include<stdio.h>

int main(){
    int i,j,k;
    char name[30];
    printf("Enter your name:\n");
    scanf("%s",&name);
    printf("welcome %s",name);
    printf("\nEnter any two numbers:\n");
    scanf("%d",&i);
    scanf("%d",&j);
    k=i+j;
    printf("the value of k is %d",k);
    return 0;
}
