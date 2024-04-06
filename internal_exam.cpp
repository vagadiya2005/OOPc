#include<iostream>
using namespace std; 
 
  int static no_emp=0;
 
class employee
{
 
 private:

 string id;
 string name;
 string designation;
 long double salary;
 int join_year;
 int rezion_year;
//  static int no_emp;

 public:

 void getdata(){

    no_emp++;

     cout << "Enter ID of employee : ";
      cin >>  id;

       cout << "Enter Name of employee : "; 
        cin >>  name; 

         cout << "Enter Designation of Employee : ";
         cin >> designation;

          cout << "Enter Salary of Employee : ";
           cin >>  salary;

            cout << "Enter Joining year : ";
             cin >>  join_year;

              cout << "Enter Rezion year : ";
               cin >> rezion_year;

 }

 int total_employee(){
    return no_emp;
 }


long double getsalary(){

    return salary;
}

string get_designation(){

return designation;

}



void get_id_name(){

cout << "ID of Employee : " << id <<endl; 
 cout << "Name of Employee : " << name <<endl<<endl; 

}


};



int main(){

    employee e[100];

    int option;
    int count_emp=0;
    string desi;
    long double salary_search;
    char a;
    int no_emp=0;

    do
    {
         cout << "Enter 1 : Add New Employee Data"<<endl;
         cout << "Enter 2 : View total no. of Employee at Google"<<endl;
         cout << "Enter 3 : Get Specify Employee Data"<<endl<<endl;
          cout << "Enter your option : "; 
           cin >>  option; 
          
         

         switch (option)
         {
         case 1:
         no_emp++;
        e[count_emp++].getdata();
         break;
         
         case 2:
         cout << no_emp << endl;; 
         break;
 
        case 3:
        
        cout << "Enter Designation of Employee's : ";
          cin >> desi ; 

           cout << "Enter salary of Employee's : ";
            cin >>  salary_search; 

            for(int i=0; i<count_emp; i++){

                if(e[i].getsalary() > salary_search && e[i].get_designation() == desi ){

                    e[i].get_id_name();

                }

            }

        

         }
        
     cout << "Enter 'm' or 'M' for go menu, press any key to exit!" << endl; 
      cin >>  a; 
     


    } while (a=='m' || 'M');
    
   
 


 
}