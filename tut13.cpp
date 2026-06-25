#include<iostream>
using namespace std;

int main(){
    int marks[] = {2,4,6,8};
    //cout<<marks [0]<<endl;
    //cout<<marks [1]<<endl;
    //cout<<marks [2]<<endl;
   // cout<<marks [3]<<endl;

 // int mathsmarks [4];
    //mathsmarks [0] = 3;
   // mathsmarks [1] = 6;
   // mathsmarks [2] = 9;
    //mathsmarks [3] = 12;
    //cout<<"These are mathsmarks"<<endl;
   // cout<<mathsmarks [0]<<endl;
   // cout<<mathsmarks [1]<<endl;
    //You can change the value of an array
    //mathsmarks [2] = 99;
    //cout<<mathsmarks [2]<<endl;
    //cout<<mathsmarks [3]<<endl;


    //***with the help of loop */
   // for (  int i = 0; i < 4; i++)
   // {
        /* code */
       // cout<<"These values are"<<i<<"is"<<marks[i]<<endl;
    //}
    //int i = 0;
    //while (i<4);
    //{
       //cout<<"these value are"<<i<<"is"<<marks[i]<<endl;
    //}
     


     //***with the help of pointer */
    int* p = marks;
    cout<<"These values *p is"<<*p<<endl;
    cout<<"These values *(p+1) is" <<*(p+1)<<endl;
    cout<<"These values *(p+2) is" <<*(p+2)<<endl;
    cout<<"These values *(p+3) is" <<*(p+3)<<endl;


    return 0;
    
}