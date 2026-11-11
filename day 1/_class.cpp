using namespace std;
#include <iostream>
#include <string>
class _class
{
public:
    string name;
    int roll;

    void get()
    {
        cout << "\nEnter The name  :";
        cin >> name;

        cout << "\nEnter The roll  :";
        cin >> roll;
    }
};
class demo : public _class
{
public:
    void display()
    {
        cout << "'\nRoll :" << roll;
        cout << "\nName :" << name;
    }
};

int main()
{
    demo obj;

    obj.get();
    obj.display();
};