#include <iostream>

using namespace std;

class calculator{
        public:
        int sum(int first , int second)
        {
            return(first+second);
        }
        int sub(int first , int second)
        {
            return(first-second);
        }
        int mul(int first , int second)
        {
            return(first*second);
        }
        int divi(int first, int second)
        {
            return(first/second);
        }
    };
int main()
{
    calculator obj;
    int first,second;
    cout<<"================== Calculator ==================="<<endl;
    cout<<"Input First Number  : ";
    cin>>first;
    cout<<"Input Second Number : ";
    cin>>second;
    cout<<"What Operation you like to Perform"<<endl;
    cout<<"1.Add"<<endl<<"2.Subtract"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
    int opt;
    cin>>opt;
    if (opt==1){
        cout<<"Sum of Two Numbers is : "<<obj.sum(first,second);
    }
    else if (opt==2){
        cout<<"Sub of Two Numbers is : "<<obj.sub(first,second);
    }
    else if (opt==3){
        cout<<"Multiplication of Two Numbers is : "<<obj.mul(first,second);
    }
    else if (opt==4){
        cout<<"Division of Two Numbers is : "<<obj.divi(first,second);
    }
    else{
        cout<<"Wrong Option Selected"<<endl;
    }

    return 0;
}
