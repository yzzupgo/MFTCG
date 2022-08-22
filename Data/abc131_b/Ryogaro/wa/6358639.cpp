#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int sum = 0;
for (int i = 0; i <= N - 1; i++) {
sum += L + i;
}
if (L + N - 1 < 0) cout << sum - (L + N - 1);
else if (L < 0 && L + N - 1 > 0)cout << sum;
else cout << sum - L;
return 0;
}
