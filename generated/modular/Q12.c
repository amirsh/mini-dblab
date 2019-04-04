#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h" 


struct LINEITEMRecord;
struct AGGRecord_OptimalString;
struct ORDERSRecord_LINEITEMRecord;
struct ORDERSRecord;

struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
};

struct ORDERSRecord_LINEITEMRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  numeric_int_t O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  numeric_int_t O_SHIPPRIORITY;
  char* O_COMMENT;
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

numeric_int_t x19659(char* x6082);

boolean_t x19677(char* x6087, char* x6088);

numeric_int_t x19683(void* x5051);

numeric_int_t x19686(void* x5054, void* x5055);

numeric_int_t x19710(struct AGGRecord_OptimalString* x131, struct AGGRecord_OptimalString* x132);

numeric_int_t x6353(void* x6347, void* x6348, void* x6349);

int main(int argc, char** argv) {
  numeric_int_t x2799;
  struct LINEITEMRecord* x3755;
  numeric_int_t* li_count = &x2799; 
  struct LINEITEMRecord** li_array = &x3755;
  loadLineitem(li_count, li_array);
  numeric_int_t x2989;
  struct ORDERSRecord* x3948;
  numeric_int_t* or_count = &x2989; 
  struct ORDERSRecord** or_array = &x3948;
  loadOrders(or_count, or_array);
  numeric_int_t x59 = 0;
  for(; x59 < 1 ; x59 += 1) {
    
    GHashTable* x19682 = g_hash_table_new(x19659, x19677);
    void*** x19690 = (void***){x19683};
    numeric_int_t* x19691 = (numeric_int_t*){x19686};
    GHashTable* x19692 = g_hash_table_new(x19690, x19691);
    struct timeval x19693 = (struct timeval){0};
    /* VAR */ struct timeval x19694 = x19693;
    struct timeval x19695 = x19694;
    /* VAR */ struct timeval x19696 = x19693;
    struct timeval x19697 = x19696;
    /* VAR */ struct timeval x19698 = x19693;
    struct timeval x19699 = x19698;
    struct timeval* x19700 = &x19697;
    gettimeofday(x19700, NULL);
    /* VAR */ numeric_int_t x19702 = 0;
    /* VAR */ numeric_int_t x19703 = 0;
    numeric_int_t* x19716 = &(x19710);
    GTree* x19717 = g_tree_new(x19716);
    /* VAR */ boolean_t x19718 = 0;
    /* VAR */ numeric_int_t x19719 = 0;
    while(1) {
      
      numeric_int_t x19721 = x19702;
      boolean_t x19722 = x19721<(x2989);
      if (!(x19722)) break; 
      
      numeric_int_t x1359 = x19702;
      struct ORDERSRecord* x153 = &(x3948[x1359]);
      numeric_int_t x155 = x153->O_ORDERKEY;
      void* x5089 = (void*){x155};
      void* x5090 = (void*){x153};
      void* x5091 = g_hash_table_lookup(x19692, x5089);
      GList** x5092 = (GList**){x5091};
      GList** x5093 = NULL;
      boolean_t x5094 = x5092==(x5093);
      /* VAR */ GList** ite14980 = 0;
      if(x5094) {
        GList** x14981 = malloc(8);
        GList* x14982 = NULL;
        pointer_assign(x14981, x14982);
        ite14980 = x14981;
      } else {
        
        ite14980 = x5092;
      };
      GList** x5098 = ite14980;
      GList* x5099 = *(x5098);
      GList* x5100 = g_list_prepend(x5099, x5090);
      pointer_assign(x5098, x5100);
      void* x5102 = (void*){x5098};
      g_hash_table_insert(x19692, x5089, x5102);
      numeric_int_t x1364 = x19702;
      numeric_int_t x159 = x1364+(1);
      x19702 = x159;
    };
    while(1) {
      
      numeric_int_t x19750 = x19703;
      boolean_t x19751 = x19750<(x2799);
      if (!(x19751)) break; 
      
      numeric_int_t x1373 = x19703;
      struct LINEITEMRecord* x168 = &(x3755[x1373]);
      numeric_int_t x170 = x168->L_RECEIPTDATE;
      boolean_t x171 = x170<(19950101);
      /* VAR */ boolean_t ite16129 = 0;
      if(x171) {
        numeric_int_t x19758 = x168->L_COMMITDATE;
        boolean_t x19759 = x19758<(19950101);
        ite16129 = x19759;
      } else {
        
        ite16129 = 0;
      };
      boolean_t x15003 = ite16129;
      /* VAR */ boolean_t ite16138 = 0;
      if(x15003) {
        numeric_int_t x19766 = x168->L_SHIPDATE;
        boolean_t x19767 = x19766<(19950101);
        ite16138 = x19767;
      } else {
        
        ite16138 = 0;
      };
      boolean_t x15005 = ite16138;
      /* VAR */ boolean_t ite16147 = 0;
      if(x15005) {
        numeric_int_t x19774 = x168->L_SHIPDATE;
        numeric_int_t x19775 = x168->L_COMMITDATE;
        boolean_t x19776 = x19774<(x19775);
        ite16147 = x19776;
      } else {
        
        ite16147 = 0;
      };
      boolean_t x15007 = ite16147;
      /* VAR */ boolean_t ite16157 = 0;
      if(x15007) {
        numeric_int_t x19783 = x168->L_COMMITDATE;
        boolean_t x19784 = x19783<(x170);
        ite16157 = x19784;
      } else {
        
        ite16157 = 0;
      };
      boolean_t x15009 = ite16157;
      /* VAR */ boolean_t ite16166 = 0;
      if(x15009) {
        boolean_t x19791 = x170>=(19940101);
        ite16166 = x19791;
      } else {
        
        ite16166 = 0;
      };
      boolean_t x15011 = ite16166;
      /* VAR */ boolean_t ite16174 = 0;
      if(x15011) {
        char* x19798 = x168->L_SHIPMODE;
        boolean_t x19799 = strcmp(x19798, "MAIL");
        boolean_t x19800 = x19799==(0);
        /* VAR */ boolean_t x19801 = 0;
        if(x19800) {
          x19801 = 1;
        } else {
          
          boolean_t x19804 = strcmp(x19798, "SHIP");
          boolean_t x19805 = x19804==(0);
          x19801 = x19805;
        };
        boolean_t x19808 = x19801;
        ite16174 = x19808;
      } else {
        
        ite16174 = 0;
      };
      boolean_t x15013 = ite16174;
      if(x15013) {
        numeric_int_t x192 = x168->L_ORDERKEY;
        void* x5137 = (void*){x192};
        void* x5138 = g_hash_table_lookup(x19692, x5137);
        GList** x5139 = (GList**){x5138};
        boolean_t x9298 = x5139!=(NULL);
        if(x9298) {
          GList* x6251 = *(x5139);
          /* VAR */ GList* x6252 = x6251;
          while(1) {
            
            GList* x6253 = x6252;
            GList* x6254 = NULL;
            boolean_t x6255 = x6253!=(x6254);
            if (!(x6255)) break; 
            
            GList* x6256 = x6252;
            void* x6257 = g_list_nth_data(x6256, 0);
            struct ORDERSRecord* x6258 = (struct ORDERSRecord*){x6257};
            GList* x6259 = x6252;
            GList* x6260 = g_list_next(x6259);
            x6252 = x6260;
            numeric_int_t x6262 = x6258->O_ORDERKEY;
            boolean_t x6263 = x6262==(x192);
            if(x6263) {
              numeric_int_t x657 = x6258->O_CUSTKEY;
              char x658 = x6258->O_ORDERSTATUS;
              double x659 = x6258->O_TOTALPRICE;
              numeric_int_t x660 = x6258->O_ORDERDATE;
              char* x661 = x6258->O_ORDERPRIORITY;
              char* x662 = x6258->O_CLERK;
              numeric_int_t x663 = x6258->O_SHIPPRIORITY;
              char* x664 = x6258->O_COMMENT;
              numeric_int_t x665 = x168->L_PARTKEY;
              numeric_int_t x666 = x168->L_SUPPKEY;
              numeric_int_t x667 = x168->L_LINENUMBER;
              double x668 = x168->L_QUANTITY;
              double x669 = x168->L_EXTENDEDPRICE;
              double x670 = x168->L_DISCOUNT;
              double x671 = x168->L_TAX;
              char x672 = x168->L_RETURNFLAG;
              char x673 = x168->L_LINESTATUS;
              numeric_int_t x674 = x168->L_SHIPDATE;
              numeric_int_t x675 = x168->L_COMMITDATE;
              char* x676 = x168->L_SHIPINSTRUCT;
              char* x677 = x168->L_SHIPMODE;
              char* x678 = x168->L_COMMENT;
              struct ORDERSRecord_LINEITEMRecord* x4655 = (struct ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct ORDERSRecord_LINEITEMRecord));
              memset(x4655, 0, 1 * sizeof(struct ORDERSRecord_LINEITEMRecord));
              x4655->O_ORDERKEY = x6262; x4655->O_CUSTKEY = x657; x4655->O_ORDERSTATUS = x658; x4655->O_TOTALPRICE = x659; x4655->O_ORDERDATE = x660; x4655->O_ORDERPRIORITY = x661; x4655->O_CLERK = x662; x4655->O_SHIPPRIORITY = x663; x4655->O_COMMENT = x664; x4655->L_ORDERKEY = x192; x4655->L_PARTKEY = x665; x4655->L_SUPPKEY = x666; x4655->L_LINENUMBER = x667; x4655->L_QUANTITY = x668; x4655->L_EXTENDEDPRICE = x669; x4655->L_DISCOUNT = x670; x4655->L_TAX = x671; x4655->L_RETURNFLAG = x672; x4655->L_LINESTATUS = x673; x4655->L_SHIPDATE = x674; x4655->L_COMMITDATE = x675; x4655->L_RECEIPTDATE = x170; x4655->L_SHIPINSTRUCT = x676; x4655->L_SHIPMODE = x677; x4655->L_COMMENT = x678;
              char* x256 = x4655->L_SHIPMODE;
              void* x6291 = g_hash_table_lookup(x19682, x256);
              boolean_t x6224 = x6291==(NULL);
              /* VAR */ struct AGGRecord_OptimalString* ite15137 = 0;
              if(x6224) {
                double* x15138 = (double*)malloc(2 * sizeof(double));
                memset(x15138, 0, 2 * sizeof(double));
                struct AGGRecord_OptimalString* x15139 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
                memset(x15139, 0, 1 * sizeof(struct AGGRecord_OptimalString));
                x15139->key = x256; x15139->aggs = x15138;
                g_hash_table_insert(x19682, x256, x15139);
                ite15137 = x15139;
              } else {
                
                ite15137 = x6291;
              };
              struct AGGRecord_OptimalString* x6234 = ite15137;
              double* x261 = x6234->aggs;
              double x275 = x261[0];
              char* x276 = x4655->O_ORDERPRIORITY;
              boolean_t x11928 = strcmp(x276, "1-URGENT");
              boolean_t x11929 = x11928==(0);
              /* VAR */ boolean_t ite16338 = 0;
              if(x11929) {
                ite16338 = 1;
              } else {
                
                boolean_t x19966 = strcmp(x276, "2-HIGH");
                boolean_t x19967 = x19966==(0);
                ite16338 = x19967;
              };
              boolean_t x15153 = ite16338;
              /* VAR */ double ite15155 = 0;
              if(x15153) {
                double x15156 = x275+(1.0);
                ite15155 = x15156;
              } else {
                
                ite15155 = x275;
              };
              double x282 = ite15155;
              *x261 = x282;
              double x290 = x261[1];
              boolean_t x11937 = strcmp(x276, "1-URGENT");
              boolean_t x11938 = x11937!=(0);
              /* VAR */ boolean_t ite16358 = 0;
              if(x11938) {
                boolean_t x19984 = strcmp(x276, "2-HIGH");
                boolean_t x19985 = x19984!=(0);
                ite16358 = x19985;
              } else {
                
                ite16358 = 0;
              };
              boolean_t x15166 = ite16358;
              /* VAR */ double ite15168 = 0;
              if(x15166) {
                double x15169 = x290+(1.0);
                ite15168 = x15169;
              } else {
                
                ite15168 = x290;
              };
              double x296 = ite15168;
              *(x261 + 1) = x296;
            };
          };
        };
      };
      numeric_int_t x1554 = x19703;
      numeric_int_t x308 = x1554+(1);
      x19703 = x308;
    };
    GList* x20005 = g_hash_table_get_keys(x19682);
    /* VAR */ GList* x20006 = x20005;
    numeric_int_t x20007 = g_hash_table_size(x19682);
    numeric_int_t x13241 = 0;
    for(; x13241 < x20007 ; x13241 += 1) {
      
      GList* x13242 = x20006;
      void* x13243 = g_list_nth_data(x13242, 0);
      GList* x13244 = g_list_next(x13242);
      x20006 = x13244;
      void* x13246 = g_hash_table_lookup(x19682, x13243);
      struct AGGRecord_OptimalString* x13248 = (struct AGGRecord_OptimalString*){x13246};
      g_tree_insert(x19717, x13248, x13248);
    };
    while(1) {
      
      boolean_t x1564 = x19718;
      boolean_t x320 = !(x1564);
      /* VAR */ boolean_t ite16407 = 0;
      if(x320) {
        numeric_int_t x20032 = g_tree_nnodes(x19717);
        boolean_t x20033 = x20032!=(0);
        ite16407 = x20033;
      } else {
        
        ite16407 = 0;
      };
      boolean_t x15208 = ite16407;
      if (!(x15208)) break; 
      
      void* x6346 = NULL;
      void** x6354 = &(x6346);
      g_tree_foreach(x19717, x6353, x6354);
      struct AGGRecord_OptimalString* x6356 = (struct AGGRecord_OptimalString*){x6346};
      numeric_int_t x6357 = g_tree_remove(x19717, x6356);
      if(0) {
        x19718 = 1;
      } else {
        
        char* x333 = x6356->key;
        double* x335 = x6356->aggs;
        double x336 = x335[0];
        double x337 = x335[1];
        printf("%s|%.0f|%.0f\n", x333, x336, x337);
        numeric_int_t x1583 = x19719;
        numeric_int_t x340 = x1583+(1);
        x19719 = x340;
      };
    };
    numeric_int_t x20060 = x19719;
    printf("(%d rows)\n", x20060);
    struct timeval* x20062 = &x19699;
    gettimeofday(x20062, NULL);
    struct timeval* x20064 = &x19695;
    struct timeval* x20065 = &x19699;
    struct timeval* x20066 = &x19697;
    long x20067 = timeval_subtract(x20064, x20065, x20066);
    printf("Generated code run in %ld milliseconds.\n", x20067);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x19659(char* x6082) {
  numeric_int_t x11695 = strlen(x6082);
  /* VAR */ numeric_int_t x10434 = 0;
  /* VAR */ numeric_int_t x10435 = 0;
  while(1) {
    
    numeric_int_t x10436 = x10434;
    boolean_t x10437 = x10436<(x11695);
    if (!(x10437)) break; 
    
    numeric_int_t x10438 = x10435;
    numeric_int_t x10439 = x10434;
    char* x11703 = pointer_add(x6082, x10439);
    char x11704 = *(x11703);
    numeric_int_t x10442 = x10438+(x11704);
    x10435 = x10442;
    numeric_int_t x10444 = x10434;
    numeric_int_t x10445 = x10444+(1);
    x10434 = x10445;
  };
  numeric_int_t x10448 = x10435;
  return x10448; 
}

boolean_t x19677(char* x6087, char* x6088) {
  boolean_t x10452 = strcmp(x6087, x6088);
  boolean_t x10453 = !(x10452);
  return x10453; 
}

numeric_int_t x19683(void* x5051) {
  numeric_int_t x5052 = g_direct_hash(x5051);
  return x5052; 
}

numeric_int_t x19686(void* x5054, void* x5055) {
  numeric_int_t x5056 = g_direct_equal(x5054, x5055);
  return x5056; 
}

numeric_int_t x19710(struct AGGRecord_OptimalString* x131, struct AGGRecord_OptimalString* x132) {
  char* x133 = x131->key;
  char* x134 = x132->key;
  numeric_int_t x11750 = strcmp(x133, x134);
  return x11750; 
}

numeric_int_t x6353(void* x6347, void* x6348, void* x6349) {
  struct AGGRecord_OptimalString** x6350 = (struct AGGRecord_OptimalString**){x6349};
  struct AGGRecord_OptimalString* x6351 = (struct AGGRecord_OptimalString*){x6348};
  pointer_assign(x6350, x6351);
  return 1; 
}
