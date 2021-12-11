#include <stdio.h>

int main() {
    char filename[20];
    int p;
    FILE *files[p];

    
    for (int i = 1; i <= p; i++){
        filename[20];
        sprintf(filename, "prgph%d.txt", i);
        files[i] = fopen(filename, "w");
    }

    for (int i = 1; i <= p; i++){
        fclose(files[i]);
    }
    return 0;
  }

  