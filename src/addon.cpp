#include "pcsclite.h"
#include "cardreader.h"

using namespace v8;
using namespace node;

void init_all(Local<Object> target) {
    PCSCLite::init(target);
    CardReader::init(target);
}

NAN_MODULE_WORKER_ENABLED(pcsclite, init_all)
