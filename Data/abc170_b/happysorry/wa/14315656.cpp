#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
if(y%2==1)
cout << "NO";
else{
if((y>=2*x)&&(y<=4*x))
cout << "Yes";
else
cout << "No";
}
}
