int Solution::findMedian(vector<vector<int> > &A) {
    int min = INT_MAX, max = INT_MIN;
    int r = A.size(), c = A[0].size();
    for(int i = 0; i < r; i++){
        if(A[i][0] < min){
            min = A[i][0];
        }
        if(A[i][c-1] > max){
            max = A[i][c-1];
        }
    }
    int desired = (r * c + 1) / 2;
    while(min < max){
        int mid = (min + max) / 2;
        int place = 0;
        for(int i = 0; i< r; i++){
            place += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
        }
        if(place < desired){
            min = mid + 1;
        }else{
            max = mid;
        }
    }
    return min;
}
