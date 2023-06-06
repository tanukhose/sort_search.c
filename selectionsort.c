#include <stdio.h>
int main(){
    int a[]={2,5,7,9,11,3,15,1};
    int n=sizeof(a);
    n=n/4;
    for (int i=0;i<n-1;i++){
        int index=i;
        for (int j=i;j<n;j++){
            if (a[index]>a[j]){
                index=j;  
            }
        int b=a[i];
        a[i]=a[index];
        a[index]=b;
        }

    }
    for (int i=0;i<n;i++){
        printf("%d\n",a[i]);
    
    }
    return 0;

}
