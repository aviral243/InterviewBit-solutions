const int mod = 1e9 + 7;
int Solution::cntBits(vector<int> &A) {
int n = A.size();
vector<int>bits(32,0);
for(int i = 0 ; i < n; ++i) {
    for(int j=31; j>=0; j--) {
        if(A[i] & 1<<j) {
            bits[j] = (bits[j]+1)%mod;
        }
    }
}

int ans = 0;
for(int i = 0 ; i < n ; ++i) {
    for(int j=31; j>=0; j--) {
        if(A[i] & 1<<j) {
            ans = (ans + n - bits[j])%mod;
        } else {
            ans = (ans + bits[j])%mod;   
        }
    }
}
return ans ;
}