#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[256], *str2;
    int i, j, k;
    printf("K = ");
    scanf("%d", &k);

    FILE *fp1, *temp;
    temp=fopen("temp.txt", "r");
    fp1=fopen("f4.txt", "w");

    while(fgets(str1, 150, temp)){
        if (strlen(str1)>k){
            j=0;
            str2=(char*)malloc(sizeof(char)*(strlen(str1))+1);
            for (i = k; i <strlen(str1); i++)
            {
                str2[j]=str1[i];
                j++;
            }
            fputs(str2, fp1);
            //memset(str2,0,sizeof(str2));
            free(str2);
        }
    }

    fclose(fp1);
    fclose(temp);
    return 0;
  }

  