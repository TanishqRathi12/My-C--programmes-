#include <iostream>
using namespace std;
    int length;
    int breadth;
class declare{
    
    int radius;
    public:
    void rectangle();
    void circle();
};
void declare::rectangle(){
    cout<<"Enter the Length of Rectangle:"<<endl;
    cin>>length;
    cout<<"Enter the breadth of Rectangle:"<<endl;
    cin>>breadth;
    float area = length*breadth;
    float perimeter = 2*(length+breadth);
    cout<<"Area of Rectangle:"<<area<<endl;
    cout<<"Perimeter of Rectangle:"<<perimeter<<endl;
}
void declare::circle(){
    cout<<"Enter the Radius of Circle:"<<endl;
    cin>>radius;
    float area = 3.14*radius*radius;
    float circumfrence = 2*3.14*radius;
    cout<<"Area of Circle:"<<area<<endl;
    cout<<"Circumfrence of Circle:"<<circumfrence<<endl;
    
}
int main()
{
   declare d;
   d.circle();
   d.rectangle();
    return 0;
}