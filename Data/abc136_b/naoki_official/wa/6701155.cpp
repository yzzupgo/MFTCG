#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int s = 0;
if (N/100000 > 0) s += 90909;
else if (N/10001 > 0) s += N - 9999 + 909;
else if (N/1001 > 0) s += 909;
else if (N/101 > 0) s += N - 99 + 9;
else if (N/11 > 0) s += 9;
else if (N > 1) s = N - 1;
else s = 0;
cout << s;
return 0;
}
