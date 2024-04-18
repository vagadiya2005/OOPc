    #include<iostream>
    #include<string>

    using namespace std;


    class employee {

    private:
     // data member those store details of emp.
    int id;
    string name;  
    string qualification;
    float experiance;
    long long int contact;
    static int number;
    static float sum_exp;

    protected:


    void getdata(){ // function to get emp. data

    cout << "Enter Employee ID : ";
    cin >> id;

    cout << "Enter Employee Name : ";
    cin >> name;

    cout << "Enter Qualificatation of Employee : ";
    cin >>  qualification;

    cout << "Enter Experiance of Employee : ";
    cin >> experiance;

    cout << "Enter Contact NO. of Employee : ";
    cin >> contact;

    

    }


   void putdata(){ // function to display data of emp.

    cout << "Employee ID   : " << id << endl;

    cout << "Employee Name : " << name << endl;

    cout << "Qualifucation : " << qualification << endl;

    cout << "Experiance    : " << experiance << endl;

    cout << "Contact NO.   : " << contact << endl;


    }


    int emp_serach(){

        return id;  // return id of emp.
    }

    };


    class TeachingEmployee : public employee{ // inherit TeachingEmployee from employee class.

    private:

    string Designation;
    string Specialization;
    string PayScale;


    public:

    void getdata(){  // get data of techingemp. 

    employee :: getdata();  // calling getdata function of employee class.
    
    cout << "Enter Designation of Employee : ";
    cin >> Designation;

    cout <<"Enter Specialization of Employee : ";
    cin >> Specialization;

    cout << "Enter Pay Scale of Employee : ";
    cin >> PayScale;


    }

    void putdata(){  // display data of teching emp. data

    employee :: putdata(); // calling putdata function of employee class
    cout << "Designatino of Employee : " << Designation << endl;
    cout << "Specialization of Employee : " << Specialization << endl;
    cout << "Pay Scale of Employee : " << PayScale << endl<<endl;


    }

        int searchtemp(){

            return employee::emp_serach();  // calling function of employee class. 

            }
    };


    class NonTeachingEmployee : public employee{  // inherit   NonTeachingEmployee  from employee

    private:

    long double Salary;

    public:

    void getdata(){  // get data of non-teaching emp. 
        
    employee ::  getdata(); // // calling function of employee class. 
    cout << "Enter Salary of Employee : ";
    cin >> Salary;

    }

    void putdata(){  // display data of non-teaching emp.

     employee :: putdata();   // // calling function of employee class. 
    cout << "Salary of Employee : " << Salary << endl<<endl;

    }

    int  Serachntemp(){

          return employee::emp_serach(); // // calling function of employee class. 


    }

    };




    int main(){

    int teaching_emp;
    int non_teaching_emp;

    cout << "Enter Number of Teaching Employee : ";
    cin >> teaching_emp;

    TeachingEmployee Tea_emp[teaching_emp];  // create multiple objects of TeachingEmployee class.

    for(int i=0; i<teaching_emp; i++){

    Tea_emp[i].getdata();  // getting data of TeachingEmployee 
    cout << endl;

    }

    cout << "Enter Number of Non-Teaching Employee : ";
    cin >> non_teaching_emp;

    NonTeachingEmployee Non_TeaEmp[non_teaching_emp];  // create multiple objects of NonTeachingEmployee class.


    for(int i=0; i<non_teaching_emp; i++){

    Non_TeaEmp[i].getdata();  // getting data of NonTeachingEmployee
    cout << endl;

    }


    int Search_ID; // enter id here to search it.

    cout << "Enter Employee ID to Search : ";
    cin >> Search_ID;
 


int c;
int a;
int flage=0;


for(c=0; c<teaching_emp; c++){  // loop used to searching emp. id in teaching emp. record  // if not found then search in nonTeaching emp. record

a=Tea_emp[c].searchtemp();  

if(a==Search_ID){

Tea_emp[c].putdata();
flage++;
break;

}

}
if(flage==0){
    
for(c=0; c<non_teaching_emp; c++){
                // searching id in NonTeachig emp. data record
a=Non_TeaEmp[c].Serachntemp();

if(a==Search_ID){

Non_TeaEmp[c].putdata();

break;

}

}

}else{  // if id not found in both record then print below msg.
    cout << "Employee Not Found!" << endl;
}

    }

