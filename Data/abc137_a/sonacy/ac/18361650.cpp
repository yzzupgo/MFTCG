#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
cout << max(a+b,max(a-b,a*b)) << endl;
}
