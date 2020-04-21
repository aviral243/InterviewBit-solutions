// https://www.interviewbit.com/problems/largest-rectangle-in-histogram/

int Solution::largestRectangleArea(vector<int> &A)
{
    stack<int> s;
    int max_area = 0;
    int tp;
    int area_with_top;
    int i = 0, n = A.size();
    while (i < n)
    {
        if (s.empty() || A[i] >= A[s.top()])
        {
            s.push(i++);
        }
        else
        {
            tp = s.top();
            s.pop();

            area_with_top = A[tp] * (s.empty() ? i : i - s.top() - 1);
            max_area = max(max_area, area_with_top);
        }
    }

    while (!s.empty())
    {
        tp = s.top();
        s.pop();
        area_with_top = A[tp] * (s.empty() ? i : i - s.top() - 1);
        max_area = max(max_area, area_with_top);
    }
    return max_area;
}
