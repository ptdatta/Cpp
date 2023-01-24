#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertattail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp !=NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
int insersion(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    node *ptr1;
    node *ptr2;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
void display(node *head)
{
    node *temp = head;
    while (temp !=NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummynode = new node(-1);
    node *p3 = dummynode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
}
node* rmerge(node *&head1, node *&head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=rmerge(head1->next,head2);
    } else {
          result=head2;
        result->next=rmerge(head1,head2->next);
    }
    return result;
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insertattail(head1, 1);
    insertattail(head1, 2);
    insertattail(head1, 3);
    insertattail(head1, 4);
    insertattail(head1, 5);
    insertattail(head1, 6);
    insertattail(head2, 9);
    insertattail(head2, 10);
   // intersect(head1, head2, 4);
    // display(head1);
    // display(head2);
    // cout << insersion(head1, head2) << endl;
    // node* newhead =merge(head1,head2);
    // display(newhead);
    node* newhead =rmerge(head1,head2);   //time -->n1+n2
    display(newhead);
    return 0;
}

//time-->N