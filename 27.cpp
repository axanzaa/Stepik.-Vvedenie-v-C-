/**Дано три числа. Упорядочите их в порядке неубывания.

Формат входных данных
Вводятся три числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
2
1
Sample Output:

1 1 2**/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b) {
        if (a <= c) {
            cout << a << ' ';
            if (b <= c) {
                cout << b << ' ' << c;
            } else {
                cout << c << ' ' << b;
            }
        } else {
            cout << c << ' ' << a << ' ' << b;
        };
    } else if (b <= c) {
        cout << b << ' ';
        if (a <= c) {
            cout << a << ' ' << c;
        } else {
            cout << c << ' ' << a;
        }
    } else {
        cout << c << ' ' << b << ' ' << a;
    }
    return 0;
}