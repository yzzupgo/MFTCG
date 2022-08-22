#include<bits/stdc++.h>
using namespace std;
int main(){
int A, B;
cin >> A >> B;
if(A <= 5){
cout << 0 << endl;
}else if(6 <= A && A <= 12){
cout << (B / 2) << endl;
}else if(13 <= A){
cout << B << endl;
}
return 0;}
