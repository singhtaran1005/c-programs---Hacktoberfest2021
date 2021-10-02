#include <bits/stdc++.h>
using namespace std;


bool ispower2(int n){
    if(n==0){
        return false;
        
    }
    return (ceil(log2(n))==floor(log2(n)));
}

int nearest(int n){
    int res = 0;
    for (int i=n; i>=1; i--)
    {
       
        if ((i & (i-1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}

int main(){
    
    int t;
    cin>>t;
    int c;
    
    while(t--){
        c=0;
        int n;
        cin>>n;
        while(n!=0){
            
            if(n>2048){
                int f= n/2048;
                c+=f;
                n-=(f*2048);
                continue;
            }
            
            if(ispower2(n) && n<=2048){
                c++;
                break;
            }
            
            else{
                int d=nearest(n);
                n-=d;
                c++;
            }
            
            
        }
        cout<<c<<endl;
    }
    
    return 0;    

}
