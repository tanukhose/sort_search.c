/*#include <stdio.h>
int main(){
    int user;
    scanf("%d",&user);
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a);
    n=n/4;
    for(int i=0;i<n;i++){
        if (a[i]==user){
            printf("%d\n",i);
        }
    }
    return 0;

}
*/


/*LinearSearch array
for each item in the array
if item == user_value
return user_value*/

#include <stdio.h>
int linear(int a[]){
    int user;
    scanf("%d",&user);
    int n=sizeof(a);
    n=n/4;
    for(int i;i<n;i++){
        if (a[i]==user){
            printf("%d\n",i);
        }
    
    }
    return 0;
    
}
int main(){
    
    int a[]={1,2,3,4,5,6,7,8,9};
    
    linear(a);
    return 0;

}
