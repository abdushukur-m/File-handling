#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// void getstring(char str[], int n);
void getstring(char str[], int n, char t[]);

int main(){
    char str[2000]="Deliver a better voice experience for customer service with voicebots on Dialogflow that dynamically generate speech, instead of playing static, pre-recorded audio. Engage with high-quality synthesized voices that give callers a sense of familiarity and personalization.";
    int size=35;
    char t[size]; //str[100]="How are you?";
    for (int i=0; i<100; i++){
        
    }
    fgets(str, 1000, stdin);
    getstring(str, size, t);
    printf("*******");
    
    return 0;
}

void getstring(char str[], int size, char t[]){

    char temp[500]="", temp2[500]="", ch;
    int i, j=0, k, count=0, index=0;

    for (i=0; i<strlen(str); i++){
        temp[j]=str[i];
        j++;
        if (j==size-1)
        {
            temp[size-1]='\n';
            temp[size]='\0';
            j=0;

            for (k=size-2; k>=0; k--){
                if (temp[k]==' '){
                    count++;
                }else {
                    //printf("%d", k);
                    index=k;
                    break;    
                }
            }

            if (count!=0){
                for (k=0; k<count; k++){
                    temp2[k]=' ';
                }
                //printf("%d\n", k);
                for (k; k<size; k++){
                    temp2[k]=temp[j];
                    j++;
                    if (j==size-1){
                        temp2[size-1]='\n';
                        temp2[size]='\0';
                        j=0;
                    }
                }
                //printf("%s", temp2);
                strcpy(temp, temp2);
            }
            strcpy(t, temp);
            printf("|%s",t);
            // printf("|%s",temp);
            // printf("%d - %d - %d|%s",strlen(temp), count, index, temp);
            count=0;
            index=0;
            
            memset(temp2, 0, sizeof(temp2));
            memset(temp, 0, sizeof(temp));
        }else if (i==strlen(str)-1){   
            for (j; j<size; j++){
                temp[j]=' ';
            }
            temp[size-1]='\n';
            temp[size]='\0';
            j=0;
            for (k=size-2; k>=0; k--){
                if (temp[k]==' '){
                    count++;
                }else {
                    //printf("%d", k);
                    index=k;
                    break;    
                }
            }

            if (count!=0){
                for (k=0; k<=count; k++){
                    temp2[k]=' ';
                }
                //printf("%d\n", k);
                for (k; k<size; k++){
                    temp2[k]=temp[j];
                    j++;
                    // if (k==size-1){
                    //     temp2[size-1]='\n';
                    //     temp2[size]='\0';
                    //     j=0;
                    // }
                    if (k==size){
                        //temp2[size-1]='\n';
                        temp2[size]='\0';
                        j=0;
                    }
                }
                //printf("%s", temp2);
                strcpy(temp, temp2);
            }
            strcpy(t, temp);
            printf("|%s",t);
            // printf("|%s",temp);
            // printf("%d - %d - %d|%s",strlen(temp), count, index, temp);
            count=0;
            memset(temp, 0, sizeof(temp));
            memset(temp2, 0, sizeof(temp2));
        }
        
    }
}
