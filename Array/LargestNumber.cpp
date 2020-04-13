int myCompare(string X, string Y){
        string XY = X.append(Y);
        string YX = Y.append(X);
        return XY.compare(YX) > 0 ? 1: 0;
}
string Solution::largestNumber(const vector<int> &A) {
    int check = 0;
    string result, x;
    vector<string> B;
    for(int i=0; i<A.size(); i++){
        x = to_string(A[i]);
        B.push_back(x);
    }
    sort(B.begin(), B.end(), myCompare);
    for(int i=0; i<B.size(); i++){
        if(B[i] == "0"){
            check++;
        }
        result+= B[i];
    }
    if(check == B.size()){
        return "0";
    }else{
    return result;
}}