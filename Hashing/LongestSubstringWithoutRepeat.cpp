// https://www.interviewbit.com/problems/longest-substring-without-repeat/

int Solution::lengthOfLongestSubstring(string A)
{
    if (A.size() == 1)
    {
        return 1;
    }
    unordered_map<char, int> subs;
    int len = 0;
    vector<int> res;
    for (int i = 0; i < A.size(); i++)
    {
        if (subs.find(A[i]) == subs.end())
        {
            subs[A[i]] = i;
            len++;
        }
        else
        {
            res.push_back(len);
            len = 0;
            i = subs[A[i]];
            subs.clear();
        }
    }
    res.push_back(len);
    int max_len = INT_MIN;
    for (int i = 0; i < res.size(); i++)
    {
        max_len = max(res[i], max_len);
    }
    return max_len;
}
