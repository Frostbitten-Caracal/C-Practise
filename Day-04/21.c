//String Frequency Counter (Brute Force method[counts all chars.])

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i=0, j=0;
    printf("Length of String: ");
    scanf("%d", &n);
    while(getchar()!='\n');
    char *str=malloc(n+2);
    int *arr=calloc(n, sizeof(int)); //Calloc son of malloc, initializes all to 0. 
    //syntax: calloc(len, sizeof(dt));

    for(i=0; i<n; i++){
        arr[i]=1;
    }

    fgets(str, n+2, stdin);

    for(i=0; i<n; i++){
        if(arr[i]!=0){
            for(j=i+1; j<n; j++){
                if(str[i]==str[j]){
                    arr[i]++;
                    arr[j]--;
                }
            }
        }
    }
    // for(i=0; i<n; i++){
    //     printf("%d", arr[i]);
    // }

    for(i=0; i<n; i++){
        if(arr[i]!=0){
            printf("\nCharacter %c came %d times\n", str[i], arr[i]);
        }
    }

    free(str);
    free(arr);

    return 0;
}