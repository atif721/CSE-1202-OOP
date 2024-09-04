#include<iostream>
#include<cstring>

using namespace std;

class Rectangle {
private:
    int length, width;
public:
    void inputData()
    {
        cout<< "Enter Width Of Rectangle : ";
        cin>>width;
        cout<<endl<< "Enter Length Of Rectangle : ";
        cin>>length;
    }
    int CalArea()
    {
        return (length*width);
    }
    int CalPerimeter()
    {
        return (2*(length+width));
    }
};

int main()
{

    Rectangle r1;
    r1.inputData();

    cout<<endl<< "Area OF Rectangle : " <<r1.CalArea()<< " square units" <<endl;
    cout<<endl<< "Perimeter OF Rectangle : " <<r1.CalPerimeter()<< " units" <<endl;

    return 0;
}


