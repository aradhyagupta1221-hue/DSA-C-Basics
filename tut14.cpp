#include<iostream>
using namespace std;

struct employee

{
    /* data */
   
    int eId;
   char favchar;
   float salary;

};
 union money 
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    //enum Meal {breakfast,lunch,dinner};
    //cout<<breakfast;

    union money m1;
    m1.rice = 34;
    cout<<m1.rice;
     
    //cout<<lunch;
    //cout<<dinner;

    //struct employee harry;
    //harry.eId = 1;
    //harry.favchar = 'c';
    //harry.salary = 120000;
   // cout<<"The value is"<<harry.eId<<endl;
    //cout<<"The value is"<<harry.favchar<<endl;
    //cout<<"The value is"<<harry.salary<<endl;
    
     



    
    return 0;

}
