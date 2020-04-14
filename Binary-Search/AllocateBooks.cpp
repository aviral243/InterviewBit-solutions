int maxRequired(vector<int> A, int mid) {
    int req = 1;
    int total = 0;
    for(int i =0; i<A.size(); i++) {
        total += A[i];
        if(total > mid) {
            req++;
            total = A[i];
        }
    }
    return req;
}


int Solution::books(vector<int> &A, int B) {
    int n = A.size();
    if(B > n) {
        return -1;
    }
    
    
    int sum = 0;
    int max = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        sum += A[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(max < A[i]) {
            max = A[i];
        }
    }
    
    while(max < sum) {
        int mid = (sum+max) / 2;
        int required = maxRequired(A, mid);
        if(required<=B) {
            sum = mid;
        }else {
            max = mid+1;
        }
    }
    return max;
    
}
