#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int result = 0;
for(int i = 0; i <= n; ++i) {
if(0 < i && i < 10) {
result++;
continue;
}
if(100 < i && i < 1000) {
result++;
continue;
}
if(10000 < i && i < 100000) {
result++;
continue;
}
}
cout << result << endl;
}
