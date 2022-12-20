#include <stdio.h>
#include <stdlib.h>

int max(int n, int x){return n>x ? n : x;}
int min(int n, int x){return n<x ? n : x;}

void Digits(int n)
{
    int largest = 0;
    int smallest = 9;
    while (n) {
        int r = n % 10;
        largest = max(r, largest);
        smallest = min(r, smallest);
        n = n / 10;
    }
    printf("%d", largest);
}

int main(){
    int num;
    scanf("%d", &num);
    Digits(num);
}