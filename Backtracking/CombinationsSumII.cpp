// https://www.interviewbit.com/problems/combination-sum-ii/

void backtrack(vector<int> &A, vector<int> &row, int start, int sum, int B, vector<vector<int>> &res)
{
    if (sum >= B)
    {
        if (sum == B)
        {
            res.push_back(row);
        }
        return;
    }
    if (start == A.size())
    {
        return;
    }
    row.push_back(A[start]);
    sum += A[start];
    backtrack(A, row, start + 1, sum, B, res);
    sum -= row[row.size() - 1];
    row.pop_back();
    backtrack(A, row, start + 1, sum, B, res);
}

vector<vector<int>> Solution::combinationSum(vector<int> &A, int B)
{
    sort(A.begin(), A.end());
    vector<vector<int>> res;
    vector<int> row;

    backtrack(A, row, 0, 0, B, res);
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    return res;
}
