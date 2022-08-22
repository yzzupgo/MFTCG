#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin>>X>>Y;
if(Y%2==0){
if(2*X<= Y && Y<=4*X)cout<<"Yes";
else cout<<"No"<<endl;
}
else cout <<"No"<<endl;
}
