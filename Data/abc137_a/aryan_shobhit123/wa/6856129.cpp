#include<bits/stdc++.h>
using namespace std;
int main(){
long long n, res = 0;
cin >> n;
map<string, int> m;
for(int i=0;i<n;i++)
{
string s;
cin >> s;
sort(s.begin(), s.end());
res += m[s];
m[s]++;
}
cout << res << endl;
}
