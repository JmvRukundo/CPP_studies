#include <iostream>
using namespace std;
class Book{
public:
string name;
int page;
int price;
string author;
void details(){
cout<<"enter name"<<endl;
cout<<"enter page"<<endl;
cout<<"enter price"<<endl;
cout<<"enter author"<<endl;
cin>>name>>page>>price>>author;

}
void informations(){
cout<<name<<endl;
cout<<page<<endl;
cout<<price<<endl;
cout<<author<<endl;
}
};
int main() {
Book det;
det.details();
det.informations();
return 0;
}
