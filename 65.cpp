/**N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до N. Затем по этому ряду бросили K шаров, при этом i-й шар сбил все кегли с номерами от li до ri включительно. Определите, какие кегли остались стоять на месте.

Формат входных данных

Программа получает на вход количество кеглей N и количество бросков K. Далее идет K пар чисел li, ri, при этом 1 ≤ li, ri ≤ N.

Формат выходных данных
Программа должна вывести последовательность из N символов, где j-й символ есть “I”, если j-я кегля осталась стоять, или “.”, если j-я кегля была сбита.
Sample Input:

10 3
8 10
2 5
3 6
Sample Output:

I.....I...
**/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector <string> xe(n);
    
  for (int i = 0; i < n; i++) {
    xe[i] = "I";
  }
    
  vector <int> x(k);
  vector <int> y(k);
  for (int j = 0; j < k; j++) {
    cin >> x[j];
    cin >> y[j];
  }
  for (int i = 0; i < k; i++) {
    for (int j= x[i] - 1; j <= y[i] - 1; j++)
      xe[j] = ".";
  }
  for (int i = 0; i < n; i++) {
    cout << xe[i];
  }}