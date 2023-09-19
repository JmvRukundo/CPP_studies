#include <iostream>
using namespace std;
int main(){
int arr[10];
int num,i;
cout<<"enter num"<<endl;
for(i=0;i<=9;i++){
cin>>arr[i];
}
for(i=0;i<=9;i++){
if(arr[0]>arr[i]){
cout<<arr[0]<<endl;
}
else{
arr[0]=arr[i];
}
}
cout<<"largest is"<<arr[0]<<endl;
return 0;
}
