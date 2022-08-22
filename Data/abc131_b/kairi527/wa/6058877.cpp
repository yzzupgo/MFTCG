#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L ;
cin >> N >> L;
vector<int> taste(N+1,0);
int sum = 0;
taste[0] = INT_MAX;
for(int i = 1; i <= N; i++){
taste[i] = L + i-1;
sum += taste[i];
taste[i] = abs(taste[i]);
}
int mi = *min_element(taste.begin(), taste.end());
cout << sum - mi << endl;
}
