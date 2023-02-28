#include <stdio.h>

int main (int argc, char *argv[]) {
    FILE *n;
    char a[60];
    n = fopen("file.txt","r");
    if( fgets (a, sizeof(a)/sizeof(char), stdin)!=NULL ) {
      puts(a);
   }
   fclose(n);
    return 0;
}