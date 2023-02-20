//Napisati funkciju za racunanje l. jed. sa jednom nepoznartom
// x=b/a

#include <stdio.h>

int equ(int b, int a) {
    if (a != 0) {
        return b / a;
    }else if (a == 0 && b == 0)
    {
        printf("Undefined!");
        return 0;
    }else {
       printf("Undefined!");
       return 0;
    }
    
}

int main (int argc, char *argv[]) {
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%d",equ(num2, num1));
    return 0;
}