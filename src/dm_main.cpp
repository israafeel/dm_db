// std
#include "stdio.h"
#include <string.h>
#include <stdbool.h>
// deps
#include "db_type.h"
#include "get_opt.hpp"

int main(){
    bool help = get_arg( false, "-h", "--help", "-?" );
    int version = get_arg( 0, "-v", "--version", "--show-version" );
    int depth = get_arg( 1, "-d", "--depth", "--max-depth");

    std::cout << help << ',' << version << ',' << depth << std::endl;

    return RET_CODE_SUCCESS;
}
