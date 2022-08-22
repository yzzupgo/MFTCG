#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin>>X>>Y;
if (Y%2 == 1){
cout<<"No"<<endl;
}
else if(2*X<=Y && Y<=4*X){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
