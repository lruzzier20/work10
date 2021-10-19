void structprnt(struct note *f);
struct note* insert_front(struct note* top, char* t, int hz);
void print_list(struct note *g);
struct note* free_list(struct note* start);
struct note * remove_node(struct note *front, int data)
