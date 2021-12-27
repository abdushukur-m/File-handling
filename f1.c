//f1
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n=7, k=4;
    int c;
    char ch='?';
    c=(int)ch;
    FILE* fp;
    fp=fopen("f1.txt", "w+");

    for (int i=0; i<n; i++){
        for (int j=0; j<k; j++){
            fputc(c, fp);
        }
        fprintf(fp, "\n");
    }

    rewind(fp);

    while (1){
        c=fgetc(fp);
        if(feof(fp)){
            break;
        }
        printf("%c", c);
    }

    fclose(fp);
    remove("f1.txt");

    return 0;
}