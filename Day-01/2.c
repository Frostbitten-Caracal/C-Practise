//Simple Array prgm printing till ith element.

#include <stdio.h>

void main(){
    int arr[10]={1,3,2,4,5,2,6,3,7,99};
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    if(n>10){
        n=10;
    }

    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
        
}