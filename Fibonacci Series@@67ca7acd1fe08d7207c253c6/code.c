// Your code here...
#include <stdio.h>
int fibonacci(int n){
    
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("fibonacci series at %d is %d\n",n,fibonacci(n));
    
    return 0;
}
