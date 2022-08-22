#include <bits/stdc++.h>
using namespace std;
int main(void){
int N;
cin >> N;
int cnt = 0;
if(N < 100){
if(N > 9){
cnt = 9;
}
else{
for(int i=1; i<=N; i++){
cnt++;
}
}
}
else if(N < 1000){
for(int i=100; i<=N; i++){
cnt++;
}
cnt += 9;
}
else if(N < 100000){
for(int i=100; i<1000; i++){
cnt++;
}
for(int i = 10000; i<=N; i++){
cnt++;
}
cnt += 9;
}
else {
for(int i=100; i<1000; i++){
cnt++;
}
for(int i = 10000; i<100000; i++){
cnt++;
}
cnt += 9;
}
cout << cnt << endl;
}
