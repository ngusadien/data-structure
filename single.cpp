#include <iostream>
using namespace std;

class node {
    public:
    int value;
    node* next;
};
//function to print the linked list
void printValues(node*n){
    while(n!= nullptr){
        cout<<n->value<<endl;
        n = n->next;
    }

}

int main(){

    //pointer the linked value

    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();

    //value to be stored and links

    head->value = 4;
    head->next = second;
    second->value = 5;
    second->next = third;
    third->value = 34;
    third->next = fourth;
    fourth->value =45;
    fourth->next = nullptr;

printValues(head);
    
}