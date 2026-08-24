//Insertion Sort

#include <stdio.h>

void swap(int *a1, int *a2){
    int temp=*a1;
    *a1=*a2;
    *a2=temp;
}

void Array_Printer(int a[], int len){
    int i;
    for(i=0;i<len;i++){
        printf("%d ", a[i]);
    }
} 

void Input_in_Array(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("Enter val: ");
        scanf("%d", &arr[i]);
    }
}

int main(){
    int  n, i, j, key; //n=7, arr[7]={4,1,5,2,6,3,7};
    scanf("%d", &n);
    int arr[n];
    Input_in_Array(arr, n);
    for(i=1; i<n; i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            swap(&arr[j+1], &arr[j]);
            j--;
        }
        swap(&arr[j+1], &key);
    }
    Array_Printer(arr, n);

    return 0;
}