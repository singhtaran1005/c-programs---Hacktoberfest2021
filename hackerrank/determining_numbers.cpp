// * AUTHOR :: TARANPREET {SINGH} CHABBRA  *//
//* {CODE : hackerearth} *//
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	map<int,int>m;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin >> arr[i];
	}
	int a=0;
	int x=0;
	for(int i:arr)
	{
		x=x^i;
	}
	// cout << x <<endl; 
	int position=floor(log2(x)+1);

	int x1=0,x2=0;

	for(int i:arr)
	{
		if(i&(1<<(position-1)))   //to check if i th set is a bit 
		{
			x1=x1^i;
		}
		else
		x2=x2^i;

	}
	if(x1<x2)
	cout << x1 << " " << x2 << "\n";
	else
	cout << x2 << " " << x1 << "\n";
	
}
int main() {
	solve();
	return 0;	
}

