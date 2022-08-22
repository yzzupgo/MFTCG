#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define rep(i,p) for(int i=0;i<p;i++)
#define ll long long
using namespace std;
int main(){
ll int X,Y;
cin >> X >> Y;
if (Y%2!=0){
cout << "No";
return 0;
}
else{
rep(i,X){
if(i*4+(X-i)*2 == Y){
cout << "Yes";
return 0;
}
else{}
}
}
cout << "No";
return 0;
}
