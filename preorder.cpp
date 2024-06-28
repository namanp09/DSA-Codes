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
void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

}
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";

}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+ max(levels(root->left),levels(root->right));

}
void nthlevel(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) {
        cout<<root->val<<" ";
        return;
    }
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);

}
void levelOrder(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }

}
int main(){
Node* a= new Node(10);
Node* b= new Node(20);
Node* c= new Node(30);
Node* d= new Node(40);
Node* e= new Node(50);
Node* f= new Node(60);
Node* g= new Node(70);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
inorder(a);
cout<<endl;
preorder(a);
cout<<endl;
postorder(a);
cout<<endl;

nthlevel(a,1,3);
cout<<endl;
cout<<endl;
levelOrder(a);

}