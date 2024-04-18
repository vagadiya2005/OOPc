#include<iostream>
using namespace std;

float Calculate_Area(float redius){    // for circle 

 return 3.14*redius*redius;       // derefrences the address of passd in function call.
// return  area of circle.
}

float Calculate_Area(float heigth , float width){  // for rectangle

return heigth*width;
// return area of rectangle.

}

float Calculate_Area(float heigth , float width , float depth){  // for cuboid 

return heigth*width*depth;
// return volume of cuboid 
}


int main(){

float heigth;  
float width;
float depth;


cout << "Enter Radius of a Circle : ";
cin >> heigth;

 // pass the adress of a veriable.
cout<< "The Area of Circle : " << Calculate_Area(heigth) << endl << endl; // calling function for circle. with single argument.



cout << "Enter hiegth of rectangle : ";
cin >> heigth;

cout << "Enter width of rectangle : ";
cin >> width;

// calling function for rectangle with passing 2 arguments.
cout << "The Area of rectangle : " << Calculate_Area( heigth , width) << endl << endl;


cout << "Enter heigth of cuboid : ";
cin >> heigth;

cout << "Enter width of cuboid : ";
cin >> width;

cout << "Enter depth of cuboid : ";
cin >> depth;

// calling function for cuboid with passing 3 arguments.
cout << "The Area of cuboid : " << Calculate_Area(heigth , width, depth) << endl << endl;

}

