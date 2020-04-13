int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int dis = 0;
    if(A.size() == 1){
        return 0;
    }
    for(int i = 0; i<A.size() - 1; i++){
        if(A[i+1] - A[i] >= B[i+1] - B[i]) {
            dis += (A[i+1] - A[i]);
        } else {
            dis += (B[i+1] - B[i]);
        }
    }
    return dis;
}
