#include<bits/stdc++.h>
using namespace std;
#define vite ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tst ll T; cin>>T; while(T--)
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
#define ll long long int
#define vt vector
#define pb push_back
int main()
{
vite;
ll a, b;
cin >> a >> b;
if(b%2==0)
{
b = b / 2;
if(b==a)
cout << "Yes";
else if(b<=2*a)
cout << "Yes";
else
cout << "No";
}
else
cout << "No";
return 0;
}
