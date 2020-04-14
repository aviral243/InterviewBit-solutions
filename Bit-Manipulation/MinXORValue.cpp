int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int minXOR = INT_MAX;
    int val = 0;
    for(int i = 0; i < A.size() - 1; i++){
        val = A[i] ^ A[i + 1];
        minXOR = min(minXOR, val);
    }
    return minXOR;
}
