int Solution::lengthOfLastWord(const string A) {
    int ct = 0, i = 0;
    for(i = A.length() - 1; i>=0; i--){
        if(A[i] == ' ' && ct == 0){
            continue;
        }else if(A[i] == ' '){
            break;
        }else{
        ct++;}
    }
    return ct;
}
