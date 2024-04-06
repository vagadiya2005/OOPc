#include<iostream>
using namespace std;

class complex_number{

private:

float real,img;

public:

void get_numbers(){

cout << "Enter Real Part of  Complex Number : ";
cin >> real;
cout << "Enter Imaznary Part of Complex Number : ";
cin >> img;

cout << endl;

}

void opretor_plus( complex_number &r1,complex_number &r2){

real = r1.real + r2.real;
img = r1.img + r2.img;

}


void opretor_minus( complex_number &r1,complex_number &r2){

real = r1.real - r2.real;
img = r1.img - r2.img;

}


void opretor_multiplication( complex_number &r1,complex_number &r2){

real = ((r1.real * r2.real) - (r1.img * r2.img));
img = ((r1.real * r2.img) + (r1.img * r2.real));


}



void opretor_divison( complex_number &r1,complex_number &r2){

   real = ((r1.real * r2.real) + (r1.img * r2.img)) / ((r2.real * r2.real) + (r2.img * r2.img));
   img = ((r1.img * r2.real) - (r1.real * r2.img)) / ((r2.real * r2.real) + (r2.img * r2.img));

}


     




void display_sum(){

cout << "real part of complex number : " << real << endl;
cout << "imazanry part of complex number : " << img << endl;

}


};

int main(){

complex_number r1,r2,sum;
char option;

cout << "enter value for r1." << endl<<endl;
r1.get_numbers();

cout << "enter value for r2." << endl<<endl;
r2.get_numbers();




 cout << "Select Opretion : " << endl
         << endl;

    cout << "press '+' for addition. " << endl;
    cout << "press '-' for substrection. " << endl;
    cout << "press '*' for multiplication. " << endl;
    cout << "press '/' for division. " << endl<<endl;

    cout << "Enter Your Choice : ";
    cin >> option;

    switch (option)
    {
    case '+':
       sum.opretor_plus(r1,r2);
       sum.display_sum();
        break;

    case '-':
        sum.opretor_minus(r1,r2);
        sum.display_sum();
        break;

    case '*':
        sum.opretor_multiplication(r1,r2);
        sum.display_sum();
        break;

    case '/':
        sum.opretor_divison(r1,r2);
        sum.display_sum();
        break;

    default:
        break;
    }



}