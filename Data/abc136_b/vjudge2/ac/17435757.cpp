#include <bits/stdc++.h>
using namespace std;
#define debug(args...) \
{ \
string _s = #args; \
replace(_s.begin(), _s.end(), ',', ' '); \
stringstream _ss(_s); \
istream_iterator<string> _it(_ss); \
err(_it, args); \
}
void err(istream_iterator<string> it)
{
}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
cerr << *it << " = " << a << endl;
err(++it, args...);
}
bool ckNumD(int i)
{
int d = 0;
while (i)
{
d++;
i /= 10;
}
if (d % 2)
return true;
else
{
return false;
}
}
int main()
{
int n;
cin>>n;
int cnt = 0;
for (int i = 1; i <= n; i++)
{
if (ckNumD(i))
cnt++;
}
cout << cnt << endl;
return 0;
}
