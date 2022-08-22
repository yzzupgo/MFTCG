#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
typedef unsigned long long ULL;
void process();
int main(){
int X,Y;
int x;
cin >> X >> Y;
x = ( Y - 4 * X) / (-2);
if( x >= 0 && 2 * x + 4 * (X - x) == Y){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
process();
}
void process(){
}
