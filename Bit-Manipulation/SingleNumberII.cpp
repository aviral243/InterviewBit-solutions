int Solution::singleNumber(const vector<int> &A) {
    int ones = 0, twos = 0;
    int common;
    for(int i = 0; i<A.size(); i++){
        twos = twos | (A[i] & ones);
        ones = ones ^ A[i];
        common = ~(ones & twos);
        ones &= common;
        twos &= common;
    }
    return ones;
}
