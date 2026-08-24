//Pointer Arithmetic

#include <stdio.h>

int main(){
    int i, sum=0, arr[5]={1,2,3,4,5};
    int *ptr=&arr[0];
    //printf("%d, %u, %d, %u, %d, %u", arr[0], &arr[0], ptr, &ptr, *ptr, &*ptr);
    for(i=0; i<5; i++){
        sum= sum + *ptr;
        printf("%d ", *ptr++);
    }
    printf("\n%d", sum);

    return 0;
}