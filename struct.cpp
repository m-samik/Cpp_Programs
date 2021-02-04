#include<iostream>
#include<string>

using namespace std;

int main() {
	
	struct Student {
		string name;
		int roll_no;
		int age;
		};
	
	Student s[2];
	cout << "Enter Details of 2 Students  : " ;
	for(int i=0 ; i<2 ; i++)
		cin >> s[i].name >> s[i].roll_no >> s[i].age ;
	for(int i=0 ; i<2 ; i++)
		cout << s[i].name << s[i].roll_no << s[i].age ;

	return 0;

}


