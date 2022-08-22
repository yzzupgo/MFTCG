#include <bits/stdc++.h>
using namespace std;
ifstream f("A.in");
typedef long long ll;
int main()
{
ll X,Y;
cin>>X>>Y;
if(Y%2==0 && (Y/2-X)>=0 && (Y/2-X)<=X ) cout<<"YES";
else cout<<"NO";
}
