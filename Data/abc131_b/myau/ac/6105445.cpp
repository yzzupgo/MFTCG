#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int sum = 0;
int sum_L = L;
for(int i = 0; i < N; i++){
sum += sum_L;
sum_L++;
}
if(L * (L + N - 1) <= 0){
cout << sum << endl;
}
else if (L > 0){
cout << sum - L << endl;
}
else if (L < 0){
cout << sum - (L + N - 1) << endl;
}
}
