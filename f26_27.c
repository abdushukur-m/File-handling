#include <stdio.h>

int main() {
    char str1[256];
    int count=6, tabs=0, rem=3;
    
    FILE *fp1, *fp2;
    fp1=fopen("temp.txt", "r");
    fp2=fopen("f4.txt", "w");
    
    while (fgets(str1, 100, fp1)){
        count=0;
        for (int i = 0; i < 6; i++){
            if (str1[i]==' '){
                count++;
            }
        }
        if(count==5){
            tabs++;
        }
        if(rem!=tabs){
            fputs(str1, fp2);
        }
    }
    printf("%d\n", tabs);
    fclose(fp2);
    fclose(fp1);
    return 0;
  }

  