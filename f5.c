#include <stdio.h>
#include <stdlib.h>

int main(){

    char ch, str[120];
    int w=1, l=1, c=1;

    fgets(str, 100, stdin);

    FILE* fp;
    fp=fopen("f4.txt", "a");

    

    fputs(str, fp);    
    

    fclose(fp);
    //remove("f4.txt");
    return 0;
}