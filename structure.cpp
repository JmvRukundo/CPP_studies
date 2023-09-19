#include <iostream>
using namespace std;
struct students{
string name;
int ages;
int marks;
int schoolfees;
};
int main(){
int i;
students emp[15];
cout<<"enter students details"<<endl;
for(int i=0;i<=4;i++){
cin>>emp[i].name;
cin>>emp[i].ages;
cin>>emp[i].marks;
cin>>emp[i].schoolfees;
}
cout<<"students details are"<<endl;
for(i=0;i<=4;i++){
cout<<emp[i].name<<endl;
cout<<emp[i].ages<<endl;
cout<<emp[i].marks<<endl;
cout<<emp[i].schoolfees<<endl;
}
	return 0;
}
