// https://www.interviewbit.com/problems/rain-water-trapped/
int Solution::trap(const vector<int> &A)
{
    int n = A.size();
    int res = 0;
    int lo = 0, hi = n - 1;
    int left_max = 0, right_max = 0;
    while (lo <= hi)
    {
        if (A[lo] < A[hi])
        {
            if (left_max < A[lo])
            {
                left_max = A[lo];
            }
            else
            {
                res += left_max - A[lo];
            }
            lo++;
        }
        else
        {
            if (right_max < A[hi])
            {
                right_max = A[hi];
            }
            else
            {
                res += right_max - A[hi];
            }
            hi--;
        }
    }
    return res;
}
