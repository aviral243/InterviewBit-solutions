// https://www.interviewbit.com/problems/equal/

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    for (int i = 0; i < 4; i++)
    {
        if (v1[i] != v2[i])
        {
            return v1[i] < v2[i];
        }
    }
}

vector<int> Solution::equal(vector<int> &A)
{
    unordered_map<int, pair<int, int>> sum;
    vector<int> res;
    vector<vector<int>> sol;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            int sm = A[i] + A[j];
            if (sum.find(sm) == sum.end())
            {
                sum[sm] = make_pair(i, j);
            }
            else if (i != sum[sm].first && j != sum[sm].second && i != sum[sm].second && j != sum[sm].first)
            {
                res.push_back(sum[sm].first);
                res.push_back(sum[sm].second);
                res.push_back(i);
                res.push_back(j);
                sol.push_back(res);
            }
            res.clear();
        }
    }

    sort(sol.begin(), sol.end(), sortcol);

    return sol[0];
}
