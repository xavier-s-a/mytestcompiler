#include "compile.h"
int compile_it(const char* in_filename,const char* out_filename,int flags)
{
    struct compile_process* process = compile_process_create(in_filename,out_filename,flags);
    if(!process)
    {
        return COMPILER_ERRORS;
    }

    //lex
    //parse
    //codegen
    //link
    //return

    return COMPILED_GOOD;
}