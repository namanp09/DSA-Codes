#include<iostream>
using namespace std;
class Employee{
    private:
    int a,b,c;

    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    }

};
void Employee :: setdata(int a1, int b1, int c1) {
  a=a1;
  b=b1;
  c=c1;
}
int main(){
    Employee naman;
    naman.a=6; // cant as its private
    naman.setdata(1,2,3); // function can set private variables
    naman.d=4;
    naman.e=5;
    naman.getdata();
}