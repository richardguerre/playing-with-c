#include <iostream>
using namespace std;

struct node {
  int id = 0;
  node * next = NULL;
};

node* createList(int length){
  node* head = new node;
  node* cur = head;
  for(int i=1; i < length+1; i++){
    cur->id = i;
    cur->next = new node;
    cur = cur->next;
  }
  return head;
}

void printList(node* head){
  node* cur = head;
  while(cur != NULL){
    cout << cur->id << "\t";
    cur = cur->next;
  }
}

node* reverseList(node* head){
  node* cur = head;
  node *prev = NULL, *next = NULL;
  while(cur->next != NULL){
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
  }
  return prev;
}

int main(){
  node* head = createList(10);
  printList(head);
  cout << endl;
  head = reverseList(head);
  printList(head);
  return 0;
}
