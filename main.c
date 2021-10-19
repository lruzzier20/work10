#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct note {
  char timbre[100];
  int hertz;
  struct note* next;
};
void structprnt(struct note *f);
struct note* insert_front(struct note* top, char* t, int hz);
void print_list(struct note *g);
struct note* free_list(struct note* start);
struct note * remove_node(struct note *front, int data);
int main(){
  void* bottom=insert_front(0, "Light", 1000);
  void* top=insert_front(insert_front(insert_front(bottom, "Heavy", 750),"Smokey", 500), "Rough", 250);
  top=insert_front(top, "Cool",1300);
  top=insert_front(top, "Sharp",1000);
  top=insert_front(top, "Heated",1600);
  top=insert_front(top, "Angry",1000);
  top=insert_front(top, "Winding",1000);
  print_list(top);
  printf("------\n");
  printf("Top of List = %p\n",remove_node(top,500));
  print_list(top);
  printf("------\n");
  printf("Top of List = %p\n",remove_node(top,750));
  print_list(top);
  printf("------\n");
  struct note* newtop=remove_node(top,250);
  printf("Top of List = %p\n",newtop);
  print_list(newtop);
  printf("------\n");
  newtop=remove_node(newtop,1300);
  printf("Top of List = %p\n",newtop);
  print_list(newtop);
  printf("------\n");
  newtop=remove_node(newtop,1000);
  printf("Top of List = %p\n",newtop);
  print_list(newtop);
  newtop=remove_node(newtop,1600);
  printf("Top of List = %p\n",newtop);
  print_list(newtop);
  free_list(top);
  return 0;
}
