#include <stdio.h>
#include <stdlib.h>

int main(){

    int n=26, m=n, k=1;
    int c='A', d='*';

    FILE* fp;
    fp=fopen("f3.txt", "w+");

    for (int i=0; i<n; i++){
        for (int j=m; j>0; j--){
            fputc(d, fp);
        }
        m--;
        fprintf(fp, "\n");
        for (int j=0; j<k; j++){
            fputc(c, fp);
            ++c;       
        }
        c='A';
        k++;
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
    //remove("f3.txt");
    return 0;
}