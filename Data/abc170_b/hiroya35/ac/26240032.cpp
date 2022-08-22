#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
int x,y;
cin >> x >> y;
bool flag = false;
rep(i,x+1)
{
int sum = i*2+(x - i)*4;
if(sum == y){
flag = true;
break;
}
}
if(flag)cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
