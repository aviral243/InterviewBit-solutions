vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > res(A);
    if (A==0)
    return res;
    // res[0].push_back(1);
    for(int line = 1; line <= A; line++) {
        int C = 1;
        for(int i = 1; i <= line; i++) {
            res[line-1].push_back(C);
            C = (C * (line - i)) / i;
        }
    }
    return res;
}
