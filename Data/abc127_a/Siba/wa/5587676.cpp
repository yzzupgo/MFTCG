#include <bits/stdc++.h>
using namespace std;
int main() {
int N,K,kk;
cin >>N>>K;
if(N<6){
cout <<0<<endl;
}else if(N<14){
cout << K/2<< endl;
}else{
cout << K<< endl;
}
}
