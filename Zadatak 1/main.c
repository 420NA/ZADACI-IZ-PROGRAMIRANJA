#include <stdio.h>
#include <math.h>

float koren(float a, float b){
    return sqrt((a*a)+(b*b));
}

int main(){
    float a,b;
    scanf("%f%f", &a,&b);
    printf("%f", koren(a,b));
}