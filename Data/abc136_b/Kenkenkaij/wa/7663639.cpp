#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
int num;
cin >> N;
if(N < 10){
for(int i = 0;i < N;++i){
num = 0;
++num;
}
cout << num << endl;
}
if(N >= 10 && N < 100){
cout << 9 << endl;
}
if(N >= 100 && N < 1000){
num = 10;
for(int i = 100;i < N;++i){
++num;
}
cout << num << endl;
}
if(num >=1000 && N < 10000){
cout << 999 - 100 + 10;
}
if(num >= 10000 && N < 100000){
num = 1000;
for(int i = 100000;i < N;++i){
++num;
}
cout << num << endl;
}
if(num == 100000){
cout << 99999 << endl;
}
}
