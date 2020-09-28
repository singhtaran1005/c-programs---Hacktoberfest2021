#include<bots/stdc++.h>
using namespace std;
int main()
{
int t;
  cin>>t;
  while(t-->0)
  {
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
      cin>>b[i];
    }
    int mid=n/2;
    int i=0;
    for( i=0;i<n;i++)
    {
      if(b[i]>mid && b[i]!=i+1)
        break;
      else if(b[i]<1)
        break;
      else if((i+1)%b[i]!=0)
        break;
    }
    if(i==n)
      cout<<"YES\n";
    else
      cout<<"NO\n";

  }
  return 0;
}
