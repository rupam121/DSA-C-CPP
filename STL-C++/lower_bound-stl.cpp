#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
//	vector <int> v ={1,1,2,2,6,9,9,15};
//	
//	int r=lower_bound(v.begin(),v.end(),2)-v.begin();
//	
//	cout<<r;

   int n;
   cin>>n;
   vector<int> v;

   for(int i=0;i<n;i++){
   	int temp;
   	cin>>temp;
   	v.push_back(temp);
   }
   
   int q;
   cin>>q;
   int num;
   while(q--){
   	cin>>num;
   	int r = lower_bound(v.begin(),v.end(),num)-v.begin();
    
    
    if(v[r]==num){
    	cout<<"Yes "<<r<<endl;
	}else cout<<"No "<<r<<endl;
   }
   
   

	return 0;
}
