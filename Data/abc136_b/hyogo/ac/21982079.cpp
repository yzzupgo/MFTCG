#include <bits/stdc++.h>
using namespace std;
int main()
{
long long n;
cin >> n;
long long count = 0;
if(n>9){
count += 9;
if (n > 999)
{
count += 9 * 10 * 10;
if(n>99999){
count += 9 * 10 * 10 * 10 * 10;
} else if (n>9999){
count += (n / 10000-1) * 10 * 10 * 10 * 10;
count += n - (n / 10000) * 100 * 100+1;
}
}
else if (n>99){
count += (n/ 100-1) * 10 * 10;
count += n - (n / 100) * 10 * 10+1;
}
}
else
{
count += n;
}
cout << count;
return 0;
}
