#include <iostream>
#include <cmath>
using namespace std;
int main(){
int A,B;
cin >> A,B;
cout << max (max(A+B,A-B),A*B);
}
