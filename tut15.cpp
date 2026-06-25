#include<iostream>
using namespace std;
 
//function prototype
//type fumction-name (arguments);
//int sum(int a ,int b);----Acceptable
//int sum(int a,b);----Not Acceptable
 int sum(int,int);
//void g();---Acceptable
int main(){
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1,num2 are actual parameter
    cout<<"The sum is"<<sum(num1, num2);   
    return 0;
}

int sum(int a,int b){
    // Formal Parameter a and b will be taking values from actual parameter num1,num2.
    int c = a+b;
    return c;
}