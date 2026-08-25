// Pointer Arithmetic pt4: Array Manipulation

#include <stdio.h>

int main(){
    int i, arr[5]={11,12,13,14,15};
    int *p=arr;
    for (i=0; i<5; i++){
        printf("%d ", *(p+i));
        *(p+i)*=2;
    }
    printf("\n");
    for(i=0; i<5; i++){
        printf("%d ", *(p+i));
    }
    return 0;
}