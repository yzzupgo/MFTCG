#include <bits/stdc++.h>
using namespace std;
int count_digit(int n)
{
int count = 0;
while (n != 0) {
count++;
n /= 10;
}
return count;
}
int main()
{
int n, count = 0; cin >> n;
for (int i=n; i>=1; --i) {
if (count_digit(i)%2 != 0) {
count++;
}
}
cout << count << endl;
return 0;
}
