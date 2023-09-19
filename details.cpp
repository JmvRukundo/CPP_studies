#include <iostream>
using namespace std;
struct book{

string name;
string author;
int page;
float price;
};
int main() {
book emp[2];
cout<<"enter book details"<<endl;
for(int i=0;i<2;i++){
cin>>emp[i].name;
cin>>emp[i].author;
cin>>emp[i].page;
cin>>emp[i].price;
}
cout<<"book details are the following"<<endl;
for(int i=0;i<2;i++){
cout<<emp[i].name<<endl;
cout<<emp[i].author<<endl;
cout<<emp[i].page<<endl;
cout<<emp[i].price<<endl;
}
	return 0;
}
