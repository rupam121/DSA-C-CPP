// check array is shorted or not

#include <stdio.h>
#include <stdlib.h>
//using namespace std;

struct Array
{
 int A[10];
 int size;
 int length;
};

 void Display(struct Array arr)
 {
  int i;
  printf("\nElements are\n");
  for(i=0;i<arr.length;i++){
 	printf("%d ",arr.A[i]);
  }
  
 }
 
 void InsertSort(struct Array *arr,int x)
 {
 	int i=arr->length-1;
 	if(arr->length == arr->size)
 	  return;
 	while(arr->A[i]>x)
 	{
 	  arr->A[i+1] = arr->A[i];
	  i--;	
	}
 	   arr->A[i+1]=x;
 	   arr->length++;
 }
 
 int IsSorted(struct Array arr){
 	int i;
 	for(i=0;i<arr.length-1;i++){ 		
 		if(arr.A[i]>arr.A[i+1]){
 			return 0;
		 }
	 }
 	return 1;
 }
 
void swap (int *a,int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
}

 void Rearrange(struct Array *arr){
 	int i,j;
 	i=0;
 	j=arr->length-1;
 	
 	while(arr->A[i]<0) i++;
 	while(arr->A[i]>=0) j--;
 	if(i<j) swap(&arr->A[i] , &arr->A[j]);
 }
 
int main(){
	struct Array arr = {{2,3,-25,10,15,-7},10,6};
	
//	InsertSort(&arr,12);
//	printf("%d \n",IsSorted(arr));

    Rearrange(&arr);
	Display(arr);
	
	return 0;
}
