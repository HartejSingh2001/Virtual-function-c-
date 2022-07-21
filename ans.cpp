#include <iostream>

using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"Non Virtual function of parent class\n";//1
    }
    virtual void disp()
    {
        cout<<"Virtual function of parent class\n";//2
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"Non Virtual function of child class\n";//3
    }
    void disp()
    {
        cout<<"virtual function of child class\n";//4
    }
};

int main()
{
    A ob1;
    B ob2;
    A *ptr;
    ptr=&ob1;
    ptr->show();//1
    ptr->disp();//2
    
    ptr=&ob2;
    ptr->show();//1 (not 3) because without virtual function usage same name function is always accessed of parent class and not the clhild class.
    ptr->disp();//4
    
    return 0;
}
