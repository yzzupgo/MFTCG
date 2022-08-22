#include<iostream>
using namespace std;
int apple[205];
int main(void)
{
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,l,sum=0;
cin >> n >> l;
for(int i=1;i<=n;i++)
apple[i]=l+i-1;
if(apple[1]>=0)
{
for(int i=2;i<=n;i++)
sum+=apple[i];
cout << sum;
return 0;
}
for(int i=1;i<=n;i++)
sum+=apple[i];
cout << sum;
return 0;
}
