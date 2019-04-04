#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h" 


struct PARTRecord_LINEITEMRecord;
struct AGGRecord_String;
struct LINEITEMRecord;
struct PARTRecord;
struct PARTRecord_LINEITEMRecord {
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  numeric_int_t L_ORDERKEY;
  numeric_int_t L_PARTKEY;
  numeric_int_t L_SUPPKEY;
  numeric_int_t L_LINENUMBER;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  numeric_int_t L_SHIPDATE;
  numeric_int_t L_COMMITDATE;
  numeric_int_t L_RECEIPTDATE;
  char* L_SHIPINSTRUCT;
  char* L_SHIPMODE;
  char* L_COMMENT;
};

struct AGGRecord_String {
  char* key;
  double* aggs;
};

numeric_int_t x15307(void* x4921);

numeric_int_t x15310(void* x4924, void* x4925);

int main(int argc, char** argv) {
  numeric_int_t x2639;
  struct LINEITEMRecord* x3599;
  numeric_int_t* li_count = &x2639; 
  struct LINEITEMRecord** li_array = &x3599;
  loadLineitem(li_count, li_array);
  numeric_int_t x2829;
  struct PARTRecord* x3792;
  numeric_int_t* pa_count = &x2829; 
  struct PARTRecord** pa_array = &x3792;
  loadPart(pa_count, pa_array);
  numeric_int_t x59 = 0;
  for(; x59 < 1 ; x59 += 1) {
    
    double* x15303 = (double*)malloc(3 * sizeof(double));
    memset(x15303, 0, 3 * sizeof(double));
    struct AGGRecord_String* x15304 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x15304, 0, 1 * sizeof(struct AGGRecord_String));
    x15304->key = "Total"; x15304->aggs = x15303;
    void*** x15314 = (void***){x15307};
    numeric_int_t* x15315 = (numeric_int_t*){x15310};
    GHashTable* x15316 = g_hash_table_new(x15314, x15315);
    struct timeval x15317 = (struct timeval){0};
    /* VAR */ struct timeval x15318 = x15317;
    struct timeval x15319 = x15318;
    /* VAR */ struct timeval x15320 = x15317;
    struct timeval x15321 = x15320;
    /* VAR */ struct timeval x15322 = x15317;
    struct timeval x15323 = x15322;
    struct timeval* x15324 = &x15321;
    gettimeofday(x15324, NULL);
    /* VAR */ numeric_int_t x15326 = 0;
    /* VAR */ numeric_int_t x15327 = 0;
    /* VAR */ boolean_t x15328 = 0;
    /* VAR */ numeric_int_t x15329 = 0;
    while(1) {
      
      numeric_int_t x15331 = x15326;
      boolean_t x15332 = x15331<(x2829);
      if (!(x15332)) break; 
      
      numeric_int_t x1194 = x15326;
      struct PARTRecord* x132 = &(x3792[x1194]);
      numeric_int_t x134 = x132->P_PARTKEY;
      void* x4951 = (void*){x134};
      void* x4952 = (void*){x132};
      void* x4953 = g_hash_table_lookup(x15316, x4951);
      GList** x4954 = (GList**){x4953};
      GList** x4955 = NULL;
      boolean_t x4956 = x4954==(x4955);
      /* VAR */ GList** ite12703 = 0;
      if(x4956) {
        GList** x12704 = malloc(8);
        GList* x12705 = NULL;
        pointer_assign(x12704, x12705);
        ite12703 = x12704;
      } else {
        
        ite12703 = x4954;
      };
      GList** x4960 = ite12703;
      GList* x4961 = *(x4960);
      GList* x4962 = g_list_prepend(x4961, x4952);
      pointer_assign(x4960, x4962);
      void* x4964 = (void*){x4960};
      g_hash_table_insert(x15316, x4951, x4964);
      numeric_int_t x1199 = x15326;
      numeric_int_t x138 = x1199+(1);
      x15326 = x138;
    };
    while(1) {
      
      numeric_int_t x15360 = x15327;
      boolean_t x15361 = x15360<(x2639);
      if (!(x15361)) break; 
      
      numeric_int_t x1208 = x15327;
      struct LINEITEMRecord* x147 = &(x3599[x1208]);
      numeric_int_t x149 = x147->L_SHIPDATE;
      boolean_t x150 = x149>=(19940301);
      /* VAR */ boolean_t ite13608 = 0;
      if(x150) {
        boolean_t x15368 = x149<(19940401);
        ite13608 = x15368;
      } else {
        
        ite13608 = 0;
      };
      boolean_t x12726 = ite13608;
      if(x12726) {
        numeric_int_t x153 = x147->L_PARTKEY;
        void* x4981 = (void*){x153};
        void* x4982 = g_hash_table_lookup(x15316, x4981);
        GList** x4983 = (GList**){x4982};
        boolean_t x8316 = x4983!=(NULL);
        if(x8316) {
          GList* x6072 = *(x4983);
          /* VAR */ GList* x6073 = x6072;
          while(1) {
            
            GList* x6074 = x6073;
            GList* x6075 = NULL;
            boolean_t x6076 = x6074!=(x6075);
            if (!(x6076)) break; 
            
            GList* x6077 = x6073;
            void* x6078 = g_list_nth_data(x6077, 0);
            struct PARTRecord* x6079 = (struct PARTRecord*){x6078};
            GList* x6080 = x6073;
            GList* x6081 = g_list_next(x6080);
            x6073 = x6081;
            numeric_int_t x6083 = x6079->P_PARTKEY;
            boolean_t x6084 = x6083==(x153);
            if(x6084) {
              char* x569 = x6079->P_NAME;
              char* x570 = x6079->P_MFGR;
              char* x571 = x6079->P_BRAND;
              char* x572 = x6079->P_TYPE;
              numeric_int_t x573 = x6079->P_SIZE;
              char* x574 = x6079->P_CONTAINER;
              double x575 = x6079->P_RETAILPRICE;
              char* x576 = x6079->P_COMMENT;
              numeric_int_t x577 = x147->L_ORDERKEY;
              numeric_int_t x578 = x147->L_SUPPKEY;
              numeric_int_t x579 = x147->L_LINENUMBER;
              double x580 = x147->L_QUANTITY;
              double x581 = x147->L_EXTENDEDPRICE;
              double x582 = x147->L_DISCOUNT;
              double x583 = x147->L_TAX;
              char x584 = x147->L_RETURNFLAG;
              char x585 = x147->L_LINESTATUS;
              numeric_int_t x586 = x147->L_COMMITDATE;
              numeric_int_t x587 = x147->L_RECEIPTDATE;
              char* x588 = x147->L_SHIPINSTRUCT;
              char* x589 = x147->L_SHIPMODE;
              char* x590 = x147->L_COMMENT;
              struct PARTRecord_LINEITEMRecord* x4497 = (struct PARTRecord_LINEITEMRecord*)malloc(1 * sizeof(struct PARTRecord_LINEITEMRecord));
              memset(x4497, 0, 1 * sizeof(struct PARTRecord_LINEITEMRecord));
              x4497->P_PARTKEY = x6083; x4497->P_NAME = x569; x4497->P_MFGR = x570; x4497->P_BRAND = x571; x4497->P_TYPE = x572; x4497->P_SIZE = x573; x4497->P_CONTAINER = x574; x4497->P_RETAILPRICE = x575; x4497->P_COMMENT = x576; x4497->L_ORDERKEY = x577; x4497->L_PARTKEY = x153; x4497->L_SUPPKEY = x578; x4497->L_LINENUMBER = x579; x4497->L_QUANTITY = x580; x4497->L_EXTENDEDPRICE = x581; x4497->L_DISCOUNT = x582; x4497->L_TAX = x583; x4497->L_RETURNFLAG = x584; x4497->L_LINESTATUS = x585; x4497->L_SHIPDATE = x149; x4497->L_COMMITDATE = x586; x4497->L_RECEIPTDATE = x587; x4497->L_SHIPINSTRUCT = x588; x4497->L_SHIPMODE = x589; x4497->L_COMMENT = x590;
              double* x220 = x15304->aggs;
              double x234 = x220[0];
              char* x235 = x4497->P_TYPE;
              numeric_int_t x10115 = strlen("PROMO");
              numeric_int_t x10116 = strncmp(x235, "PROMO", x10115);
              boolean_t x10117 = x10116==(0);
              /* VAR */ double ite12836 = 0;
              if(x10117) {
                double x12837 = x4497->L_EXTENDEDPRICE;
                double x12838 = x4497->L_DISCOUNT;
                double x12839 = 1.0-(x12838);
                double x12840 = x12837*(x12839);
                double x12841 = x234+(x12840);
                ite12836 = x12841;
              } else {
                
                ite12836 = x234;
              };
              double x242 = ite12836;
              *x220 = x242;
              double x250 = x220[1];
              double x251 = x4497->L_EXTENDEDPRICE;
              double x252 = x4497->L_DISCOUNT;
              double x253 = 1.0-(x252);
              double x254 = x251*(x253);
              double x255 = x250+(x254);
              *(x220 + 1) = x255;
            };
          };
        };
      };
      numeric_int_t x1369 = x15327;
      numeric_int_t x267 = x1369+(1);
      x15327 = x267;
    };
    double* x15519 = x15304->aggs;
    double x15520 = x15519[0];
    double x15521 = x15520*(100.0);
    double x15522 = x15519[1];
    double x15523 = x15521/(x15522);
    *(x15519 + 2) = x15523;
    if(0) {
      x15328 = 1;
    } else {
      
      double x290 = x15519[2];
      printf("%.4f\n", x290);
      numeric_int_t x1395 = x15329;
      numeric_int_t x293 = x1395+(1);
      x15329 = x293;
    };
    numeric_int_t x15532 = x15329;
    printf("(%d rows)\n", x15532);
    struct timeval* x15534 = &x15323;
    gettimeofday(x15534, NULL);
    struct timeval* x15536 = &x15319;
    struct timeval* x15537 = &x15323;
    struct timeval* x15538 = &x15321;
    long x15539 = timeval_subtract(x15536, x15537, x15538);
    printf("Generated code run in %ld milliseconds.\n", x15539);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x15307(void* x4921) {
  numeric_int_t x4922 = g_direct_hash(x4921);
  return x4922; 
}

numeric_int_t x15310(void* x4924, void* x4925) {
  numeric_int_t x4926 = g_direct_equal(x4924, x4925);
  return x4926; 
}
