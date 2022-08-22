#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L,absmin=100000,taste=0,minn;
cin >> N >> L;
for (int i = 1; i <= N; i++)
{
taste += L + i - 1;
if (abs(L + i - 1) <= absmin){
minn = L + i - 1;
}
absmin = min(abs(L + i - 1), absmin);
}
cout << taste-minn << endl;
}
