 #include <stdio.h>
 
 int main(){
 	int arr[10]={1,22,22,4,5,5,7,8,9,1};
 	
// 	int lastDuplicate = 0;
// 	
// 	for(int i=0;i<sizeof(arr);i++){
// 		while(arr[i]==arr[i+1] && lastDuplicate!=arr[i]){
// 			printf("%d is duplicate.\n",arr[i]);
// 			lastDuplicate = arr[i];
//		 }
//	 }

    int j=0;
    
    for(int i=0; i<sizeof(arr)-1; i++){
    	if(arr[i]==arr[i+1]){
    		j=i+1;
    		while(arr[j]==arr[i]) j++;
    		printf("%d is repeate %d times.\n",arr[i],j-i);
		}
	}
 	
 	return 0;
 }
