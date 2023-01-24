#include <stdio.h>

void printNum(int arr[], int n){
    for (int j = n-1; j >= 0; j--)
     printf("%d", arr[j]);
}

void toBin(int num) {   
    if (num == 0) {
        printf("0");
        return;
    }
   
   int binaryNum[32];
   int i=0;

   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   
    printNum(binaryNum, i);
}

int main() {
   int a;
   scanf("%d",&a);
   toBin(a);
   return 0;
}