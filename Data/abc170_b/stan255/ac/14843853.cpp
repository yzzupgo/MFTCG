#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iomanip>
#define ll long long
using namespace std;
long long MOD = 1000000007;
int main(){
int X, Y;
cin >> X >> Y;
int rest = Y-2*X;
if(rest>=0 && rest%2==0 && rest<=2*X){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
