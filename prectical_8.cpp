    #include<iostream>
    #include<string>

    using namespace std;


    class employee {

    private:

    int id;
    string name;
    string qualification;
    float experiance;
    long long int contact;
    static int number;
    static float sum_exp;

    protected:


    void getempdata(){

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


   void putempdata(){

    cout << "Employee ID   : " << id << endl;

    cout << "Employee Name : " << name << endl;

    cout << "Qualifucation : " << qualification << endl;

    cout << "Experiance    : " << experiance << endl;

    cout << "Contact NO.   : " << contact << endl;


    }


    int emp_serach(){

        return id;
    }

    };


    class TeachingEmployee : public employee{

    private:

    string Designation;
    string Specialization;
    string PayScale;


    public:

    void gettempdata(){

    getempdata();
    
    cout << "Enter Designation of Employee : ";
    cin >> Designation;

    cout <<"Enter Specialization of Employee : ";
    cin >> Specialization;

    cout << "Enter Pay Scale of Employee : ";
    cin >> PayScale;


    }

    void puttempdata(){

    putempdata();
    cout << "Designatino of Employee : " << Designation << endl;
    cout << "Specialization of Employee : " << Specialization << endl;
    cout << "Pay Scale of Employee : " << PayScale << endl<<endl;


    }

        int searchtemp(){

            return emp_serach();

            }
    };


    class NonTeachingEmployee : public employee{

    private:

    long double Salary;

    public:

    void getntempdata(){
        
    getempdata();
    cout << "Enter Salary of Employee : ";
    cin >> Salary;

    }

    void putntempdata(){

    putempdata();   
    cout << "Salary of Employee : " << Salary << endl<<endl;

    }

    int  Serachntemp(){

          return emp_serach();


    }

    };




    int main(){

    int teaching_emp;
    int non_teaching_emp;

    cout << "Enter Number of Teaching Employee : ";
    cin >> teaching_emp;

    TeachingEmployee Tea_emp[teaching_emp];

    for(int i=0; i<teaching_emp; i++){

    Tea_emp[i].gettempdata();
    cout << endl;

    }

    cout << "Enter Number of Non-Teaching Employee : ";
    cin >> non_teaching_emp;

    NonTeachingEmployee Non_TeaEmp[non_teaching_emp];

    for(int i=0; i<non_teaching_emp; i++){

    Non_TeaEmp[i].getntempdata();
    cout << endl;

    }


    int Search_ID;

    cout << "Enter Employee ID to Search : ";
    cin >> Search_ID;
 


int c;
int a;
int flage=0;


for(c=0; c<teaching_emp; c++){

a=Tea_emp[c].searchtemp();

if(a==Search_ID){

Tea_emp[c].puttempdata();
flage++;
break;

}

}
if(flage==0){
    
for(c=0; c<non_teaching_emp; c++){

a=Non_TeaEmp[c].Serachntemp();

if(a==Search_ID){

Non_TeaEmp[c].putntempdata();

break;

}

}

}else{
    cout << "Employee Not Found!" << endl;
}

    }

