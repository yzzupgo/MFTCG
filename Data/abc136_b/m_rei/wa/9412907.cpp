#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int power(int a){
if(a==0) return 1;
else return 10*power(a-1);
}
int main(){
int N;
cin >> N;
int tmp = N;
int dig = 0;
while(tmp){
dig++;
tmp /= 10;
}
int ans = 0;
if(dig%2!=0) ans += N%power(dig-1)+ 1;
int ten = 1;
while(dig>=2){
ans += 9*ten;
ten *=100;
dig -= 2;
}
cout << ans <<endl;
return 0;
}
