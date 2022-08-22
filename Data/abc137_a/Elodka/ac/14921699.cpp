#include <iostream>
using namespace std;
int main() {
int A;
int B;
cin >> A;
cin >> B;
int osszeadas=A+B;
int szorzas=A*B;
int kivonas=A-B;
if(osszeadas>kivonas&&osszeadas>szorzas){
cout << osszeadas;
}else if(kivonas>szorzas){
cout << kivonas;
}else{
cout << szorzas;
}
return 0;
}
