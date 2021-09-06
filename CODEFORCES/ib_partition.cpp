int Solution::solve(int B, vector<int> &A) {
    int n = A.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=A[i];
    }
    if(sum%3){
        return 0;
    }
    // int prefix[n+1];
    // prefix[0]=A[0];
    // for(int i=1;i<n;i++){
    //     prefix[i] = prefix[i-1]+A[i];
    // }
    vector<int>v(n,0);
    int count = 0;
    int left_sum = sum/3;
    int left_sum2 = 2*(sum/3);
    int temp = 0;
    for(int i=n-1;i>=0;i--){
        temp+=A[i];
        // cout << temp << " " << left_sum << "\n";
        if(temp == left_sum){
           v[i] = 1;
        }
    }
    temp = 0;
    for(int i=0;i<n;i++){
        temp+=A[i];
        if(temp == left_sum){
            for(int j=i+2;j<n;j++){
                if(v[j] == 1){
                    count++;
                }
            }
        }
    }
    return count;
}

