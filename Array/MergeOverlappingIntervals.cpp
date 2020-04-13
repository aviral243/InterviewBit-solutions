/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
// bool compareInterval(Interval I1, Interval I2){
    return (I1.start < I2.start);
}

vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> res;
    
    if(A.size() == 0){
        return res;
    }
    sort(A.begin(), A.end(), compareInterval);
    res.push_back(A[0]);

    for(int i=1; i<A.size(); i++){
        Interval top = res.back();
        if(top.end < A[i].start ){
            res.push_back(A[i]);
        }else if(top.end < A[i].end){
            top.end = A[i].end;
            res.pop_back();
            res.push_back(top);
        }
    }
    return res;
}
