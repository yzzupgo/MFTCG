#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int count;
if (N / 10 < 1)
count = N;
else if (N / 10 < 10)
count = 9;
else if (N / 10 < 100)
count = 10 + (N / 100 - 1) * 100 + (N % 100);
else if (N / 10 < 1000)
count = 10 + 899;
else if (N / 10 < 10000)
count = 10 + 900 + (N / 10000 - 1) * 10000 + (N % 10000);
else
count = 10 + 900 + 89999;
cout << count << endl;
return 0;
}
