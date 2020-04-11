vector<int> Solution::subUnsort(vector<int> &A) {
    // vector<pair<int,int> > vec;
    // vector<int> res;
    // int n = A.size();
    // for(int i = 0; i < n; i++) {
    //     vec.push_back(make_pair(A[i], i));
    // }
    // sort(A.begin(), A.end());
    
    // for(int i = 0; i< n; i++) {
    //     if(A[i] == vec[i].first){
    //         continue;
    //     }
    //     else {
    //         res.push_back(vec[i].second);
    //         break;
    //     }
    // }
    // for(int i = n-1; i>=0; i--) {
    //     if(A[i] == vec[i].first){
    //         continue;
    //     }
    //     else {
    //         res.push_back(vec[i].second);
    //         break;
    //     }
    // }
    // if(res.size() == 0) {
    //     res.push_back(-1);
    // }
    // return res;
    int n = A.size();
    int s = 0, e = n-1, i, max, min;
   
    vector <int> res;
    
    for(s =0; s<n-1; s++) {
        if(A[s] > A[s+1]) {
            break;
        }        
    }
    
    if(s == n-1) {
        res.push_back(-1);
        return res;
    }
    
    for(e = n-1; e > 0; e--) {
        if(A[e] < A[e-1]) {
            break;
        }
    }
    
    max = A[s]; min = A[s];
    
    for(i = s+1; i<=e; i++) {
        if(A[i] > max) {
            max = A[i];
        }
        if(A[i] < min) {
            min = A[i];
        }
    }
    
    for(i = 0 ; i<s; i++) {
        if(A[i] > min) {
            s = i;
            break;
        }
    }
    
    for(i = n-1 ; i>=e+1; i--) {
        if(A[i] < max) {
            e = i;
            break;
        }
    }
    res.push_back(s);
    res.push_back(e);
    return res;    
}
