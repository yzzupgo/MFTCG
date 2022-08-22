#include <bits/stdc++.h>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
cout << (A >= 13 ? B : A >= 6 ? B / 2 : 0) << endl;
return 0;
}
