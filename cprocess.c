#include <stdio.h>
#include <stdlib.h>
#include "compile.h"
struct compile_process* compile_process_create(const char* in_filename,const char* out_filename,int flags)
{
   FILE* in_file = fopen(in_filename,"r");
   if(!in_file)
    {
         return NULL;
    }
    FILE* out_file = NULL;
if(out_filename)
 {   out_file = fopen(out_filename,"w");
    if(!out_file)
    {
        fclose(in_file);
        return NULL;
    }
    
    }
struct compile_process* process = calloc(1,sizeof(struct compile_process));
process->flags = flags;
process->infile.file = in_file;
process->outfile.file=out_file;

return process;
}

