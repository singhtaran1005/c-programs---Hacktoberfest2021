#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	
	cin >> t;
	while(t--)
	{
	    int c,r;
	    cin >> c >> r;
	    int pc,pr;
	    pc=c%9;
	    c=c/9;
	    pr=r%9;
	    r/=9;
	    if(pc)
	    c+=1;
	    if(pr)
	    r+=1;
	    if(c<r)
	    {
	        cout << 0 << " " << c <<endl;
	        
	    }
	    else
	    {
	        cout << 1 << " " << r <<endl;
	    }
	    
	}
	return 0;
}
