#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main() {
int A;
int B;
int C;
int D;
int E;
cin >> A;
cin >> B;
C = A+B;
D = A-B;
E = A*B;
if(C>D &&C>E){
cout << C << endl;
}
if(D>C &&D>E){
cout << D << endl;
}
if(E>C &&E>D){
cout << E << endl;
}
if(C==D>E){
cout << C << endl;
}
if(D==E>C){
cout << D << endl;
}
if(E==C>D &&E>D){
cout << E << endl;
}
}
