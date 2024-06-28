#include<iostream>
using namespace std;
class Marks{
    int intmark;
    int extmark;
    public:
     Marks(){
        intmark=0;
        extmark=0;
    }
    Marks(int a,int b){
        intmark=a;
        extmark=b;
    }
    void display(){
        cout<<"ixt "<<intmark<<endl;
          cout<<"ext "<<extmark<<endl;
    }
    Marks operator+(Marks m){
        Marks temp;
        temp.intmark = this->intmark + m.intmark;
        temp.extmark = this->extmark + m.extmark;
        return temp;
    }
};
int main(){
  Marks Naman(30,40);  
  Marks Maman(20,80);
  Marks Noman = Naman+Maman;
  Noman.display();
}