#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main() {
int X,Y; cin >> X >> Y;
for(int s = 0; s < X; s++){
int t = X - s;
int foot = 2*s + 4*t;
if(foot == Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
