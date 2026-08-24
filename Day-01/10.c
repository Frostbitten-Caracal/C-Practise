//Binary Search.

#include <stdio.h>


int BS(int arr[], int low, int high, int x){
    if(low>high) return -1;
    
    int mid=low+(high-low)/2;

    if(x==arr[mid]) return mid;
    
    if(x>arr[mid]) return BS(arr, mid+1, high, x);

    return BS(arr, low, mid-1, x);
}


void main(){
    int n, i, x, result; //arr[10]={15,16,24,34,39,48,51,77,88,98}
    //n=sizeof(arr)/sizeof(int);
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++){
        printf("Enter I/P in ascending order: ");
        scanf("%d", &arr[i]);
    }
    printf("No to find: ");
    scanf("%d", &x);
    result=BS(arr, 0, n-1, x);
    result!=-1 ? printf("%d", result) : printf("-1");
}