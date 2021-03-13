#include<bits/stdc++.h>
using namespace std;
        uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        vector<int>a;
        int times=32;
        while(times>0)
        {
            int t=n&1;
            a.push_back(t);
            n=n>>1;
            times--;
        }
        for(int i=0;i<a.size();++i)
        {
            ans=ans<<1;
            ans=ans|a[i];
        }
        return ans;
    }

int main()
{
    
    cout << reverseBits(00110);
    return 0;
}
