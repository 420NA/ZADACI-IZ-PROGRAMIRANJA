#include <stdio.h>

int main(){

    int ctr = 0;
    
    char rec[100] = "aaad asd sad a asdsadsad sad";

    for(int i = 0; i < strlen(rec); i++){
        if(isspace(rec[i])){
            break
        }else{
            if(rec[i] == 'a' || rec[i] == 'A'){
                ctr++;
            }
        }
    }

    printf("%d",ctr);

}