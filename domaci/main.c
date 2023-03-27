#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
//Ako je prvo slovo te rece malo ili veliko slovo S ispisati rec sa razmacima medju slovima 

int numL(char *__str){
    int c = 0;
    for(int i = 0; i < sizeof(__str); i++){
        if(isupper(__str[i])){
            c++; 
        }
    }
    return c;
}

int main (int argc, char *argv[]) {
    char str[90];
    puts()
    printf("%s",str);
    return 0;
}