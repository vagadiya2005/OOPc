// #include<iostream>
// using namespace std;

// int obj=0;

// class circle{

// float redius;
// public:

// circle (){ // default constructor

// redius=1;
// // obj++;
 
// }

// circle (float r){  // peramiterised constructor

// redius=r;
// // obj++;

// }

// circle(circle &c){ // copy constructor

// redius=c.redius;
// // obj++;

// }


// void display(){ // display the redius and area of a circle.

// obj++;
// cout << "object " << obj << " created."<< endl;

// float area=3.14*redius*redius;

// cout << "redius is  " << redius << " And Area is " << area << endl;

// }

// ~circle(){

// delete_obj();
// obj--;


// }

// void delete_obj(){


// cout << "object deleted " << obj << endl;

// }


// };

// int main(){

// circle c1,c2(20),c3(c1),c4(10);

// c1.display();
// c2.display();
// c3.display();
// c4.display();


// }
#include <iostream>
using namespace std;

int main() {
	
	int t_case;
	cin >> t_case;
	
	int maxi,idx;
	
	
	for(int i=0; i<t_case; i++){  // test case
	
	maxi=0;
	 idx=0;
	
        int arr[25][3];
        
        for(int i=0; i<22; i++){
            
            for(int j=0; j<2; j++){
    
                cin >> arr[i][j];
            }
        }


 for(int i=0; i<22; i++){
            
    int score=arr[i][0]+(20*arr[i][1]);
           
           if(maxi < score){
              maxi=score;
              idx=i;
           }
           
        }

cout << i+1 << endl;


	} // test case
	
	
	
	return 0;
}
