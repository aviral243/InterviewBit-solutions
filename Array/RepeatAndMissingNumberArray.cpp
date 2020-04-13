vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int sqsum=0, sum=0;
    long long int n = A.size();
    long long int calcsqsum=0, calcsum=0;
    sqsum = (n*(n+1)*(2*n + 1))/6;
    sum = (n*(n+1))/2;
    for(long long int i=0; i<n; i++){
        calcsum += (long long)(A[i]);
        calcsqsum += (long long)(A[i]) * (long long)(A[i]);
    }
    vector <int> res;
    long long int a = ((calcsum - sum) + (calcsqsum-sqsum)/(calcsum-sum)) / 2;
    long long int b = ((calcsqsum-sqsum)/(calcsum-sum) - (calcsum - sum)) / 2;
    res.push_back(a);
    res.push_back(b);
    return res;
    
}
