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

void get_data(){  // function to get car data from user.
 
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

void model_option(){  // function to saw only model of car.

cout << modale;

}

void get_data_option1(){  // function for sutaibale for option 1.

    switch (fuel_type)  // convert given input into fuel type using switch case.
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


    if(airBag==0){  // too cheak airbag is availble or not.
        airbag_name="YES";
    }else {
        airbag_name="NO";
    }


   cout << setw(10) << modale << setw(10) << fuel_type_name << setw(10) << price << setw(12) << milage << setw(15) << transmission << setw(15) << tank_capacity << setw(10) << no_seats << setw(10) << airbag_name;

 cout << endl<<endl;  // saw property of car , with proper aligment using setw.


}

void get_data_option2(int fual_option2){ // function for sutaibale for option 2.

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
tata car[n]; // create no. of n object of tata class.
int fual_option2;
float budget;


for(int i=0; i<n; i++){  // loop for getting car data from user.

cout << endl;

cout << "Enter Details of Car " <<i+1<<endl<<endl; 

car[i].get_data();

}

cout << "Get The Car details Accordingly your Preference:"<<endl<<endl;  // saw way to get car data
cout << "(1) Model Name  (2) Fuel Type  (3) Price Range" << endl<<endl;
int option;
cout << "Enter your Option : ";
cin >> option;  // enter your option here.
cout << endl;



switch (option)
{
case 1:

cout << "List of TATA Cars : " << endl<<endl;

for(int i=0; i<n; i++){  // saw only all model of tata cars.

cout <<"(" << i+1 << ") ";  
car[i].model_option(); cout  << "  ";

}

cout << endl << endl;

cout << "Chose your Car to See Details : ";
int car_choose;
cin >> car_choose;  // enter car model to get full details of car model.

car[car_choose-1].get_data_option1();  // calling option1 function to display data according them.

break;

case 2:

cout << "Select Your fuel Option : " << endl;
cout << "1. petrol" << endl << "2. disel" << endl  <<"3. CNG"<< endl <<"4. Electric" << endl;
cout << "Enter your option : ";
cin >> fual_option2;  // enter fual type

 cout << setw(10) << left << "Model" << setw(10) << "Fuel" << setw(10) << "price" << setw(12) << "Mileage" << setw(15) << "Transmission" << setw(15) << "Tank Capacity" << setw(10) << "Seating" << setw(10) << "Airbages" << endl;
            cout << setw(20) << " " << setw(10) << "(Lakhs)" << setw(10) << "(km/L)" << setw(17) << " " << setw(15) << "(Liters)" << setw(12) << "Capacity" << endl << endl;


for(int i=0; i<n; i++){

car[i].get_data_option2(fual_option2); // get specify fuale type car model details.

}


break;


case 3:

cout << "Enter your Budget : ";
cin >> budget;  // enter your budget.

 cout << setw(10) << left << "Model" << setw(10) << "Fuel" << setw(10) << "price" << setw(12) << "Mileage" << setw(15) << "Transmission" << setw(15) << "Tank Capacity" << setw(10) << "Seating" << setw(10) << "Airbages" << endl;
            cout << setw(20) << " " << setw(10) << "(Lakhs)" << setw(10) << "(km/L)" << setw(17) << " " << setw(15) << "(Liters)" << setw(12) << "Capacity" << endl << endl;


for(int i=0; i<n; i++){


car[i].get_data_option3(budget); // get model details in range of user budget.


}


}  // switch breacket end.


}