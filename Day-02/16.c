//Pointer Arithmetic pt3: ptr to ptr

#include <stdio.h>

int main(){
    int x=10, *ptr, **pp;
    ptr=&x;
    pp=&ptr;
    ++*ptr; // Increment on its own line: changing x and reading it in the same
    printf("%d %d %d", x, *ptr, **pp); // printf is undefined behaviour (output differs by compiler).

    **pp=50;

    printf("\n%d %d %d", x, *ptr, **pp);
    return 0;
}