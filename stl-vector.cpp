// stl:standard template librari
// std:vector

#include <bits/stdc++.h>
using namespace std;

void explainVector()
{

	vector<int> v;

	v.push_back(1);
	v.emplace_back(2);

	vector<pair<int, int>> vec;

	vec.push_back({1, 2});
	vec.emplace_back(3, 4);

	vector<int> vx(5, 100); // 5 time 100 = {100,100,100,100,100}

	vector<int> vy(5); // vector size create 5.

	vector<int> v1(5, 20); // 5 time 20 = {20,20,20,20,20}.
	vector<int> v2(v1);	   // copy v1 value to v2 vector.

	vector<int>::iterator it = v.begin(); // used to point to the memory address of the STL container classes
	it++;
	cout << *(it) << " ";

	it = it + 2;
	cout << *(it) << " ";

	vector<int>::iterator it0 = v.end(); // end = v.size; || not last element.
										 //	vector<int>::iterator it1 = v.rend(); // reverse-end  it= -1 not zero.
										 //	vector<int>::iterator it2 = v.rbegin(); // reverse begining = last endex of vector.

	cout << v[0] << " " << v.at(0);
	//	cout< v.back() << " "; /// move to back element

	// loop in vector
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *(it) << " ";
	}

	for (auto it = v.begin(); it != v.end(); it++)
	{ // auto adapte any data type and auto assining.
		cout << *(it) << " ";
	}

	for (auto it : v)
	{ // auto each
		cout << it << " ";
	}

	// delete
	//{10,20,12,23}
	v.erase(v.begin() + 1);

	//{10,20,[12,23],35} = remove 12,23
	v.erase(v.begin() + 2, v.begin() + 4); //{10,20,35} begin element is remove: end element is not remove.

	// insert function
	vector<int> i(2, 100);			// {100,100}
	i.insert(i.begin(), 300);		// {300,100,100}
	i.insert(i.begin() + 1, 2, 10); // {300,10,10,100,100}

	vector<int> copy(2, 50);					   // {50,50}
	i.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

	//{10,20}
	cout << v.size(); // 2
	cout << " size is:" << v.size() << endl;
	//{10,20}
	v.pop_back(); // {10}

	//	vector<int> v2;
	v2.push_back(30);
	// v1 => {10,20}
	// v2 => {30,40}
	v1.swap(v2); // v1=>{30,40}, v2 => {10,20}

	v.clear(); // erase alll element of vectro make mepty.

	cout << v.empty() << endl; // it chack empty or note,,, true or false
}

int main()
{

	explainVector();

	return 0;
}
