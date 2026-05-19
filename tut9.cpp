#include<iostream>
using namespace std;

int main(){
    ///***Selection control structure: if-else ladder */
    int age;
    
    cout<<"Tell me about your self"<<endl;
    cin>>age;
    if(age<18){
        cout<<"You are not enjoying my party"<<endl;
    }
    else if(age==18){
        cout<<"You are enjoy the kids party"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }

    return 0;
}