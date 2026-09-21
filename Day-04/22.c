//String Frequency Counter (better method [only counts letter, no other chars.])

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i=0, j=0;
    printf("Length of String: ");
    scanf("%d", &n);
    char *str=malloc(n*sizeof(char));
    int *arr=calloc(26, sizeof(int)); //Calloc son of malloc, initializes all to 0. 
    //syntax: calloc(len, sizeof(dt));

    for(i=0; i<n; i++){
        scanf(" %c", &str[i]);
        if(*(str+i)=='\n') {
            *(str+i)='\0';
            break;}
    }

    for(i=0; i<n; i++){
        arr[str[i]-'a']++;
    }
    for(i=0; i<26; i++){
        if(arr[i]!=0){
            printf("Character %c came %d times\n", (char)('a' + i), arr[i]);
        }
    }

    free(str);
    free(arr);

    return 0;

}