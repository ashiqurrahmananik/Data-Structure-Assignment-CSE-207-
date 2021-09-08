#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *n;
};
struct node *top=NULL,*temp;
void push(int x)
{
    if(top==NULL)
    {
        top=(node*)malloc(sizeof(node));
        top->data=x;
        top->n=NULL;
    }
    else
    {
        temp=(node*)malloc(sizeof(node));
        temp->data=x;
        temp->n=top;
        top=temp;
    }
}
void pop()
{
    node *temp=top;
    top=temp->n;
    free(temp);
}
void display()
{
    node *temp=top;
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
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        push(x);
    }
    display();
    pop();
    display();
}
