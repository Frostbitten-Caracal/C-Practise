// fog using functions

#include <stdio.h>

int sqr (int x){return x*x;}
int cube (int x){return x*x*x;}

int transform(int (*f)(int), int(*g)(int), int val){
    return f(g(val));
}

int main(){
    printf("%d", transform(sqr, cube, 2));
    return 0;
}