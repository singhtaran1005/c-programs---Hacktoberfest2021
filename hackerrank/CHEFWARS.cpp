#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int H,P;
	    cin >> H >> P;
	    while(H!=0 && P!=0)
	    {
	        if(H>P)
	        
	            H=H-P;
	        else
	        H=0;
	        
	        P=P/2;
	    }
	if(H==0)
	cout << 1 << endl;
	else if (P==0)
	cout << 0 << endl;
	}
	return 0;
}
