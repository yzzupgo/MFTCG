#include <iostream>
#include <string>
using namespace std;
int main(void) {
long n,count;
count = 0;
cin >> n;
for (long i = 1; i <= n; i++)
{
if (to_string(i).length() % 2 == 1)
{
count++;
}
}
cout << count;
}
