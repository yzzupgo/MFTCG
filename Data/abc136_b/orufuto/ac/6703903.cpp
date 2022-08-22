#include <iostream>
#include <cmath>
using namespace std;
int main() {
int nnu, sum;
string nst;
cin >> nnu;
nst=to_string(nnu);
if(nst.length()%2==0){
sum = ( std::pow(100, nst.length()/2) -1)/11 ;
}else {
sum = ( std::pow(100, (nst.length()-1)/2) -1)/11 ;
sum += nnu - std::pow(10, nst.length()-1)+1;
}
cout << sum << endl;
return 0;
}
