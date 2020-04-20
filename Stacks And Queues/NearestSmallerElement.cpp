// https://www.interviewbit.com/problems/nearest-smaller-element/

vector<int> Solution::prevSmaller(vector<int> &A)
{
    stack<int> s;
    int n = A.size();
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() >= A[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            res.push_back(-1);
        }
        else
        {
            res.push_back(s.top());
        }
        s.push(A[i]);
    }
    return res;
}
