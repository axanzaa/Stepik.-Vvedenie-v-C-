/**Дан двумерный массив размером n×m (n и m не превосходят 1000). Симметричный
 * ему относительно главной диагонали массив называется транспонированным к данному. 
 * Он имеет размеры m×n: строки исходного массива становятся столбцами 
 * транспонированного, столбцы исходного массива становятся строками транспонированного.
 * Для данного массива постройте транспонированный массив и выведите его на экран.
 * 
 * Sample Input:
 * 3 4
11 12 13 14
21 22 23 24
31 32 33 34

Sample Output:
11 21 31 
12 22 32 
13 23 33 
14 24 34**/

#include <iostream>
using namespace std;

int main() {
  int n, m, temp;
    cin >> n >> m;
    if(m > n) temp = m;
    else temp = n;
    int a[temp][temp];
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            cin >> a[i][j];
        } }
    if(m > n) {
        for(int i = 0; i < n; i ++) {
            for(int j = i; j < m; j ++) {
                temp = a[j][i];
                a[j][i] = a[i][j];
                a[i][j] = temp;
            }}}
    else {
        for(int j = 0; j < m; j ++) {
            for(int i = j; i < n; i ++) {
                temp = a[j][i];
                a[j][i] = a[i][j];
                a[i][j] = temp;
            }}}
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j ++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }}