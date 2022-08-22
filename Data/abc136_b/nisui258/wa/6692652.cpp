#include <bits/stdc++.h>
using namespace std;
int mid(int a,int b,int c){
return a+b+c-max(max(a,b),c)-min(min(a,b),c);
}
int main(){
int N;
cin >> N;
int size = 0;
if(0 <= N && N < 10)size = 1;
if(10 <= N && N < 100)size = 2;
if(100 <= N && N < 1000)size = 3;
if(1000 <= N && N < 10000)size = 4;
if(10000 <= N && N < 100000)size = 5;
if(N == 100000){
cout << 90909 << endl;
}
if(size == 1){
cout << N << endl;
}
if(size == 2){
cout << 9 << endl;
}
if(size == 3){
cout << 9 + N - 99 << endl;
}
if(size == 4){
cout << 108 + N - 999 << endl;
}
if(size == 5){
cout << 1107 + N - 9999 << endl;
}
}
