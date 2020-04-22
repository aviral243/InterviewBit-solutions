// https://www.interviewbit.com/problems/minimize-the-absolute-difference/
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C)
{
    int mind, curr, maxterm;
    int m = A.size() - 1, n = B.size() - 1, o = C.size() - 1;
    mind = abs(max(A[m], max(B[n], C[o])) - min(A[m], min(B[n], C[o])));
    while (m != -1 && n != -1 && o != -1)
    {
        curr = abs(max(A[m], max(B[n], C[o])) - min(A[m], min(B[n], C[o])));
        if (curr < mind)
        {
            mind = curr;
        }
        maxterm = max(A[m], max(B[n], C[o]));
        if (maxterm == A[m])
        {
            m--;
        }
        else if (maxterm == B[n])
        {
            n--;
        }
        else
        {
            o--;
        }
    }
    return mind;
}
