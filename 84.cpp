/**Возводить в степень можно гораздо быстрее, чем за n умножений! Для этого нужно воспользоваться следующими рекуррентными соотношениями:

an = (a2)n/2  при четном n,

an = a × an−1 при нечетном n.

Реализуйте алгоритм быстрого возведения в степень с помощью рекурсивной функции.

Формат входных данных
Вводятся действительное число a и целое неотрицательное число n.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

2.0
1
Sample Output 1:

2
Sample Input 2:

2
2
Sample Output 2:

4**/

#include <iostream>
#include <iomanip>
using namespace std;

double power(double a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) return power(a*a, n/2);
    return a * power(a, n - 1);
}

int main() {
    double x;
    int p;
    cin >> x >> p;
    cout << fixed << setprecision(5);
    cout << power(x,p);
    return 0;
}