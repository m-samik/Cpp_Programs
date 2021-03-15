#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream my_file;
    my_file.open("tech.txt");
    
    if(!my_file){
        cout<<"File Execution Failed";
    }
    else{
        string line;
        int count =0,Jenkins_N=0;
        while(!my_file.eof()){
            my_file>>line;
            count++;
            if(line=="Jenkins"){
                Jenkins_N++;
                cout<<"Jenkins at Line "<<count<<endl;
                count--;
            }
            
        }
    cout<<Jenkins_N<<" line  located"<<endl;
    my_file.close();
        
    }
    
    return 0;
}
