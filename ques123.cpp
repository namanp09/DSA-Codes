#include<iostream>
#include<string>
using namespace std;

//1.
/*
class Student{
    public:
    char n,s,g;
    int marks;

};
int main(){
    Student s[4];
    for(int i=0;i<4;i++){
        cout<<"ENTER NAME"<<endl;
        cin>>s[i].n>>s[i].s;
        cout<<"ENTER GENDER(M/F) "<<endl;
        cin>>s[i].g;
        cout<<"ENTER MARKS"<<endl;
        cin>>s[i].marks;
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        if(s[i].marks>=33){
            cout<<s[i].n<<s[i].s<<" :P"<<endl;;
        }
        else{
            cout<<s[i].n<<s[i].s<<" :F"<<endl;
        }
    }

    return 0;
}
*/

//2.
/*
class Employee{
    public:
    int Empnumber;
    char Empname;

    void getdata(){
        cin>>Empnumber;
        cin>>Empname;
        cout<<endl;
    }
    void display(){
        cout<<Empnumber<<endl;
        cout<<Empname<<endl;
    }
};

int main(){
    Employee e[6];
    for(int i=0;i<6;i++){
        e[i].getdata();
    }
    for(int i=0;i<6;i++){
        e[i].display();
    }
    return 0;
}
*/
//3.

void swap_value(int a,int b){
    int t=a;
    a=b;
    b=t;
    cout<<a <<" "<<b;
}

void swap_reference(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    cout<<*a<<" " <<*b<<endl;
}
int main(){
    int a,b,t;
    cin>>a>>b;
    cout<<"1. VALUE\n2. REFERENCE"<<endl;
    cin>>t;
    switch(t){
        case 1:
        swap_value(a,b);
        break;

        case 2:
        swap_reference(&a,&b);
        cout<<a<<" "<<b;
        break;
        
        default:
        cout<<"ENTER A VALID CHOICE"<<endl;
        
    }
}