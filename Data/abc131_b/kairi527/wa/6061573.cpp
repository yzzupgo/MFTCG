#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L ;
cin >> N >> L;
int sum = 0;
int mi = INT_MAX;
for(int i = 1; i <= N; i++){
int taste = L + i-1;
sum += taste;
mi = min(mi, taste);
}
cout << sum - mi << endl;
}
