#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main() {
int x , y;
cin >> x >> y;
if(y%2==0&&y<=4*x&&y>=2*x){
cout<<"Yes"<<endl;
return 0;
}else{
cout<<"No"<<endl;
return 0;
}
}
