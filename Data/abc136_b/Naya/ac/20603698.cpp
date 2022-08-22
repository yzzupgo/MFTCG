#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
int main(){
int N;
cin >> N;
if(N<=9){
cout << N << endl;
}else if(10<=N&&N<=99){
cout << 9 << endl;
}else if(100<=N&&N<=999){
cout << 9+(N-99) << endl;
}else if(1000<=N&&N<=9999){
cout << 9+900 << endl;
}else if(10000<=N&&N<=99999){
cout << 9+900+(N-9999) << endl;
}else{
cout << 90909 << endl;
}
}
