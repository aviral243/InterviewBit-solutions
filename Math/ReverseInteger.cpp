int Solution::reverse(int A) {
    int digit = 0, rem = 0;
    int sign = 0;
    int B = 0;
    long int res = 0;
    if(A==0) {
        return 0;
    }
    if(A>0){
        B = A;
    }else {
        B = abs(A);
        A = abs(A);
        sign = 1;
    }
    
    while(B) {
        B = B/10;
        digit++;
    }
    
    for(int i=digit-1; i>=0; i--) {
        rem = A%10;
        res = res + (rem*pow(10, i));
        A = A / 10;
    }
    
    if(res > INT_MAX) {
        return 0;
    }
    
    if(sign){
        res *= -1;
    }
    return res;
    
    
    // long long int a = 0;
    // long long int b = abs(A);
    // while (b != 0)
    // {
    //     a *= 10;
    //     a += (b%10);
    //     b /= 10;
    // }
    
    // if (A < 0)
    //     a *= -1;
    // if (a > INT_MAX || a < INT_MIN)
    //     return 0;
    // return a;
}
