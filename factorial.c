#include <stdio.h>
int factorial(int a){
    if (a==0){
        return 1;
    }
    return a*factorial(a-1);
}
int main(){
    int a;
    scanf("%d",&a);
    int t=factorial(a);
    printf("%d",t);
    return 0;
}
