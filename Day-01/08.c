//2nd Largest Element.

#include <stdio.h>

void main(){
    int n, arr[n], i, max=0, max2=0; //arr[5]={15,15,15,15,15}
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter I/P: ");
        scanf("%d", &arr[i]);
    }
    //n=sizeof(arr)/sizeof(int);
    for(i=0; i<n; i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max) max2=arr[i];
    }
    printf("2nd Largest: %d", max2);
    //printf("Largest & 2nd Largest= %d %d", max, max2);
}