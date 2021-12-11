#include <stdio.h>
#include <stdlib.h>

int main(){

    char ch;
    int w=1, l=1, c=1;

    FILE* fp;
    fp=fopen("temp.txt", "r");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
        c++;

        if(ch=='\n'||ch=='\0'){
            l++;
        }
        if (ch==' '||ch=='\t'||ch=='\n'||ch=='\0'){
            w++;
        }
    }
    printf("\n\nChars: %d\nWords: %d\nLines: %d\n\n", c, w, l);

    fclose(fp);
    //remove("f4.txt");
    return 0;
}