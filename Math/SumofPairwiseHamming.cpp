int Solution::hammingDistance(const vector<int> &A) {
    long long int ans = 0;
    long long int n = A.size();
    for(long long int i =0 ; i<32; i++) {
        long long int count = 0;
        for(long long int j = 0; j<n;j++) {
            if(A[j] & (1<<i)) {
                count++;
            }
        }
        ans += count * (n - count) * 2;
    }
    return (ans % 1000000007);
}
