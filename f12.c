#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int l=0;
    char str[256];
    char s[]="\t\tHow much money you got?\n";
    
    FILE* fp, *temp;
    fp=fopen("f4.txt", "r");
    temp=fopen("temp.txt", "w+");

    while(fgets(str, 256, fp)){
        if (str[0]=='\n'){
            fputs(s, temp);
            //fprintf(temp, "\n");
        }else{
            fprintf(temp, "%s", str);
        }
    }
    rewind(temp);
    
    while(fgets(str, 256, temp)){
        printf("%s", str);
    }
   
    fclose(fp);
    fclose(temp);
    //remove("f4.txt");
    //remove("temp.txt");
    return 0;
}