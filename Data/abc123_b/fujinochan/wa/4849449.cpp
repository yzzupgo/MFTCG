#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char** argv) {
    int a, b, c, d, e;
    std::vector<int> vec;
    cin >> a >> b >> c >> d >> e;

    int small{100};
    int answer{0};

    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    vec.push_back(e);

    for (int i = 0; i <  5; ++i) {
        int mod = vec[i] % 10;
        if (mod == 0) answer += vec[i];
        else if (mod < small) {
            small = mod;
            answer += vec[i] + (10-mod);
        } else {
            answer += vec[i] + (10-mod);
        }
    }
    cout << answer-(10-small) << endl;
    return 0;
}
