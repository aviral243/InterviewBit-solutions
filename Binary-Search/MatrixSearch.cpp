// int Solution::searchMatrix(vector<vector<int> > &A, int B) {
//     int low1 = 0, low2 = 0;
//     int high1 = A.size()-1, high2 = A[0].size()-1;
//     int mid1, mid2;
//     while(low1 <= high1 && low2 <= high2) {
//         mid1 = (low1 + high1) /2;
//         mid2 = (low2 + high2) / 2;
//         if(A[mid1][mid2] == B) {
//             return 1;
//         }else if(A[mid1][mid2] < B) {
//             low1 = mid1 + 1;
//             low2 = mid2 + 1;
//         }else {
//             high1 = mid1;
//             high2 = mid2;
//         }
//     }
//     return 0;
// }
int Solution::searchMatrix(vector<vector<int> > &A, int x) {
    int r=A.size(),c=A[0].size();
    int row=-1;
    for(int i=0;i<r;i++){
        if(x>=A[i][0]&&x<=A[i][c-1]){
            row=i;
            break;
        }
    }
    if(row==-1) return 0;
    int low=0,high=c-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[row][mid]==x) return 1;
        if(A[row][mid]<x) low=mid+1;
        else high=mid-1;
    }
    return 0;
}