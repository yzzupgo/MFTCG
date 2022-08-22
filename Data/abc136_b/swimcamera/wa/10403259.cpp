#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace::std;
using ll = long long;
int main() {
int N; cin >> N;
int res=0;
for (int i=1;i<N;i++){
if (to_string(i).size()%2==1) res++;
}
cout << res << endl;
return 0;
}
