//  https://www.interviewbit.com/problems/fraction/

string Solution::fractionToDecimal(int numerator, int denominator)
{
    string res;
    map<int, int> mp;
    mp.clear();
    int sign;
    if (numerator == 0)
    {
        return "0";
    }
    if ((numerator > 0 && denominator > 0) || (numerator < 0 && denominator < 0))
    {
        sign = 0;
    }
    else
    {
        sign = -1;
    }
    long long int num = numerator;
    long long int den = denominator;
    num = abs(num);
    den = abs(den);
    long long int rem = num % den;
    long long int origrem = rem;

    while (rem != 0 && (mp.find(rem) == mp.end()))
    {
        mp[rem] = res.length();
        rem = rem * 10;

        long long int res_part = rem / den;
        // cout << res_part << endl;
        res += to_string(res_part);
        rem = rem % den;
    }
    string recur = res.substr(mp[rem]);
    string nrecur = res.substr(0, mp[rem]);
    string sol;
    if (sign == -1)
    {
        sol += "-";
    }
    sol += to_string(num / den);
    if (rem == 0 && origrem != 0)
    {
        sol += ".";
        sol += res;
    }
    else if (rem != 0 && origrem != 0)
    {
        sol += ".";
        sol += nrecur;
        sol += "(";
        sol += recur;
        sol += ")";
    }
    return sol;
}