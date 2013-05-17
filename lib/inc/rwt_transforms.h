/*! \file rwt_transforms.h
    \brief Function prototypes for the transform implementations
*/
#ifndef TRANSFORMS_H_
#define TRANSFORMS_H_

#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

int DWT(double *x, int m, int n, double *h, int lh, int L, double *y);
int IDWT(double *x, int m, int n, double *h, int lh, int L, double *y);
int RDWT(double *x, int m, int n, double *h, int lh, int L, double *yl, double *yh);
int IRDWT(double *x, int m, int n, double *h, int lh, int L, double *yl, double *yh);

#ifdef __cplusplus
}
#endif

#endif /* TRANSFORMS_H_ */
