#include<bits/stdc++.h>
using namespace std;
int main(){
int A, B;
cin >> A >> B;
int S, D, P;
S = A + B; D = A - B; P = A * B;
if(S > D){
if(S > P){
cout << S << endl;
}else{
cout << P << endl;
}
}else{
if(D > P){
cout << D << endl;
}else{
if(P > S){
cout << P << endl;
}else{
cout << S << endl;
}
}
}
return 0;}
