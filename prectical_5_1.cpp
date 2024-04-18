#include<iostream>
using namespace std;

int obj=0;

class circle{

float redius;

public:

circle (){ // default constructor

redius=1;

 
}

circle (float r){  // peramiterised constructor

redius=r;


}

circle(circle &c){ // copy constructor

redius=c.redius;


}


void display(){ // display the redius and area of a circle.

obj++; // when function call then object will increase by 1 and store total no. of objects.  

cout << "object " << obj << " created."<< endl;

float area=3.14*redius*redius;

cout << "redius is  " << redius << " And Area is " << area << endl;

}

~circle(){  // destructor to delete objects.

delete_obj();
obj--;  // when destructor call then object will deacrease by 1.


}

void delete_obj(){ // print msg. when object is deleted.

cout << "object deleted " << obj << endl;

}


};

int main(){

circle c1,c2(20),c3(c1),c4(10); // create all object all of 3 types.


// calling display function corresponding all objects.
c1.display();
c2.display();
c3.display();
c4.display();


}
