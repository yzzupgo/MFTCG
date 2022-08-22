#include <iostream>
using namespace std;
int main(void){
int A,B;
cin >> A;
cin >> B;
if(A <= 5){
cout << 0;
}else if(A <= 12){
cout << B / 2;
}else{
cout << B;
}
}
