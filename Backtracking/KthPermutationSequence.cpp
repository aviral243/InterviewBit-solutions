// https://www.interviewbit.com/problems/kth-permutation-sequence/

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

string Solution::getPermutation(int A, int B)
{
    string res;
    vector<int> num;
    for (int i = 1; i <= A; i++)
    {
        num.push_back(i);
    }

    int index = B - 1;
    for (int i = 1; i <= A; i++)
    {
        int j = index / fact(A - i);
        res += to_string(num[j]);
        index = index - fact(A - i) * (j);
        num.erase(num.begin() + j);
    }
    return res;
}

// int fact(int n)
// {
//     if (n>12)
//         return INT_MAX;
//     int f = 1;
//     for (auto i = 2; i<=n; ++i)
//         f *= i;
//     return f;
// }
// string backtracking(int k, vector<int>& numlist)
// {
//     auto n = numlist.size();
//     if (n==0 || k > fact(n))
//         return "";
//     int f = fact(n-1);
//     int pos = k / f;
//     k %= f;
//     string ch = to_string(numlist[pos]);
//     numlist.erase(numlist.begin() + pos);
//     return ch + backtracking(k, numlist);
// }
// string Solution::getPermutation(int n, int k) {
//     vector<int> numlist;

//     for (auto i = 1; i<n+1; ++i)
//         numlist.emplace_back(i);
//     return backtracking(k-1, numlist);
// }