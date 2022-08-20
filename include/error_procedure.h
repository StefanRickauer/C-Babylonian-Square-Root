#ifndef _ERROR_PROCEDURE_H
#define _ERROR_PROCEDURE_H

#include "usual_suspects.h"


void cmdLineErr(const char *format, ...);
void usageErr(const char *format, ...);
void errExit(const char *format, ...);
void fatal(const char *format, ...);

#endif
