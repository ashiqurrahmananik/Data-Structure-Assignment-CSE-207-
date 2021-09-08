#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *p;
    node *n;
};
struct node *head=NULL,*temp,*nw;
void create()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        nw=(node*)malloc(sizeof(node));
        cin>>nw->data;
        nw->p=NULL;
        nw->n=NULL;
        if(head==NULL)
        {
            head=nw;
            temp=nw;
        }
        else
        {
            temp->n=nw;
            nw->p=temp;
            temp=nw;
        }
    }
}
void add_first()
{
    node *temp=head;
    nw=(node*)malloc(sizeof(node));
    cin>>nw->data;
    nw->p=NULL;
    head=nw;
    head->n=temp;
}
void add_last()
{
    node *temp=head;
    nw=(node*)malloc(sizeof(node));
    cin>>nw->data;
    while(temp->n!=NULL)
    {
        temp=temp->n;
    }
    temp->n=nw;
    nw->p=temp;
    nw->n=NULL;

}
void add_any_posi()
{
    node *temp=head,*temp1;
    int n;
    cin>>n;
    nw=(node*)malloc(sizeof(node));
    cin>>nw->data;
    for(int i=1;i<n;i++)
    {
        temp1=temp;
        temp=temp->n;
    }
    temp1->n=nw;
    nw->p=temp1;
    nw->n=temp;
}
void del_first()
{
    node *temp=head;
    head=temp->n;
    head->p=NULL;
    free(temp);
}
void del_last()
{
    node *temp=head,*temp1;
    while(temp->n!=NULL)
    {
        temp1=temp;
        temp=temp->n;
    }
    temp1->n=NULL;
    free(temp);
}
void del_any_posi()
{
    node *temp=head,*temp1;
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        temp1=temp;
        temp=temp->n;
    }
    temp1->n=temp->n;
    temp->n->p=temp1;
    free(temp);
}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->n;
    }
}
int main()
{
    create();
    display();
    cout<<"add first"<<endl;
    add_first();
    display();
    cout<<"add any posi"<<endl;
    add_any_posi();
    display();
    cout<<"add last"<<endl;
    add_last();
    display();
    cout<<"delete first"<<endl;
    del_first();
    display();
    del_last();
    display();
    del_any_posi();
    display();
}
