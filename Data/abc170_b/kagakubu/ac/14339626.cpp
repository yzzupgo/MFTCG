#include <iostream>
using namespace std;
int main(void){
int a, b;
cin >> a >> b;
if ( b % 2 != 0 || b < 2*a || b > 4*a){
printf("No\n");
}else{
printf("Yes\n");
}
}
