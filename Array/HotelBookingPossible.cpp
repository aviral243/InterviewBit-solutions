bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int, int> > ans;
    for(int i =0; i<arrive.size(); i++) {
        ans.push_back(make_pair(arrive[i], 1));
        ans.push_back(make_pair(depart[i], 0));
    }
    
    sort(ans.begin(), ans.end());
    
    int curr = 0, maxa = 0;
    
    for(int i = 0; i < ans.size(); i++) {
        if(ans[i].second == 1) {
            curr++;
            maxa = max(maxa, curr);
        } else {
            curr--;
        }
    }
    return(K >= maxa);
}
