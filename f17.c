#include <stdio.h>
#include <string.h>

int main() {
    char str1[256], str2[256];
    int ch=1, sh=1; 

    FILE *fp1, *fp2, *temp, *temp1;
    fp1=fopen("f4.txt", "r");
    fp2=fopen("fp1.txt", "r");
    temp=fopen("temp.txt", "w");
    
    while (1){
        if(feof(fp1)&&feof(fp2)){
            break;
        }
        if(!feof(fp1)){
            fgets(str1, 100, fp1);
            fputs(str1, temp);
        }
        if (feof(fp1) && sh==1){
            sh++;
            fputs("\n", temp);
        }
        if(!feof(fp2)){
            
            fgets(str2, 100, fp2);
            fputs(str2, temp);
        }
        if (feof(fp2) && ch==1){
            ch++;
            fputs("\n", temp);
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(temp);
    return 0;
  }

  