#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int N, L; cin >> N >> L;
int Sum, sum;
sum = 0;
if(L >= 0) {
for(int i = 1; i < N; ++i) {
sum = sum + L + i;
}
}
else if(L >= N - 1) {
for(int i = 0; i < N; ++i) {
sum = sum + L + i;
}
}
else {
for(int i = 0; i < N - 1; ++i) {
sum = sum + L + i;
}
}
cout << sum << "\n";
return 0;
}
