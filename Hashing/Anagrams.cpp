// https://www.interviewbit.com/problems/anagrams/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> anagrams(const vector<string> &A)
{
    vector<vector<int>> sol;
    unordered_map<string, vector<int>> myMap;
    string temp;
    for (int i = 0; i < A.size(); i++)
    {
        temp = A[i];
        sort(temp.begin(), temp.end());
        myMap[temp].push_back(i + 1);
    }

    auto it = myMap.begin();

    while (it != myMap.end())
    {
        if ((it->second).size() > 1)
            sol.push_back(it->second);
        it++;
    }

    return sol;
}

int main()
{
    vector<string> A;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        A.push_back(s);
    }
    vector<vector<int>> sol;
    sol = anagrams(A);
    for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < sol[i].size(); j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}