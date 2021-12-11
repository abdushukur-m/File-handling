#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char str1[256], str2[256];
    char ch;
    int j=0, k=1, K;
    scanf("%d", &K);

    FILE *fp1, *temp;
    fp1=fopen("f4.txt", "r");
    temp=fopen("temp.txt", "w");

    while(fgets(str1, 150, fp1)){
        j++;
    }
    printf("%d", j);
    rewind(fp1);
    while(fgets(str1, 150, fp1)&&k<j-K){ 
        fputs(str1, temp);
        memset(str1, 0, sizeof(str1));  
        k++;
    }

    fclose(fp1);
    fclose(temp);
    return 0;
  }

  