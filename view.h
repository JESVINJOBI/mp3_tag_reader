#ifndef VIEW_H
#define VIEW_H

#include "common.h"

/* Structure to store MP3 file information */
typedef struct
{
    char *mp3_fname;
    FILE *fptr_mp3;
} ViewInfo;

/* Function declarations */
Status read_and_validate_view_args(char *argv[], ViewInfo *viewInfo);

Status do_view(ViewInfo *viewInfo);

#endif