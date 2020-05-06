// https://www.interviewbit.com/problems/generate-all-parentheses-ii/

void backtrack(string &row, int open, int close, int n, vector<string> &res)
{
    if (close == n)
    {
        res.push_back(row);
        return;
    }
    else
    {
        if (open < n)
        {
            row += "(";
            backtrack(row, open + 1, close, n, res);
            row.pop_back();
        }

        if (open > close)
        {
            row += ")";
            backtrack(row, open, close + 1, n, res);
            row.pop_back();
        }
    }
}

vector<string> Solution::generateParenthesis(int A)
{
    vector<string> res;
    string row;
    backtrack(row, 0, 0, A, res);
    return res;
}
