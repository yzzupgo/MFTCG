#include <bits/stdc++.h>
using namespace std;
int main() {
int N, count = 0;
cin >> N;
if (N < 10)
count = N;
else if (N < 100)
count = 9;
else if (N < 1000)
count = N - 90;
else if (N < 10000)
count = 909;
else
count = N - 9091;
cout << count << endl;
return 0;
}
