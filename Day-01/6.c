//Frequency count.

#include <stdio.h>

void main(){
    int i;
    int n;
    scanf("%d", &n);
    int arr[n];
    for (i=0; i<n; i++){
        printf("Enter a no<1024: ");
        scanf("%d", &arr[i]);
    }
    i=0;
    int freq[1024]={0}; //0-1023

    for(i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(i=0; i<1024; i++){
        if(freq[i]){
            printf("nf %d=%d.\n", i, freq[i]);
        }
        
    }
}