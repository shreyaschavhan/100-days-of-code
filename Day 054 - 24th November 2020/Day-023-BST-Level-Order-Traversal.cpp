#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }
           return root;
           }
        }

	void levelOrder(Node * root){
      //Write your code here
        queue <Node*> q;
    if(root==NULL)
        return;
    else
    {
        q.push(root);
        Node* current;
        while(!q.empty())
        {
            int node_count=q.size();
            while(node_count>0)
            {
                current=q.front();
                cout<<current->data<<" ";
                q.pop();
                if(current->left!=NULL)
                    q.push(current->left);
                if(current->right!=NULL)
                    q.push(current->right);
                node_count--;
            }
            // cout<<endl;

        }
        cout<<endl;
    }


	}

};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
