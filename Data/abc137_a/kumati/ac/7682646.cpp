#include<bits/stdc++.h>
using namespace std;
int main(){
int A,B;
cin >> A >> B;
int a = A + B,b = A - B,c = A * B;
if(a >= b && a >= c){
cout << a << endl;
}
else if (b >= a && b >= c){
cout << b << endl;
}
else{
cout << c << endl;
}
}
