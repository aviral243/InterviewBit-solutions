// https://www.interviewbit.com/problems/letter-phone/

void backtrack(int start, string A, string &row, vector<string> &res)
{
    if (row.length() == A.length())
    {
        res.push_back(row);
    }
    if (start == A.length())
    {
        return;
    }

    if (A[start] == '0')
    {
        row += "0";
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }

    if (A[start] == '1')
    {
        row += "1";
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }

    if (A[start] == '2')
    {
        row.push_back('a');
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row.push_back('b');
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row.push_back('c');
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }
    else if (A[start] == '3')
    {
        row.push_back('d');
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row.push_back('e');
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row.push_back('f');
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }
    else if (A[start] == '4')
    {
        row += "g";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "h";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "i";
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }
    else if (A[start] == '5')
    {
        row += "j";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "k";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "l";
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }
    else if (A[start] == '6')
    {
        row += "m";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "n";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "o";
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }
    else if (A[start] == '7')
    {
        row += "p";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "q";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "r";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "s";
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }
    else if (A[start] == '8')
    {
        row += "t";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "u";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "v";
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }
    else if (A[start] == '9')
    {
        row += "w";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "x";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "y";
        backtrack(start + 1, A, row, res);
        row.pop_back();
        row += "z";
        backtrack(start + 1, A, row, res);
        row.pop_back();
    }
}

vector<string> Solution::letterCombinations(string A)
{
    vector<string> res;
    string row = "";
    backtrack(0, A, row, res);
    return res;
}
