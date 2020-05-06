// https://www.interviewbit.com/problems/permutations/

bool isPresent(vector<int> A, int x)
{
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == x)
        {
            return true;
        }
    }
    return false;
}
void backtrack(vector<int> &row, vector<vector<int>> &res, vector<int> A)
{
    if (row.size() == A.size())
    {
        res.push_back(row);
        return;
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (!isPresent(row, A[i]))
        {
            row.push_back(A[i]);
            backtrack(row, res, A);
            row.pop_back();
        }
    }
}

vector<vector<int>> Solution::permute(vector<int> &A)
{
    vector<vector<int>> res;
    vector<int> row;
    for (int i = 0; i < A.size(); i++)
    {
        row.push_back(A[i]);
        backtrack(row, res, A);
        row.pop_back();
    }
    return res;
}
