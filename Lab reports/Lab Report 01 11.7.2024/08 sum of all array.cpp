#include <iostream>#include <cstdlib>#include <ctime>using namespace std;int main() {    int Size, i, sum=0;    cout << "Enter Array Size : ";    cin >> Size;    cout << endl << "Array elements : ";    int array[Size];    srand(time(0));    for(i=0; i<Size; i++) {        array[i] = rand()%50;        cout << array[i] << " ";    }    cout << endl;    for(i=0; i<Size; i++) {        sum += array[i];    }    cout << endl << "Sum of array elements : " << sum << endl;    return 0;}