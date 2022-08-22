#include <iostream>
using namespace std;
int main(){
int A,B;
cin >> A >> B;
if(A <= 5){
cout << 0 << endl;
}else{
cout <<(A >= 13?B:(B/2)) << endl;
}
}
