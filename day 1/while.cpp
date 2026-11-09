#include<iostream>
using namespace std;
int  main(){
   bool condition=true;

   while(condition){
        cout<<"Enter a number: ";
        int a;
        cin>>a;
        if(a%2==0){
            cout<<"Even Number"<<endl;
        }
        else{
            cout<<"Odd Number"<<endl;
        }
        cout<<"Do you want to continue? (1 for yes, 0 for no): ";
        cin>>condition;
    }
    return 0;

}