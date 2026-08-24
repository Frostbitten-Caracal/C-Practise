// Linear Search in Array using functions.

#include <stdio.h>
int LS(int arr[], int n, int x){
    int i;
    for (i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
        return -1;
}

void main(){
    int i, x=0, n, flag, arr[n]; //arr[10]={5,6,4,2,3,7,1,8,9,0};
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter I/P: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter an int(No Dupes): ");
    scanf("%d", &x);
    //n=sizeof(arr)/sizeof(int);
    flag=LS(arr, n, x);
    if(flag!=-1) printf("%d", flag);
    else printf("%d", flag);
}