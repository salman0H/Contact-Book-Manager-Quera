#include <iostream>
#include <fstream>
using namespace std;
class Contact
{
public:
    Contact()
    {
        name = "";
        for(int i=0;i<10;i++)
        {
            mobile[i] = 0;
        }
    }
    void setname()
    {
        cout << "enter a name:"<<endl;
        string _name;
        cin >> _name;
        name = _name;
    }
    void setmobile()
    {
        char _mobile[10];
        cout << "Enter 10 numbers:"<<endl;
        for(int i=0;i<10;i++)
        {
            cin >> _mobile[i];
            mobile[i] = _mobile[i];
        }
    }
    string getname()
    {
        return name;
    }
    int getmobile(int a)
    {
        return mobile[a];
    }
    void show_info()
    {
        cout << name <<" : ";
        for(int i=0;i<10;i++)
        {
            cout << mobile[i];
        }
        cout << endl;
    }
private:
  string name;
  char mobile[10];
  };


int main() {
    string line;

    int number = 0;
    cout << "Enter number for your contact:\n";
    cin >> number;
    Contact person1[number];
    for(int i=0;i<number;i++)
    {
        person1[i].setname();
        person1[i].setmobile();
        //person1[i].show_info();
    }
    fstream information("Phone.txt", ios::in | ios::out | ios::trunc);
    if(information)
    {
        for(int i=0;i<number;i++)
        {
            information << person1[i].getname() << " : ";
            for(int j=0;j<10;j++)
            {
                information << person1[i].getmobile(j);
            }
            cout << endl;
        }
    }else{
        cout << "in not open!";
    }
    information.close();
    for(int i=0;i<(number/2);i++)
    {
        person1[i].show_info();
    }
    return 0;
}
