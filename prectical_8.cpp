    #include<iostream>
    #include<string>

    using namespace std;


    class employee {

    private:
    // data member that's store details of employee
    int id;
    string name;
    string qualification;  
    float experiance;
    long long int contact;
    static int number;
    static float sum_exp;

    protected:


    void getempdata(){  // get employee details from the user

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

    number++;  // when  add new emp. data then increase no. of emp. by 1.
    sum_exp +=experiance; // adding experiance of all emp. to future use.

    

    }

  
   void putempdata(){       // display details of employee.
    
    cout << "Employee ID   : " << id << endl;

    cout << "Employee Name : " << name << endl;

    cout << "Qualifucation : " << qualification << endl;

    cout << "Experiance    : " << experiance << endl;

    cout << "Contact NO.   : " << contact << endl;


    }


    int emp_serach(){  // return employee id to used in serching emp. id

        return id;
    }

    public:

    static void Average_exp(){     // calculate avg. experiance of emp. using number and sum_exp.

    cout << "Average Experiance of Employee : " << sum_exp/number << endl;
}

    };


int employee :: number=0;  // declare static veriable and also initalize.
float employee :: sum_exp=0;


    class TeachingEmployee : public employee{  // TechingEmployee class inherit from employee class

    private:

    string Designation;
    string Specialization;  
    string PayScale;


    public:

    void gettempdata(){  // get teaching emp. data

    getempdata();
    
    cout << "Enter Designation of Employee : ";
    cin >> Designation;

    cout <<"Enter Specialization of Employee : ";
    cin >> Specialization;

    cout << "Enter Pay Scale of Employee : ";
    cin >> PayScale;


    }

    void puttempdata(){  // display non-teaching emp. data

    putempdata();
    cout << "Designatino of Employee : " << Designation << endl;
    cout << "Specialization of Employee : " << Specialization << endl;
    cout << "Pay Scale of Employee : " << PayScale << endl<<endl;


    }

        int searchtemp(){

            return emp_serach();  // return emp. id

            }
    };


    class NonTeachingEmployee : public employee{  //  NonTeachingEmployee class inherit from the employee class.

    private:

    long double Salary;

    public:

    void getntempdata(){   // get data of NonTeachingEmployee 
        
    getempdata();
    cout << "Enter Salary of Employee : ";
    cin >> Salary;

    }

    void putntempdata(){ // display data of NonTeachingEmployee

    putempdata();   
    cout << "Salary of Employee : " << Salary << endl<<endl;

    }

    int  Serachntemp(){

          return emp_serach();  // return id of NonTeachingEmployee


    }

    };




    int main(){

    int teaching_emp;
    int non_teaching_emp;

    cout << "Enter Number of Teaching Employee : ";
    cin >> teaching_emp;

    TeachingEmployee Tea_emp[teaching_emp];  // create no. of teaching_emp object of class TeachingEmployee

    for(int i=0; i<teaching_emp; i++){

    Tea_emp[i].gettempdata();  // getting data of teaching emp.
    cout << endl;

    }

    cout << "Enter Number of Non-Teaching Employee : ";
    cin >> non_teaching_emp;

    NonTeachingEmployee Non_TeaEmp[non_teaching_emp];

    for(int i=0; i<non_teaching_emp; i++){

    Non_TeaEmp[i].getntempdata();  // getting data of non-teaching emp. data
    cout << endl;

    }


    int Search_ID;

    cout << "Enter Employee ID to Search : ";  // return id of emp.
    cin >> Search_ID;
 


int c;
int a;
int flage=0;


for(c=0; c<teaching_emp; c++){

a=Tea_emp[c].searchtemp();

if(a==Search_ID){  // compare id from the record

Tea_emp[c].puttempdata();  
flage++;  // to know when flage>0 then id was found and loop will terminate.
break;

}

}
if(flage==0){   // not found in teaching emp. data after then search in 
    
for(c=0; c<non_teaching_emp; c++){

a=Non_TeaEmp[c].Serachntemp();

if(a==Search_ID){

Non_TeaEmp[c].putntempdata();

break;

}

}

}else{   // if id not found in record then print msg.
    cout << "Employee Not Found!" << endl;
}

employee :: Average_exp();  // calling function to display avg. exp. of emp.



    }

