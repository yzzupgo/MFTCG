#include "bits/stdc++.h"
using namespace std;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int N;
cin >> N;
if (0 <= log10(N) && log10(N) < 1)
{
cout << N << "\n";
}
else if (1 <= log10(N) && log10(N) < 2)
{
cout << 9 << "\n";
}
else if (2 <= log10(N) && log10(N) < 3)
{
cout << N-99+9 << "\n";
}
else if (3 <= log10(N) && log10(N) < 4)
{
cout << 909 << "\n";
}
else if (4 <= log10(N) && log10(N) < 5)
{
cout << N-9999+909 << "\n";
}
else if (N == 100000){
cout << 90909 << "\n";
}
}
