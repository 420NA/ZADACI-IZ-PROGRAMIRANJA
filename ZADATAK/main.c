#include <stdio.h>

void check(){
    for(int i=1000; i < 10000; i++){
        int arr[4] = {(i/1000),((i%1000)/100),(((i%1000)%100)/10),((((i%1000)%100)%10))};
        for(int j = 0; j < 4; j++){
            if(arr[j]==0 || arr[j]==1){
                printf("%d\n", i);
            }
        }
    }
    
}

int main (int argc, char *argv[]) {
    check();
    return 0;
}