#include<iostream>
using namespace std;
void printsum(int a,int b,int &sum){
    // base case 
    if(a>b) return;
    if(a%2 != 0){ //odd
    sum=sum+a;
    printsum(a+2,b,sum);
}
else{ //even
    printsum(a+1,b,sum);  
}
}
int main(){
    int a,b;
    int sum=0;
    cin>>a>>b;
    printsum(a,b,sum);
    cout<<sum;
}