#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream my_file;
    my_file.open("new_file.txt",ios::out);
    if(!my_file){
        cout<< "File not created";
    }
    else{
        cout<<"file created successfully";
        my_file<<"Learning File Handling" ;
        my_file.close();
    }
    return 0;
}
