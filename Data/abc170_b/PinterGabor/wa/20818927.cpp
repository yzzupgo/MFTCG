#include <iostream>
using namespace std;
int main() {
int a;
int b;
cin >> a >> b;
if (a != 0){
if (b%a%2 == 0 && b/4 <= a && b%2 == 0){
cout <<"Yes";
}else {
cout << "No";
}
}else {
cout << "No";
}
return 0;
}
