// https://www.interviewbit.com/problems/max-continuous-series-of-1s/

vector<int> Solution::maxone(vector<int> &A, int B)
{
    int wL = 0, wR = 0;
    int n = A.size();
    int bestL = 0, bestWindow = 0;
    int zeroCount = 0;
    while (wR < n)
    {
        if (zeroCount <= B)
        {
            if (A[wR] == 0)
            {
                zeroCount++;
            }
            wR++;
        }
        if (zeroCount > B)
        {
            if (A[wL] == 0)
            {
                zeroCount--;
            }
            wL++;
        }
        if (wR - wL > bestWindow && (zeroCount <= B))
        {
            bestWindow = wR - wL;
            bestL = wL;
        }
    }
    vector<int> sol;
    for (int i = bestL; bestWindow > 0; i++)
    {
        sol.push_back(i);
        bestWindow--;
    }
    return sol;
}
