#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    node *next;
};
node *head=NULL,*nw=NULL,*tail=NULL;
void create()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        nw = (node *)malloc(sizeof(node));
        cin>>nw->x;
        nw->next=NULL;
        if(head==NULL)
        {
            head=nw;
            tail=nw;
        }
        else
        {
            tail->next=nw;
            tail=nw;

        }
    }
}
void add_first()
{
    node *temp=head;
    nw = (node *)malloc(sizeof(node));
    cin>>nw->x;
    nw->next=head;
    head=nw;

}
void add_last()
{
    node *temp=head;
    nw = (node *)malloc(sizeof(node));
    cin>>nw->x;
    nw->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=nw;

}
void add_any_posi()
{
    node *temp=head,*temp1;
    int n;
    cin>>n;
    nw = (node *)malloc(sizeof(node));
    cin>>nw->x;
    for(int i=1;i<n;i++)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=nw;
    nw->next=temp;
}
void del_last()
{
    node *temp=head,*temp1;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
}
void del_first()
{
    node *temp=head;
    head=head->next;
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
        temp=temp->next;
    }
    temp1->next=temp->next;
    free(temp);
}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->x<<endl;
        temp=temp->next;
    }
}
int main()
{
    create();
    display();
    add_first();
    display();
    add_last();
    display();
    add_any_posi();
    display();
    del_last();
    display();
    del_first();
    display();
    del_any_posi();
    display();
    return 0;
}
