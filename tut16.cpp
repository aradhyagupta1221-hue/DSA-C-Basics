#include<iostream>
using namespace std;

int main(){
    int x = 4,y = 7;
    cout<<"The value of x is "<<x<<"The value of y is"<<y<<endl;
    swapPointer (&x,&y);
    cout<<"The value of &x is"<<&x<<"The value of &y is"<<&y<<endl;

    int swap(int a,int b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    void swapPointer (int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

    }
    return 0;
}