#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *n;
};
struct node *f=NULL,*rear=NULL,*temp;
void enq(int x)
{
    if(rear==NULL)
    {
        rear=(node*)malloc(sizeof(node));
        rear->data=x;
        rear->n=NULL;
        f=rear;
    }
    else
    {
        temp=(node*)malloc(sizeof(node));
        rear->n=temp;
        temp->data=x;
        temp->n=NULL;
        rear=temp;
    }
}
void deq()
{
    node *temp=f;
    f=f->n;
    free(temp);
}
void display()
{
    node *temp=f;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->n;
    }

}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        enq(x);
    }
    deq();
    display();

}
