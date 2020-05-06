// https://www.interviewbit.com/problems/gray-code/

int convert(string n)
{
    int res = 0;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        res += (n[i] - '0') * pow(2, i);
    }
    return res;
}

vector<int> Solution::grayCode(int A)
{
    vector<string> res;
    vector<int> grayCode;
    if (A <= 0)
    {
        return grayCode;
    }
    res.push_back("0");
    res.push_back("1");
    for (int i = 2; i < (1 << A); i = i << 1)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            res.push_back(res[j]);
        }

        for (int j = 0; j < i; j++)
        {
            res[j] = "0" + res[j];
        }

        for (int j = i; j < 2 * i; j++)
        {
            res[j] = "1" + res[j];
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        grayCode.push_back(convert(res[i]));
    }

    return grayCode;
}
