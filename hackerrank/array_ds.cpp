#include<iostream>
using namespace std;
int main()
{
    int i;
    int N;
     cin>>N;
    int A[N];
   
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<N;i++)
    {
        cout<< A[N-i-1]<< " " ;
    }
    return 0;
}
