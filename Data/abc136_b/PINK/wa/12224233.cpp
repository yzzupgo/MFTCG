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
for (int i=0; i<n; ++i) {
if (count_digit(n)%2 != 0) {
count++;
}
}
cout << count << endl;
return 0;
}
