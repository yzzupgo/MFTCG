#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int cnt = 0;
for(int i=1; i<=N; i++){
if(i<10) cnt++;
if(100<=i && i<=999) cnt++;
if(10000<=i && i<=99999) cnt++;
}
cout << cnt << endl;
}
