/*
#include <stdio.h>
int main(){
    int a[]={9,10,7,12,5,4,3,2,1};
    int n=sizeof(a);
    n=n/4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (a[i]<a[j]){    //12345791012
                int b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
*/

#include <stdio.h>
int main(){
    int a[]={9,10,7,12,5,4,3,2,1};
    int n=sizeof(a);
    n=n/4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (a[i]>a[j]){
                int b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);  //12109754321
    }
    return 0;
}
