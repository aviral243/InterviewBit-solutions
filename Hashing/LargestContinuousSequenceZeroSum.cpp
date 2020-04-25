// https://www.interviewbit.com/problems/largest-continuous-sequence-zero-sum/

vector<int> Solution::lszero(vector<int> &A)
{
    unordered_map<int, int> presum;
    int sum = 0, start = -1, end = -1, len = INT_MIN;
    presum.insert({0, -1});
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        if (presum.find(sum) != presum.end())
        {
            if ((i - presum[sum]) > len)
            {
                start = presum[sum] + 1;
                end = i;
                len = i - presum[sum];
            }
        }
        else
        {
            presum.insert({sum, i});
        }
    }
    vector<int> res;
    if (start >= 0 && end >= 0)
    {
        for (int i = start; i <= end; i++)
        {
            res.push_back(A[i]);
        }
    }
    return res;
}