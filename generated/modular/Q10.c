#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h"


struct AGGRecord_Q10GRPRecord;
struct Q10GRPRecord;
struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord;
struct LINEITEMRecord;
struct NATIONRecord;
struct ORDERSRecord;
struct CUSTOMERRecord;
struct AGGRecord_Q10GRPRecord {
  struct Q10GRPRecord* key;
  double* aggs;
};

struct Q10GRPRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  double C_ACCTBAL;
  char* C_PHONE;
  char* N_NAME;
  char* C_ADDRESS;
  char* C_COMMENT;
};

struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
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
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  numeric_int_t O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  numeric_int_t O_SHIPPRIORITY;
  char* O_COMMENT;
};

numeric_int_t x36264(struct Q10GRPRecord* x11111);

boolean_t x36267(struct Q10GRPRecord* x11116, struct Q10GRPRecord* x11117);

numeric_int_t x36274(void* x9434);

numeric_int_t x36277(void* x9437, void* x9438);

numeric_int_t x36284(void* x9444);

numeric_int_t x36287(void* x9447, void* x9448);

numeric_int_t x36294(void* x9454);

numeric_int_t x36297(void* x9457, void* x9458);

numeric_int_t x36338(struct AGGRecord_Q10GRPRecord* x181, struct AGGRecord_Q10GRPRecord* x182);

numeric_int_t x11839(void* x11833, void* x11834, void* x11835);

