static void* lib;
typedef void (*mw_sym)(void);

static mw_sym standard_process_request_sym;

int load_middleware();
int load_symbols();

void standard_process_request();
