//Reverse the digits of given number
#include <stdio.h>

int main(){

    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    int copy=n;

    int ans=0;
    while(n!=0){
        ans =ans*10+(n%10);
        n /=10;
    }

    printf("revese of %d is -> %d\n",copy,ans);
    return 0;
}