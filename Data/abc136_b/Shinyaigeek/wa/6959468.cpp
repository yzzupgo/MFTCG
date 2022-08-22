#include <bits/stdc++.h>
using namespace std;
int ruit(int n,int h){
int a = 1;
for(int i = 0;i < h;i++){
a *= n;
}
return a;
}
int main(){
int a;
cin >> a;
int digits = log10(a);
int answer = 0;
for(int i = 0;i <= digits;i += 2){
if(i == digits){
answer += a % ruit(10,i) + 1;
}else{
answer += ruit(10,i + 1) - ruit(10,i);
}
}
cout << answer;
}
