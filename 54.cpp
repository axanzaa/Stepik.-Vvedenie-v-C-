/**Выведите все четные элементы массива.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве.
Sample Input:

7
1 2 2 3 3 3 4
Sample Output:

2 2 4**/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}}}