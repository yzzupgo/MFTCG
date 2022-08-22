#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
void func_A() {
int A, B;
int ans;
cin >> A >> B;
ans=A + B;
if ((A - B) > ans)
ans = A - B;
if ((A * B) > ans)
ans = A * B;
cout << ans << endl;
}
int main()
{
func_A();
return 0;
}
