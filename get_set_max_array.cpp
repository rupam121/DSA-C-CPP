#include <stdio.h>
#include <stdlib.h>

 int Display(int arr){
 	for (int i=0;i<sizeof(arr);i++){
 	printf(" %d",arr);
	 }
	 return -1;
 }
 
 int Get(struct Array *arr,int index){
 	if(index>=0 && index<arr->length){
 		return arr.A[index];
	 }
	 return -1;
 }
 
 void Set(struct Array *arr,int index,int x){
 	if(index>=0 && index<arr->length){
 		arr->A[index]=x;
	 }
 }
 
 int Max(struct Array arr){
 	int max=arr.A[0];
 	int i;
 	for(i=1;i<arr.lenth;i++){
 		if(arr.A[i]>max){
 			max=arr.A[i];
		 }
	 }
	 return Max;
 }
int Min(struct Array arr){
 	int min=arr.A[0];
 	int i;
 	for(i=1;i<arr.length;i++){
 		if(arr.A[i]<min){
 			min=arr.A[i];
		 }
	 }
	 return min;
 }
 
 int Sum(struct Array arr){
 	int s=0;
 	int i;
 	for(i=0;i<arr.length;i++){
 		s+=arr.A[i];
	 }
	 return s;
 }
 
 float Avg(struct Array arr){
 	return Sum(arr)/arr.length;
 }
 
 int main(){
 	
 	struct Array arr = {{2,5,4,6},10,5};
 	printf("%d\n",Get(arr,0));
 	Display(arr);
 	
 	return 0;
 }
