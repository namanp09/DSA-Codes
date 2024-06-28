#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int value){
        val=value;
        right=NULL;
        left=NULL;
    }
};
void levelOrderQueue(Node* root){ //BFS
if(root==NULL)return;
queue<Node*> q;
q.push(root);
while(q.size()>0){
    Node* temp=q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left!=NULL)q.push(temp->left);
    if(temp->right!=NULL)q.push(temp->right);
}
cout<<endl;
}
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0  && i<n ){
        Node* temp=q.front();
        q.pop();
        
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]); else l=NULL;
        if(j<n and arr[j]!=INT_MIN) r=new Node(arr[j]); else r=NULL;

        temp->right=r;
        temp->left=l;

        if(l)q.push(l);
        if(r)q.push(r);

        i=i+2;
        j=j+2;

    }
return root;
}
int main(){
    //construct
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    levelOrderQueue(root);

}