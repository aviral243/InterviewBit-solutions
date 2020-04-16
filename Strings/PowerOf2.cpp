int Solution::power(string A) {
    int len = A.size();
    int num = 0;
    int i , j;
    if(len == 1 && (A[len-1] == '1' || A[len - 1] == '0')) {
        return 0;
    }
    
    while(len != 1 || A[len - 1] != '1') {
        if((A[len - 1] - '0') % 2 == 1){
            return 0;
        }
        
        for(i = 0, j=0; i <len; i++) {
            num = num * 10 + A[i] - '0';
            
            if(num < 2) {
                if( i!=0) {
                    A[j++] = '0';
                }
                continue;
            }
            A[j++] = (int)(num / 2) + '0';
            num = (num) - (num / 2) * 2;
        }
        len = j;
    }
    return 1;
}
