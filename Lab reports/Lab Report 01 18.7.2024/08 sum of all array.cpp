#include <iostream>#include <cstdlib>#include <time.h>using namespace std;int main() {    int Size, i, sum=0;    cout << "Enter Array Size : ";    cin >> Size;    int array[Size];    cout << endl << "Array elements : ";    srand(time(NULL));    for(i=0; i<Size; i++) {        array[i] = rand()%100;        cout << array[i] << " ";    }    cout << endl;    for(i=0; i<Size; i++) {        sum += array[i];    }    cout << endl << "Sum of array elements : " << sum << endl;    return 0;}