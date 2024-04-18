#include<iostream>
using namespace std;


struct employee
{
    
private: 

int id; 
char name[30];  
char qualification[40];
float experiance;
long long int contact;


public:

void get_data(){   // function to get datamember from user

cout << "Enter Employee ID : ";
cin >> id;

cout << "Enter Employee Name : ";
cin >> name;

cout << "Enter Qualificatation of Employee : ";
cin >> qualification;

cout << "Enter Experiance of Employee : ";
cin >>  experiance;

cout << "Enter Contact NO. of Employee : ";
cin >> contact;

cout << endl << endl;


}

void  display_data(){  // function to display emp. data

cout << "Employee ID   : " << id << endl;

cout << "Employee Name : " << name << endl;

cout << "Qualifucation : " << qualification << endl;

cout << "Experiance    : " << experiance << endl;

cout << "Contact NO.   : " << contact << endl;

cout << endl << endl;

}


int  search_id(){  // function to return private emp. Id , used to search emp. Id is exists or not.

return id;

}

};



int main(){

cout << "Enter NO. of Employee : " ;
int n;
cin >> n;

employee e[n];  // create object of employee

int emp_id;
//int count=0;


for(int i=0; i<n; i++){   // loop that's call get_data function to get emp. data

    cout << "Enter " << i+1 << " employee Details:" << endl;

    e[i].get_data();

}


char ch;
int c;  // use for know given Id is exists or not.
int a;  // store Id temperory.
do{

cout << "Enter employee ID for Search Employee Details : ";
cin >> emp_id;

for(c=0; c<n; c++){

a=e[c].search_id();

if(a==emp_id){

e[c].display_data();  // if Id was found then loop will break.
break;

}

}

if(c==n){

    cout << "Employee iD Not Found!"  << endl;
}

 cout << "Enter 'Y' for more details of Employee and Enter 'N' for Exit. : ";

 cin >> ch;

}while(ch=='Y' ||ch== 'y');  // if ch =  y or  Y then loop will itreate again.


}