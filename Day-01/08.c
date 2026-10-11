//2nd Largest Element.

#include <stdio.h>
#include <limits.h>

int main(){
    int n, i, act_max,max2; //arr[5]={15,15,15,15,15}
    printf("Enter Array Len: ");
    act_max=max2=INT_MIN;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter I/P: ");
        scanf("%d", &arr[i]);
    }
    //n=sizeof(arr)/sizeof(int);
    for(i=0; i<n; i++){
        if(arr[i]>act_max){
            max2=act_max;
            act_max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=act_max) max2=arr[i];
    }
    printf("2nd Largest: %d", max2);
    //printf("Largest & 2nd Largest= %d %d", max, max2);
    return 0;
}