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
else if(D>C &&D>E){
cout << D << endl;
}
else if(E>C &&E>D){
cout << E << endl;
}
else if(C==D>E){
cout << C << endl;
}
else if(D==E>C){
cout << D << endl;
}
else if(E==C>D){
cout << E << endl;
}
else if(E==C==D){
cout << E << endl;
}
}
