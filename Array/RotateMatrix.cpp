void Solution::rotate(vector<vector<int> > &A) {
   int n=A.size();
    int k=n*n/4;
    int i=0,j=0,a;
    while(k){
        int y=A[i][j],a=4;
        int p=i,q=j;
        while(a){
           int x=A[q][n-p-1];
           A[q][n-p-1]=y;
           y=x;
           a--;
           int t=p;
           p=q;
           q=n-t-1;
        }
        if(j<n-i-2) j++;
        else{i++;j=i;}
        k--;
     }
}
