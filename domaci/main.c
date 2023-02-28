#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char* str = "Hiiiii! \n\n CAO";
    char* newstr = malloc(strlen(str) + 2);
    strcpy(newstr, str);
    strcat(newstr, "\n");
    printf("%s", newstr);
    return 0;
}