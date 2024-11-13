#include<iostream>
#include <algorithm>

using namespace std;

class FindMaxNumber {
private:
  int a, b;
  float p, q;
  int x, y, z;
public:
  float findMax(float n1, float n2) {
    p = n1;
    q = n2;
    float result = max(p, q);

    return result;
  }

  int findMax(int n1, int n2) {
    a = n1;
    b = n2;
    int result = max(a, b);

    return result;
  }

  int findMax(int n1, int n2, int n3) {
    x = n1;
    y = n2;
    z = n2;
    int result = max(x, max(y, z));

    return result;
  }
};

int main() {
  system("cls");

  FindMaxNumber obj1, obj2, obj3;

  cout << "Maximum of two Integers :" << obj1.findMax(1211.16f, 325.41f) << endl;
  cout << "Maximum of two floating-point numbers :"<<obj2.findMax(11, 22) << endl;
  cout << "Maximum of three Integers :"<<obj3.findMax(12, 25, 30) << endl;
  
  return 0;
}
