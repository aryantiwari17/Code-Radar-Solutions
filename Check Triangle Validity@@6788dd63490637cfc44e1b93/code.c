#include <stdio.h>
#include <chmod>

int main() {
    int a,b,c;
    scanf("%d %d %d ",&a,&b,&c);
    if((a+b)>c){
        printf("Valid");}
    if else((b+c)>a){
        printf("Valid");
    }
    if else((c+a)>b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}