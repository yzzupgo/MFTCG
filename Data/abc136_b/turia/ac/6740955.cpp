#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int cnt;
string N_str;
for(int i=1;i<N+1;i++){
N_str=std::to_string(i);
if(N_str.length() % 2 != 0) cnt++;
}
cout << cnt << endl;
}
