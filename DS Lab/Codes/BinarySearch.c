#include<stdio.h>

void binarySearch(int arr[], int ele ,int size);

void main(){
  int arr[1000];
  int size, ele, i;
  printf("Enter the size of the Array.It should be less than 1000\n");
  scanf("%d",&size);
  printf("Enter the sorted Array.\n");
  for( i = 0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be find.\n" );
  scanf("%d",&ele);
  binarySearch(arr,ele,size);
}

void binarySearch(int arr[], int ele, int size ){
  int front = 0;
  int end = size - 1;
  int mid;
  while(front <=end){
    mid = (front+end)/2;
     if(arr[mid]==ele){
      printf("The element is present.\n" );
      return;
    }
    else if(ele<arr[mid]){
      end = mid-1;
    }
    else{
      front = mid +1;
    }
  }
  printf("The element is absent.\n" );
  return ;
}
