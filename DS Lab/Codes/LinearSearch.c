#include<stdio.h>

void linearSearch(int arr[], int ele ,int size);

void main(){
  int arr[1000];
  int size, ele, i;
  printf("Enter the size of the Array.It should be less than 1000\n");
  scanf("%d",&size);
  printf("Enter the Array.\n");
  for( i = 0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be find.\n" );
  scanf("%d",&ele);
  linearSearch(arr,ele,size);
}

void linearSearch(int arr[], int ele, int size ){
  for(int i = 0;i<size;i++){
    if(arr[i]==ele){
      printf("The element is present.\n" );
      return;
    }
  }
printf("The element is absent.\n" );

}
