int Solution::solve(string A) {
    int n = A.length(), num = 0;
    for(int i=0; i<n; i++){
        if(A[i] == 'a'|| A[i] == 'e'||A[i] == 'i'||A[i] == 'o'||A[i] == 'u'||A[i] == 'A'||A[i] == 'E'||A[i] == 'I'||A[i] == 'O'||A[i] == 'U'){
            num += n-i;            
        }
    }
    return num % 10003;
}
