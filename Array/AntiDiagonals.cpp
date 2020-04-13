vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<int> a;
    vector<vector<int> >v;
    int n = A.size();
    int i=0,j = 0,count=0;
    int t = 2*n -1;
    while(t--)
    {
    if(count<n)
    { i=0;
    j = count ;}
    else
    { 
        i = count-n +1;
        j =n-1; }
    while(i < n && j>=0)
    { 
        a.push_back(A[i][j]);
        i++;
        j--;
    } 
    count++;
    v.push_back(a);
    a.clear();
    
    }
    return v;
    }
