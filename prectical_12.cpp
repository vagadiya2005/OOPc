#include<iostream>
#include<iomanip>
using namespace std;

string calgrade(int m){

string gread;

        if(m>=80)

            {
                gread="AA";  // calculate prectical gread
                //prectical_point[i]=10;    // calculate prectical gread point

                }

        else if(m>=73&&m<80)

            {
             gread="AB";
                // prectical_point[i]=9;

                }

        else if(m>=66&&m<73)

            {
                gread="BB";
                // prectical_point[i]=8;
                
                }

        else if(m>=60&&m<66)

            {
                gread="BC";
                // prectical_point[i]=7;
                }

        else if(m>=55&&m<60)

            {
                gread="CC";
                // prectical_point[i]=6;
                }

        else if(m>=50&&m<55)

            {
                gread="CD";
                // prectical_point[i]=5;
                }

        else if(m>=45&&m<50)

            {
                gread="DD";
                // prectical_point[i]=4;

                }

        else

            {
                gread="FF";
                // prectical_point[i]=0;

                }
    

return gread;


}



int calgp(int m){

int gread_point;

        if(m>=80)

            {
                gread_point=10;  // calculate prectical gread
                //prectical_point[i]=10;    // calculate prectical gread point

                }

        else if(m>=73&&m<80)

            {
             gread_point=9;
                // prectical_point[i]=9;

                }

        else if(m>=66&&m<73)

            {
                gread_point=8;
                // prectical_point[i]=8;
                
                }

        else if(m>=60&&m<66)

            {
                gread_point=7;
                // prectical_point[i]=7;
                }

        else if(m>=55&&m<60)

            {
                gread_point=6;
                // prectical_point[i]=6;
                }

        else if(m>=50&&m<55)

            {
                gread_point=5;
                // prectical_point[i]=5;
                }

        else if(m>=45&&m<50)

            {
                gread_point=4;
                // prectical_point[i]=4;

                }

        else

            {
                gread_point=0;
                // prectical_point[i]=0;

                }
                
    return gread_point;    


}



class result;
class student{

private:

string Student_ID;
string name;
string semester;

public:

void getdata_student(){

    cout << "Enter Name of Student : ";    // name of student
    cin >> Student_ID;

    cout << "Enter ID : ";       // ID of student
    cin >> name;    

    cout << "Enter Semester : ";   // sem. of student
    cin >> semester;

}

void putdata_student(){

    cout<<setw(15);
    cout<<left<<"Student ID"<<":  "<<Student_ID<<endl;
    cout<<setw(15);
    cout<<left<<"Student name"<<":  "<<name<<endl;
    cout<<setw(15);
    cout<<left<<"Semester"<<":  "<<semester<<endl;
    cout<<setw(25);
}



void getResult_data(result &r);
void putResult_data(result &r);


};

class result{



string sub_name[3];

int theory_credit[3];
int prectical_credit[3];

int theory_marks[3];
int prectical_marks[3];

 string theory_gread[3];       // store theory gread 
 string prectical_gread[3];   // store prectical gread

int theory_gread_point[3];
int prectical_gread_point[3];

int Total_credit=0;


public:

float total=0;
float SGPA=0.0;


float cal_SGPA(){


for(int i=0; i<3; i++){

    total+=(theory_credit[i]*theory_gread_point[i])+(prectical_credit[i]*prectical_gread_point[i]);
}

SGPA=(float)total/(float)Total_credit;

//  total=total+(tc[y]*tgp[y])+(pc[y]*pgp[y]);
return SGPA;
  
    }

     friend void student :: getResult_data(result &r);
     friend void student :: putResult_data(result &r);


};

void student :: getResult_data(result &r)
{

cout << "Enter Subjects name : " << endl;
for(int i=0; i<3; i++){

    cin >> r.sub_name[i];
}

for(int i=0; i<3; i++){

cout << "Enter Prectical Credit of " << r.sub_name[i] << " : ";
cin >> r.prectical_credit[i];

cout << "Enter Theory Credit of " << r.sub_name[i] << " : ";
cin >> r.theory_credit[i];

  r.Total_credit += r.theory_credit[i]+r.prectical_credit[i];  


}

for(int i=0; i<3; i++){

cout << "Enter Prectical marks of " << r.sub_name[i] << " : ";
cin >> r.prectical_marks[i];

cout << "Enter Theory marks of " << r.sub_name[i] << " : ";
cin >> r.theory_marks[i];

}


} // get result data
   

void student :: putResult_data(result &r){

       cout<<"\t\t\t   Theory     Practical"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<setw(29);
        cout<<r.sub_name[i]<<r.theory_gread[i]<<"\t\t"<<r.prectical_gread[i]<<endl;
        //cout<<setw(10);
        //cout<<grade_p[q]<<endl;
    }

    float total=0;

    for(int y=0;y<3;y++)
    {
        total=total+(r.theory_credit[y]*r.theory_gread_point[y])+(r.prectical_credit[y]*r.prectical_gread_point[y]);
    }

    r.SGPA=(float)total/(float)r.Total_credit;
    cout<<endl;
    cout<<setw(15);
    cout<<left<<"SGPA"<<":  "<<setprecision(3)<<r.SGPA<<endl<<"\n\n\n";


}

int main(){


result r;
student s;
s.getdata_student();
s.getResult_data(r);
s.putdata_student();
s.putResult_data(r);



}