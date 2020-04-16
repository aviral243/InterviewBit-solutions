int Solution::strStr(const string A, const string B) {
    int n = A.size(), m = B.size();
    if(n == 0 || m == 0) {
        return - 1;
    }
    int start = 0;
    int end = 0;
    for(int i = 0; i<n; i++) {
        if(A[i] == B[0]) {
            start = i;
            for(int  j = 1; j < m; j++) {
                if(A[j+i] != B[j] ) {
                    break;
                } else {
                    end = j+i;
                }
            }
            if(end - start + 1 == m) {
                return start;
            }
        }
    }
    return -1;
}
