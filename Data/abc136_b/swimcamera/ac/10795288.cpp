#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int N; cin >> N;
int res = 0;
for (int i=1;i<=N;i++){
if (to_string(i).length()%2==1) res++;
}
cout << res << endl;
return 0;
}
