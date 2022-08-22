#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
int m = max({ A + B, A - B, A * B });
cout << m;
}
