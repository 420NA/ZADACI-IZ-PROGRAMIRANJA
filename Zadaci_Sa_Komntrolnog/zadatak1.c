#include <stdio.h>

void allPosible(int arr[]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                printf("[%d%d%d]\n", arr[i], arr[k], arr[j]);
            }
        }
    }
}

int main (int argc, char *argv[]) {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    int arr[3] = {a,b,c};
    allPosible(arr);
    return 0;
}