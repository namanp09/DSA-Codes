#include<iostream>
#include<climits>
using namespace std;
class Node{// TreeNode
public:
int val;
Node* left;
Node* right;
Node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
}
};
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);

}
int sumtree(Node* root){
    if(root==NULL) return 0;
    return (sumtree(root->left)+sumtree(root->right)+root->val);
 
}
int levels(Node* root){
    if(root==NULL) return 0;
    return (1+ max(levels(root->left),levels(root->right)));
 
}
int sizetree(Node* root){
    if(root==NULL) return 0;
    return 1+sizetree(root->left)+ sizetree(root->right);
    
}
int maxvaltree(Node* root){
     if(root==NULL) return 0;
     int lmax=maxvaltree(root->left);
     int rmax=maxvaltree(root->right);
     int maximum=max(root->val,max(lmax,rmax));
     return maximum;
}
int main(){
Node* a= new Node(10);
Node* b= new Node(20);
Node* c= new Node(30);
Node* d= new Node(40);
Node* e= new Node(50);
Node* f= new Node(60);
Node* g= new Node(90);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
display(a);
cout<<endl;
int sum= sumtree(a);
cout<<sum<<endl;
int sz =sizetree(a);
cout<<sz<<endl;
int mx= maxvaltree(a);
cout<<mx<<endl;
int lev= levels(a);
cout<<lev<<endl;
}