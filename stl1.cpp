// Stl = standard template library

#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
	return a+b;
}
void print(int s){
	cout<< s;
}
// pair
void explainPair(){
//	pair<int , int> p ={1,2};
	
//	cout << p.first << " " << p.second;
	
	pair<int, pair<int, int>> p = {1,{3,4}};
	
	cout<< p.first << " " <<p.second.second << " " <<p.second.first<<endl;
	
	pair<int, int> arr[] = {{1,2},{2,5},{5,1}};
	
	cout<< arr[1].second;
	
}
int main(){
	int s = sum(1,2);
	
//	print(s);
	
	explainPair();
	
	return 0;
}
