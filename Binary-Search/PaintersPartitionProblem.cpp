int getMax(vector<int> A) {
    int max = INT_MIN;
    int n = A.size();
    for(int i =0; i < n; i++) {
        if(A[i] > max){
            max = A[i];
        }
    }
    return max;
}

int getSum(vector<int> A) {
    int total =0, n = A.size();
    for(int i =0; i<n;i++) {
        total += A[i];
    }
    return total;
}

int numberOfPainters(vector<int> A, int maxlen) {
    int total = 0, numPainters = 1;
    int n = A.size();
    for(int i =0; i<n; i++) {
        total += A[i];
        if(total > maxlen) {
            total = A[i];
            numPainters++;
        }
    }
    return numPainters;
}

int Solution::paint(int A, int B, vector<int> &C) {
   long long int n = C.size();
   long long int lo = getMax(C);
   long int hi = getSum(C);
   
   while(lo < hi) {
       long long int mid = lo + (hi - lo) / 2;
       long long int requires = numberOfPainters(C, mid);
       
       if(requires <= A) {
           hi = mid;
       } else {
           lo = mid+1;
       }
   }
    lo = (lo*B) % 10000003;
    return lo;
}
