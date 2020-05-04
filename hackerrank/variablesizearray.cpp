#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int N, Q, k;
    int **data;//to create multidimensional array
    scanf("%d %d", &N, &Q);
    data = new int*[N];
    for(int i=0; i<N; i++) {
        scanf("%d", &k);//yaha pe row ka input liye
        data[i] = new int[k];
        for(int j=0; j<k; j++) {
            scanf("%d", &data[i][j]);//yaha pe coloumn wise input lia
        }
    }

    int a, b;
    for(int i=0; i<Q; i++) {
        scanf("%d %d", &a, &b);// a yaha pe kaun sa array pe kaam kar rhe hai uska baat kar rha hai aur b us array ka index pe
        printf("%d\n", data[a][b]);// humlog bas array ka index ka value print kar rhe hai as asked in question
    }
    
    return 0;
}
