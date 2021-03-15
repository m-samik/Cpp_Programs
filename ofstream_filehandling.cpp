#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream my_file;
    my_file.open("new_file.txt");
    if(!my_file){
        cout<< "File not created";
    }
    else{
        cout<<"file created successfully";
        string line;
        int count=0;
        cout<<"Input the data to be written into the file :  " ;
        getline(cin,line);
        my_file<<line<<endl;
        count++;
        cout<<count<<"Lines written in the file"<<endl;
        my_file.close();
    }
    return 0;
}
