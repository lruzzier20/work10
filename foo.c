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
  printf("Timbre=%s\tHertz=%d\n",f->timbre,f->hertz);
}
struct note* insert_front(struct note* top, char* t, int hz){
  struct note* s=malloc(sizeof(struct note));
  strcpy(s->timbre, t);
  s->hertz=hz;
  s->next=top;
  return s;
}
