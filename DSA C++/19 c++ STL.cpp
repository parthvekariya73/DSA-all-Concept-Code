#include<iostream>
//#include<array>
#include<vector>

using namespace std;
int main()
{
	// 1. Array :
//	int basic[4] = {1,2,3,4};
//	
//	array<int,4> a = {1,2,3,4};		// STL Array
//	
//	int size = a.size();
//	for(int i=0; i<size; i++) {
//		cout<<a[i]<<endl;
	
	vector<int> v;
	cout<<"Capacity -> "<<v.capacity()<<endl;

	v.push_back(1);
	cout<<"Capacity -> "<<v.capacity()<<endl;
	
		v.push_back(2);
	cout<<"Capacity -> "<<v.capacity()<<endl;
	
		v.push_back(3);
	cout<<"Capacity -> "<<v.capacity()<<endl;
	cout<<"SIZE -> "<<v.size()<<endl;
	
	cout<<"Element at 2nd Index : "<< v.at(2)<<endl;
	cout<<"Front : "<< v.front() <<endl;
	cout<<"Back : "<< v.back()<<endl;
	
//	cout<<"Before pop : "<<endl;
//	for(int i:v) {
//		cout<<i<<" ";
//	}cout<<endl;
//	
//	v.pop_back();
//	
//	cout<<"After pop : "<<endl;
//	for(int i:v) {
//		cout<<i<<" ";
//	}cout<<endl;
	
	return 0;
}
