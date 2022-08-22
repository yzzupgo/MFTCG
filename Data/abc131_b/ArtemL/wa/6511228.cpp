#include <iostream>
#include <string>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int f = (L-1)*N + (N*(N+1))/2;
if ((1-L) <= N && (1-L) > 0)
cout << f << "\n";
else if (L > 0)
cout << f - (L) << "\n";
else
cout << f + (L + N - 1) << "\n";
return 0;
}
