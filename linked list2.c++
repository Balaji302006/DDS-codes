#include <iostream>
using namespace std;
struct node {
    int data;
    node * next;
};
node*head=NULL;
void insertStart(int num){
    node*newNode=new node();
    newNode->data=num;
    newNode->next=head;
    head=newNode;
    cout<<num<<" inserted"<<endl;
    }
int main(){
    insertStart(10);
    insertStart(20);
    insertStart(30);
    insertStart(40);
    insertStart(50);
}
