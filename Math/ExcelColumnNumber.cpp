int Solution::titleToNumber(string A) {
    int col=0;
    long int factor = pow(26, (A.length() -1));
    for(int i=0;i<A.length(); i++){
        col += (int(A[i]) - 64) * factor;
        factor = factor/26;
    }
    return col;
}
