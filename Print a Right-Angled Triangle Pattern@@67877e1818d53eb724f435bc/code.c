// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=i;j;j--){
            printf("* ");
        }
        printf("\n");
    }
}