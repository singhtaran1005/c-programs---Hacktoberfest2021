#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
  int value;
  struct node* next;
};
struct node* head;
void solve(){
  struct node* prev,*curr,*nxt,*pp;
  pp=NULL;
  prev=head;
  curr=head->next;
  nxt=head->next->next;
  while(nxt!=NULL){
    //cout<<nxt->value<<' ';
    if(curr->value!=prev->value && prev->value==nxt->value){//0 1 0, 1 0 1
      prev->next=nxt;
      curr=nxt;
      nxt=nxt->next;
    }
    else if(curr->value==nxt->value && prev->value!=curr->value){// 1 0 0 , 0 1 1 -> 0 1 0 , 1 0 1
      if(pp==NULL){
        head=curr;
        prev->next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=curr->next;
      }
      else{
        pp->next=curr;
        prev->next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=curr->next;
      }
    }
    else if(curr->value==prev->value && curr->value!=nxt->value){// 0 0 1, -> 0 1 0
      curr->next=nxt->next;
      nxt->next=curr;
      prev->next=nxt;
      curr=nxt;
      nxt=nxt->next;
    }
    else if(curr->value==prev->value && curr->value==nxt->value){
      if(pp==NULL){
        pp=prev;
      }
      prev=prev->next;
      curr=curr->next;
      nxt=nxt->next;
    }
  }
}
int main(){

  int N;
  cin>>N;

  //create the single linkedlist
  struct node* ptr=NULL;
  for(int i=0;i<N;i++){
    if(ptr==NULL){
      head=new node();
      ptr=head;
    }
    else{
      ptr->next=new node();
      ptr=ptr->next;
    }
    cin>>ptr->value;
  }
  //display list
  solve();
  for(ptr=head;ptr!=NULL;ptr=ptr->next){
    cout<<ptr->value<<'\n';
  }
  //cout<<"Mid: "<<findMidLoop()<<endl;
  return 0;
}
/*
WAP to create of  linked list of size of multiple of 3
Each node consists 3 elements data, index(0/1),pointer
In the set of 3 if the middle one is different from the next and previous index
then kill it And if the outside index is different from the next 2 then put it in middle
And if all 3 index are same then leave them as it is

index
0 1 0 0 1 0 1 0 0
0   0 0 1 0 1 0 0
0   0 1 0 0 1 0 0
0   0   0 0 1 0 0
0   0   0 1 0 0 0



