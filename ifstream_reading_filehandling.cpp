#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream my_file;
    string line;
    my_file.open("my_file.txt");
    while(my_file)
    {
            getline(my_file,line);
            cout<<line<<endl;
    }
    my_file.close();
    return 0;
}
