#include<iostream>

using namespace std;
class Demo
{
    public:
    void Display()
    {
        cout<<"inside Demo\n";
    }
};

int main()
{
    Demo dobj;
    cout<<sizeof(dobj)<<"\n"; //1 byte
    dobj.Display();
    return 0;
}