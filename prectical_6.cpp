#include<iostream>
using namespace std;

struct employee
{
    
private: 

// data member of emp. class 
int id;
char name[30];
char qualification[40];
float experiance;
long long int contact;
static int number;
static float sum_exp;



public:

void get_data(){ // function to get emp. data

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

    number++;  // when  add new emp. data then increase no. of emp. by 1.
    sum_exp +=experiance; // adding experiance of all emp. to future use.

}

void  display_data(){  // display all proprty of emp.

cout << "Employee ID   : " << id << endl;

cout << "Employee Name : " << name << endl;

cout << "Qualifucation : " << qualification << endl;

cout << "Experiance    : " << experiance << endl;

cout << "Contact NO.   : " << contact << endl;

cout << endl << endl;

}


int  search_id(){  // function that's return only emp. ID

return id; 

}

static void Average_exp(){     // calculate avg. experiance of emp. using number and sum_exp.

    cout << "Average Experiance of Employee : " << sum_exp/number << endl;
}

};

int employee :: number=0;  // declare static veriable and also initalize.
float employee :: sum_exp=0;



int main(){

cout << "Enter NO. of Employee : " ;
int n;
cin >> n;

employee e[n];  // crate n object of emp. class.

int emp_id; // used for search Id in our data.
int count=0;


for(int i=0; i<n; i++){ // loop used for get all emp. data.

    cout << "Enter " << i+1 << " employee Details:" << endl;

    e[i].get_data();

}


char ch;
int c;
int a; // used to store temperory id of emp. will used in searching id.

do{

cout << "Enter employee ID for Search Employee Details : ";
cin >> emp_id;  // enter Id to get search.

for(c=0; c<n; c++){

a=e[c].search_id();
if(a==emp_id){  // if Id was found then searching of Id will stop. and loop will break;
e[c].display_data();  // display data of emp.
break;
}

}

if(c==n){

    cout << "Employee iD Not Found!"  << endl;  // if c will equal to no. of emp. means emp. was not found and display id not found !.
    
}

 cout << "Enter 'Y' for more details of Employee and Enter 'N' for Exit. : ";

 cin >> ch;  

}while(ch=='Y' ||ch== 'y');  // cheak will further search Id.

employee :: Average_exp();  // calling function to display avg. exp. of emp.

}