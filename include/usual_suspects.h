#ifndef _USUAL_SUSPECTS_H
#define _USUAL_SUSPECTS_H

#include <stdio.h>			/* Standard I/O Functions */
#include <stdlib.h>			/* EXIT_SUCCESS, EXIT_FAILURE, malloc(), free() 
					   much more commonly used functions */
#include <string.h>			/* string processing functions */
#include <errno.h>			/* error numbers */

#if (__STDC_VERSION__ < 199901L)	/* not C99 which supports bool */ 
typedef enum { false, true } bool;
#else					
#include <stdbool.h>
#endif

#include "error_procedure.h"

#endif
