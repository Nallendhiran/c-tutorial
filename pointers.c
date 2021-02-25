#include<stdio.h>

int main(){
    int k=5;    //value of k;
    int *p;
    p=&k;   //shows the value in address
//    &k;       //shows the address
    printf("%d \n",&k);
    printf("%d \n",*p);
    printf("%d \n",p);


    char c='w';
    char *v;
    v=&c;
    printf("%d \n",&c);
    printf("%d \n",v);
    printf("%c \n",*v);

    return 0;
}
