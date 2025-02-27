// Your code here...
#include <stdio.h>
int add(int a, int b);
int main(){
    int res;
    res = add(10, 20);
    printf("Sum = %d\n", res);
    return 0;
}
int add(int a, int b){
    int c = a + b;
    return c;
}