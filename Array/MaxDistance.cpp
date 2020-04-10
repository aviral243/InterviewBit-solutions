int Solution::maximumGap(const vector<int> &A) {
    // int n = A.size();
    // if(A.size() == 0){
    //     return -1;
    // }
    // int maxd, i, j;
    // vector<int> lmin(A.size(), 0), rmax(A.size(), 0);
    // lmin.push_back(A[0]);
    // for(i=1; i< n; i++){
    //     lmin.push_back(min(A[i], lmin[i-1]));
    // }
    
    // rmax[n-1] = A[n-1];
    // for(j = n-2; j>=0; j--){
    //     rmax[j] = max(A[j], rmax[j+1]);
    // }
    
    // i=0, j=0, maxd = -1;
    
    // while(j < n && i < n) {
    //     if(lmin[i] <= rmax[j]) {
    //         maxd = max(maxd, j-i);
    //         j++;
    //     } else {
    //         i++;
    //     }
    // }
    
    // return maxd;
    int n=A.size();
   // if(n==1) return 0;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(A[i],i));
    }
    sort(v.begin(),v.end());
    int ans=0;
    int rmax=v[n-1].second;
    for(int i=n-2;i>=0;i--){
        ans=max(ans,rmax-v[i].second);
        rmax=max(rmax,v[i].second);
    }
    return ans;
}
