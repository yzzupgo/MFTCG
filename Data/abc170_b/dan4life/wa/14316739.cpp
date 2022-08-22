#include<bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
int c=0;
c = 4*x-y;
c/=2;
if(c>=0) cout << "Yes";
else cout << "No";
}
