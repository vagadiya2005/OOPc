#include<iostream>
using namespace std; 
 
 
class litrature
{
 
 protected:
 string id;
 string title;

public:

void getdata(){

 cout << "Enter Book ID : ";
 cin >>  id;

   cout << "Enter Book Title : " ; 
   cin >>  title; 
   
}

void putdata(){

 cout << "ID of Book : " << id << endl; 
  cout << "Name of Book : " << title << endl; 
 
}


 
};

class  e_litrature : public virtual litrature{

protected:

string doi;

public:

void getdata(){

 cout << "Enter DOI : ";
  cin >> doi ; 

}

void putdata(){

 cout << "DOI of Book : " << doi << endl; 

}


};


class hb_litrature : public virtual litrature{

protected:

string no_copy;

public:

void getdata(){

 cout << "Enter No. of Copy : ";
  cin >> no_copy; 

}

void putdata(){

 cout << "No. of Copy of Book : " << no_copy << endl; 


}



};


class book : public e_litrature, public hb_litrature{

public:
int ISBN;
string TB;



public:

void getdata(){

 cout << "Enter Type of Book ('E' or 'HB'): ";  // E and HB
 cin >>  TB; 

 litrature :: getdata();

    if(TB=="E"){
        e_litrature :: getdata();
    }else if(TB=="HB"){
       hb_litrature :: getdata();
    }else{
         cout << "Please Enter valid Type of Book" << endl; 
        
    }

 cout << "Enter ISBN of Book (Number Only) : ";
  cin >>  ISBN; 

}

void putdata(){

 litrature :: putdata();

 
    if(TB=="E"){
        e_litrature :: putdata();
    }
    else{
       hb_litrature :: putdata();
    }

cout << "ISBN of Book : " << ISBN << endl; 


}


};



class magazine : public e_litrature, hb_litrature{

public:
int IISN;
string TM;


public:

void getdata(){

 cout << "Enter Type of Megazine ('E' or 'HB'): "; 
  cin >> TM; 

litrature :: getdata();

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

 litrature :: putdata();

 
    if(TM=="E"){
        e_litrature :: putdata();
    }
    else{
       hb_litrature :: putdata();
    }


}



};





int main(){
 
book b[20];
magazine m[20];



int option;
int bookno=0;
int magazineno=0;

char to_exit;

do
{

cout << "Enter 1 : Add Book Data  " << endl; 
cout << "Enter 2 : Add magazine Data  " << endl ; 
cout << "Enter 3 : List All  Books Data  " << endl; 
cout << "Enter 4 : List All Magazine Data  " << endl<<endl; 
cout << "Enter Your Choice : "; 
cin >> option;


switch (option)
{
case 1: 
   b[bookno].getdata();
   bookno++;
   break;

case 2:
   m[magazineno].getdata();
   magazineno++;
   break;

 case 3:
 for(int i=0; i<bookno; i++){
   b[i].putdata();
 }
      break;

  case 4:
  for(int i=0; i<magazineno; i++){
   m[i].putdata();
  }
 

}

 cout << "Enter 'M' or 'm' for goto main menu , press Any key to Exit! "; 
 cin >> to_exit;

  
} while(to_exit=='M' || to_exit=='m');

 cout <<endl<< "Thank You For Visiting," << endl;
  cout << "Have a Nice Day!"; 
  

  
 
}