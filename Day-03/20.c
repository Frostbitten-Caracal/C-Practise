//Character ptr implementation.

#include <stdio.h>
#include <stdlib.h>

void swap(char *x, char *y){
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){  
    int i, flag=0, len=0;
    char *str=malloc(200* sizeof(char));
    for(i=0;i<200;i++){
        scanf("%c", (str+i));
        if(*(str+i)=='\n') {
            *(str+i)='\0';
            break;
    }}

    //String len.

    i=0;
    while(*(str+i)!='\0'){
        printf("%c", *(str+i));
        i++;
        len++;
    }

    printf("\nLength of String=%d", len);

    //Palindrome.

    for (i=0; i<len/2; i++){
        if(*(str+i)!=*(str+(len-1-i))){
            flag=0;
            break;
        }
        else flag=1;
    }

    if (flag==1) printf("\nString is Palindrome.");
    else printf("\nString not palindrome.");

    //String Reversal.
    
    for(i=0; i<len/2; i++){
        if(*(str+i)!='\0'){
            swap((str+i), (str+(len-1-i)));
        }
        
    }
    printf("\n");
    for(i=0;i<len;i++){
        if(*(str+i)!='\0'){
            printf("%c", *(str+i));
        }
    }

    free(str);
    return 0;
}