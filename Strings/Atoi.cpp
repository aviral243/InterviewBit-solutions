int Solution::atoi(const string A) {
    long long int res = 0;
    int n = A.size();
    int sign = 1;
    for(int i =0; i<n; i++) {
        if(A[i] == ' ' && (A[i-1] >= '0' && A[i-1] <= '9')){
            break;
        }
        if(A[i] == ' ')
        continue;
        
        if(A[i] == '-' && (A[i+1] >= '0' && A[i+1] <= '9') && !(A[i-1] >= '0' && A[i-1] <= '9')){
            sign = -1;
            continue;
        }
        if(A[i] == '+' && (A[i+1] >= '0' && A[i+1] <= '9')) {
            continue;
        }
        
        if(A[i] >= '0' && A[i] <= '9') {
            res = 10*res + (A[i] - '0');
            if(res > INT_MAX){
                break;
            }
        } else {
            break;
        }
    }
    
    if(res > INT_MAX) {
        if(sign == 1){
            return INT_MAX;
        } else {
            return INT_MIN;
        }
    }
    return res*sign;
}
