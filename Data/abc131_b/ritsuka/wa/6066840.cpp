#include <bits/stdc++.h>
using namespace std;
int main()
{
int N, L; cin >> N >> L;
int min = 100;
int sum = 0;
for (int i = 0; i < N; i++) {
int p = L + i;
if (min > abs(p)) min = p;
sum += p;
}
cout << sum - min << endl;
}
