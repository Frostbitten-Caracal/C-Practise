//String Frequency Counter (Brute Force method[counts all chars.])

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i=0, j=0;
    printf("Length of String: ");
    scanf("%d", &n);
    char *str=malloc(n*sizeof(char));
    int *arr = malloc(n*sizeof(int)); //Calloc son of malloc, initializes all to 0. 
    //syntax: calloc(len, sizeof(dt));

    for(i=0; i<n; i++){
        arr[i]=1;
    }

    for(i=0; i<n; i++){
        scanf(" %c", &str[i]);
        if(*(str+i)=='\n') {
            *(str+i)='\0';
            break;}
    }

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