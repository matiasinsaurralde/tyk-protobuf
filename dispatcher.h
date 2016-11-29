#include "middleware/middleware.h"

static void* lib;
typedef void (*mw_sym)(void);

typedef struct CP_OUTPUT (*standard_process_request_t)(void*);
static standard_process_request_t standard_process_request_sym;
struct CP_OUTPUT standard_process_request(void*);

typedef void (*direct_process_request_t)(struct CP_OBJECT*);
static direct_process_request_t direct_process_request_sym;
void direct_process_request(struct CP_OBJECT*);

int load_middleware();
int load_symbols();
