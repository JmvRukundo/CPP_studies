#include <iostream>
using namespace std;
int main(){
int n,i,chk=0;
cout<<"prime number"<<endl;
for(i=1;i<=10;i++){
for(n=2;n<i;n++){
if(i%n==0){
chk++;
}
}
if(chk==0&&i!=1)
cout<<i<<endl;
chk=0;
} 
cout<<endl;
return 0;
}
