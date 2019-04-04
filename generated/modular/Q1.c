#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h"

struct LINEITEMRecord;
struct AGGRecord_Q1GRPRecord;
struct Q1GRPRecord;

struct AGGRecord_Q1GRPRecord {
  struct Q1GRPRecord* key;
  double* aggs;
};

struct Q1GRPRecord {
  char L_RETURNFLAG;
  char L_LINESTATUS;
};


numeric_int_t x11942(struct Q1GRPRecord* x4066);

boolean_t x11949(struct Q1GRPRecord* x4071, struct Q1GRPRecord* x4072);

numeric_int_t x11992(struct AGGRecord_Q1GRPRecord* x111, struct AGGRecord_Q1GRPRecord* x112);

numeric_int_t x4241(void* x4235, void* x4236, void* x4237);

int main(int argc, char** argv) {
  numeric_int_t x2214;
  struct LINEITEMRecord* x2872;
  numeric_int_t* li_count = &x2214; 
  struct LINEITEMRecord** li_array = &x2872;
  loadLineitem(li_count, li_array);
  numeric_int_t x34 = 0;
  for(; x34 < 1 ; x34 += 1) {
    
    GHashTable* x11964 = g_hash_table_new(x11942, x11949);
    struct timeval x11965 = (struct timeval){0};
    /* VAR */ struct timeval x11966 = x11965;
    struct timeval x11967 = x11966;
    /* VAR */ struct timeval x11968 = x11965;
    struct timeval x11969 = x11968;
    /* VAR */ struct timeval x11970 = x11965;
    struct timeval x11971 = x11970;
    struct timeval* x11972 = &x11969;
    gettimeofday(x11972, NULL);
    /* VAR */ numeric_int_t x11974 = 0;
    numeric_int_t* x12009 = &(x11992);
    GTree* x12010 = g_tree_new(x12009);
    /* VAR */ boolean_t x12011 = 0;
    /* VAR */ numeric_int_t x12012 = 0;
    while(1) {
      
      numeric_int_t x12014 = x11974;
      boolean_t x12015 = x12014<(x2214);
      if (!(x12015)) break; 
      
      numeric_int_t x1122 = x11974;
      struct LINEITEMRecord* x151 = &(x2872[x1122]);
      numeric_int_t x153 = x151->L_SHIPDATE;
      boolean_t x154 = x153<=(19980902);
      if(x154) {
        char x155 = x151->L_RETURNFLAG;
        char x156 = x151->L_LINESTATUS;
        struct Q1GRPRecord* x3437 = (struct Q1GRPRecord*)malloc(1 * sizeof(struct Q1GRPRecord));
        memset(x3437, 0, 1 * sizeof(struct Q1GRPRecord));
        x3437->L_RETURNFLAG = x155; x3437->L_LINESTATUS = x156;
        void* x4545 = g_hash_table_lookup(x11964, x3437);
        boolean_t x4140 = x4545==(NULL);
        /* VAR */ struct AGGRecord_Q1GRPRecord* ite9916 = 0;
        if(x4140) {
          double* x9917 = (double*)malloc(9 * sizeof(double));
          memset(x9917, 0, 9 * sizeof(double));
          struct AGGRecord_Q1GRPRecord* x9918 = (struct AGGRecord_Q1GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q1GRPRecord));
          memset(x9918, 0, 1 * sizeof(struct AGGRecord_Q1GRPRecord));
          x9918->key = x3437; x9918->aggs = x9917;
          g_hash_table_insert(x11964, x3437, x9918);
          ite9916 = x9918;
        } else {
          
          ite9916 = x4545;
        };
        struct AGGRecord_Q1GRPRecord* x4150 = ite9916;
        double* x162 = x4150->aggs;
        double x176 = x162[0];
        double x177 = x151->L_DISCOUNT;
        double x178 = x177+(x176);
        *x162 = x178;
        double x186 = x162[1];
        double x187 = x151->L_QUANTITY;
        double x188 = x187+(x186);
        *(x162 + 1) = x188;
        double x196 = x162[2];
        double x197 = x151->L_EXTENDEDPRICE;
        double x198 = x197+(x196);
        *(x162 + 2) = x198;
        double x206 = x162[3];
        double x207 = 1.0-(x177);
        double x208 = x197*(x207);
        double x209 = x208+(x206);
        *(x162 + 3) = x209;
        double x217 = x162[4];
        double x218 = x151->L_TAX;
        double x219 = 1.0+(x218);
        double x220 = x208*(x219);
        double x221 = x220+(x217);
        *(x162 + 4) = x221;
        double x229 = x162[5];
        double x231 = x229+(1.0);
        *(x162 + 5) = x231;
      };
      numeric_int_t x1209 = x11974;
      numeric_int_t x239 = x1209+(1);
      x11974 = x239;
    };
    GList* x12086 = g_hash_table_get_keys(x11964);
    /* VAR */ GList* x12087 = x12086;
    numeric_int_t x12088 = g_hash_table_size(x11964);
    numeric_int_t x8681 = 0;
    for(; x8681 < x12088 ; x8681 += 1) {
      
      GList* x8682 = x12087;
      void* x8683 = g_list_nth_data(x8682, 0);
      GList* x8684 = g_list_next(x8682);
      x12087 = x8684;
      void* x8686 = g_hash_table_lookup(x11964, x8683);
      struct AGGRecord_Q1GRPRecord* x8688 = (struct AGGRecord_Q1GRPRecord*){x8686};
      double* x8689 = x8688->aggs;
      double x8690 = x8689[1];
      double x8691 = x8689[5];
      double x8692 = x8690/(x8691);
      *(x8689 + 6) = x8692;
      double x8694 = x8689[2];
      double x8695 = x8689[5];
      double x8696 = x8694/(x8695);
      *(x8689 + 7) = x8696;
      double x8698 = x8689[0];
      double x8699 = x8689[5];
      double x8700 = x8698/(x8699);
      *(x8689 + 8) = x8700;
      g_tree_insert(x12010, x8688, x8688);
    };
    while(1) {
      
      boolean_t x1237 = x12011;
      boolean_t x269 = !(x1237);
      /* VAR */ boolean_t ite10728 = 0;
      if(x269) {
        numeric_int_t x12139 = g_tree_nnodes(x12010);
        boolean_t x12140 = x12139!=(0);
        ite10728 = x12140;
      } else {
        
        ite10728 = 0;
      };
      boolean_t x10025 = ite10728;
      if (!(x10025)) break; 
      
      void* x4234 = NULL;
      void** x4242 = &(x4234);
      g_tree_foreach(x12010, x4241, x4242);
      struct AGGRecord_Q1GRPRecord* x4244 = (struct AGGRecord_Q1GRPRecord*){x4234};
      numeric_int_t x4245 = g_tree_remove(x12010, x4244);
      if(0) {
        x12011 = 1;
      } else {
        
        struct Q1GRPRecord* x282 = x4244->key;
        char x283 = x282->L_RETURNFLAG;
        char x284 = x282->L_LINESTATUS;
        double* x285 = x4244->aggs;
        double x286 = x285[1];
        double x287 = x285[2];
        double x288 = x285[3];
        double x289 = x285[4];
        double x290 = x285[6];
        double x291 = x285[7];
        double x292 = x285[8];
        double x293 = x285[5];
        printf("%c|%c|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.0f\n", x283, x284, x286, x287, x288, x289, x290, x291, x292, x293);
        numeric_int_t x1263 = x12012;
        numeric_int_t x296 = x1263+(1);
        x12012 = x296;
      };
    };
    numeric_int_t x12175 = x12012;
    printf("(%d rows)\n", x12175);
    struct timeval* x12177 = &x11971;
    gettimeofday(x12177, NULL);
    struct timeval* x12179 = &x11967;
    struct timeval* x12180 = &x11971;
    struct timeval* x12181 = &x11969;
    long x12182 = timeval_subtract(x12179, x12180, x12181);
    printf("Generated code run in %ld milliseconds.\n", x12182);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x11942(struct Q1GRPRecord* x4066) {
  char x6481 = x4066->L_RETURNFLAG;
  numeric_int_t x6892 = (numeric_int_t){x6481};
  char x6483 = x4066->L_LINESTATUS;
  numeric_int_t x6894 = (numeric_int_t){x6483};
  numeric_int_t x6485 = x6892+(x6894);
  return x6485; 
}

boolean_t x11949(struct Q1GRPRecord* x4071, struct Q1GRPRecord* x4072) {
  char x6489 = x4071->L_RETURNFLAG;
  char x6490 = x4072->L_RETURNFLAG;
  boolean_t x6491 = x6489==(x6490);
  char x6492 = x4071->L_LINESTATUS;
  char x6493 = x4072->L_LINESTATUS;
  boolean_t x6494 = x6492==(x6493);
  /* VAR */ boolean_t ite10547 = 0;
  if(x6491) {
    ite10547 = x6494;
  } else {
    
    ite10547 = 0;
  };
  boolean_t x9851 = ite10547;
  return x9851; 
}

numeric_int_t x11992(struct AGGRecord_Q1GRPRecord* x111, struct AGGRecord_Q1GRPRecord* x112) {
  struct Q1GRPRecord* x113 = x111->key;
  char x114 = x113->L_RETURNFLAG;
  struct Q1GRPRecord* x115 = x112->key;
  char x116 = x115->L_RETURNFLAG;
  numeric_int_t x117 = x114-(x116);
  /* VAR */ numeric_int_t res118 = x117;
  numeric_int_t x119 = res118;
  boolean_t x120 = x119==(0);
  if(x120) {
    char x121 = x113->L_LINESTATUS;
    char x122 = x115->L_LINESTATUS;
    numeric_int_t x123 = x121-(x122);
    res118 = x123;
  };
  numeric_int_t x126 = res118;
  return x126; 
}

numeric_int_t x4241(void* x4235, void* x4236, void* x4237) {
  struct AGGRecord_Q1GRPRecord** x4238 = (struct AGGRecord_Q1GRPRecord**){x4237};
  struct AGGRecord_Q1GRPRecord* x4239 = (struct AGGRecord_Q1GRPRecord*){x4236};
  pointer_assign(x4238, x4239);
  return 1; 
}
