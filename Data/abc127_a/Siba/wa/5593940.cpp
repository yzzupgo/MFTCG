#include <bits/stdc++.h>
using namespace std;
int main() {
int N,K,kk;
cin >>N>>K;
if(N<5){
cout <<0<<endl;
}else if(N<13){
cout << K/2<< endl;
}else if(N>12){
cout << K<< endl;
}
}
