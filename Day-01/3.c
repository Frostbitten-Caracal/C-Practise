//Dynamic Array.

#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i=0; i<n; i++){
        printf("Enter a no: ");
        scanf("%d", &arr[i]);
    }
    i=0;
    while(i<n){
        printf("%d ",arr[i]);
        i++;
    }
}