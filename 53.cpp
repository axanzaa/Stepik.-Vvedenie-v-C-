/**Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 2 3 4 5
Sample Output:

1 3 5**/

#include <iostream>
using namespace std;
 
int main(){
    int num; cin >> num;
    int * arr = new int[num];
    for (int i = 0; i < num; ++i) cin >> arr[i];
    for(int i = 0; i < num; i += 2){
        cout << arr[i] << " ";
    }
    delete [] arr;
    return 0;
}