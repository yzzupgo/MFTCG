#include <iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
int p=a+b , s=a-b , m=a*b;
if(p>s&&p>m)
cout << p<<endl;
else if(s>p&&s>m)
cout << p<<endl;
else if(m>s&&m>p)
cout << p<<endl;
return 0;
}
