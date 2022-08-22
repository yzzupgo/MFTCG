#include<iostream>
#include<string>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
if (A >= 13) {
cout << B << endl;
}
if (5 < A <= 12) {
cout << B / 2 << endl;
}
else {
cout << "0" << endl;
}
}
