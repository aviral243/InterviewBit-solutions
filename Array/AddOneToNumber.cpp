vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> B;
    int i = 0;
    if(A[A.size() - 1] != 9){
        A[A.size() - 1] += 1;
    } else {
        for(int j=A.size()-1; j>=0; j--) {
            if(A[j] == 9){
                A[j] = 0;
                if(j == 0){
                    B.push_back(1);
                    for(int k=0;k<A.size();k++){
                        B.push_back(0);
                    }
                    return B;
                }
            } else {
                A[j] += 1;
                break;
            }
        }
    }
    
    for(i=0; i<A.size();i++){
        if(A[i] != 0) {
            break;
        }
    }
    
    for(;i<A.size();i++){
        B.push_back(A[i]);
    }
    
    return B;
}
