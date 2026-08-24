//Bubble Sort.

#include <stdio.h>

void Bubble_Sort(int a[], int len){
    int temp, i, cnt=0;
    if(len==1) return;
    for(i=0; i<len-1; i++){
        if (a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            cnt++;  //cnt helps us know if we actually swapped or not. if not even 1 swap occured=> we're good to go
        }
        //printf("%d\n", cnt);
    }
    if(cnt==0) return;
    Bubble_Sort(a, len-1);
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
    int n; //i, j, temp, arr[6]={4,5,2,6,1,7}, n=6;
    scanf("%d",&n);
    int arr[n];
    Input_in_Array(arr, n);
    Bubble_Sort(arr, n);
    Array_Printer(arr, n);

    /*for (i=0; i<n-1;i++){
        for(j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d", arr[i]);
    }*/
   return 0;
}