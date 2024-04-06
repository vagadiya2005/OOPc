#include<iostream>
#include<iomanip>

using namespace std;

class tata {

private:

string modale;
int fuel_type;
string fuel_type_name;
double price;
double milage;
string transmission;
double tank_capacity;
int no_seats;

string airbag_name;


public:

bool airBag;

void get_data(){
 
 cout << "Enter Model Name : ";
 cin >> modale;

 cout << "Choose fuel Type : " << endl;

 cout << "1. petrol" << endl << "2. disel" << endl  <<"3. CNG"<< endl <<"4. Electric" << endl; 
 cout << "Enter your Choice : ";
  cin >> fuel_type;

 cout << "Enter Price of Car : ";
 cin >> price;

 cout << "Enter milage of Car : ";
 cin >> milage;

 cout << "Enter Transmission of Car : ";
 cin >> transmission;

 cout << "Enter Capacity of Tank : ";
 cin >> tank_capacity;

 cout << "Enter No. of sit in Car : ";
 cin >> no_seats;

 cout << "If airbag is Available press '1' Otherwise '0' : ";
 cin >> airBag;

 cout << endl<<endl;

 
}

void model_option(){

cout << modale;

}

void get_data_option1(){   // set alignment of this function

    switch (fuel_type)
    {
        case 1:
        fuel_type_name="Petrol";
        break;

        case 2:
        fuel_type_name="Disel";
        break;

        case 3:
        fuel_type_name="CNG";
        break;

        case 4:
        fuel_type_name="Electric";
        break;
    
        default:
        fuel_type_name="Fual_type_isn't_valied";
        break;
    }


    if(airBag==0){
        airbag_name="YES";
    }else {
        airbag_name="NO";
    }


   cout << setw(10) << modale << setw(10) << fuel_type_name << setw(10) << price << setw(12) << milage << setw(15) << transmission << setw(15) << tank_capacity << setw(10) << no_seats << setw(10) << airbag_name;

 cout << endl<<endl;


}

void get_data_option2(int fual_option2){

if(fuel_type==fual_option2){


 cout << " Model Name : ";
 cout << modale << endl;


    switch (fuel_type)
    {
    case 1:
        fuel_type_name="Petrol";
        break;

        case 2:
        fuel_type_name="Disel";
        break;

        case 3:
        fuel_type_name="CNG";
        break;

        case 4:
        fuel_type_name="Electric";
        break;
    
    default:
        fuel_type_name="Fual_type_isn't_valied";
        break;
    }

    if(airBag==0){
        airbag_name="YES";
    }else {
        airbag_name="NO";
    }

   cout << setw(10) << modale << setw(10) << fuel_type_name << setw(10) << price << setw(12) << milage << setw(15) << transmission << setw(15) << tank_capacity << setw(10) << no_seats << setw(10) << airbag_name;


 cout << endl<<endl;

}


}

void get_data_option3(int budget){

if(budget>=price){


    switch (fuel_type)
    {
    case 1:
        fuel_type_name="Petrol";
        break;

        case 2:
        fuel_type_name="Disel";
        break;

        case 3:
        fuel_type_name="CNG";
        break;

        case 4:
        fuel_type_name="Electric";
        break;
    
    default:
        fuel_type_name="Fual_type_isn't_valied";
        break;
    }

    if(airBag==0){
        airbag_name="YES";
    }else {
        airbag_name="NO";
    }

   cout << setw(10) << modale << setw(10) << fuel_type_name << setw(10) << price << setw(12) << milage << setw(15) << transmission << setw(15) << tank_capacity << setw(10) << no_seats << setw(10) << airbag_name;


 cout << endl<<endl;

}


}


};



int main(){

int n;
cout << "Enter No. of Cars : ";
cin >> n;
tata car[n];
int fual_option2;
float budget;


for(int i=0; i<n; i++){

cout << endl;

cout << "Enter Details of Car " <<i+1<<endl<<endl; 

car[i].get_data();

}

cout << "Get The Car details Accordingly your Preference:"<<endl<<endl;
cout << "(1) Model Name  (2) Fuel Type  (3) Price Range" << endl<<endl;
int option;
cout << "Enter your Option : ";
cin >> option;
cout << endl;



switch (option)
{
case 1:

cout << "List of TATA Cars : " << endl<<endl;

for(int i=0; i<n; i++){

cout <<"(" << i+1 << ") "; 
car[i].model_option(); cout  << "  ";

}

cout << endl << endl;

cout << "Chose your Car to See Details : ";
int car_choose;
cin >> car_choose;

car[car_choose-1].get_data_option1();

break;

case 2:

cout << "Select Your fuel Option : " << endl;
cout << "1. petrol" << endl << "2. disel" << endl  <<"3. CNG"<< endl <<"4. Electric" << endl;
cout << "Enter your option : ";
cin >> fual_option2;

 cout << setw(10) << left << "Model" << setw(10) << "Fuel" << setw(10) << "price" << setw(12) << "Mileage" << setw(15) << "Transmission" << setw(15) << "Tank Capacity" << setw(10) << "Seating" << setw(10) << "Airbages" << endl;
            cout << setw(20) << " " << setw(10) << "(Lakhs)" << setw(10) << "(km/L)" << setw(17) << " " << setw(15) << "(Liters)" << setw(12) << "Capacity" << endl << endl;


for(int i=0; i<n; i++){

car[i].get_data_option2(fual_option2);

}


break;


case 3:

cout << "Enter your Budget : ";
cin >> budget;

 cout << setw(10) << left << "Model" << setw(10) << "Fuel" << setw(10) << "price" << setw(12) << "Mileage" << setw(15) << "Transmission" << setw(15) << "Tank Capacity" << setw(10) << "Seating" << setw(10) << "Airbages" << endl;
            cout << setw(20) << " " << setw(10) << "(Lakhs)" << setw(10) << "(km/L)" << setw(17) << " " << setw(15) << "(Liters)" << setw(12) << "Capacity" << endl << endl;


for(int i=0; i<n; i++){


car[i].get_data_option3(budget);


}


}  // switch breacket end.


}