// https://www.interviewbit.com/problems/subsets-ii/

void backtrack(vector<int> &A, vector<int> &row, int start, vector<vector<int>> &res)
{
    res.push_back(row);

    for (int i = start; i < A.size(); i++)
    {
        row.push_back(A[i]);
        backtrack(A, row, i + 1, res);
        row.pop_back();
    }
}

vector<vector<int>> Solution::subsetsWithDup(vector<int> &A)
{
    sort(A.begin(), A.end());
    vector<vector<int>> res;
    vector<int> row;
    backtrack(A, row, 0, res);
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    return res;
}
