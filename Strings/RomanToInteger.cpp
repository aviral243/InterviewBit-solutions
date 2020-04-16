int value(char r){
    if(r == 'M'){
        return 1000;
    }else if(r == 'D'){
        return 500;
    }else if(r == 'C'){
        return 100;
    }else if(r == 'L'){
        return 50;
    }else if(r == 'X'){
        return 10;
    }else if(r == 'I'){
        return 1;
    }else if(r == 'V'){
        return 5;
    }else{
        return -1;
    }
}
int Solution::romanToInt(string A) {
    int res = 0;
    for(int i = 0; i < A.length(); i++){
        int s1 = value(A[i]);
        if(i + 1 < A.length()){
            int s2 = value(A[i+1]);
            if(s1 >= s2){
                res += s1;
            }else{
                res = res + s2 - s1;
                i++;
            }
        }else{
            res += s1;
        }
}
return res;
}