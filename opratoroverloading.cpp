#include<iostream>
using namespace std;
class Marks{
    int mark;
    public:
    Marks(int m){
        
        mark=m;
        cout<<"Constructor called"<<endl;
    }
    void display(){
        cout<<mark<<endl;
    }

    Marks operator()(int m){
       
        mark= mark*m;
         cout<<"oprator called"<<endl;
        return *this;
    }
};
int main(){
Marks naman(10);
naman.display();
naman(5);
naman.display();
}