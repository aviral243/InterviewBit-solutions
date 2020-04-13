int Solution::solve(vector<int> &A) {
    int ans = -1;
    sort(A.begin(), A.end());
    if(!A[A.size() - 1]){
        return 1;
    }
    for(int i=0; i<A.size(); i++){
        if(A[i] == A[i+1]){
            continue;
        }
        
        if((A[i]) == (A.size() - i -1)){
            ans = 1;
        }
    }
    return ans;
}
