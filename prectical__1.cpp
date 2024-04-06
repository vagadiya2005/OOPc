#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>

using namespace std;

void Result(){  // creat Result function to prepare student markSheet.

    char name[10];    
    int sem;
    char id[8];

    cout << "Enter Name(Space is't allow) : ";    // name of student
    cin >> name;

    cout << "Enter ID : ";       // ID of student
    cin >> id;    

    cout << "Enter Sem. : ";   // sem. of student
    cin >> sem;



    char sub[3][30];   // array that's allow to take 3 subject each length of subject is 30 charactor
    
    cout<<"Enter 3 subjects name."<<endl;

    for(int i=0;i<3;i++)
    {
        fflush(stdin);          // flush input buffer
       cin.getline(sub[i],30);  // take string input of subject including white spaces
    }

    int theory_marks[3];       // array that store theory marks of 3 subject
    int prectical_marks[3];   // array that store practical marks of 3 subjects.
    

            for(int i=0; i<3; i++){     // taking input of theory & prectical marks together.

                    cout << "Enter subject "<<i+1<<" Theory mark : ";  // take theory marks
                    cin >> theory_marks[i];

                    cout << "Enter subject "<<i+1<<" Prectical mark : ";  
                    cin >> prectical_marks[i];   // take prectical marks

                    cout << endl;
            }


                cout << endl << endl;


    string theory_gread[3];       // store theory gread 
    string prectical_gread[3];    // store prectical gread

    int theory_point[3];          // store theory gread point
    int prectical_point[3];       // store prectical gread point

    for(int i=0;i<3;i++)
    {                                   // calculate theory gred & gred point using theory marks
        if(theory_marks[i]>=80)
            {   theory_gread[i]="AA";   // calculate theory gread
                theory_point[i]=10;     // calculate prectical gread point

                }

        else if(theory_marks[i]>=73&&theory_marks[i]<80)
            {
                theory_gread[i]="AB";
                theory_point[i]=9;

                }
        else if(theory_marks[i]>=66&&theory_marks[i]<73)
            {
                theory_gread[i]="BB";
                theory_point[i]=8;

                }
        else if(theory_marks[i]>=60&&theory_marks[i]<66)
            {
                theory_gread[i]="BC";
                theory_point[i]=7;

                }
        else if(theory_marks[i]>=55&&theory_marks[i]<60)
            {
                theory_gread[i]="CC";
                theory_point[i]=6;

                }
        else if(theory_marks[i]>=50&&theory_marks[i]<55)
            {
                theory_gread[i]="CD";
                theory_point[i]=5;

                }
        else if(theory_marks[i]>=45&&theory_marks[i]<50)
            {
                theory_gread[i]="DD";
                theory_point[i]=4;

                }
        else
            {
                theory_gread[i]="FF";
                theory_point[i]=0;

                }
    }



    for(int i=0;i<3;i++)                  // calculate prectical gread & gread point using practical mark's
    {
        if(prectical_marks[i]>=80)

            {
                prectical_gread[i]="AA";  // calculate prectical gread
                prectical_point[i]=10;    // calculate prectical gread point

                }

        else if(prectical_marks[i]>=73&&prectical_marks[i]<80)

            {
                prectical_gread[i]="AB";
                prectical_point[i]=9;

                }

        else if(prectical_marks[i]>=66&&prectical_marks[i]<73)

            {
                prectical_gread[i]="BB";
                prectical_point[i]=8;
                }

        else if(prectical_marks[i]>=60&&prectical_marks[i]<66)

            {
                prectical_gread[i]="BC";
                prectical_point[i]=7;
                }

        else if(prectical_marks[i]>=55&&prectical_marks[i]<60)

            {
                prectical_gread[i]="CC";
                prectical_point[i]=6;
                }

        else if(prectical_marks[i]>=50&&prectical_marks[i]<55)

            {
                prectical_gread[i]="CD";
                prectical_point[i]=5;
                }

        else if(prectical_marks[i]>=45&&prectical_marks[i]<50)

            {
                prectical_gread[i]="DD";
                prectical_point[i]=4;

                }

        else

            {
                prectical_gread[i]="FF";
                prectical_point[i]=0;

                }
    }

    float sgpa=0.0;   
 
    int Total_credit=0;       //  To count Total credit of prectical & theory

    int theory_credit[3];     // store theory credit of 3 subject

    float total=0;      

    int prectical_credit[3];


        for(int i=0; i<3; i++){            // take theory & prectical credit      

            cout << "Enter Subject "<<i+1<<" theory Credit: ";
            cin >> theory_credit[i];       // take theory credit
            
            cout << "Enter Subject "<<i+1<<" prectical Credit: ";
            cin >> prectical_credit[i];    // take prectical credit
 
            cout << endl;

            Total_credit += theory_credit[i]+prectical_credit[i];  // calculate total credit =prectical + theory

        }



    for(int i=0; i<3; i++)   // calculate sum of (credit * gread point) of theory
    {
        total=total+(theory_credit[i]*theory_point[i]);
    }
    for(int i=0; i<3; i++)   // calculate sum of (credit * gread point) of prectical
    {
        total=total+(prectical_credit[i]*prectical_point[i]);
    }

    sgpa=(float)total/(float)Total_credit;      // calculation of SGPA using Formula

    system("cls");   // clear console windows after compeleted input from user's

    cout<<endl;

    cout<<setw(15);   // set aligment 
    cout<<left<<"Student ID"<<":  "<<id<<endl;

    cout<<setw(15);
    cout<<left<<"Student name"<<":  "<<name<<endl;

    cout<<setw(15);
    cout<<left<<"Semester"<<":  "<<sem<<endl;

    cout<<setw(25);
   
    cout<<"\t\t\t   Theory     Practical"<<endl;
    for(int j=0; j<3; j++)
    {
        cout<<setw(29);
        cout<<sub[j]<<theory_gread[j]<<"\t\t"<<prectical_gread[j]<<endl;
       

    }

    cout<<endl;

    cout<<setw(15);
    cout<<left<<"SGPA"<<":  " << setprecision(4) << sgpa << endl<< "\n\n\n";


}


int main() 
{
    
Result();   // calling Result function to print student MarkSheet.


}
