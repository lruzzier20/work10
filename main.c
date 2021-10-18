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
int main(){
  void* bottom=insert_front(0, "Light", 1000);
  void* top=insert_front(insert_front(insert_front(bottom, "Heavy", 750),"Smokey", 500), "Rough", 250);
  print_list(top);
  free_list(top);
  return 0;
}
