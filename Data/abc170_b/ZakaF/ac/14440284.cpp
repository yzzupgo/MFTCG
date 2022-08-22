#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
if(k%2 || (k>n*2 && k>n*4) || n>=k || (k<n*2))
printf("No");
else
{
printf("Yes");
}
return 0;
}
