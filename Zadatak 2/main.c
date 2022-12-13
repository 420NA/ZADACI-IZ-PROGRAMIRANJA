#include <stdio.h>

float arsCifr(int a){
    return ((int)(a/100)+(int)((a%100)/10)+(int)((a%100)%10))/3.00;
}

int main(){
    int br;
    scanf("%d",&br);
    printf("%f\n", arsCifr(br));
}