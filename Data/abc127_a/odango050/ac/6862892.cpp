#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
int A,B;
cin >> A >> B ;
if(A >= 13){
cout << B << endl;
}
else if(A >=6 && A <= 12){
cout << B/2 << endl;
}
else{
cout << B*0 << endl;
}
return 0;
}
