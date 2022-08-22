#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int N;
int L;
cin>> N >> L;
int sum=0;
int diff=L;
for(int i=1;i<=N;i++)
{
sum+=L+i-1;
if(diff>abs(L+i-1))
{
diff=L+i-1;
}
}
cout<<sum-diff<<endl;
}
