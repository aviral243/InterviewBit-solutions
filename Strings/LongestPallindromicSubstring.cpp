string Solution::longestPalindrome(string A) {
    int maxL = 1;
    int start = 0, len = A.size();
    int low, high;
    string res;
    
    for(int i=1; i<len; i++) {
        low = i-1;
        high = i;
        while(low >=0 && high<len && A[low] == A[high]) {
            if(high - low + 1 > maxL) {
                start = low;
                maxL = high - low +1;
            }
            low--;
            high++;
        }
        low = i-1;
        high = i+1;
        while(low>=0 && high<len && A[low] == A[high]) {
            if(high - low + 1 > maxL) {
                start = low;
                maxL = high - low + 1;
            }
            low--;
            high++;
        }
    }
    for(int i = start; i<=start + maxL - 1; i++) {
        res.push_back(A[i]);
    }
    return res;
}
