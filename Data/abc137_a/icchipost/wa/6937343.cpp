#include <iostream>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
int wa = A + B;
int sa = A - B;
int seki = A * B;
if (wa > sa && wa > seki) cout << wa << endl;
if (sa > wa && sa > seki) cout << sa << endl;
if (seki > wa && seki > sa) cout << seki << endl;
}
