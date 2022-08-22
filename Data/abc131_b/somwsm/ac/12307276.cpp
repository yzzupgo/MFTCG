#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
if(L < 0){
if(L+N-1 < 0){
cout << N*(N-1)/2 + L*N - (L+N-1) << endl;
}else{
cout << N*(N-1)/2 + L*N << endl;
}
}else{
cout << N*(N-1)/2 + L*(N-1) << endl;
}
return 0;
}
