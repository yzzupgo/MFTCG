#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
int ans = 0;
if(12 < A)ans = B;
if(6 <= A && A <= 12)ans = B / 2;
if(A == 0)ans = 0;
cout << ans << endl;
return 0;
}
