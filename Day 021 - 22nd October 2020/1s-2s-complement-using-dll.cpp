#include <iostream>
using namespace std;
typedef struct node
{
    int binary_digit;
    struct node *next;
    struct node *prev;
}node;

class dll
{

public:
    node *head_node,*last_node;   int b;
    dll()
    {
        head_node=NULL;
        last_node=NULL;
    }
    node *create()
    {
        head_node=NULL;

        node *new_node,*current_node;
        cout<<"\nEnter number of BITS of binary number ";
        cin>>b;
        cout<<"Enter binary number:"<<endl;
        for(int i=0;i<b;i++){
            new_node=new node;
            cin>>new_node->binary_digit;
            new_node->next=NULL;
            new_node->prev=NULL;

            if(head_node==NULL){
                head_node=new_node;
                last_node=new_node;
            }
            else{
                current_node=head_node;
                while(current_node->next!=NULL){
                    current_node=current_node->next;
                }
                current_node->next=new_node;
                new_node->prev=current_node;
                last_node=new_node;
            }
        }
        return head_node;
    }
    void display(node *pq){
        node *current_node;
        current_node=pq;
        while(current_node!=NULL){
            cout<<current_node->binary_digit;
            current_node=current_node->next;
        }
    }
    void ones(){
        cout<<"\nOne's Complement: "<<endl;
        node *current_node;
        current_node=head_node;
        while(current_node!=NULL){
            if(current_node->binary_digit==0)
            {
                cout<<1;
            }
            else cout<<0;
            current_node=current_node->next;
        }

    }
    void twos()
    {
        cout<<"\n2's Complement:\n";
        node *current_node,*t,*x;
        int flag=0;
        int m;
        current_node=t=last_node;
        while(current_node!=NULL)
        {
            if(flag==0)
            {
                if(current_node->binary_digit==0)
                t->binary_digit=0;
                else
                {
                    t->binary_digit=1;
                    flag=1;
                }
            }
            else
            {
                if(current_node->binary_digit==0)
                t->binary_digit=1;
                else t->binary_digit=0;
            }
            x=t;
            t=t->prev;
            m=current_node->binary_digit;
            current_node=current_node->prev;
        }

        display(x);
    }
    void add()
    {
        node *head_node1,*head_node2;
        node *l1,*l2;
        cout<<"\n\nBinary number 1\n";
        head_node1=create();
        l1=last_node;
        cout<<"\n\nBinary number 2\n";
        head_node2=create();
        l2=last_node;
        cout<<"\nNumber 1: ";
        display(head_node1); cout<<endl;
        cout<<"\nNumber 2: ";
        display(head_node2); cout<<endl;

        int A[20]; int p=0;
        cout<<"\nAddition is\n";

        int cy=0;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->binary_digit==l2->binary_digit&&l1->binary_digit==0)
            {
                A[p]=0+cy;
                p++;
                cy=0;
            }
            else if(l1->binary_digit==l2->binary_digit&&l1->binary_digit==1)
            {
               A[p]=0+cy;
               p++;
               cy=1;
            }
            else if(l1->binary_digit!=l2->binary_digit)
            {
                if(cy==1)
                {
                    A[p]=0;
                    p++;
                    cy=1;
                }
                else
                {
                    A[p]=1;
                    p++;
                }
            }
          l1=l1->prev;
          l2=l2->prev;

        }
        while(l1!=NULL)
        {

            if(cy==0)
             {   A[p]=l1->binary_digit;
            p++;
                }
            else if(l1->binary_digit==1&&cy==1)
            {
                A[p]=0;
                p++;
            }
            else if(l1->binary_digit==0&&cy==1)
            {
                A[p]=1;
                p++;
                cy=0;
            }
            l1=l1->prev;
        }
        while(l2!=NULL)
        {

            if(cy==0)
             {   A[p]=l2->binary_digit;
            p++;
                }
            else if(l2->binary_digit==1&&cy==1)
            {
                A[p]=0;
                p++;
            }
            else if(l2->binary_digit==0&&cy==1)
            {
                A[p]=1;
                p++;
                cy=0;
            }
            l2=l2->prev;

        }
        if(cy==1)
        {
            A[p]=cy;

            p++;
        }
        for(int i=p-1;i>=0;i--)
            cout<<A[i];


    }
};

int main()
{
    dll obj;
    node *p;


cout<<"****Menu****\n";
cout<<"1. Enter Binary Number\n";
cout<<"2. Display number\n";
cout<<"3. Calculate One's Complement\n";
cout<<"4. Calculate Two's Complement\n";
cout<<"5. Add Two Binary Numbers\n";
cout<<"6. Exit\n";

int ch;
do{
    cout<<"\nEnter Choice:\t";
     cin>>ch;
    switch(ch)
    {
    case 1: obj.create();
            p=obj.head_node; break;
    case 2: cout<<"\nEntered Number is ";
        p=obj.head_node;
            obj.display(p); cout<<endl;break;
    case 3: obj.ones(); cout<<endl; break;
    case 4: obj.twos(); cout<<endl; break;
    case 5: obj.add();  cout<<endl; break;
    case 6: cout<<"Exit.\n"; break;
    default: ch=6; cout<<"Exit.\n"; break;
    }
}while(ch!=6);

}
