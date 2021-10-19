#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct note {
  char timbre[100];
  int hertz;
  struct note* next;
};
void structprnt(struct note *f){
  printf("Timbre=%s, Hertz=%d\t",f->timbre,f->hertz);
}
void print_list(struct note *g){
  if(g){struct note* temp=g;
    printf("[");
  while(temp->next){
    structprnt(temp);
    temp=temp->next;
  }
  structprnt(temp);
  printf("]\n");}else{printf("[]\n");}
}
struct note* insert_front(struct note* top, char* t, int hz){
  struct note* s=malloc(sizeof(struct note));
  strcpy(s->timbre, t);
  s->hertz=hz;
  s->next=top;
  return s;
}
struct note* free_list(struct note* start){
  struct note* t=start;
  struct note* t2;
  struct note* t3=start;
  while(t->next){
    t2=t;
    t=t->next;
    free(t2);
  }
  free(t);
  return t3;
}
struct note * remove_node(struct note *front, int data){
  struct note* back=NULL;
  struct note* t=front;
  struct note* ret=front;
  while(t){
    if(t->hertz!=data){
      back=t;
      t=t->next;
    }else{
      if(back!=NULL){
        back->next=t->next;
      }else{
        ret=t->next;
      }
      t=t->next;}
  }

  return ret;
}
