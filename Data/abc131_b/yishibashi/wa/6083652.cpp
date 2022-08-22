#include <iostream>
using namespace std;
int main()
{
int N, L;
cin >> N >> L;
int sum = L * N + (N * (N-1)) / 2;
if (L <= 0 && L + N >= 0){
cout << sum << endl;
} else {
int d = min(abs(L), abs(L+N-1));
if(d == abs(L)){
cout << sum - L << endl;
} else {
cout << sum - (L+N-1) << endl;
}
}
return 0;
}
