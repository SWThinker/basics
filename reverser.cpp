// reverse int numbers, if reversed int can cause overflow return 0
// input 777 becomes 777 in the output ;)     8317 ==> 7138

#include <iostream>
#include <climits>

using namespace std;

long reverser (int n)
{

  long revNum = 0;
  int negative = 1;

  if (n < 0) {
      negative = -1;
      n = abs (n);
    }

  while (n > 0) {
      revNum = revNum * 10 + n % 10;
      n /= 10;
    }

  return (revNum > INT_MAX) ? 0 : revNum *= negative;
}


int
main ()
{
  cout << reverser (-329998999);

  return 0;
}
