#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char str1[256], str2[256];
    int i;

    FILE *fp1, *temp;
    temp=fopen("temp.txt", "r");
    fp1=fopen("f4.txt", "w");

    while(fgets(str1, 150, temp)){
        // str2=(char*)malloc(sizeof(char)*(strlen(str1))+1);
        for (i = 0; i < strlen(str1); i++){
            if (isupper(str1[i])){
                str2[i] = tolower(str1[i]);
            }else{
                str2[i] = toupper(str1[i]);
            }
        }
        fputs(str2, fp1);
        memset(str2, 0, sizeof(str2));
        // free(str2);
    }

    fclose(fp1);
    fclose(temp);
    return 0;
  }

  