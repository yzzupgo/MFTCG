#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
int n, l, su, flag=0;
cin>> n >> l;
su=n*(n+1)/2+n*(l-1);
if(1<l){
su-=l;
flag++;
}
if(l<1-n){
su-=l+n-1;
flag++;
}
if(flag==2) su+=l+n-1;
cout<< su << endl;
}
