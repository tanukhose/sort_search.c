/*#include <stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a);
    n=n/4;
    int user;
    scanf("%d",&user);
    int low=0;
    int high=n-1;
    while(low<=high){
        int v=low+high/2;
        if (a[v]==user){
            printf("%d\n",v);
            break ;
        }
        else if (a[v]>user){
            low=v-1;   
        }
        else{
            high=v+1;
        }
    }
    return 0;

}*/


#include <stdio.h>
int binarySearch(int arr[], int x, int start, int end) {
  while (start <= end) {
    int mid =(end + start) / 2;
    if (arr[mid] == x){
      return mid;
    }
    if (arr[mid] < x){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return -1;
}
int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr);
  n=n/4;
  int x;
  scanf("%d",&x);
  int result = binarySearch(arr, x, 0, n - 1);
  if (result == -1){
    printf("Not found");
  }
  else{
    printf("Element is found at index %d", result);
  }
  return 0;
}
