//Pointer Arithmetic pt2

#include <stdio.h>

int update(int **pp, int *arr){
    *pp=&arr[2];
    **pp=20;
    return **pp + arr[0];
}
int main(){
    int array[5]={10,15,25,30}, *ptr;
    ptr=&array[1];
    int result=update(&ptr, array);
    printf("%d %d %d", result, *ptr, array[2]);
}   