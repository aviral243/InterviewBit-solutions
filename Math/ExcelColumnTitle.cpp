string Solution::convertToTitle(int A) {
    int d, flag=0;;
    string res;
    // if(A == 1){
    //     res+= 'A';
    // }
    while(A) {
        d = A%26;
        if(flag) d--;
        if(flag && A==1){
            break;
        }
        if(d==0){
            res+='Z';
            A = (A/26) - 1;
        } else{
            res += 'A' + (d - 1);
            A = A/26;
            
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
