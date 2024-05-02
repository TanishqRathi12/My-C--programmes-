#include <iostream>
using namespace std;

class xyz{
    public:
    int a;
    double y;
    xyz(){
        a=0;
        cout<<a;
    }
    xyz(xyz &z){
        a=z.a;
        y= z.y;
    }
    void putdata(){
        a=10;
        y=34;
        cout<<a<<y;
    }
};

int main()
{
    xyz aa;
    xyz bb(aa);
    bb.putdata();
    return 0;
}
