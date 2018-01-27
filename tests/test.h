/* MATPROD - A LIBRARY FOR MATRIX MULTIPLICATION WITH OPTIONAL PIPELINING
             Header File for Test Programs

   Copyright (c) 2013, 2018 Radford M. Neal.

   The matprod library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include <stdlib.h>

#ifndef EXTERN
#define EXTERN extern
#endif

#define MAX_MATRICES 20              /* Maximum number of matrices to muliply */

EXTERN int do_check;                 /* 1 if check should be done */

EXTERN int nmat;                     /* Number of matrices used */

EXTERN double *matrix[MAX_MATRICES]; /* Pointers to storage for matrices */
EXTERN int matrows[MAX_MATRICES];    /* Number of rows in each matrix */
EXTERN int matcols[MAX_MATRICES];    /* Number of columns in each matrix */
EXTERN size_t matlen[MAX_MATRICES];  /* Length of each matrix (rows x cols) */
EXTERN int trans[MAX_MATRICES+1];    /* 1 if matrix stored as its transpose */

EXTERN int dim[MAX_MATRICES+1];      /* Dimensions of matrices */
EXTERN int vec[MAX_MATRICES+1];      /* Indicator to treat as a vector */
EXTERN int last_V;                   /* Whether last argument is "V" */

EXTERN double *product[MAX_MATRICES];/* Pointers to storage for products */
EXTERN size_t prodlen[MAX_MATRICES]; /* Length of each product matrix */

extern char *prog_name;              /* Name of test program (for usage msg) */

extern void do_test(int);            /* Procedure to do the test (repeatedly) */
extern void print_result (void);     /* Print part of final result matrix */
extern void check_results (void);    /* Check that results are correct */
