#include <iostream>
using namespace std;
int main(void){
int a, b;
cin >> a >> b;
if ( b % 2 != 0 || b < a || b > 2*a) printf("No\n");
printf("Yes\n");
}
