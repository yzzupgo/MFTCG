#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int cnt = 0;
for(int i=1; i<=N; i++){
if(i/10==0){
cnt++;
continue;
}
if(i/100==0) continue;
if(i/1000==0){
cnt++;
continue;
}
if(i/10000==0) continue;
if(i/100000==0){
cnt++;
continue;
}
}
cout << cnt << endl;
}
