#include<bits/stdc++.h>
using namespace std ;

int solve(long int a[], long int arr1){
    if (arr1 == 0 || arr1 == 1)
        return  arr1 ;

    long int arr2[arr1];
    long int j = 0 ;
    for (long int i = 0; i < arr1 - 1; ++i) {
        if (a[i] != a[i+1]){
            arr2[j++] = a[i];
        }
    }
    arr2[j++] = a[arr1 - 1];

    for (long int i = 0; i < j; ++i) {
        a[i] = arr2[i];
    }
    return  j ;

}

int main(){
    long int t ;
    cin >> t ;
    while (t > 0){
        long int n ;
        cin >> n ;
        long int a[n];
        for (long int i = 0; i < n; ++i) {
            cin >> a[i] ;
        }
        sort(a,a+n);
        long int arr1 = sizeof(a)/sizeof(a[0]);
        arr1 = solve(a, arr1);
        if (a[0] == 0){
        arr1 -- ;
        cout << arr1 << '\n' ;
        } else{
            cout << arr1 << '\n';
        }
        t-- ;

    }
    return 0 ;
}
