#include <stdio.h>
#include <string.h>
#include <ctype.h>

int doesM(char* str){
  int n = strlen(str);
  for(int i = 0; i < n; i++){
    printf("%c\n", str[i]);
    if(isalnum(str[i])){
      return 1;
      break;
    }
  }
  return 0;
}

int main (int argc, char *argv[]) {

  char rec[99] = "Mama idem u market";
  char newRec[90][90];

  int ctr = 0, j = 0, res = 0, type = 0; 

  for(int i = 0; i < strlen(rec); i++){
      if(isspace(rec[i])){
        newRec[ctr][j] = rec[i];
        ctr++;
        j=0;
      }else{
        newRec[ctr][j] = rec[i];
        j++;
      }
  }
  for(int i = 0; i < ctr; i++){
    res += doesM(newRec[i]);
  }

  printf("%d", res);

  return 0;
}