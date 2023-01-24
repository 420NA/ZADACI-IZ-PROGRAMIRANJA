#include <stdio.h>

void ispisi(char n){
    printf("%x\t", n);
}

int main (int argc, char *argv[]) {
    char arr[6];
    for(int i = 0; i < 6; i++){
        scanf("%c", &arr[i]);
        ispisi(arr[i]);
    }
    
    return 0;
}