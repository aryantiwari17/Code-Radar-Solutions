// Your code here...
#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    for(int i=1 ; i>=1; i--){
        for(int j=n;j<=i;j++){
            printf("%d",j);

        }
        printf("\n");

    }
    return 0;
}