//Array Reversal.

#include <stdio.h>

void main(){
    int n, temp, i;
    scanf("%d", &n);
    int arr[n];
    
    for(i=0; i<n; i++){
        printf("Enter a no: ");
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nArray Reversal\n");

    int last=n-1;

    for (i=0; i<last; i++){
        temp=arr[i];
        arr[i]=arr[last];
        arr[last]=temp;

        last--;
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}