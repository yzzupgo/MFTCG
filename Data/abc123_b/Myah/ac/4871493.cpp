#include <bits/stdc++.h>
using namespace std;

template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

/* define const */
const long long INF = (1LL << 60);
/* end defineing */

int func(int i)
{
    int tmp = i;
    while (tmp % 10 != 0)
        tmp++;
    return tmp;
}

int main()
{
    int a, b, c, d, e;
    int a_, b_, c_, d_, e_;
    cin >> a >> b >> c >> d >> e;

    a_ = func(a);
    b_ = func(b);
    c_ = func(c);
    d_ = func(d);
    e_ = func(e);
    // cout << "-" << a_ << b_ << c_ << d_ << e_ << endl;

    int min = 10000;

    int tmp;
    tmp = a_ + b_ + c_ + d_ + e;
    if (tmp < min)
        min = tmp;

    tmp = a_ + b_ + c_ + d + e_;
    if (tmp < min)
        min = tmp;

    tmp = a_ + b_ + c + d_ + e_;
    if (tmp < min)
        min = tmp;

    tmp = a_ + b + c_ + d_ + e_;
    if (tmp < min)
        min = tmp;

    tmp = a + b_ + c_ + d_ + e_;
    if (tmp < min)
        min = tmp;

    cout << min << endl;
}