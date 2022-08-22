#include <iostream>
#include <set>
#include <list>

using namespace std; 

int
main(int argc, char const *argv[])
{
    list<uint64_t> l;
    uint64_t tmp = 0;
    uint64_t ans = 0;

    for (auto i = 0; i < 5; i++) {
	uint64_t n;
	cin >> n;
	ans += (n /10) * 10;
	auto rest = n % 10;
	if (rest > 0) {
	    ans += 10;
	    tmp = max(tmp, (10 - rest));
	}
    }

    cout << ans - tmp << endl;
    return 0;
}
