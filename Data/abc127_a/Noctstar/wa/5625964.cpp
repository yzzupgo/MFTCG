#include <iostream>
using namespace std;
int main(){
int age, yen;
cin >> age >> yen;
if(age >= 13) cout << age * yen << endl;
else if((age >= 6) && (age <= 12)) cout << (age * yen)/2 << endl;
else cout << "0" << endl;
return 0;
}
