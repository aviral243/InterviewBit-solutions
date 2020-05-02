// https://www.interviewbit.com/problems/combinations/

void backtrack(int A, int st, int B, vector<vector<int>> &v, vector<int> v1)
{
    if (v1.size() == B)
    {
        v.push_back(v1);
        return;
    }
    else if (st > A)
    {
        return;
    }
    for (int i = st; i <= A; i++)
    {
        vector<int> t(v1);
        t.push_back(i);
        backtrack(A, i + 1, B, v, t);
    }
}

vector<vector<int>> Solution::combine(int A, int B)
{
    vector<vector<int>> v;
    for (int i = 1; i <= A; i++)
    {
        vector<int> v1(1, i);
        backtrack(A, i + 1, B, v, v1);
    }

    return v;
}
