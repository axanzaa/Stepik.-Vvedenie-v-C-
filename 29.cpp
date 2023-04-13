/**По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

50
Sample Output:

1 4 9 16 25 36 49
**/

#include <iostream>
using namespace std;
 
int main() {
    int N; cin >> N;
    for (int i = 1; i * i <= N; i++)
        cout << i * i << " ";
    cout << endl;
    
 return 0;
}