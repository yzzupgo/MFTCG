#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int cnt = 0;
for(int i=1; i<=N; i++){
if(i<10) cnt++;
if(99<i && i<1000) cnt++;
if(9999<i && i<100000) cnt++;
}
cout << cnt << endl;
}
