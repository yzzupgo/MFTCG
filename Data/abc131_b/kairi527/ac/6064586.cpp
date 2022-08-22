#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L ;
cin >> N >> L;
int sum = 0;
int mi = INT_MAX;
int memo;
for(int i = 1; i <= N; i++){
int taste = L + i-1;
sum += taste;
if(mi > abs(sum - (sum - taste))){
mi = abs(sum - (sum - taste));
memo = taste;
}
}
cout << sum - memo << endl;
}
