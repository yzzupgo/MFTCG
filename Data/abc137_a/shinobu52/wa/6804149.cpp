#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int A, B;
int result = 0;
cin >> A >> B;
result = max(result, A + B);
result = max(result, A - B);
result = max(result, A * B);
cout << result;
}
