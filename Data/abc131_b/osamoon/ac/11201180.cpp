#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L, ALL_TASTE=0;
cin >> N >> L;
vector<int> TASTE(N);
for (int i=0; i<N; i++){
TASTE.at(i) = L+i;
ALL_TASTE += TASTE.at(i);
}
int diff=100000, BITE_TASTE, tmp, ans;
for (int i=0; i<N; i++){
BITE_TASTE = ALL_TASTE - TASTE.at(i);
tmp = abs(ALL_TASTE - BITE_TASTE);
if (tmp <= diff){
diff = tmp;
ans = BITE_TASTE;
}
}
cout << ans << endl;
}
