#include<iostream>
using namespace std;

int obj=0;

class circle{

float redius;

public:

circle (){ // default constructor

redius=1;
// obj++;
 
}

circle (float r){  // peramiterised constructor

redius=r;
// obj++;

}

circle(circle &c){ // copy constructor

redius=c.redius;
// obj++;

}


void display(){ // display the redius and area of a circle.

obj++;
cout << "object " << obj << " created."<< endl;

float area=3.14*redius*redius;

cout << "redius is  " << redius << " And Area is " << area << endl;

}

~circle(){

delete_obj();
obj--;


}

void delete_obj(){


cout << "object deleted " << obj << endl;

}


};

int main(){

circle c1,c2(20),c3(c1),c4(10);

c1.display();
c2.display();
c3.display();
c4.display();


}
