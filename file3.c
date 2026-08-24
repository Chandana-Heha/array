#include <stdio.h>
 int main()
{
 int arr[100],n,key;
 int low,high,mid,i;
  printf("enter number of elements:");
  scanf("%d",&n);
  printf("enter elements in sorted order :\n");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  printf("enter elements to search:");
  scanf("%d",&key);
  low=0;
  high=n-1;
  while (low<=high){
  mid = (low+high)/2;
  if(arr[mid]==key){
  printf("elements found at position %d",mid+1);
  return 0;
  }
  else if (key<arr[mid]){
  high = mid-1;
 }
 else{
 low = mid+1;
 }
}
 printf("element is not found");
 return 0;
 }
 
  

