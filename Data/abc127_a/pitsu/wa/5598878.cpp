#include <bits/stdc++.h>
using namespace std;
int main(void){
int A, B;
cin >> A >> B;
if(A > 13){
cout << B << endl;
}else if(A < 13 && A > 5){
cout << B/2 << endl;
}else if(A < 6){
cout << 0 << endl;
}
return 0;
}
