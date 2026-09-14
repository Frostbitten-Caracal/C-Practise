//True Dynamic Array Manipulation using ptrs (Malloc)

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int n, i, max, min;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr=malloc(n * sizeof(int)); //syntax: dt *ptr=malloc(len*sizeof(dt));

    for (i=0;i<n;i++){
        printf("Enter a no: ");
        scanf("%d", (arr+i));
    }

    for (i=0;i<n;i++){
        printf("%d ", *(arr+i));
    }

    max=min=*arr;

    for(i=0; i<n; i++){
        if(max<=*(arr+i)){
            max=*(arr+i);
        }

        if(min>=*(arr+i)){
            min=*(arr+i);
        }
    }

    printf("\nmax no=%d, min no=%d\n", max, min);

    for (i=0;i<n/2;i++){
        swap((arr+i), (arr+(n-1-i)));
    }
    
    for (i=0;i<n;i++){
        printf("%d ", *(arr+i));
    }

    free(arr);
    arr=NULL;

    return 0;

}