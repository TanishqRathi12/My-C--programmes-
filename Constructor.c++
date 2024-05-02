#include <iostream>
using namespace std;
class Cars{
    public:
    string Name;
    long year;
    string brand;
    void cars1(){
       cout<<"Enter the name of car";
       cin>>Name;
       cout<<"Enter the brand of car";
       cin>>brand;
       cout<<"Enter the year of the car";
       cin>>year;
       cout<<Name<<endl<<brand<<endl<<year<<endl;
    }
    Cars(int a){
        cout<<"Constructor of Class cars"<<endl<<a<<endl;
    }
};
int main()
{
    Cars ob(4);
    ob.cars1();
    return 0;
}

