#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int i = 1, c = 0, f = 0,k;
string s = "";
while(i <= n)
{
c++, i++;
s = to_string(i);
sort(s.begin(), s.end());
if( s[0] == '9' and s[s.size()-1] == '9')
{
if(f == 0) k = 100,f=1;
else k *= 100;
i = k;
c++;
}
}
cout << c;
}
