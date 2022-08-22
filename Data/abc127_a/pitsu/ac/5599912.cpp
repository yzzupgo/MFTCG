#include <bits/stdc++.h>
using namespace std;
int main(void){
int A, B;
cin >> A >> B;
if(A >= 13){
cout << B << endl;
}else if(A <= 12 && A >= 6){
cout << B/2 << endl;
}else if(A <= 5){
cout << 0 << endl;
}
return 0;
}
