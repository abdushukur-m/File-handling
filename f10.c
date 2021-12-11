#include <stdio.h>
#include <stdlib.h>

int main(){

    char ch;
    int l=1, k;
    
    printf("Enter K: ");
    scanf("%d", &k);

    FILE* fp;
    fp=fopen("f4.txt", "r");
    
    printf("\n");
    do{
        printf("%c", ch);
        if (ch == '\n' || ch == '\0')
        {   
            if (l==k){
                printf("\n");
            }
            l++;
        }
    }while ((ch = fgetc(fp)) != EOF);
    
    printf("\n\n");

    fclose(fp);
    //remove("f4.txt");
    return 0;
}