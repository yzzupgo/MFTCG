#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, const char * argv[]) {
int N, L;
cin >> N >> L;
int eatable_index = (L >= 0) ? 0 : min(-L, N-1);
int t = (N*L) + ((N*(N-1))/2);
cout << t - (L + eatable_index) << endl;
return 0;
}
