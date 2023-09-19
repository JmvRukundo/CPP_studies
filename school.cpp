#include <iostream>
using namespace std;
class School{
public:
string schoolname;
string codeofschool;
int numberofstudent;
int numberofteachers;
public:
void reading(){
cout<<"enter schoolname"<<endl;
cout<<"enter codeofschool"<<endl;
cout<<"enter numberofstudent"<<endl;
cout<<"enter numberofteachers"<<endl;
cin>>schoolname;
cin>>codeofschool;
cin>>numberofstudent;
cin>>numberofteachers;
}
void printing(){
cout<<schoolname<<endl;
cout<<codeofschool<<endl;
cout<<numberofstudent<<endl;
cout<<numberofteachers<<endl;
}
};
int main() {
School info;
info.reading();
info.printing();
	return 0;
}
