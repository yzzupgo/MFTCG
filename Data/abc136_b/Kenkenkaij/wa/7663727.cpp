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
else if(N >= 10 && N < 100){
cout << 9 << endl;
}
else if(N >= 100 && N < 1000){
num = 10;
for(int i = 100;i < N;++i){
++num;
}
cout << num << endl;
}
else if(N >= 1000 && N < 10000){
cout << 909 << endl;
}
else if(N >= 10000 && N < 100000){
num = 910;
for(int i = 100000;i < N;++i){
++num;
}
cout << num << endl;
}
else if(N == 100000){
cout << 90909 << endl;
}
}
