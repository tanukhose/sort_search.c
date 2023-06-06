#include <stdio.h>
int binary(int a[],int user,int start,int end){
    
    if (start<=end){
        int mid=(end+start)/2;
        if (a[mid]==user){
            return mid;        
        }
        if (user<a[mid]){
            return binary(a,user,start,mid-1);
        }
        else{
            return binary(a,user,mid+1,end);
        }
    }
    else{
        return -1;
    }
}
int main(){
    int user;
    scanf("%d",&user);
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a);
    n=n/4;
    int t=binary(a,user,0,n-1);
    if (t!=-1){
        printf("found in index in :%d\n",t);
  
    }
    else{
        printf("NOT Found\n");
    }
    return 0;
}

