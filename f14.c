#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int l=1;
    char str[256];
    
    FILE* fp, *temp;
    fp=fopen("f4.txt", "r");
    temp=fopen("temp.txt", "w+");

    while(fgets(str, 256, fp)){
        if (l!=15){
             fputs(str, temp);
        }
        ++l;
    }
    rewind(temp);
    
    while(fgets(str, 256, temp)){
        printf("%s", str);
    }
    printf("\n%d", l);
   
    fclose(fp);
    fclose(temp);
    //remove("f4.txt");
    //remove("temp.txt");
    return 0;
}