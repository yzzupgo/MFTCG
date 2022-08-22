#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
int n, l, su ;
cin>> n >> l;
su=n*(n+1)/2+n*(l-1);
if(1<l){
su-=l;
}
if(l<1-n){
if(su<0) su-=l+n-1;
else su-=l;
}
cout<< su << endl;
}
