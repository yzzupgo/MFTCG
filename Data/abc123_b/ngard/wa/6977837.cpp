#include <iostream>
#include <utility>
#include <stdint.h>

using namespace std;

int main()
{
  uint16_t a[5];
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

  uint16_t minMod10 = 10;
  for (auto& aa : a) {
    if (aa%10 > 0 && aa%10 < minMod10)
      minMod10 = aa%10;
  }

  uint16_t sum=0;
  if (minMod10==10) {
    for (auto& aa : a)
      sum += aa/10;
  } else {
    bool last = false;
    for (auto& aa : a) {
      if (!last && aa%10 == minMod10) {
	last = true;
	sum += aa;
      } else {
	if (aa%10==0)
	  sum += aa;
	else
	  sum += (aa/10+1)*10;
      }
    }
  }
  
  cout << sum << endl;

  return 0;
}
