// https://www.interviewbit.com/problems/magician-and-chocolates/

int Solution::nchoc(int A, vector<int> &B)
{
    long long int mod = 1000000007;
    priority_queue<int> pq;
    for (int i = 0; i < B.size(); i++)
    {
        pq.push((B[i]));
    }
    long long int max = 0;
    while (A)
    {
        long long int temp = pq.top();
        max += temp;
        max %= mod;
        pq.pop();
        pq.push(temp / 2);
        A--;
    }
    return max % mod;
}
