#include<stdio.h>

int fact(int i){
    if(i!=1){
       return  i*fact(i-1);
    }
    return 1;
}
int main(){
//    int i;
//    int f=1;
//    for(i=1;i<=5;i++){
//        f=f*i;
//    }
//    printf("%d \n",f);
printf("%d \n",fact(5));
return 0;
}
