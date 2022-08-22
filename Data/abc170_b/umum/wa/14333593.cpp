#include<iostream>
#include<math.h>
using namespace std;
bool check(float num){
bool result = false;
if(ceil(num)==floor(num) && num>=0) result = true;
return result;
}
int main(){
int x,y;
int crane, turtle;
string result="No";
cin >> x >> y;
turtle = 0.5 * y - x;
crane = 2*x - 0.5*y;
if(check(turtle) && check(crane)) result="Yes";
cout << result << endl;
}
