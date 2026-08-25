//Pointer Arithmetic pt3: ptr to ptr

#include <stdio.h>

int main(){
    int x=10, *ptr, **pp;
    ptr=&x;
    pp=&ptr;

    printf("%d %d %d", x, ++*ptr, **pp); /*O/p= 11 11 10, cuz you cannot force left-to-right 
                                    evaluation of printf arguments by writing them left-to-right.*/

    **pp=50;

    printf("\n%d %d %d", x, *ptr, **pp);
    return 0;
}