#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h"

struct AGGRecord_String;
struct LINEITEMRecord;
struct AGGRecord_String {
  char* key;
  double* aggs;
};

int main(int argc, char** argv) {
  numeric_int_t x1295;
  struct LINEITEMRecord* x1845;
  numeric_int_t* li_count = &x1295; 
  struct LINEITEMRecord** li_array = &x1845;
  loadLineitem(li_count, li_array);
  numeric_int_t x34 = 0;
  for(; x34 < 1 ; x34 += 1) {
    
    double* x7849 = (double*)malloc(1 * sizeof(double));
    memset(x7849, 0, 1 * sizeof(double));
    struct AGGRecord_String* x7850 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x7850, 0, 1 * sizeof(struct AGGRecord_String));
    x7850->key = "Total"; x7850->aggs = x7849;
    struct timeval x7853 = (struct timeval){0};
    /* VAR */ struct timeval x7854 = x7853;
    struct timeval x7855 = x7854;
    /* VAR */ struct timeval x7856 = x7853;
    struct timeval x7857 = x7856;
    /* VAR */ struct timeval x7858 = x7853;
    struct timeval x7859 = x7858;
    struct timeval* x7860 = &x7857;
    gettimeofday(x7860, NULL);
    /* VAR */ numeric_int_t x7862 = 0;
    /* VAR */ boolean_t x7863 = 0;
    /* VAR */ numeric_int_t x7864 = 0;
    while(1) {
      
      numeric_int_t x7866 = x7862;
      boolean_t x7867 = x7866<(x1295);
      if (!(x7867)) break; 
      
      numeric_int_t x560 = x7862;
      struct LINEITEMRecord* x78 = &(x1845[x560]);
      numeric_int_t x80 = x78->L_SHIPDATE;
      boolean_t x81 = x80>=(19960101);
      /* VAR */ boolean_t ite5882 = 0;
      if(x81) {
        boolean_t x7874 = x80<(19970101);
        /* VAR */ boolean_t x7875 = 0;
        if(x7874) {
          double x7877 = x78->L_DISCOUNT;
          boolean_t x7878 = x7877>=(0.08);
          /* VAR */ boolean_t x7879 = 0;
          if(x7878) {
            boolean_t x7881 = x7877<=(0.1);
            /* VAR */ boolean_t x7882 = 0;
            if(x7881) {
              double x7884 = x78->L_QUANTITY;
              boolean_t x7885 = x7884<(24.0);
              x7882 = x7885;
            } else {
              
              x7882 = 0;
            };
            boolean_t x7889 = x7882;
            x7879 = x7889;
          } else {
            
            x7879 = 0;
          };
          boolean_t x7893 = x7879;
          x7875 = x7893;
        } else {
          
          x7875 = 0;
        };
        boolean_t x7897 = x7875;
        ite5882 = x7897;
      } else {
        
        ite5882 = 0;
      };
      boolean_t x5524 = ite5882;
      if(x5524) {
        double* x97 = x7850->aggs;
        double x111 = x97[0];
        double x112 = x78->L_EXTENDEDPRICE;
        double x113 = x78->L_DISCOUNT;
        double x114 = x112*(x113);
        double x115 = x114+(x111);
        *x97 = x115;
      };
      numeric_int_t x604 = x7862;
      numeric_int_t x123 = x604+(1);
      x7862 = x123;
    };
    if(0) {
      x7863 = 1;
    } else {
      
      double* x134 = x7850->aggs;
      double x135 = x134[0];
      printf("%.4f\n", x135);
      numeric_int_t x619 = x7864;
      numeric_int_t x138 = x619+(1);
      x7864 = x138;
    };
    numeric_int_t x7932 = x7864;
    printf("(%d rows)\n", x7932);
    struct timeval* x7934 = &x7859;
    gettimeofday(x7934, NULL);
    struct timeval* x7936 = &x7855;
    struct timeval* x7937 = &x7859;
    struct timeval* x7938 = &x7857;
    long x7939 = timeval_subtract(x7936, x7937, x7938);
    printf("Generated code run in %ld milliseconds.\n", x7939);
  };
}
/* ----------- FUNCTIONS ----------- */