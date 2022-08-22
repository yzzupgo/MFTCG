#include <bits/stdc++.h>
using namespace std;
int main()
{
int N,A;
cin >> N >> A;
cout << max(A+N,max(N-A,A+N)) << endl;
}
