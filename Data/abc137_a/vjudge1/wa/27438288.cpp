#include<iostream>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
int sum = A + B;
int sub = A - B;
int mul = A * B;
if (sum > sub && sum > mul)
cout << sum << endl;
else if (sub > sum && sub > mul)
cout << sub << endl;
else
cout << mul << endl;
return 0;
}
