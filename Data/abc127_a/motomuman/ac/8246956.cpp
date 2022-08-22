#include<bits/stdc++.h>
using namespace std;
long long A, B;
int main(){
cin >> A >> B;
if(A<=5){
cout << 0 << endl;
}else if(A>=13){
cout << B << endl;
}else{
cout << B/2 << endl;
}
}
