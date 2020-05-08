// https://www.interviewbit.com/problems/distinct-numbers-in-window/

vector<int> Solution::dNums(vector<int> &A, int B)
{
    unordered_map<int, int> len;
    vector<int> count;
    if (B > A.size())
    {
        return count;
    }
    for (int i = 0; i < B; i++)
    {
        if (len.find(A[i]) == len.end())
        {
            len[A[i]] = 1;
        }
        else
        {
            len[A[i]]++;
        }
    }
    count.push_back(len.size());

    for (int i = B; i < A.size(); i++)
    {
        if (len[A[i - B]] == 1)
        {
            len.erase(A[i - B]);
        }
        else
        {
            len[A[i - B]]--;
        }

        if (len.find(A[i]) == len.end())
        {
            len[A[i]] = 1;
        }
        else
        {
            len[A[i]]++;
        }

        count.push_back(len.size());
    }
    return count;
}
