

static void* lib;
typedef void (*mw_sym)(void);

typedef struct CP_OUTPUT (*standard_process_request_t)(void*);
static standard_process_request_t standard_process_request_sym;
struct CP_OUTPUT standard_process_request(void*);

typedef struct CP_OBJECT (*direct_process_request_t)(char*);
static direct_process_request_t direct_process_request_sym;
struct CP_OBJECT direct_process_request(char*);

int load_middleware();
int load_symbols();
