// https://www.interviewbit.com/problems/n-max-pair-combinations/

vector<int> Solution::solve(vector<int> &A, vector<int> &B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    vector<int> res;
    int N = A.size();

    priority_queue<pair<int, pair<int, int>>> pq;

    set<pair<int, int>> indices;

    pq.push(make_pair((A[N - 1] + B[N - 1]), make_pair(N - 1, N - 1)));
    indices.insert(make_pair(N - 1, N - 1));

    for (int count = 0; count < N; count++)
    {
        pair<int, pair<int, int>> temp = pq.top();
        pq.pop();
        res.push_back(temp.first);

        int i = temp.second.first;
        int j = temp.second.second;

        int sum = A[i - 1] + B[j];

        pair<int, int> tempIndex = make_pair(i - 1, j);

        if (indices.find(tempIndex) == indices.end())
        {
            pq.push(make_pair(sum, tempIndex));
            indices.insert(tempIndex);
        }

        sum = A[i] + B[j - 1];
        tempIndex = make_pair(i, j - 1);

        if (indices.find(tempIndex) == indices.end())
        {
            pq.push(make_pair(sum, tempIndex));
            indices.insert(tempIndex);
        }
    }
    return res;
}
