string Solution::solve(string A) {
    int n = A.size();
    int low = 0, high = n-1;
    string res = "";
    while(A[low] == ' '){
        low++;
    }
    while(A[high] == ' '){
        high--;
    }
    
    for(int i = high; i>=low; i--) {
        if(A[i] == ' ' && A[i+1] != ' ') {
            for(int j = i+1; (A[j] != ' ' && j<=high); j++) {
                res += A[j];
            }
            res += ' ';
        }
    }
    for(int i=low; (A[i] != ' ' && i <=high); i++) {
        res += A[i];
    }
    if(res.size() == 0 && high-low+1 > 0) {
        for(int i = low; i<=high; i++) {
            res+=A[low];
        }
    }
    return res;
}
