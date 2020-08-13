#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int N , K ;
        cin >> N >> K;
        int small=-1;
        int i;
        int P[N];
        for(i=0;i<N;i++)
        {
            cin >> P[i];
        }
        for(i=0;i<N;i++)
        {
            if(K%P[i]==0 && P[i]>small)
            {
              
                small=P[i];
                
            }
            
        }
        cout << small << endl;
    }
	
	return 0;
}
