#include <iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
int p=a+b , s=a-b , m=a*b;
if(p>s&&p>m)
cout << p<<endl;
else if(s>p&&s>m)
cout << s<<endl;
else if(m>s&&m>p)
cout << m<<endl;
return 0;
}
