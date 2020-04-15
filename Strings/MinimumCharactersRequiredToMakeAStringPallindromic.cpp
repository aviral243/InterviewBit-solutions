vector<int> computeLps(string A){
    int n = A.length();
    vector <int> lps(n);
    int len = 0;
    lps[0] = 0;
    int i =1;
    while(i < n){
        if(A[i] == A[len]){
            len++;
            lps[i] = len;
            i++;
        }else{
            if(len != 0){
                len = lps[len - 1];
            }else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}


int Solution::solve(string A) {
    string rev = A;
    reverse(rev.begin(), rev.end());
    string concat = A + "$" + rev;
    vector<int> lps = computeLps(concat);
    return (A.length() - lps.back());
}
