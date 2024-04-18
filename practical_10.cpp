#include <iostream>
#include <math.h>
using namespace std;

class experience
{

    float exp;
    int year;
    int month;

public:
    experience()
    { // deafult constructor
        exp = 0;
    }

    experience(float &y)
    { // perametrized constructor

        exp = y;
        year = floor(exp);         // calculate year
        month = (exp - year) * 12; // calculate month
    }

    void showExeperience()
    { // show final notation of experience

        cout << "Employee Experience is " << year << " years and " << month << " months." << endl;
    }
};
int main()
{

    float time;

    cout << "Enter Employee Experience : ";
    cin >> time;

    experience e;

    e = time; // convert normal veriable to class object.

    e.showExeperience();
}