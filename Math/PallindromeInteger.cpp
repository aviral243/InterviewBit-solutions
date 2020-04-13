int Solution::isPalindrome(int A) {
    int digit = 0, B = 0, temp = 0, copy;
    copy = A;
    if(A < 0){
        return 0;
    }
    for(int i=A; i!=0; i = i/10){
        digit++;
    }
    int digits = digit;
    for(int i = 0; i<digits; i++){
        temp = A % 10;
        A = A / 10;
        B += pow(10, digit-1) * temp;
        digit--;
    }
    
    if(copy == B){
        return 1;
        // return B;
    } else{
        // return B;
        return 0;
    }
}
