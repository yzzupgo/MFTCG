#include <iostream>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <sstream>
#include <iterator>
#include <cstdlib>
#include <unordered_map>
#include <map>
#include <list>
#include <utility>
using namespace std;
int main(){
long x,y; cin>>x>>y;
double c=(2*x)-(.5*y), t=x-c;
if(c>=0 && t>=0 && fmod(t,1)==0 && fmod(c,1)==0){cout<<"Yes";}else{cout<<"No";}
}
