#include <stdio.h>
#include <math.h>

float hip(float a, float b){
    return sqrt((a*a)+(b*b));
}

int main(){
    float a,b;
    scanf("%f%f", &a,&b);
    printf("%f", hip(a,b));
}