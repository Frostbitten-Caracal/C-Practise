//Array Rotation Left.

#include <stdio.h>

int main(){
    int i, temp, j, n=0, last, k;

    while (n<=0){
        printf("Enter Array Len: ");
        scanf("%d",&n);
    }
    
    int arr[n];
    for(i=0; i<n; i++){
        printf("Array I/P: ");
        scanf("%d", &arr[i]);
    }

    last=n-1;

    printf("Enter a no < %d: ", n);
    scanf("%d", &k);
    
   k = ((k % n) + n) % n;  //-ve k doesn't run the loop
    for (i=0; i<k; i++){
        temp=arr[0];
        for(j=0; j<last; j++){
            arr[j]=arr[j+1];
        }
        arr[last]=temp;
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}