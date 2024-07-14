#include <iostream>#define PI 3.1416

using namespace std;float areaOfCircle(float radius){    float area = (PI*radius*radius);    return area;}

int main(){

    float rad, result;

    cout << "Enter Radius of Circle: ";
    cin >> rad;
    result = areaOfCircle(rad);    cout << endl << "Area of Circle : " << result << endl;
    return 0;
}
