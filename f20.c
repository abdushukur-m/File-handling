#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char str1[256], str2[256];
    int j;

    FILE *fp1, *temp;
    temp=fopen("temp.txt", "r");
    fp1=fopen("f4.txt", "w");

    while(fgets(str1, 150, temp)){
        j=0;
        for (int i = 0; i < strlen(str1)-1; i++){
            if (str1[i]==' ' && str1[i+1]==' '){
                continue;
            }
            str2[j]=str1[i];
            j++;
        }
        
        fputs(str2, fp1);
        memset(str2, 0, sizeof(str2));   
        fputs("\n", fp1);
    }

    fclose(fp1);
    fclose(temp);
    return 0;
  }

  