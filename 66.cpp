/***Дано нечетное число n, не превосходящее 15. Создайте двумерный массив 
 * из n×n элементов, заполнив его символами "." (каждый элемент массива 
 * является строкой из одного символа). Затем заполните символами "*" среднюю 
 * строку массива, средний столбец массива, главную диагональ и побочную диагональ. 
 * В результате "*" в массиве должны образовывать изображение звездочки. 
 * Выведите полученный массив на экран, разделяя элементы массива пробелами.
 * 
 * Sample Input:
 * 5
 * 
 * Sample Output:
 * * . * . *
 * . * * * .
 * * * * * *
 * . * * * .
 * * . * . *
**/

#include <iostream>
using namespace std;

int main() {
  int a[15][15];
    int n; cin >> n;
    for(int y = 0; y < n; y ++) {
        for(int x = 0; x < n; x ++) {
            if(x==y || x==n/2 || y==n/2 || x==n-y-1) cout << "* ";
            else cout << ". ";
        }
        cout << endl;
    }}