#include <stdio.h>

void rev(int arr[], int n){
    for(int i = n-1; i > -1; i--){
        printf("%d\n", arr[i]);
    }
}

int main (int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }
    rev(arr,n);
    return 0;
}
