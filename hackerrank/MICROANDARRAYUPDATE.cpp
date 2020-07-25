#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,min=10000000000,k;
	cin >>t;
    while(t--)
    {
     min=10000000000;
     cin>>n>>k;
     int a[n];
     for(i=0;i<n;i++)
     {
     cin >>a[i];
      if(a[i]<min)
       min=a[i];
     }
     //printf("%d ",min);
     if(min>=k)
      cout<<("0\n");
     else
      printf("%d\n",k-min);
    }
    return 0;

}
