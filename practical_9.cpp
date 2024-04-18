#include<iostream>
using namespace std; 
 
 
class millimeter
{
 
 float mm;

public:


millimeter (){
    mm=0;
}

millimeter (centimeter &cmObj){

mm=cmObj.return_cm()*10;

}


void get_mm(){

 cout << "Enter millimeter : ";
  cin >>  mm; 
  
}

float return_mm(){

return mm;

}

void display_mm(){
     cout << "Millimeter : "<< mm << endl; 
    
}
 
};

class centimeter{

float cm;

public:

centimeter(){
    cm=0;
}

centimeter(millimeter &mmObj){

cm=mmObj.return_mm()/10;

}

void get_cm(){

     cout << "Enter Centimeter : ";
      cin >>  cm; 
      
    
}

float return_cm(){
    return cm;
}

void display_cm(){
 cout << "Centimeter : " << cm  << endl; 

}


};


int main(){
 

  cout << "Enter 1 : mm to cm converter" << endl;
    cout << "Enter 2 : cm to mm converter" << endl;
    int option;
    cin >> option;

switch (option)
{
case 1:

 millimeter m;

 m.get_mm();

 centimeter c;

 c=m;

 c.display_cm();

    break;

    case 2:

    centimeter c;

    c.get_cm();

    millimeter m;

    m=c;

    m.display_mm();
    
break;


default:
    break;
}


  
 
}