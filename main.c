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
int main(){
  structprnt(insert_front(0, "Light", 1000));
  return 0;
}
