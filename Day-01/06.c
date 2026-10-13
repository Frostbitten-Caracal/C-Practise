//Redundancy count.

#include <stdio.h>

int main(){
    int i, n, cnt=1;
    printf("Enter length of Array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid length\n");
        return 1;
    };
    int arr[n];
    for (i=0; i<n; i++){
        printf("Enter a no: ");
        scanf("%d", &arr[i]);
    }
    int visited[n];

    for(i=0; i<n; i++){
        visited[i]=0;
    }

    for(i=0; i<n; i++){
        if(visited[i]==1) continue;
        else{
            for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]) {
                cnt++;
                visited[j]=1;
                }
            }
            printf("%d comes %d times.\n", arr[i],cnt);     
        }
        
        cnt=1;
    }

    // for(i=0; i<n; i++){
    //     printf("%d comes %d times.\n", arr[i],cnt);
        
    // }

    return 0;
}