vector<int> Solution::wave(vector<int> &A) {
    int n =A.size();
    int temp;
    sort(A.begin(), A.end());
    for(int i=0; i<n-1; i+=2) {
        temp = A[i+1];
        A[i+1] = A[i];
        A[i] = temp;
    }
    
    // for(int i=0; i<n; i += 2) {
    //     if(i > 0 && A[i-1] > A[i]){
    //         temp = A[i-1];
    //         A[i-1] = A[i];
    //         A[i] = temp;
    //     }
        
    //     if(i < n-1 && A[i+1] > A[i]) {
    //     temp = A[i+1];
    //     A[i+1] = A[i];
    //     A[i] = temp;
    //     }
    // }
    return A;
}