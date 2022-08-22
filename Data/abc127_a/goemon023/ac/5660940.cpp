#include <bits/stdc++.h>
using namespace std;
main(){
int A,B,money;
cin >> A >> B ;
if( A >= 13){
money = B;
}
else if( 12 >= A && A >= 6){
money = B/2;
}
else money = 0;
cout << money << endl;
}
