int Solution::singleNumber(const vector<int> &A) {
    int res = A[0];
    for(int i=1; i<A.size(); i++){
        res = res ^ A[i];
    }
    return res;
}
