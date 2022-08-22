#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(void){
int N;
cin >> N;
int ans = 0;
for(int i = 0; i < N; i++){
string str_N = to_string(i);
if(str_N.size() % 2 == 1){
ans++;
}
}
cout << ans << endl;
}
