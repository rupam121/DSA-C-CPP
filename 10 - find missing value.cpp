#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[10] = {3,7,4,9,12,6,1,11,2,10};
	int hashArr[12]= {0,0,0,0,0,0,0,0,0,0,0,0};
	int l,h,n;
	l=1;h=12;n=10;  // value assing
	int x=0;
	for (int i=0; i<n; i++){
		x=arr[i];
		h[x]++;
	}
	
	for(int i=l; i<=h; i++){
		x=h[i];
		if(x==0) printf("%d\n",i);
	}
	return 0;
}