int main(int argc, char** argv) {
  numeric_int_t* li_count; 
  struct LINEITEMRecord** li_array;
  loadLineitem(li_count, li_array);
  numeric_int_t x5913 = *li_count;
  struct LINEITEMRecord* x7387 = *li_array;
  numeric_int_t* na_count; 
  struct NATIONRecord** na_array;
  loadNation(na_count, na_array);
  numeric_int_t x6103 = *na_count;
  struct NATIONRecord* x7580 = *na_array;
  numeric_int_t* cu_count; 
  struct CUSTOMERRecord** cu_array;
  loadCustomer(cu_count, cu_array);
  numeric_int_t x6179 = *cu_count;
  struct CUSTOMERRecord* x7659 = *cu_array;
  numeric_int_t* or_count; 
  struct ORDERSRecord** or_array;
  loadOrders(or_count, or_array);
  numeric_int_t x6308 = *or_count;
  struct ORDERSRecord* x7791 = *or_array;
  numeric_int_t x103 = 0;
  for(; x103 < 1 ; x103 += 1) {
    
    GHashTable* x36273 = g_hash_table_new(x36264, x36267);
    void*** x36281 = (void***){x36274};
    numeric_int_t* x36282 = (numeric_int_t*){x36277};
    GHashTable* x36283 = g_hash_table_new(x36281, x36282);
    void*** x36291 = (void***){x36284};
    numeric_int_t* x36292 = (numeric_int_t*){x36287};
    GHashTable* x36293 = g_hash_table_new(x36291, x36292);
    void*** x36301 = (void***){x36294};
    numeric_int_t* x36302 = (numeric_int_t*){x36297};
    GHashTable* x36303 = g_hash_table_new(x36301, x36302);
    struct timeval x36304 = (struct timeval){0};
    /* VAR */ struct timeval x36305 = x36304;
    struct timeval x36306 = x36305;
    /* VAR */ struct timeval x36307 = x36304;
    struct timeval x36308 = x36307;
    /* VAR */ struct timeval x36309 = x36304;
    struct timeval x36310 = x36309;
    struct timeval* x36311 = &x36308;
    gettimeofday(x36311, NULL);
    /* VAR */ numeric_int_t x36313 = 0;
    /* VAR */ numeric_int_t x36314 = 0;
    /* VAR */ numeric_int_t x36315 = 0;
    /* VAR */ numeric_int_t x36316 = 0;
    numeric_int_t* x36359 = &(x36338);
    GTree* x36360 = g_tree_new(x36359);
    /* VAR */ boolean_t x36361 = 0;
    /* VAR */ numeric_int_t x36362 = 0;
    while(1) {
      
      numeric_int_t x36364 = x36315;
      boolean_t x36365 = x36364<(x6103);
      if (!(x36365)) break; 
      
      numeric_int_t x3555 = x36315;
      struct NATIONRecord* x218 = &(x7580[x3555]);
      numeric_int_t x220 = x218->N_NATIONKEY;
      void* x9499 = (void*){x220};
      void* x9500 = (void*){x218};
      void* x9501 = g_hash_table_lookup(x36283, x9499);
      GList** x9502 = (GList**){x9501};
      GList** x9503 = NULL;
      boolean_t x9504 = x9502==(x9503);
      /* VAR */ GList** ite29520 = 0;
      if(x9504) {
        GList** x29521 = malloc(8);
        GList* x29522 = NULL;
        pointer_assign(x29521, x29522);
        ite29520 = x29521;
      } else {
        
        ite29520 = x9502;
      };
      GList** x9508 = ite29520;
      GList* x9509 = *(x9508);
      GList* x9510 = g_list_prepend(x9509, x9500);
      pointer_assign(x9508, x9510);
      void* x9512 = (void*){x9508};
      g_hash_table_insert(x36283, x9499, x9512);
      numeric_int_t x3560 = x36315;
      numeric_int_t x224 = x3560+(1);
      x36315 = x224;
    };
    while(1) {
      
      numeric_int_t x36393 = x36314;
      boolean_t x36394 = x36393<(x6179);
      if (!(x36394)) break; 
      
      numeric_int_t x3569 = x36314;
      struct CUSTOMERRecord* x233 = &(x7659[x3569]);
      numeric_int_t x235 = x233->C_CUSTKEY;
      void* x9524 = (void*){x235};
      void* x9525 = (void*){x233};
      void* x9526 = g_hash_table_lookup(x36293, x9524);
      GList** x9527 = (GList**){x9526};
      GList** x9528 = NULL;
      boolean_t x9529 = x9527==(x9528);
      /* VAR */ GList** ite29548 = 0;
      if(x9529) {
        GList** x29549 = malloc(8);
        GList* x29550 = NULL;
        pointer_assign(x29549, x29550);
        ite29548 = x29549;
      } else {
        
        ite29548 = x9527;
      };
      GList** x9533 = ite29548;
      GList* x9534 = *(x9533);
      GList* x9535 = g_list_prepend(x9534, x9525);
      pointer_assign(x9533, x9535);
      void* x9537 = (void*){x9533};
      g_hash_table_insert(x36293, x9524, x9537);
      numeric_int_t x3574 = x36314;
      numeric_int_t x239 = x3574+(1);
      x36314 = x239;
    };
    while(1) {
      
      numeric_int_t x36422 = x36316;
      boolean_t x36423 = x36422<(x5913);
      if (!(x36423)) break; 
      
      numeric_int_t x3583 = x36316;
      struct LINEITEMRecord* x248 = &(x7387[x3583]);
      char x250 = x248->L_RETURNFLAG;
      boolean_t x251 = x250==('R');
      if(x251) {
        numeric_int_t x252 = x248->L_ORDERKEY;
        void* x9552 = (void*){x252};
        void* x9553 = (void*){x248};
        void* x9554 = g_hash_table_lookup(x36303, x9552);
        GList** x9555 = (GList**){x9554};
        GList** x9556 = NULL;
        boolean_t x9557 = x9555==(x9556);
        /* VAR */ GList** ite29579 = 0;
        if(x9557) {
          GList** x29580 = malloc(8);
          GList* x29581 = NULL;
          pointer_assign(x29580, x29581);
          ite29579 = x29580;
        } else {
          
          ite29579 = x9555;
        };
        GList** x9561 = ite29579;
        GList* x9562 = *(x9561);
        GList* x9563 = g_list_prepend(x9562, x9553);
        pointer_assign(x9561, x9563);
        void* x9565 = (void*){x9561};
        g_hash_table_insert(x36303, x9552, x9565);
      };
      numeric_int_t x3591 = x36316;
      numeric_int_t x257 = x3591+(1);
      x36316 = x257;
    };
    while(1) {
      
      numeric_int_t x36454 = x36313;
      boolean_t x36455 = x36454<(x6308);
      if (!(x36455)) break; 
      
      numeric_int_t x3600 = x36313;
      struct ORDERSRecord* x266 = &(x7791[x3600]);
      numeric_int_t x268 = x266->O_ORDERDATE;
      boolean_t x269 = x268>=(19941101);
      /* VAR */ boolean_t ite31889 = 0;
      if(x269) {
        boolean_t x36462 = x268<(19950201);
        ite31889 = x36462;
      } else {
        
        ite31889 = 0;
      };
      boolean_t x29602 = ite31889;
      if(x29602) {
        numeric_int_t x272 = x266->O_ORDERKEY;
        void* x9582 = (void*){x272};
        void* x9583 = g_hash_table_lookup(x36303, x9582);
        GList** x9584 = (GList**){x9583};
        boolean_t x17799 = x9584!=(NULL);
        if(x17799) {
          GList* x11542 = *(x9584);
          /* VAR */ GList* x11543 = x11542;
          while(1) {
            
            GList* x11544 = x11543;
            GList* x11545 = NULL;
            boolean_t x11546 = x11544!=(x11545);
            if (!(x11546)) break; 
            
            GList* x11547 = x11543;
            void* x11548 = g_list_nth_data(x11547, 0);
            struct LINEITEMRecord* x11549 = (struct LINEITEMRecord*){x11548};
            GList* x11550 = x11543;
            GList* x11551 = g_list_next(x11550);
            x11543 = x11551;
            numeric_int_t x11553 = x11549->L_ORDERKEY;
            boolean_t x11554 = x11553==(x272);
            if(x11554) {
              numeric_int_t x1548 = x11549->L_PARTKEY;
              numeric_int_t x1549 = x11549->L_SUPPKEY;
              numeric_int_t x1550 = x11549->L_LINENUMBER;
              double x1551 = x11549->L_QUANTITY;
              double x1552 = x11549->L_EXTENDEDPRICE;
              double x1553 = x11549->L_DISCOUNT;
              double x1554 = x11549->L_TAX;
              char x1555 = x11549->L_RETURNFLAG;
              char x1556 = x11549->L_LINESTATUS;
              numeric_int_t x1557 = x11549->L_SHIPDATE;
              numeric_int_t x1558 = x11549->L_COMMITDATE;
              numeric_int_t x1559 = x11549->L_RECEIPTDATE;
              char* x1560 = x11549->L_SHIPINSTRUCT;
              char* x1561 = x11549->L_SHIPMODE;
              char* x1562 = x11549->L_COMMENT;
              numeric_int_t x1563 = x266->O_CUSTKEY;
              char x1564 = x266->O_ORDERSTATUS;
              double x1565 = x266->O_TOTALPRICE;
              char* x1566 = x266->O_ORDERPRIORITY;
              char* x1567 = x266->O_CLERK;
              numeric_int_t x1568 = x266->O_SHIPPRIORITY;
              char* x1569 = x266->O_COMMENT;
              void* x9616 = (void*){x1563};
              void* x9617 = g_hash_table_lookup(x36293, x9616);
              GList** x9618 = (GList**){x9617};
              boolean_t x18085 = x9618!=(NULL);
              if(x18085) {
                GList* x11429 = *(x9618);
                /* VAR */ GList* x11430 = x11429;
                while(1) {
                  
                  GList* x11431 = x11430;
                  GList* x11432 = NULL;
                  boolean_t x11433 = x11431!=(x11432);
                  if (!(x11433)) break; 
                  
                  GList* x11434 = x11430;
                  void* x11435 = g_list_nth_data(x11434, 0);
                  struct CUSTOMERRecord* x11436 = (struct CUSTOMERRecord*){x11435};
                  GList* x11437 = x11430;
                  GList* x11438 = g_list_next(x11437);
                  x11430 = x11438;
                  numeric_int_t x11440 = x11436->C_CUSTKEY;
                  boolean_t x11441 = x11440==(x1563);
                  if(x11441) {
                    char* x1788 = x11436->C_NAME;
                    char* x1789 = x11436->C_ADDRESS;
                    numeric_int_t x1790 = x11436->C_NATIONKEY;
                    char* x1791 = x11436->C_PHONE;
                    double x1792 = x11436->C_ACCTBAL;
                    char* x1793 = x11436->C_MKTSEGMENT;
                    char* x1794 = x11436->C_COMMENT;
                    void* x9635 = (void*){x1790};
                    void* x9636 = g_hash_table_lookup(x36283, x9635);
                    GList** x9637 = (GList**){x9636};
                    boolean_t x18213 = x9637!=(NULL);
                    if(x18213) {
                      GList* x11382 = *(x9637);
                      /* VAR */ GList* x11383 = x11382;
                      while(1) {
                        
                        GList* x11384 = x11383;
                        GList* x11385 = NULL;
                        boolean_t x11386 = x11384!=(x11385);
                        if (!(x11386)) break; 
                        
                        GList* x11387 = x11383;
                        void* x11388 = g_list_nth_data(x11387, 0);
                        struct NATIONRecord* x11389 = (struct NATIONRecord*){x11388};
                        GList* x11390 = x11383;
                        GList* x11391 = g_list_next(x11390);
                        x11383 = x11391;
                        numeric_int_t x11393 = x11389->N_NATIONKEY;
                        boolean_t x11394 = x11393==(x1790);
                        if(x11394) {
                          char* x1912 = x11389->N_NAME;
                          numeric_int_t x1913 = x11389->N_REGIONKEY;
                          char* x1914 = x11389->N_COMMENT;
                          struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord* x8811 = (struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord*)malloc(1 * sizeof(struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord));
                          memset(x8811, 0, 1 * sizeof(struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord));
                          x8811->N_NATIONKEY = x11393; x8811->N_NAME = x1912; x8811->N_REGIONKEY = x1913; x8811->N_COMMENT = x1914; x8811->C_CUSTKEY = x11440; x8811->C_NAME = x1788; x8811->C_ADDRESS = x1789; x8811->C_NATIONKEY = x1790; x8811->C_PHONE = x1791; x8811->C_ACCTBAL = x1792; x8811->C_MKTSEGMENT = x1793; x8811->C_COMMENT = x1794; x8811->L_ORDERKEY = x11553; x8811->L_PARTKEY = x1548; x8811->L_SUPPKEY = x1549; x8811->L_LINENUMBER = x1550; x8811->L_QUANTITY = x1551; x8811->L_EXTENDEDPRICE = x1552; x8811->L_DISCOUNT = x1553; x8811->L_TAX = x1554; x8811->L_RETURNFLAG = x1555; x8811->L_LINESTATUS = x1556; x8811->L_SHIPDATE = x1557; x8811->L_COMMITDATE = x1558; x8811->L_RECEIPTDATE = x1559; x8811->L_SHIPINSTRUCT = x1560; x8811->L_SHIPMODE = x1561; x8811->L_COMMENT = x1562; x8811->O_ORDERKEY = x272; x8811->O_CUSTKEY = x1563; x8811->O_ORDERSTATUS = x1564; x8811->O_TOTALPRICE = x1565; x8811->O_ORDERDATE = x268; x8811->O_ORDERPRIORITY = x1566; x8811->O_CLERK = x1567; x8811->O_SHIPPRIORITY = x1568; x8811->O_COMMENT = x1569;
                          numeric_int_t x673 = x8811->C_CUSTKEY;
                          char* x674 = x8811->C_NAME;
                          double x675 = x8811->C_ACCTBAL;
                          char* x676 = x8811->C_PHONE;
                          char* x677 = x8811->N_NAME;
                          char* x678 = x8811->C_ADDRESS;
                          char* x679 = x8811->C_COMMENT;
                          struct Q10GRPRecord* x8821 = (struct Q10GRPRecord*)malloc(1 * sizeof(struct Q10GRPRecord));
                          memset(x8821, 0, 1 * sizeof(struct Q10GRPRecord));
                          x8821->C_CUSTKEY = x673; x8821->C_NAME = x674; x8821->C_ACCTBAL = x675; x8821->C_PHONE = x676; x8821->N_NAME = x677; x8821->C_ADDRESS = x678; x8821->C_COMMENT = x679;
                          void* x11412 = g_hash_table_lookup(x36273, x8821);
                          boolean_t x11363 = x11412==(NULL);
                          /* VAR */ struct AGGRecord_Q10GRPRecord* ite30130 = 0;
                          if(x11363) {
                            double* x30131 = (double*)malloc(1 * sizeof(double));
                            memset(x30131, 0, 1 * sizeof(double));
                            struct AGGRecord_Q10GRPRecord* x30132 = (struct AGGRecord_Q10GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q10GRPRecord));
                            memset(x30132, 0, 1 * sizeof(struct AGGRecord_Q10GRPRecord));
                            x30132->key = x8821; x30132->aggs = x30131;
                            g_hash_table_insert(x36273, x8821, x30132);
                            ite30130 = x30132;
                          } else {
                            
                            ite30130 = x11412;
                          };
                          struct AGGRecord_Q10GRPRecord* x11373 = ite30130;
                          double* x685 = x11373->aggs;
                          double x699 = x685[0];
                          double x700 = x8811->L_EXTENDEDPRICE;
                          double x701 = x8811->L_DISCOUNT;
                          double x702 = 1.0-(x701);
                          double x703 = x700*(x702);
                          double x704 = x699+(x703);
                          *x685 = x704;
                        };
                      };
                    };
                  };
                };
              };
            };
          };
        };
      };
      numeric_int_t x4133 = x36313;
      numeric_int_t x724 = x4133+(1);
      x36313 = x724;
    };
    GList* x37019 = g_hash_table_get_keys(x36273);
    /* VAR */ GList* x37020 = x37019;
    numeric_int_t x37021 = g_hash_table_size(x36273);
    numeric_int_t x26002 = 0;
    for(; x26002 < x37021 ; x26002 += 1) {
      
      GList* x26003 = x37020;
      void* x26004 = g_list_nth_data(x26003, 0);
      GList* x26005 = g_list_next(x26003);
      x37020 = x26005;
      void* x26007 = g_hash_table_lookup(x36273, x26004);
      struct AGGRecord_Q10GRPRecord* x26009 = (struct AGGRecord_Q10GRPRecord*){x26007};
      g_tree_insert(x36360, x26009, x26009);
    };
    while(1) {
      
      boolean_t x4143 = x36361;
      boolean_t x736 = !(x4143);
      /* VAR */ boolean_t ite32474 = 0;
      if(x736) {
        numeric_int_t x37046 = g_tree_nnodes(x36360);
        boolean_t x37047 = x37046!=(0);
        ite32474 = x37047;
      } else {
        
        ite32474 = 0;
      };
      boolean_t x30181 = ite32474;
      if (!(x30181)) break; 
      
      void* x11832 = NULL;
      void** x11840 = &(x11832);
      g_tree_foreach(x36360, x11839, x11840);
      struct AGGRecord_Q10GRPRecord* x11842 = (struct AGGRecord_Q10GRPRecord*){x11832};
      numeric_int_t x11843 = g_tree_remove(x36360, x11842);
      numeric_int_t x4151 = x36362;
      boolean_t x746 = x4151>=(20);
      if(x746) {
        x36361 = 1;
      } else {
        
        struct Q10GRPRecord* x748 = x11842->key;
        numeric_int_t x749 = x748->C_CUSTKEY;
        char* x750 = x748->C_NAME;
        double* x752 = x11842->aggs;
        double x753 = x752[0];
        double x754 = x748->C_ACCTBAL;
        char* x755 = x748->N_NAME;
        char* x757 = x748->C_ADDRESS;
        char* x759 = x748->C_PHONE;
        char* x761 = x748->C_COMMENT;
        printf("%d|%s|%.4f|%.2f|%s|%s|%s|%s\n", x749, x750, x753, x754, x755, x757, x759, x761);
        numeric_int_t x4171 = x36362;
        numeric_int_t x765 = x4171+(1);
        x36362 = x765;
      };
    };
    numeric_int_t x37082 = x36362;
    printf("(%d rows)\n", x37082);
    struct timeval* x37084 = &x36310;
    gettimeofday(x37084, NULL);
    struct timeval* x37086 = &x36306;
    struct timeval* x37087 = &x36310;
    struct timeval* x37088 = &x36308;
    long x37089 = timeval_subtract(x37086, x37087, x37088);
    printf("Generated code run in %ld milliseconds.\n", x37089);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x36264(struct Q10GRPRecord* x11111) {
  numeric_int_t x20205 = x11111->C_CUSTKEY;
  return x20205; 
}

boolean_t x36267(struct Q10GRPRecord* x11116, struct Q10GRPRecord* x11117) {
  numeric_int_t x20209 = x11116->C_CUSTKEY;
  numeric_int_t x20210 = x11117->C_CUSTKEY;
  boolean_t x20211 = x20209==(x20210);
  return x20211; 
}

numeric_int_t x36274(void* x9434) {
  numeric_int_t x9435 = g_direct_hash(x9434);
  return x9435; 
}

numeric_int_t x36277(void* x9437, void* x9438) {
  numeric_int_t x9439 = g_direct_equal(x9437, x9438);
  return x9439; 
}

numeric_int_t x36284(void* x9444) {
  numeric_int_t x9445 = g_direct_hash(x9444);
  return x9445; 
}

numeric_int_t x36287(void* x9447, void* x9448) {
  numeric_int_t x9449 = g_direct_equal(x9447, x9448);
  return x9449; 
}

numeric_int_t x36294(void* x9454) {
  numeric_int_t x9455 = g_direct_hash(x9454);
  return x9455; 
}

numeric_int_t x36297(void* x9457, void* x9458) {
  numeric_int_t x9459 = g_direct_equal(x9457, x9458);
  return x9459; 
}

numeric_int_t x36338(struct AGGRecord_Q10GRPRecord* x181, struct AGGRecord_Q10GRPRecord* x182) {
  double* x183 = x181->aggs;
  double x184 = x183[0];
  double* x185 = x182->aggs;
  double x186 = x185[0];
  boolean_t x187 = x184<(x186);
  /* VAR */ numeric_int_t ite29492 = 0;
  if(x187) {
    ite29492 = 1;
  } else {
    
    boolean_t x29494 = x184>(x186);
    /* VAR */ numeric_int_t ite29496 = 0;
    if(x29494) {
      ite29496 = -1;
    } else {
      
      ite29496 = 0;
    };
    numeric_int_t x29495 = ite29496;
    ite29492 = x29495;
  };
  numeric_int_t x190 = ite29492;
  return x190; 
}

numeric_int_t x11839(void* x11833, void* x11834, void* x11835) {
  struct AGGRecord_Q10GRPRecord** x11836 = (struct AGGRecord_Q10GRPRecord**){x11835};
  struct AGGRecord_Q10GRPRecord* x11837 = (struct AGGRecord_Q10GRPRecord*){x11834};
  pointer_assign(x11836, x11837);
  return 1; 
}
