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

void get_data(){

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

void  display_data(){

cout << "Employee ID   : " << id << endl;

cout << "Employee Name : " << name << endl;

cout << "Qualifucation : " << qualification << endl;

cout << "Experiance    : " << experiance << endl;

cout << "Contact NO.   : " << contact << endl;

cout << endl << endl;

}


int  search_id(){

return id;

}

};



int main(){

cout << "Enter NO. of Employee : " ;
int n;
cin >> n;

employee e[n];

int emp_id;
int count=0;


for(int i=0; i<n; i++){

    cout << "Enter " << i+1 << " employee Details:" << endl;

    e[i].get_data();

}


char ch;
int c;
int a;
do{

cout << "Enter employee ID for Search Employee Details : ";
cin >> emp_id;

for(c=0; c<n; c++){

a=e[c].search_id();

if(a==emp_id){

e[c].display_data();
break;

}

}

if(c==n){

    cout << "Employee iD Not Found!"  << endl;
}

 cout << "Enter 'Y' for more details of Employee and Enter 'N' for Exit. : ";

 cin >> ch;

}while(ch=='Y' ||ch== 'y');


}