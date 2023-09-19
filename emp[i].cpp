#include <iostream>
using namespace std;
struct student{
string name;
int no;
int age;
string school;
};
int main() {
int i;
student emp[4];
cout<<"enter student information"<<endl;
for(i=0;i<=3;i++){
cin>>emp[i].name;
cin>>emp[i].no;
cin>>emp[i].age;
cin>>emp[i].school;
}
cout<<"student information are"<<endl;
for(i=0;i<=3;i++){
cout<<emp[i].name<<endl;
cout<<emp[i].no<<endl;
cout<<emp[i].age<<endl;
cout<<emp[i].school;
}
	return 0;
}
