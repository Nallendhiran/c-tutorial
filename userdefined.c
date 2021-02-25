#include<stdio.h>

void display();
int addition();
int main(){
    int finalresult=addition(1,5);
    printf("%d \n",finalresult);
    return 0;
}
void display(){
    printf("I am displaying \n");
}

//return the value

int addition(int i,int j){
    int k=i+j;
    return k;
}
