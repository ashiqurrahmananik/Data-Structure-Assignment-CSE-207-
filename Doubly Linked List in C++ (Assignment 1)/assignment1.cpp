#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *n;
    node *p;
};
struct node *nw,*head=NULL,*temp;
void create()
{
    int n;
    cout<<"How many? :";
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
    node *temp2=head;
    nw=(node*)malloc(sizeof(node));
    cout<<"Which number you want to add first? :";
    cin>>nw->data;
    nw->n=temp2;
    nw->p=NULL;
    head=nw;
}
void add_any_posi()
{
    int x;
    node *temp=head,*temp1;
    cout<<"Which position you want to add? :";
    cin>>x;
    cout<<endl;
    nw=(node*)malloc(sizeof(node));
    cout<<"Which number you want to add? :";
    cin>>nw->data;
    for(int i=1; i<x; i++)
    {
        temp1=temp;
        temp=temp->n;
    }
    nw->n=temp;
    nw->p=temp1;
    temp1->n=nw;
    temp->p=nw;

}
void add_last()
{
    node *temp=head;
    nw=(node*)malloc(sizeof(node));
    cout<<"Which number you want to add last? :";
    cin>>nw->data;
    nw->n=NULL;
    while(temp->n!=NULL)
    {
        temp=temp->n;
    }
    nw->p=temp;
    temp->n=nw;
}
void del_first()
{
    node *temp=head;
    head=temp->n;
    head->p=NULL;
    free(temp);
}
void del_any_posi()
{
    node *temp=head,*temp1;
    int x;
    cout<<"Which position you want to add delete? :";
    cin>>x;
    for(int i=1; i<x; i++)
    {
        temp1=temp;
        temp=temp->n;
    }
    temp1->n=temp->n;
    temp->n->p=temp1;
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
void display()
{
    node *temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<endl;
        temp1=temp1->n;
    }
}
int main()
{
    int k=0,w,p;
    cout<<"At first you have create a linked list for create press any number:"<<endl;
    cin>>k;
    if(k)
    {
        create();
        system("CLS");
        while(1)
        {
            cout<<"Press 1 for add first"<<endl;
            cout<<"Press 2 for add any position"<<endl;
            cout<<"Press 3 for add last"<<endl;
            cout<<"Press 4 for delete first"<<endl;
            cout<<"Press 5 for delete any position"<<endl;
            cout<<"Press 6 for delete last"<<endl;
            cout<<"Press 7 for display"<<endl;
            cout<<"Press 8 for exit"<<endl;
            cin>>w;
            system("CLS");
            if(w==1)
            {
                add_first();
                cout<<"Press any number for continue"<<endl;
                cin>>p;
                system("CLS");
                continue;
            }
            if(w==2)
            {
                add_any_posi();
               cout<<"Press any number for continue"<<endl;
                cin>>p;
                system("CLS");
                continue;
            }
            if(w==3)
            {
                add_last();
                cout<<"Press any number for continue"<<endl;
                cin>>p;
                system("CLS");
                continue;
            }
            if(w==4)
            {
                del_first();
                cout<<"Press any number for continue"<<endl;
                cin>>p;
                system("CLS");
                continue;
            }
            if(w==5)
            {
                del_any_posi();
                cout<<"Press any number for continue"<<endl;
                cin>>p;
                system("CLS");
                continue;
            }
            if(w==6)
            {
                del_last();
                cout<<"Press any number for continue"<<endl;
                cin>>p;
                system("CLS");
                continue;
            }
            if(w==7)
            {
                display();
                cout<<"Press any number for continue"<<endl;
                cin>>p;
                system("CLS");
                continue;
            }
            if(w==8)
            {
                return 0;
            }
        }
    }

}
