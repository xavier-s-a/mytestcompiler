#ifndef KOMPILER_H
#define KOMPILER_H
#include <stdio.h>

#define COMPILER_ERRORS -1
#define COMPILER_WARNINGS 2
#define COMPILER_DEBUG 4
#define COMPILER_OPTIMIZE 8
#define COMPILED_GOOD  0

struct compile_process
{
    int flags;
    struct comp_pr_infile{
        FILE* file;
        const char* filename;
    } infile;
    struct comp_pr_outfile{
        FILE* file;
        const char* filename;
    } outfile;

};

int compile_it(const char* in_filename,const char* out_filename,int flags);
struct compile_process* compile_process_create(const char* in_filename,const char* out_filename,int flags);


#endif
