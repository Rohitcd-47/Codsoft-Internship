/* Develop a calculator program that performs basic arithmetic operations such as addition,
   subtraction, multiplication, and division. Allow the user to input two numbers and 
   choose an operation to perform.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3,n4;
    cout<<"Please enter the two numbers : ";
    cin>>n1>>n2;
    

    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for subtraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;
    
    cout<<endl;
    int choice;
    cout<<"Enter your choice = ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<n1+n2<<endl;
            break;
        case 2:
            cout<<n1-n2<<endl;
            break;
        case 3:
            cout<<n1*n2<<endl;
            break;
        case 4:
            cout<<n1/n2<<endl;
            break;
        
        default:
            cout<<"Invalid input"<<endl;
    }
    cout<<"Done";
    return 0;
}