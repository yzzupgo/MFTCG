# include <iostream>
using namespace std;
int main(){
int x, y,temp, p;
cin>>x>>y;
if(y>4*x || y<2*x){
cout<<"No";
}
else{
temp=(y-2*x)/2;
p=(4*x-y)/2;
if(temp+p==x)
cout<<"Yes";
else{
cout<<"No";
}
}
return 0;
}
