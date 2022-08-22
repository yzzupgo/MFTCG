#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int last = L + N -1;
int first = L;
int taste = L*N + N*(N -1)/2;
if (first >= 0){
cout << taste - first << endl;
}else if (last <= 0){
cout << taste - last << endl;
}else{
cout << taste << endl;
}
return 0;
}
