// a basic calculator;
#include<iostream>
using namespace std;
int main()
{
     char op;
     double a,b;
     cout<<"enter the operator accordance to need : +,-,*,/,%";
     cin>>op;
     cout<<"enter two number";
     cin>>a>>b;
     switch(op){
        
        case  '+':
        cout<<a<<"+"<<b<<"="<<a+b;
        break;

        case '-':
        cout<<a<<"-"<<b<<"="<<a-b;
        break;

        case '*':
        cout<<a<<"*"<<b<<"="<<a*b;
        break;

        case '/':
        cout<<a<<"/"<<b<<"="<<a/b;
        break;

        case '%':
        cout<<a<<"%"<<b<<"="<<(int)a%(int)b;
        break;

        defult:
        cout<<"given operands is giving error";
        break;
        

     }
}