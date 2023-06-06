#include <stdio.h>
int sumrec(int a){
   
    if (a!=0){
        return a+sumrec(a-1);
    }
    else{
        return 0;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int t=sumrec(a);
    printf("%d\n",t);
    return 0;
}
