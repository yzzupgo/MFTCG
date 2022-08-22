#include <iostream>
using namespace std;
int main(void)
{
int age, fee;
int result;
cin >> age >> fee;
if ( 13 <= age ) {
result = fee;
} else if ( 6 <= age && age <= 12) {
result = fee / 2;
} else {
result = 0;
}
cout << result << endl;
return 0;
}
