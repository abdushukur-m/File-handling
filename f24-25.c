#include <stdio.h>

int main() {
    char str1[256];
    int p=0, count=6;
    
    FILE *fp1, *fp2;
    fp1=fopen("temp.txt", "r");
    fp2=fopen("f4.txt", "w");
    
    while (fgets(str1, 100, fp1)){
        if(str1[0] == ' ' && str1[1] == ' ' && str1[2] == ' ' && str1[3] == ' '){
            p++;
        }
        if(p!=count){
            fputs(str1, fp2);
        }
    }
    
    fclose(fp1);
    fclose(fp2);
    return 0;
  }

  