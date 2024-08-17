// find duplicate element in array

#include<stdio.h>

int main(){
	
	int arr1[] = {3,6,8,8,10,12,15,15,15,20};
	int arr2[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int max = sizeof(arr2)/sizeof(arr1[0]);
	int i;
	
	for(i=0; i<n;i++){
		arr2[i]++;
	}
	
	for(i=0;i<max;i++){
		if(arr2[i]>i) printf("%d %d",i,arr2[i]);
	}
	
	return 0;
}
