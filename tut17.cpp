#include<iostream>
using namespace std;

inline int product(int a,int b){
        // static int c=0; //This executes only once
        // c=c+1; // Next time thus function is run, the value of c will be retained
    return a*b;
}

float moneyReceived(int currentMoney,float factor=1.04){ // Default argument
    return currentMoney * factor;
}

int main(){
    int a,b;
    // cout<<"enter the value of a and b"<<endl;
   //  cin>>a>>b;
   // cout<<"The product of a and b"<<product(a,b)<<endl;
   int money = 100000;
   cout<<"If you have"<<money<<"Rs in your bank account ,you will recive"<<moneyReceived (money)<< "Rs after 1 year";
   cout<<"If you have"<<money<<"Rs in your bank account ,you will recive"<< moneyReceived (money,1.1)<<"Rs after 1 year";
    return 0;
}