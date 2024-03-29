/**Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение наибольшего элемента последовательности.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

9
**/

#include <iostream>
using namespace std;

int main() {
    int n;
    int max = -1;

    while (cin >> n && n != 0) {
        if (max < n) {
            max = n;
        }}
    cout << max;

    return 0;
}