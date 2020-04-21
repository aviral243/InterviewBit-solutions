// https://www.interviewbit.com/problems/sliding-window-maximum/

vector<int> Solution::slidingMaximum(const vector<int> &A, int B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> v;
    deque<int> dq;

    for (auto i = 0; i < A.size(); i++)
    {
        if (!dq.empty() && dq.front() == i - B)
            dq.pop_front();

        while (!dq.empty() && A[i] >= A[dq.back()])
            dq.pop_back();

        dq.push_back(i);

        if (i >= B - 1)
            v.push_back(A[dq.front()]);
    }

    return v;
}
