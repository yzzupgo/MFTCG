#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){
string N;
cin >> N;
int M = atoi(N.c_str());
int Keta = N.size();
int L = 0;
if(Keta==1){
L = M % 10;
}
if(Keta==2){
L = 9;
}
if(Keta==3){
L = 9 + (M-99);
}
if(Keta==4){
L = 909;
}
if(Keta==5){
L = 909 + (M-909);
}
if(Keta==6){
L = 90909;
}
cout << L << endl;
}
