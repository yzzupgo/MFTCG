#include <iostream>
using namespace std;
int main()
{
int n, ans = 0, temp = 0;
cin >> n;
temp = n;
for(int i=10; i<1000000; i*=10)
{
if(i==10 || i==1000 || i==100000)
{
if((n /= i) == 0)
{
ans += n - (i / 10) + 1;
break;
}
else
{
ans += i - (i / 10);
}
}
}
cout << ans << endl;
return 0;
}
