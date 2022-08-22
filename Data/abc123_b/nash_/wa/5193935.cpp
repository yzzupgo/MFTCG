#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v(5);
    int tmp;
    
    int annoy;
    int interval;
    int max_interval = -1;
    for(int i = 0; i < 5; i++) {
        cin >> v[i];
        interval = 10 - v[i] % 10;
        //cout << v[i] << endl;
        if ((interval != 10) && (interval > max_interval)) {
            annoy = i;
            max_interval = interval;
        }
    }
    cout << "annoy:" << annoy << endl;
    int ans = 0;
    for(int i = 0; i < 5; i++) {
        if (i == annoy) continue;
        else {
            if (v[i] % 10 == 0) ans+= v[i];
            else {
                ans += ((v[i] / 10) + 1) * 10;
            }
        }
    }
    ans += v[annoy];
    cout << ans << endl;
    return 0;
}
