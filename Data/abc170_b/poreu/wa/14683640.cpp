#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;
int main(void){
int x,y;
cin>>x>>y;
int c=0;
rep(i,x){
if(2*i+(x-i)*4==y)c=1;
}
if(c){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
