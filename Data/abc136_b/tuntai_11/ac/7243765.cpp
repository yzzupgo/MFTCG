#include <bits/stdc++.h>
using namespace std;
int count_digit(int i)
{
int rem,count=0;
while(i!=0)
{
rem=i%10;
i=i/10;
count++;
}
return count;
}
int main() {
int n;
cin>>n;
int p,c=0;
for(int i=1;i<=n;i++)
{
p=count_digit(i);
if(p%2==1)
c++;
}
cout<<c;
return 0;
}
