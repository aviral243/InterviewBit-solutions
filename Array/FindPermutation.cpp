vector<int> Solution::findPerm(const string A, int B) {
    vector<int> sol;
    int min_av = 1, posI = 0;
    
    if(A[0] == 'I') {
        sol.push_back(1);
        sol.push_back(2);
        min_av = 3;
        posI = 1;
    }else {
        sol.push_back(2);
        sol.push_back(1);
        min_av = 3;
        posI = 0;
    }
    
    for(int i = 1; i<A.size(); i++) {
        if(A[i] == 'I'){
            sol.push_back(min_av);
            min_av++;
            posI = i+1;
        } else {
            sol.push_back(sol[i]);
            for(int j = posI; j<=i; j++){
                sol[j]++;
            }
            min_av++;
            
        }
    }
    return sol;
}
