//Min-Max in an Array.

#include <stdio.h>

int main(){
    int n, i, max=0, min=0, cnt=0;
    printf("Len of array= ");
    scanf("%d", &n);

    int a[n];
    for(i=0;i<n;i++){
        printf("Array I/P: ");
        scanf("%d", &a[i]);
    }
    max=min=a[0];
    for(i=0;i<n;i++){
        if(a[i]>=max) {
            max=a[i];
            cnt++;}
        if (a[i]<=min) {
            min=a[i];
            cnt++;} 
    }
    printf("max=%d\nmin=%d\nnf cmp=%d", max,min,cnt);
    return 0;
}