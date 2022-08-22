#include<bits/stdc++.h>
using namespace std;
const int _max = 1000;
typedef long long ll;
int dir[4][2] = {{1, 0},{-1, 0},{0, 1},{0, -1}};
struct Node {
int x;
int y;
};
int main() {
int one,two;
cin>>one>>two;
int liang=(two-4*one)/2*(-1);
int si=(two-2*one)/2;
int jiao=2*liang+si*4;
if(liang<0||si<0||jiao<=0){
cout<<"No"<<endl;
return 0;
}
if(jiao==two){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
return 0;
}
