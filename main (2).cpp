/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*  Kaviya 
 Vivekananda college of engineering for women 
Input  in  program is
  IF ELSE CONDITIONAL STATEMENT
  SWITCH CASE
  CLASS AND OBJECT
  WHILE LOOP
  FUNCTIONS  */
#include <iostream>

using namespace std;
//Using class
class Report{
    
    public:
    
    //using functions  
    void weather(){
        
        int day;
        cout<<"Enter the report day wanted to know of the choice(1,2,3,)- "<<" "<<endl;
        cin>>day;
        //switch case
        switch(day){
            case 1:cout<<"The report of today"<<endl;
            break;
            case 2:cout<<"The  report of yesterday  "<<endl;
            break;
            case 3:cout<<"The report of tomorrow  "<<endl;
            break;
            default :cout<<"!!!!Unavailable!!!! "<<endl;
            break;
            
        }
    }
    //functions
    void temperature(){
        
        int t;
        cout<<"Enter the temperature:"<<" "<<endl;
        cin>>t;
        //using if-else conditional statement 
        if(t==0){
            cout<<"The climate is cold"<<endl;
        }
        else if(t<=30){
            cout<<"The climate is windy"<<endl;
            
        }
        else if(t<=75){
            cout<<"The climate is hot and dry"<<endl;
        }
        else {
            cout<<"The climate is rainy"<<endl;
        }
    }
    
};

int main()

{
    
    Report r;
    
    string name;
    string loc;
    //input from uset
    cout<<"Name:"<<" "<<endl;
    cin>>name;
    cout<<"Name of your location : "<<" "<<endl;
    cin>>loc;

    while(1){
        
        int choice;
        cout<<".....WELCOME..... "<<endl;
        cout<<"\t1.Day of weather report"<<endl;
        cout<<"\t2.Climate"<<endl;
        cout<<"\t3.Exut from the weather report"<<endl;
        cin>>choice;
        //switch case
        switch(choice){
            case 1:
             r.weather();
             break;
            case 2:
              r.temperature();
              break;
            case 3:
               exit(1);
               break;
            default:
              cout<<"Ooopss!!!!...Wrong.."<<endl;
              break;
              
             
        }
    }

    return 0;
}
