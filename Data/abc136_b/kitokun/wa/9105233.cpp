#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
string n;
cin >> n;
if(n.size() == 2){
cout << 9;
}
else if(n.size() == 4){
cout << 909;
}
else if(n.size() == 6){
cout << 90909;
}
else if(n.size() == 1){
cout << n;
}
else if(n.size() == 3){
ll t = stoi(n) - (n[0] - '0') * 100 + 1;
t += 9;
cout << t;
}
else{
ll t = stoi(n) - (n[0] - '0') * 10000 + 2;
t += 909;
cout << t;
}
return 0;
}
