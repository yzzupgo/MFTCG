#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int N2 = N;
int n = 0;
int ans = 0;
while(N!=0){
N /= 10;
n++;
}
if(n == 2){
ans = 9;
}else if(n == 3){
ans = 9 + (N2 - 100)+1;
}else if(n == 4){
ans = 9 + 900;
}else if(n == 5){
ans = 9 + 900 + (N - 1000)+1;
}else if(n == 6){
ans = 9 + 900 + 90000;
}else{
ans = N;
}
cout << ans << endl;
}
