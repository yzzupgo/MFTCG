#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vt vector<string>
#define si set<int>
#define sc set<char>
#define st set<string>
#define pii pair<int,int>
#define fi first
#define se second
using namespace std;
int main()
{
int a;
cin>>a;
int b;
cin>>b;
if(a<=5)cout<<0;
else if(a>=6&&a<=12)cout<<b/2;
else cout<<b;
return 0;
}
