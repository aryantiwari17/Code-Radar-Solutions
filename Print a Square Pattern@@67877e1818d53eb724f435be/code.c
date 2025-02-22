#include <stdio.h>
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)                          //outer loop no. of lines decide kar raha ha {no. of rows }
    {
        for(int i=1;i<=n;i++)                         //inner loop star in each line {no. of columns}
    {
        printf("* "); 
    }
        printf("\n");
    }
    
    return 0;
    
}