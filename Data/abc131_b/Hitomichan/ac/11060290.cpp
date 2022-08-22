#include <iostream>
#include <cmath>
using namespace std;
int main () {
int N,L;
cin >> N >>L;
int sum = 0, ab = abs(L), del = L;
for (int i = 0 ; i < N ; i++)
{
sum += L + i;
if (ab > abs(L + i)) {
ab = abs(L + i);
del = L + i;
}
}
cout<<(del > 0 ? sum - del : sum - del)<<endl;
}
