vector<int> Solution::getRow(int A) {
    vector<int> res;
    int c = 1;
    for(int r=0; r<=A; r++) {
        res.push_back(c);
        c = (c * (A-r)) / (r+1);
    }
    
    return res;
}
