#include<iostream>
#include<string>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
if (13<=A) {
cout << B << endl;
}
if (6 <= A <= 12) {
cout << B / 2 << endl;
}
if(A<=5) {
cout << "0" << endl;
}
}
