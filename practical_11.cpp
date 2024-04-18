#include <iostream>
using namespace std;

class experience
{

    float year, month; // data member

public:
    operator float()
    {
        // calculate experince
        return (month / 12) + (year);
    }

    void getExperience()
    { // get month and year of experience of employee

        cout << "Enter Experience of Enployee : " << endl;
        cout << "Year : ";
        cin >> year;
        cout << "Month : ";
        cin >> month;
    }
};
int main()
{

    experience exp;

    float time;

    exp.getExperience();

    time = exp; // convert class object to basic veriable

    cout << "Experience of Employee : " << time << endl;
}