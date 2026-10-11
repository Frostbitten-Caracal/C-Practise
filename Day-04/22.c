//String Frequency Counter (better method [only counts letter, no other chars.])

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int n, i=0, j=0;
    printf("Length of String: ");
    scanf("%d", &n);
    while(getchar()!='\n');
    char *str=malloc(n+2);
    int *arr=calloc(256, sizeof(int)); //Calloc son of malloc, initializes all to 0. 
                                       //syntax: calloc(len, sizeof(dt));
    fgets(str, n+2, stdin); // fgets stores <= n-1 chars, cuz 1 slot saved for \0. 
                            // So, n+2 to store \0 and 1 extra for \n from prev scanf.
    for(i=0; str[i] != '\0'; i++){
        if(!isspace((unsigned char)str[i])){
            arr[(unsigned char)str[i]]++;
        }
    }
    for(i=0; i<256; i++){
        if(arr[i]!=0){
            printf("Character %c came %d times\n", i, arr[i]);
        }
    }

    free(str);
    free(arr);

    return 0;

}