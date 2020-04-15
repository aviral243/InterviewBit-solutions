string common(string A, string B){
    int n = A.size() < B.size() ? A.size() : B.size();
    string res;
    for(int i = 0; i<n;i++) {
        if(A[i]!=B[i]){
            break;
        }
        res.push_back(A[i]);
    }
    return res;
}


string Solution::longestCommonPrefix(vector<string> &A) {
    int n = A.size();
    string prefix = A[0];
    
    for(int i = 0; i<n; i++) {
        prefix = common(prefix, A[i]);
    }
    return prefix;
}
