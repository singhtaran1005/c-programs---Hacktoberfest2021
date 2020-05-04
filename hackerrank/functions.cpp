#include<bits/stdc++.h>
using namespace std;
int max_of_four(int a, int b, int c, int d) {
    int big=0;
    (a>b)?big=a:big=b;
    (c>d)?big=c:big=d;
    return big;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
