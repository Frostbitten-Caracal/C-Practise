//Basic String Manipulation Without <string.h>

#include <stdio.h>
void swap(char *x, char *y){
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int n, i=0, cnt=0, flag=1; //if you're the condition is != and then flag=0, then here flag=1.
    char s[100];
    printf("DISCLAIMER! This is a case-sensitive implementation. Therefore, if case doesn't match, the prgm will count it as a none palindrome string, even if it is one.\n");

    fgets(s, 100, stdin); // fgets() stores newline in the end.

    //scanf("%s", s);  as s is already a ptr, writing &s is wrong

    while (s[i]!='\0'){ //' ' = char literal; " " string
        if(s[i]!='\n'){
            cnt++; 
        }
        if(s[i] == '\n')
        {
            s[i] = '\0';
            break;
        }
        i++;
    }
    printf("Len(str)= %d\n", cnt);

    printf("Enter a choice(0/1): ");
    scanf("%d", &n);
    
    if(n==1){
        for(i=0; i<cnt/2;i++){
        swap(&s[i], &s[cnt-1-i]);
        }
        printf("%s", s);
    }
    else{
        i=0;
        while(i<cnt/2){
            if(s[i]!=s[cnt-1-i]){
                flag=0;
                break;
            }
            i++;
        }
        if (flag==1) printf("Palindrome");
        else printf("Not Palindrome.");
    }



    return 0;
}