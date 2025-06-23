// set_STL.cpp 
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
	set<int>s;
	cout << "Inserting elements into an empty set: " << endl;
	//Inserting elements into set
	s.insert(10);
	s.insert(20);
	//Creating a vector
	vector<int>v = { 25, 30, 35, 40};
	//inserting vector elements into set
	s.insert(v.begin(), v.end());
	//inserting list elements into set
	s.insert({40, 45, 50,50, 55, 60, 65}); //40 is already present - it is a duplicate value, so only once it will be printed
	//printing all the elements
	cout << "Set elements: ";
	for (int x : s)
	{
		cout << x<<" ";
	}
	cout << endl;
	//Deleting single element
	s.erase(20);
	cout << "Set elements: ";
	for (int x : s)
	{
		cout << x << " ";
	}
	cout << endl;
	//Deleting first elements
	s.erase(s.begin());
	cout << "Set elements: ";
	for (int x : s)
	{
		cout << x << " ";
	}
	cout << endl;
	cout <<"First element: "<< * s.begin() << endl;
	cout <<"Last element: "<< * --s.end() << endl;//To get the last element we need to use decrement (--)
	cout << "Size: " << s.size() << endl;
	
	cout << "Distance: "<<distance(s.begin(), s.end()) << endl;
	cout << "First element after reversing: " << *s.rbegin() << endl;
	cout << "Last element after reversing: " << *--s.rend() << endl;
	set<int>s1;
	s1.swap(s);
	cout << "New set: ";
	for (int x : s1)
	{
		cout << x << " ";
		
	}
	cout << endl;
	//finding the upper bound value
	//cout <<"Upper Bound: "<< *s.lower_bound(25) << endl;
}