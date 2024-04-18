#include <iostream>
using namespace std;

class complex_number
{

private:
    float real, img;

public:
    void get_numbers()   // function that's get complex number.
    {

        cout << "Enter Real Part of  Complex Number : ";
        cin >> real;
        cout << "Enter Imaznary Part of Complex Number : ";
        cin >> img;

        cout << endl;
    }

    complex_number operator+(complex_number &r2)  // + opretor
    {

        complex_number temp;
        temp.real = real + r2.real;  // calculation + opretor
        temp.img = img + r2.img;


        // temprory object that's return complex number after performing opretion
        return temp;
    }

    complex_number operator-(complex_number &r2)   // - opretor
    {

        complex_number temp;
        temp.real = real - r2.real; // calculation of - opretor
        temp.img = img - r2.img;

        return temp;
    }

    complex_number operator*(complex_number &r2)   // * opretor
    {

        complex_number temp;

        temp.real = ((real * r2.real) - (img * r2.img));  // calculation of * opretor
        temp.img = ((real * r2.img) + (img * r2.real));

        return temp;
    }

    complex_number operator/(complex_number &r2)  //    / opretor
    {

        complex_number temp;
              // calculation of / opretor
        temp.real = ((real * r2.real) + (img * r2.img)) / ((r2.real * r2.real) + (r2.img * r2.img));
        temp.img = ((img * r2.real) - (real * r2.img)) / ((r2.real * r2.real) + (r2.img * r2.img));
        return temp;
    }

    void display_sum()  // function display real and img. part of complex number.
    {

        cout << endl << "real part of complex number : " << real << endl;
        cout << "imazanry part of complex number : " << img << endl;
    }
};

int main()
{

    complex_number r1, r2, sum;  // created object of class complex_number

    char option;

    cout << "enter value for r1." << endl
         << endl;
    r1.get_numbers();

    cout << "enter value for r2." << endl
         << endl;
    r2.get_numbers();

    cout << "Select Opretion : " << endl
         << endl;


    // choose your opretion here.
    cout << "press '+' for addition. " << endl;
    cout << "press '-' for substrection. " << endl;
    cout << "press '*' for multiplication. " << endl;
    cout << "press '/' for division. " << endl<<endl;

    cout << "Enter Your Choice : ";
    cin >> option;

    switch (option)  // switch case for choosing opretion option
    {
    case '+':
        sum = r1 + r2;  // performing opretion on the objects.
        sum.display_sum();
        break;

    case '-':
        sum = r1 - r2;
        sum.display_sum();
        break;

    case '*':
        sum = r1 * r2;
        sum.display_sum();
        break;

    case '/':
        sum = r1 / r2;
        sum.display_sum();
        break;

    default:
        break;
    }
}