// Your code here...

#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=i+sum;
        

    }
    printf("%d",sum);
    return 0;
}