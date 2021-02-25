#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file;
    file=fopen("text.txt","w+");
    char line[100];
    fseek(file,24,SEEK_SET);
    fputs(" ,new class defined",file);
//    while(!feof(file)){
//        fgets(line,100,file);
//        puts(line);
//
//    }

    fclose(file);

return 0;
}
