//Programme for the implementation of a linked list and its various operations
#include <iostream>
using namespace std;

//The construction of the node
struct node{
int data;
node *next;
};

//LinkedList class
class linkedlist{
//Private elements:
private;
node *head,*tail;
//Public elements:
public;
linkedlist() {
head==NULL;
tail==NULL;
}

//Addition function - function for inserting a node at the end
void addnode ( int n1){
node *temp=new node;
temp->data=n1;
temp->next=NULL;

//If the linked list is empty 
if (head==NULL){
	head=temp;
	tail=temp;
}
//If the linked list is not empty
else if(head!=NULL){
	tail->next=temp;
	tail=temp;
}
}

//Counting function - function for counting the number of elements in the linked list
void countnode() {
node *temp;
temp=head;
if (head==NULL){
	cout<<"The list is empty"<<"\n";
}
else if(head!=NULL) {
	int length=0;
	while(temp!=NULL) {
		length++;
		temp=temp->next;
	}
	cout<<"The number of elements in the linkedlist are"<<"\n";
}
}

//Inserting function - function for inserting a node at a particular position
void insertnode (int n2, int pos1) {
int count=1;
node *cur,*prev;
cur=head;
prev=head;
node *temp=new node;
temp->data=n1;
temp->next=NULL;
if(pos1<=length){
    while(count!=pos1){
	    prev=cur;
        cur=cur->next;
	    count++;
}
prev->next=temp;
temp->next==cur;
}
else if(pos1>length){
	cout<<"The linked list does have that much elements"<<"\n";
}
}

//Delete function - function for deleting a node at end
void deletenode() {
//If the linked list is empty
if (head==NULL){
	cout<<"The list is empty"<<"\n";
}
//If the linked list has only one node
if else(head==tail){
	delete head;
	head=NULL;
	tail=NULL;
}
//If the linked list has more than one node
if else(head!=NULL){
	node *temp;
	temp=head;
	head=head->next;
	delete temp;
}
}

//Delete function - function for deleting a node at a particular postion
void deleteat (int pos2) {
int count=0;
node *cur,*prev;
node *temp;
cur=head;
while(count!=pos2){
	temp=cur;
	prev->next=temp;
	cur=cur->next;
	count++;
}
delete temp;
prev->next=cur;
}

//Display function - funtion used for displaying all the elements of the linked list
void displaynode() {
node *temp;
temp=head;
if (head==NULL){
	cout<<"The list is empty"<<"\n";
}
else if(head!=NULL){
    cout<<"The elements of the list are : "<<"\n";
    while(temp!=NULL){
    	cout<<temp->data<<" ";
    	temp=temp->next;
    }
}
}

//Main function of the programme
int main() {
int pos1,n2,pos2;
linkedlist 1;
1.addnode(1);
1.addnode(3);
1.addnode(5);
1.addnode(7);
1.addnode(9);
1.dispaly();
1.countnode();
cout<<"Enter the data and the position to be added"<<"\n";
cin<<n2,pos1
1.addnode(n2,pos1);
1.display();
1.deletenode();
cout<<"Enter the position to be deleted"<<"\n";
cin>>pos2;
1.deleteat(pos2);
1.display();
return 0;
}
