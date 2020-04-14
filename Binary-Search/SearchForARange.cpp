vector<int> Solution::searchRange(const vector<int> &A, int B) {
   vector<int> res;
   int n = A.size();
   int maxo= 0;
   int mino = 0;
   int lo = 0, hi = n - 1;
   while(lo <= hi) {
       int mid = (lo + hi)/2;
       if( (mid == 0 || A[mid - 1] < B) && A[mid] == B) {
           mino = mid;
           break;
       } else if (A[mid] < B) {
           lo = mid + 1;
       }else {
           hi = mid - 1;
       }
       mino = -1;
   }
   lo = 0, hi = n - 1;
   while(lo <= hi) {
       int mid = (lo + hi)/2;
       if( (mid == n-1 || A[mid + 1] > B) && A[mid] == B) {
           maxo = mid;
           break;
       } else if (A[mid] > B) {
           hi = mid - 1;
       }else {
           lo = mid + 1;
       }
       maxo = -1;
   }
   res.push_back(mino);
   res.push_back(maxo);
   return res;
}
