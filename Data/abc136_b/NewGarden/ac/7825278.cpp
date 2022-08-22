#include <bits/stdc++.h>
using namespace std;
int main() {
int N, count;
cin >> N;
if(N < 10){ count = N; }
else if(10 <= N && N < 100){ count = 9; }
else if(100 <= N && N < 1000){ count = 9+N-99; }
else if(1000 <= N && N < 10000){ count = 909; }
else if(10000 <= N && N < 100000){ count = 909+N-9999; }
else if(N == 100000){ count = 90909; }
cout << count << endl;
return 0;
}
