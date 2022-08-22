#include<bits/stdc++.h>
using namespace std;
int main() {
int N,ans=0;
cin >> N;
for (int i = 1; i <= N; i++)
{
int l = to_string(i).length();
if( l % 2 == 1) ++ans;
}
cout << ans << endl;
}
