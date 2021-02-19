#include<iostream>
using namespace std;

class visitor_form {
    public:
        string name;
        int dob;
        string address;
        string sec;
};

int main(){
	char option;
    while(1){
        visitor_form person;
            cout<<"Visitor Form for Evaluation"<<endl;
            cout<<"Enter Your Name : ";
            cin>>person.name;
            cout<<"\n"<<"Enter Your DOB (only year) : ";
            cin>>person.dob;
            cout<<"\n"<<"Enter Your Address : ";
            cin>>person.address;
            cout<<"\n"<<"Enter Your Section : ";
            cin>>person.sec;
        cout<<person.name<< " has successfullt submitted the form"<<endl;
	    cout<<"If You want to contine enter (y/n)  : "<<endl;
	    cin>>option;
	    if (option =='y'){
		continue;
		}
	    else 
		break;
    }
    
    return 0;
}