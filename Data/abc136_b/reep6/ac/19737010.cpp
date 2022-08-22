#include <bits/stdc++.h>
using namespace std;
int main() {
long long N; cin >> N;
int res = 0;
for(int i = 0; i < N+1; i++){
if(to_string(i).size() % 2 == 1) res++;
}
cout << res - 1 << endl;
}
