// https://www.interviewbit.com/problems/window-string/

string Solution::minWindow(string A, string B)
{
    const int chars = 256;
    int len1 = A.size(), len2 = B.size();
    if (len1 < len2)
    {
        return "";
    }

    int hash_pat[chars] = {0};
    int hash_str[chars] = {0};

    for (int i = 0; i < len2; i++)
    {
        hash_pat[B[i]]++;
    }

    int start = 0, start_index = -1, min_len = INT_MAX;
    int count = 0;
    for (int j = 0; j < len1; j++)
    {
        hash_str[A[j]]++;

        if (hash_pat[A[j]] != 0 &&
            hash_str[A[j]] <= hash_pat[A[j]])
        {
            count++;
        }

        if (count == len2)
        {
            while (hash_str[A[start]] > hash_pat[A[start]] || hash_pat[A[start]] == 0)
            {
                if (hash_str[A[start]] > hash_pat[A[start]])
                {
                    hash_str[A[start]]--;
                }
                start++;
            }

            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }

    if (start_index == -1)
    {
        return "";
    }

    return A.substr(start_index, min_len);
}
