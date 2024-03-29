/**По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.

Формат входных данных
Вводятся два числа n и m, каждое из которых не превышает 30.
Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:
3 5

Sample Output:
   1   2   3   4   5
  10   9   8   7   6
  11  12  13  14  15
**/

#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int i, j, k, n, m, a[30][30];
	cin >> n >> m;
	k = 1;
	for (i = 0; i != n; i++) {
		if (i % 2 == 0) {
			for (j = 0; j != m; j++) {
				a[i][j] = k;
				k++;
			}}
		else {
			for (j = m - 1; j >= 0; j--) {
				a[i][j] = k;
				k++;
			}}}
	for (i = 0; i != n; i++) {
		for (j = 0; j != m; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}}