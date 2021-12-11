#include <stdio.h>
#include <stdlib.h>

int main(){

    int k=1;
    int c='a';
    FILE* fp;
    fp=fopen("f2.txt", "w+");

    for (int i=0; i<26; i++){
        for (int j=0; j<k; j++){
            fputc(c, fp);
            ++c;       
        }
        c='a';
        k++;
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
    //remove("f2.txt");
    return 0;
}