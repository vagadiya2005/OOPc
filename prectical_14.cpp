#include<iostream>
using namespace std; 
 
 
class litrature
{
 
 protected:
 string id;
 string title;

public:

void getdata(){  // get data of litrature

 cout << "Enter Book ID : ";
 cin >>  id;

   cout << "Enter Book Title : " ; 
   cin >>  title; 
   
}

void putdata(){  // display data of litrature

 cout << "ID of Book : " << id << endl; 
  cout << "Name of Book : " << title << endl; 
 
}


 
};

class  e_litrature : public virtual litrature{  // inherit vertually e_litrature from litrature

protected:

string doi;

public:

void getdata(){  // get data of e_litrature

 cout << "Enter DOI : ";
  cin >> doi ; 

}

void putdata(){  // display data of e_litrature

 cout << "DOI of Book : " << doi << endl; 

}


};


class hb_litrature : public virtual litrature{ // inherit vertually hb_litrature from litrature

protected:

string no_copy;

public:

void getdata(){  // get data of hb_litrature

 cout << "Enter No. of Copy : ";
  cin >> no_copy; 

}

void putdata(){  // display data of hb_litrature

 cout << "No. of Copy of Book : " << no_copy << endl; 


}



};


class book : public e_litrature, public hb_litrature{ // class book that inherit from e_litrature and hb_litrature

public:
int ISBN;
string TB;



public:

void getdata(){ // get data of book

 cout << "Enter Type of Book ('E' or 'HB'): ";  // E and HB
 cin >>  TB; 

 litrature :: getdata(); // calling function of litrature class.

    if(TB=="E"){  // cheack path of inheritance
        e_litrature :: getdata();
    }else if(TB=="HB"){
       hb_litrature :: getdata();
    }else{
         cout << "Please Enter valid Type of Book" << endl; 
        
    }

 cout << "Enter ISBN of Book (Number Only) : ";
  cin >>  ISBN; 

}

void putdata(){ // display data of book

 litrature :: putdata(); // calling function of litrature class.

 
    if(TB=="E"){
        e_litrature :: putdata();
    }
    else{
       hb_litrature :: putdata();
    }

cout << "ISBN of Book : " << ISBN << endl<<endl; 


}


};



class magazine : public e_litrature, hb_litrature{
  // class magazine inheritet from e_litrature and hb_litrature
public:
int IISN;
string TM;


public:

void getdata(){  // get data of magazine

 cout << "Enter Type of Megazine ('E' or 'HB'): "; 
  cin >> TM; 

litrature :: getdata();  // calling function of litrature class.

    if(TM=="E"){
        e_litrature :: getdata();
    }else if(TM=="HB"){
       hb_litrature :: getdata();
    }else{
         cout << "Please Enter valid Type of Megazine" << endl; 
        
    }



 cout << "Enter IISN of Book (Number Only): ";
  cin >>  IISN; 

}

void putdata(){

 cout << "IISN of Book : " << IISN << endl; 

 litrature :: putdata();  // calling function of litrature class.

 
    if(TM=="E"){
        e_litrature :: putdata();
    }
    else{
       hb_litrature :: putdata();
    }


}



};





int main(){
 
 // creating objects of book and magazine class.
book b[20];
magazine m[20];



int option;
int bookno=0;
int magazineno=0;

char to_exit;  // used in do while loop termination

do
{

// display options refrence.
cout << "Enter 1 : Add Book Data  " << endl; 
cout << "Enter 2 : Add magazine Data  " << endl ; 
cout << "Enter 3 : List All  Books Data  " << endl; 
cout << "Enter 4 : List All Magazine Data  " << endl<<endl; 
cout << "Enter Your Choice : "; 
cin >> option;


switch (option)  // defaining option 
{
case 1: 
   b[bookno].getdata();
   bookno++; // increasing no. of book by 1
   break;

case 2:
   m[magazineno].getdata();
   magazineno++; // increasing no. of magazine by 1
   break;

 case 3:
 for(int i=0; i<bookno; i++){
   b[i].putdata();  // display full data of book
 }
      break;

  case 4:
  for(int i=0; i<magazineno; i++){
   m[i].putdata(); // display full data of magazine
  }
 

}

 cout << "Enter 'M' or 'm' for goto main menu , press Any key to Exit! "; 
 cin >> to_exit;  // enter nither 'm' nor 'M' for terminate programme

  
} while(to_exit=='M' || to_exit=='m');  // back to main menu.

 cout <<endl<< "Thank You For Visiting," << endl;
  cout << "Have a Nice Day!"; 
  

  
 
}