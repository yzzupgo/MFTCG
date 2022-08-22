#include <bits/stdc++.h>
#define mp make_pair
#define F first
#define S second
#define ll long long
using namespace std;
const int LIM = 4e6+3;
pair<int,int> arr[LIM+3];
int main(){
int n;cin >> n;
int Ans = 0;
for(int i = 1;i<=n;i++)
{
string s = to_string(i);
if((s.size())%2 == 1)Ans++;
}
cout <<Ans << endl;
}
