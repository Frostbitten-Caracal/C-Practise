//Array Rotation Left.

#include <stdio.h>

void main(){
    int i, temp, j, n, last, k, arr[n];

    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Array I/P: ");
        scanf("%d", &arr[i]);
    }

    last=n-1;

    printf("Enter a no < %d: ", n);
    scanf("%d", &k);
    
    for (i=0; i<k; i++){
        temp=arr[0];
        for(j=0; j<=last; j++){
            arr[j]=arr[j+1];
        }
        arr[last]=temp;
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
}