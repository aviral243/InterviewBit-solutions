string genNext(string A) {
    int n = A.size();
    string res;
    if(n == 0){
        res.push_back('1');
        return res;
    }
    
    if(n==1){
        res.push_back('1');
        res.push_back('1');
        return res;
    }
    
    int ct = 1;
    for(int i = 0; i<n; i++) {
        if(A[i] == A[i+1] && i != n-1){
            ct++;
        }else if(i == n-1) {
            if(ct != 1) {
                // res.push_back(itoa(ct));
                res += to_string(ct);
                res += A[i];
            } else {
                res.push_back('1');
                res += A[i];
            }
            
        } else{
            res += to_string(ct);
            res += (A[i]);
            ct=1;
        }
    }
    return res;
}

string Solution::countAndSay(int A) {
    string seq;
    for(int i = 1; i<=A; i++) {
        seq = genNext(seq);
    }
    return seq;
}
