int Solution::isPower(int A) {
    if(A==1) return true;
    
    for(int x =2; x*x<=A; x++){
        double val = log(A) / log(x);
        if((val - (int)val) < 0.001){
            return true;
        }
    }
    return false;
}
