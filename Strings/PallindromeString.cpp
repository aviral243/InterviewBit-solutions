int Solution::isPalindrome(string A) {
    string s1, s2;
    int flag = 1;
    if(A.length() == 0){
        return 0;
    }
    for(int i = 0; i<A.length(); i++){
        A[i] = tolower(A[i]);
    }
    for(int i = 0 ; i<A.length(); i++){
        if((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z') || (A[i] >= '0' && A[i] <= '9')){
            s1.push_back(A[i]);
        }
    }
    for(int i = A.length() - 1 ; i>=0; i--){
        if((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z') || (A[i] >= '0' && A[i] <= '9')){
            s2.push_back(A[i]);
        }
    }
    int l = 0;
    for(int i =0; i<s1.length(); i++){
        if(s1[i] != s2[l]){
            flag = 0;
            break;
        }
        l++;
    }
    return flag;
}
