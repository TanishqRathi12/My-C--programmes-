#include <iostream>
using namespace std; 
class student{
    public:
    string name;
    float Roll_no;
    long phone_no;
    void axis(){
        name = "Tanishq";
        Roll_no = 66;
        phone_no = 9234783292;
        cout<<name<<endl<<Roll_no<<endl<<phone_no<<endl;
    }
    void axis(int a){
        name = "Anshul";
        Roll_no = a;
        phone_no = 8824832898;
        cout<<endl<<name<<endl<<Roll_no<<endl<<phone_no<<endl<<"for "<<a<<endl;
    }
    void axis(double b){
        name = "Anshul khatam";
        Roll_no = b;
        
        phone_no = 88248328423;
        cout<<endl<<name<<endl<<Roll_no<<endl<<phone_no<<endl<<"for "<<b<<endl;
    }
};


int main()
{
    student ob;
    ob.axis();
    ob.axis(7);
    ob.axis(7.5);
    return 0;
}

