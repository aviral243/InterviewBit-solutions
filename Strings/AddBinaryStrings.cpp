string Solution::addBinary(string A, string B) {
    int m = A.size(), n = B.size();
    int size = m < n ? m : n;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int cy = 0;
    string res;
    
    for(int i = 0; i<size; i++) {
        if(A[i] == '0' && B[i] == '0'){
            res += to_string(cy);
            cy = 0;
        } else if((A[i] == '0' && B[i] == '1') || (A[i] == '1' && B[i] == '0')) {
            if(cy == 1) {
                res += '0';
                cy = 1;
            } else {
                res += '1';
            }
        } else if (A[i] == '1' && B[i] == '1') {
            if(cy == 1) {
                res += '1';
                cy = 1;
            } else {
                res += '0';
                cy = 1;
            }
        }
    }
    
    for(int i = size; i < m; i++) {
        if(A[i] == '0') {
            if(cy) {
                res += '1';
                cy = 0;
            }else {
                res += '0';
            }
        } else {
            if(cy) {
                res += '0';
                cy = 1;
            }else {
                res += '1';
            }
        }
    }
    for(int i = size; i < n; i++) {
        if(B[i] == '0') {
            if(cy) {
                res += '1';
                cy = 0;
            }else {
                res += '0';
            }
        } else {
            if(cy) {
                res += '0';
                cy = 1;
            }else {
                res += '1';
            }
        }
    }
    
    if(cy == 1){
        res += '1';
    }
    
    reverse(res.begin(), res.end());
    return res;
    
}

// string Solution::addBinary(string A, string B) {
//     reverse(A.begin(), A.end());
//     reverse(B.begin(), B.end());
//     auto aS = A.length(), bS = B.length();
//     int n = aS>=bS ? aS : bS;
//     int c = 0;
//     string result = "";
//     for (auto i = 0; i<n; ++i)
//     {
//         int a = i < aS ? A[i] - '0' : 0;
//         int b = i < bS ? B[i] - '0' : 0;
//         int temp = a + b + c;
//         c = temp / 2;
//         result += to_string(temp%2);
//     }
//     if (c==1)
//         result += to_string(c);
//     reverse(result.begin(), result.end());
//     return result;
// }

