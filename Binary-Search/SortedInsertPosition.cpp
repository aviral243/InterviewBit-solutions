int index(vector<int> &A, int B){
    int min = 0, max = A.size() - 1, mid = 0;
    while(min <= max){
        mid = (min + max) / 2;
        if(A[mid] == B){
            return mid;
        }else if(A[mid] < B){
            min = mid + 1;
        }else{
            max= mid - 1;
        }
    }
    return min;
}

int Solution::searchInsert(vector<int> &A, int B) {
    if(A.size() == 0){
        return 0;
    }
    int ct = index(A, B);
    return ct;
}
