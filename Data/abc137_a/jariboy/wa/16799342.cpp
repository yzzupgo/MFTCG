#include<iostream>
#include<algorithm>
using namespace std;
int ans[3];
int main()
{
int a,b;
cin >> a >> b;
ans[0]=a+b;
ans[1]=a-b;
ans[2]=a*b;
sort(ans,ans+3);
cout << ans[0];
}
