#include <bits/stdc++.h>
using namespace std;
int main() {
int N,count;cin >> N;
count = 0;
string s;
for(int i=1;i<=N;i++){
s = to_string(i);
int leng = s.length();
cout << leng;
if(leng%2==1) count++;
}
cout << count;
}
