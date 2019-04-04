#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h" 


struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord;
struct AGGRecord_Int_ORDERSRecord;
struct LINEITEMRecord;
struct Q18GRPRecord;
struct ORDERSRecord;
struct AGGRecord_Int;
struct AGGRecord_Q18GRPRecord;
struct CUSTOMERRecord;
struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord {
  numeric_int_t key;
  double* aggs;
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  numeric_int_t O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  numeric_int_t O_SHIPPRIORITY;
  char* O_COMMENT;
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
};

struct AGGRecord_Int_ORDERSRecord {
  numeric_int_t key;
  double* aggs;
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

struct Q18GRPRecord {
  char* C_NAME;
  numeric_int_t C_CUSTKEY;
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_ORDERDATE;
  double O_TOTALPRICE;
};

struct AGGRecord_Int {
  numeric_int_t key;
  double* aggs;
};

struct AGGRecord_Q18GRPRecord {
  struct Q18GRPRecord* key;
  double* aggs;
};


numeric_int_t x27323(struct Q18GRPRecord* x7918);

boolean_t x27351(struct Q18GRPRecord* x7923, struct Q18GRPRecord* x7924);

numeric_int_t x27395(void* x6487);

numeric_int_t x27398(void* x6490, void* x6491);

numeric_int_t x27405(void* x6497);

numeric_int_t x27408(void* x6500, void* x6501);

numeric_int_t x27415(numeric_int_t x7951);

boolean_t x27417(numeric_int_t x7956, numeric_int_t x7957);

numeric_int_t x27471(struct AGGRecord_Q18GRPRecord* x150, struct AGGRecord_Q18GRPRecord* x151);

numeric_int_t x8350(void* x8344, void* x8345, void* x8346);

int main(int argc, char** argv) {
  numeric_int_t x3435;
  struct LINEITEMRecord* x4717;
  numeric_int_t* li_count = &x3435; 
  struct LINEITEMRecord** li_array = &x4717;
  loadLineitem(li_count, li_array);
  numeric_int_t x3625;
  struct ORDERSRecord* x4910;
  numeric_int_t* or_count = &x3625; 
  struct ORDERSRecord** or_array = &x4910;
  loadOrders(or_count, or_array);
  numeric_int_t x3751;
  struct CUSTOMERRecord* x5039;
  numeric_int_t* cu_count = &x3751; 
  struct CUSTOMERRecord** cu_array = &x5039;
  loadCustomer(cu_count, cu_array);
  numeric_int_t x83 = 0;
  for(; x83 < 1 ; x83 += 1) {
    
    GHashTable* x27394 = g_hash_table_new(x27323, x27351);
    void*** x27402 = (void***){x27395};
    numeric_int_t* x27403 = (numeric_int_t*){x27398};
    GHashTable* x27404 = g_hash_table_new(x27402, x27403);
    void*** x27412 = (void***){x27405};
    numeric_int_t* x27413 = (numeric_int_t*){x27408};
    GHashTable* x27414 = g_hash_table_new(x27412, x27413);
    GHashTable* x27421 = g_hash_table_new(x27415, x27417);
    struct timeval x27422 = (struct timeval){0};
    /* VAR */ struct timeval x27423 = x27422;
    struct timeval x27424 = x27423;
    /* VAR */ struct timeval x27425 = x27422;
    struct timeval x27426 = x27425;
    /* VAR */ struct timeval x27427 = x27422;
    struct timeval x27428 = x27427;
    struct timeval* x27429 = &x27426;
    gettimeofday(x27429, NULL);
    /* VAR */ numeric_int_t x27431 = 0;
    /* VAR */ numeric_int_t x27432 = 0;
    /* VAR */ numeric_int_t x27433 = 0;
    numeric_int_t* x27508 = &(x27471);
    GTree* x27509 = g_tree_new(x27508);
    /* VAR */ boolean_t x27510 = 0;
    /* VAR */ numeric_int_t x27511 = 0;
    while(1) {
      
      numeric_int_t x27513 = x27433;
      boolean_t x27514 = x27513<(x3435);
      if (!(x27514)) break; 
      
      numeric_int_t x1655 = x27433;
      struct LINEITEMRecord* x188 = &(x4717[x1655]);
      numeric_int_t x190 = x188->L_ORDERKEY;
      void* x8939 = g_hash_table_lookup(x27421, x190);
      boolean_t x8020 = x8939==(NULL);
      /* VAR */ struct AGGRecord_Int* ite22199 = 0;
      if(x8020) {
        double* x22200 = (double*)malloc(1 * sizeof(double));
        memset(x22200, 0, 1 * sizeof(double));
        struct AGGRecord_Int* x22201 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
        memset(x22201, 0, 1 * sizeof(struct AGGRecord_Int));
        x22201->key = x190; x22201->aggs = x22200;
        g_hash_table_insert(x27421, x190, x22201);
        ite22199 = x22201;
      } else {
        
        ite22199 = x8939;
      };
      struct AGGRecord_Int* x8030 = ite22199;
      double* x195 = x8030->aggs;
      double x209 = x195[0];
      double x210 = x188->L_QUANTITY;
      double x211 = x209+(x210);
      *x195 = x211;
      numeric_int_t x1684 = x27433;
      numeric_int_t x218 = x1684+(1);
      x27433 = x218;
    };
    GList* x27567 = g_hash_table_get_keys(x27421);
    /* VAR */ GList* x27568 = x27567;
    numeric_int_t x27569 = g_hash_table_size(x27421);
    numeric_int_t x19191 = 0;
    for(; x19191 < x27569 ; x19191 += 1) {
      
      GList* x19192 = x27568;
      void* x19193 = g_list_nth_data(x19192, 0);
      GList* x19194 = g_list_next(x19192);
      x27568 = x19194;
      void* x19196 = g_hash_table_lookup(x27421, x19193);
      struct AGGRecord_Int* x19198 = (struct AGGRecord_Int*){x19196};
      double* x19199 = x19198->aggs;
      double x19200 = x19199[0];
      boolean_t x19201 = x19200>(300.0);
      if(x19201) {
        numeric_int_t x228 = x19198->key;
        void* x6569 = (void*){x228};
        void* x6570 = (void*){x19198};
        void* x6571 = g_hash_table_lookup(x27414, x6569);
        GList** x6572 = (GList**){x6571};
        GList** x6573 = NULL;
        boolean_t x6574 = x6572==(x6573);
        /* VAR */ GList** ite22302 = 0;
        if(x6574) {
          GList** x22303 = malloc(8);
          GList* x22304 = NULL;
          pointer_assign(x22303, x22304);
          ite22302 = x22303;
        } else {
          
          ite22302 = x6572;
        };
        GList** x6578 = ite22302;
        GList* x6579 = *(x6578);
        GList* x6580 = g_list_prepend(x6579, x6570);
        pointer_assign(x6578, x6580);
        void* x6582 = (void*){x6578};
        g_hash_table_insert(x27414, x6569, x6582);
      };
    };
    while(1) {
      
      numeric_int_t x27638 = x27431;
      boolean_t x27639 = x27638<(x3625);
      if (!(x27639)) break; 
      
      numeric_int_t x1704 = x27431;
      struct ORDERSRecord* x240 = &(x4910[x1704]);
      numeric_int_t x242 = x240->O_ORDERKEY;
      void* x6592 = (void*){x242};
      void* x6593 = g_hash_table_lookup(x27414, x6592);
      GList** x6594 = (GList**){x6593};
      boolean_t x12662 = x6594!=(NULL);
      if(x12662) {
        GList* x8145 = *(x6594);
        /* VAR */ GList* x8146 = x8145;
        while(1) {
          
          GList* x8147 = x8146;
          GList* x8148 = NULL;
          boolean_t x8149 = x8147!=(x8148);
          if (!(x8149)) break; 
          
          GList* x8150 = x8146;
          void* x8151 = g_list_nth_data(x8150, 0);
          struct AGGRecord_Int* x8152 = (struct AGGRecord_Int*){x8151};
          GList* x8153 = x8146;
          GList* x8154 = g_list_next(x8153);
          x8146 = x8154;
          double* x8156 = x8152->aggs;
          numeric_int_t x8157 = x8152->key;
          boolean_t x8158 = x242==(x8157);
          if(x8158) {
            numeric_int_t x734 = x240->O_CUSTKEY;
            char x735 = x240->O_ORDERSTATUS;
            double x736 = x240->O_TOTALPRICE;
            numeric_int_t x737 = x240->O_ORDERDATE;
            char* x738 = x240->O_ORDERPRIORITY;
            char* x739 = x240->O_CLERK;
            numeric_int_t x740 = x240->O_SHIPPRIORITY;
            char* x741 = x240->O_COMMENT;
            struct AGGRecord_Int_ORDERSRecord* x5914 = (struct AGGRecord_Int_ORDERSRecord*)malloc(1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
            memset(x5914, 0, 1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
            x5914->key = x8157; x5914->aggs = x8156; x5914->O_ORDERKEY = x242; x5914->O_CUSTKEY = x734; x5914->O_ORDERSTATUS = x735; x5914->O_TOTALPRICE = x736; x5914->O_ORDERDATE = x737; x5914->O_ORDERPRIORITY = x738; x5914->O_CLERK = x739; x5914->O_SHIPPRIORITY = x740; x5914->O_COMMENT = x741;
            numeric_int_t x265 = x5914->O_CUSTKEY;
            void* x6617 = (void*){x265};
            void* x6618 = (void*){x5914};
            void* x6619 = g_hash_table_lookup(x27404, x6617);
            GList** x6620 = (GList**){x6619};
            GList** x6621 = NULL;
            boolean_t x6622 = x6620==(x6621);
            /* VAR */ GList** ite22398 = 0;
            if(x6622) {
              GList** x22399 = malloc(8);
              GList* x22400 = NULL;
              pointer_assign(x22399, x22400);
              ite22398 = x22399;
            } else {
              
              ite22398 = x6620;
            };
            GList** x6626 = ite22398;
            GList* x6627 = *(x6626);
            GList* x6628 = g_list_prepend(x6627, x6618);
            pointer_assign(x6626, x6628);
            void* x6630 = (void*){x6626};
            g_hash_table_insert(x27404, x6617, x6630);
          };
        };
      };
      numeric_int_t x1750 = x27431;
      numeric_int_t x273 = x1750+(1);
      x27431 = x273;
    };
    while(1) {
      
      numeric_int_t x27738 = x27432;
      boolean_t x27739 = x27738<(x3751);
      if (!(x27739)) break; 
      
      numeric_int_t x1760 = x27432;
      struct CUSTOMERRecord* x283 = &(x5039[x1760]);
      numeric_int_t x285 = x283->C_CUSTKEY;
      void* x6643 = (void*){x285};
      void* x6644 = g_hash_table_lookup(x27404, x6643);
      GList** x6645 = (GList**){x6644};
      boolean_t x12753 = x6645!=(NULL);
      if(x12753) {
        GList* x8256 = *(x6645);
        /* VAR */ GList* x8257 = x8256;
        while(1) {
          
          GList* x8258 = x8257;
          GList* x8259 = NULL;
          boolean_t x8260 = x8258!=(x8259);
          if (!(x8260)) break; 
          
          GList* x8261 = x8257;
          void* x8262 = g_list_nth_data(x8261, 0);
          struct AGGRecord_Int_ORDERSRecord* x8263 = (struct AGGRecord_Int_ORDERSRecord*){x8262};
          GList* x8264 = x8257;
          GList* x8265 = g_list_next(x8264);
          x8257 = x8265;
          numeric_int_t x8267 = x8263->O_CUSTKEY;
          boolean_t x8268 = x8267==(x285);
          if(x8268) {
            numeric_int_t x833 = x8263->key;
            double* x834 = x8263->aggs;
            numeric_int_t x835 = x8263->O_ORDERKEY;
            char x836 = x8263->O_ORDERSTATUS;
            double x837 = x8263->O_TOTALPRICE;
            numeric_int_t x838 = x8263->O_ORDERDATE;
            char* x839 = x8263->O_ORDERPRIORITY;
            char* x840 = x8263->O_CLERK;
            numeric_int_t x841 = x8263->O_SHIPPRIORITY;
            char* x842 = x8263->O_COMMENT;
            char* x843 = x283->C_NAME;
            char* x844 = x283->C_ADDRESS;
            numeric_int_t x845 = x283->C_NATIONKEY;
            char* x846 = x283->C_PHONE;
            double x847 = x283->C_ACCTBAL;
            char* x848 = x283->C_MKTSEGMENT;
            char* x849 = x283->C_COMMENT;
            struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord* x5956 = (struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord*)malloc(1 * sizeof(struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord));
            memset(x5956, 0, 1 * sizeof(struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord));
            x5956->key = x833; x5956->aggs = x834; x5956->O_ORDERKEY = x835; x5956->O_CUSTKEY = x8267; x5956->O_ORDERSTATUS = x836; x5956->O_TOTALPRICE = x837; x5956->O_ORDERDATE = x838; x5956->O_ORDERPRIORITY = x839; x5956->O_CLERK = x840; x5956->O_SHIPPRIORITY = x841; x5956->O_COMMENT = x842; x5956->C_CUSTKEY = x285; x5956->C_NAME = x843; x5956->C_ADDRESS = x844; x5956->C_NATIONKEY = x845; x5956->C_PHONE = x846; x5956->C_ACCTBAL = x847; x5956->C_MKTSEGMENT = x848; x5956->C_COMMENT = x849;
            char* x340 = x5956->C_NAME;
            numeric_int_t x341 = x5956->C_CUSTKEY;
            numeric_int_t x342 = x5956->O_ORDERKEY;
            numeric_int_t x343 = x5956->O_ORDERDATE;
            double x344 = x5956->O_TOTALPRICE;
            struct Q18GRPRecord* x5964 = (struct Q18GRPRecord*)malloc(1 * sizeof(struct Q18GRPRecord));
            memset(x5964, 0, 1 * sizeof(struct Q18GRPRecord));
            x5964->C_NAME = x340; x5964->C_CUSTKEY = x341; x5964->O_ORDERKEY = x342; x5964->O_ORDERDATE = x343; x5964->O_TOTALPRICE = x344;
            void* x8298 = g_hash_table_lookup(x27394, x5964);
            boolean_t x8239 = x8298==(NULL);
            /* VAR */ struct AGGRecord_Q18GRPRecord* ite22522 = 0;
            if(x8239) {
              double* x22523 = (double*)malloc(1 * sizeof(double));
              memset(x22523, 0, 1 * sizeof(double));
              struct AGGRecord_Q18GRPRecord* x22524 = (struct AGGRecord_Q18GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q18GRPRecord));
              memset(x22524, 0, 1 * sizeof(struct AGGRecord_Q18GRPRecord));
              x22524->key = x5964; x22524->aggs = x22523;
              g_hash_table_insert(x27394, x5964, x22524);
              ite22522 = x22524;
            } else {
              
              ite22522 = x8298;
            };
            struct AGGRecord_Q18GRPRecord* x8249 = ite22522;
            double* x350 = x8249->aggs;
            double x364 = x350[0];
            double* x365 = x5956->aggs;
            double x366 = x365[0];
            double x367 = x364+(x366);
            *x350 = x367;
          };
        };
      };
      numeric_int_t x1886 = x27432;
      numeric_int_t x378 = x1886+(1);
      x27432 = x378;
    };
    GList* x27869 = g_hash_table_get_keys(x27394);
    /* VAR */ GList* x27870 = x27869;
    numeric_int_t x27871 = g_hash_table_size(x27394);
    numeric_int_t x19447 = 0;
    for(; x19447 < x27871 ; x19447 += 1) {
      
      GList* x19448 = x27870;
      void* x19449 = g_list_nth_data(x19448, 0);
      GList* x19450 = g_list_next(x19448);
      x27870 = x19450;
      void* x19452 = g_hash_table_lookup(x27394, x19449);
      struct AGGRecord_Q18GRPRecord* x19454 = (struct AGGRecord_Q18GRPRecord*){x19452};
      g_tree_insert(x27509, x19454, x19454);
    };
    while(1) {
      
      boolean_t x1895 = x27510;
      boolean_t x389 = !(x1895);
      /* VAR */ boolean_t ite24351 = 0;
      if(x389) {
        numeric_int_t x27896 = g_tree_nnodes(x27509);
        boolean_t x27897 = x27896!=(0);
        ite24351 = x27897;
      } else {
        
        ite24351 = 0;
      };
      boolean_t x22571 = ite24351;
      if (!(x22571)) break; 
      
      void* x8343 = NULL;
      void** x8351 = &(x8343);
      g_tree_foreach(x27509, x8350, x8351);
      struct AGGRecord_Q18GRPRecord* x8353 = (struct AGGRecord_Q18GRPRecord*){x8343};
      numeric_int_t x8354 = g_tree_remove(x27509, x8353);
      numeric_int_t x1903 = x27511;
      boolean_t x399 = x1903>=(100);
      if(x399) {
        x27510 = 1;
      } else {
        
        double* x401 = x8353->aggs;
        struct Q18GRPRecord* x402 = x8353->key;
        char* x403 = x402->C_NAME;
        numeric_int_t x405 = x402->C_CUSTKEY;
        numeric_int_t x406 = x402->O_ORDERKEY;
        numeric_int_t x407 = x402->O_ORDERDATE;
        char* x408 = ltoa(x407);
        double x409 = x402->O_TOTALPRICE;
        double x410 = x401[0];
        printf("%s|%d|%d|%s|%.2f|%.2f\n", x403, x405, x406, x408, x409, x410);
        numeric_int_t x1918 = x27511;
        numeric_int_t x413 = x1918+(1);
        x27511 = x413;
      };
    };
    numeric_int_t x27931 = x27511;
    printf("(%d rows)\n", x27931);
    struct timeval* x27933 = &x27428;
    gettimeofday(x27933, NULL);
    struct timeval* x27935 = &x27424;
    struct timeval* x27936 = &x27428;
    struct timeval* x27937 = &x27426;
    long x27938 = timeval_subtract(x27935, x27936, x27937);
    printf("Generated code run in %ld milliseconds.\n", x27938);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x27323(struct Q18GRPRecord* x7918) {
  char* x14296 = x7918->C_NAME;
  numeric_int_t x17114 = strlen(x14296);
  /* VAR */ numeric_int_t x15232 = 0;
  /* VAR */ numeric_int_t x15233 = 0;
  while(1) {
    
    numeric_int_t x15234 = x15232;
    boolean_t x15235 = x15234<(x17114);
    if (!(x15235)) break; 
    
    numeric_int_t x15236 = x15233;
    numeric_int_t x15237 = x15232;
    char* x17122 = pointer_add(x14296, x15237);
    char x17123 = *(x17122);
    numeric_int_t x15240 = x15236+(x17123);
    x15233 = x15240;
    numeric_int_t x15242 = x15232;
    numeric_int_t x15243 = x15242+(1);
    x15232 = x15243;
  };
  numeric_int_t x15246 = x15233;
  numeric_int_t x14298 = x7918->C_CUSTKEY;
  numeric_int_t x14300 = x7918->O_ORDERKEY;
  numeric_int_t x14302 = x7918->O_ORDERDATE;
  double x14304 = x7918->O_TOTALPRICE;
  numeric_int_t x15251 = (numeric_int_t){x14304};
  numeric_int_t x14306 = x15246+(x14298);
  numeric_int_t x14307 = x14306+(x14300);
  numeric_int_t x14308 = x14307+(x14302);
  numeric_int_t x14309 = x14308+(x15251);
  return x14309; 
}

boolean_t x27351(struct Q18GRPRecord* x7923, struct Q18GRPRecord* x7924) {
  char* x14313 = x7923->C_NAME;
  char* x14314 = x7924->C_NAME;
  boolean_t x15261 = strcmp(x14313, x14314);
  boolean_t x15262 = !(x15261);
  numeric_int_t x14316 = x7923->C_CUSTKEY;
  numeric_int_t x14317 = x7924->C_CUSTKEY;
  boolean_t x14318 = x14316==(x14317);
  numeric_int_t x14319 = x7923->O_ORDERKEY;
  numeric_int_t x14320 = x7924->O_ORDERKEY;
  boolean_t x14321 = x14319==(x14320);
  numeric_int_t x14322 = x7923->O_ORDERDATE;
  numeric_int_t x14323 = x7924->O_ORDERDATE;
  boolean_t x14324 = x14322==(x14323);
  double x14325 = x7923->O_TOTALPRICE;
  double x14326 = x7924->O_TOTALPRICE;
  boolean_t x14327 = x14325==(x14326);
  /* VAR */ boolean_t ite23820 = 0;
  if(x15262) {
    ite23820 = x14318;
  } else {
    
    ite23820 = 0;
  };
  boolean_t x22066 = ite23820;
  /* VAR */ boolean_t ite23827 = 0;
  if(x22066) {
    ite23827 = x14321;
  } else {
    
    ite23827 = 0;
  };
  boolean_t x22068 = ite23827;
  /* VAR */ boolean_t ite23834 = 0;
  if(x22068) {
    ite23834 = x14324;
  } else {
    
    ite23834 = 0;
  };
  boolean_t x22070 = ite23834;
  /* VAR */ boolean_t ite23841 = 0;
  if(x22070) {
    ite23841 = x14327;
  } else {
    
    ite23841 = 0;
  };
  boolean_t x22072 = ite23841;
  return x22072; 
}

numeric_int_t x27395(void* x6487) {
  numeric_int_t x6488 = g_direct_hash(x6487);
  return x6488; 
}

numeric_int_t x27398(void* x6490, void* x6491) {
  numeric_int_t x6492 = g_direct_equal(x6490, x6491);
  return x6492; 
}

numeric_int_t x27405(void* x6497) {
  numeric_int_t x6498 = g_direct_hash(x6497);
  return x6498; 
}

numeric_int_t x27408(void* x6500, void* x6501) {
  numeric_int_t x6502 = g_direct_equal(x6500, x6501);
  return x6502; 
}

numeric_int_t x27415(numeric_int_t x7951) {
  return x7951; 
}

boolean_t x27417(numeric_int_t x7956, numeric_int_t x7957) {
  boolean_t x7958 = x7956==(x7957);
  return x7958; 
}

numeric_int_t x27471(struct AGGRecord_Q18GRPRecord* x150, struct AGGRecord_Q18GRPRecord* x151) {
  struct Q18GRPRecord* x152 = x150->key;
  double x153 = x152->O_TOTALPRICE;
  struct Q18GRPRecord* x154 = x151->key;
  double x155 = x154->O_TOTALPRICE;
  boolean_t x156 = x153<(x155);
  /* VAR */ numeric_int_t ite22159 = 0;
  if(x156) {
    ite22159 = 1;
  } else {
    
    boolean_t x22161 = x153>(x155);
    /* VAR */ numeric_int_t ite22163 = 0;
    if(x22161) {
      ite22163 = -1;
    } else {
      
      numeric_int_t x22165 = x152->O_ORDERDATE;
      numeric_int_t x22166 = x154->O_ORDERDATE;
      boolean_t x22167 = x22165<(x22166);
      /* VAR */ numeric_int_t ite22169 = 0;
      if(x22167) {
        ite22169 = -1;
      } else {
        
        boolean_t x22171 = x22165>(x22166);
        /* VAR */ numeric_int_t ite22173 = 0;
        if(x22171) {
          ite22173 = 1;
        } else {
          
          ite22173 = 0;
        };
        numeric_int_t x22172 = ite22173;
        ite22169 = x22172;
      };
      numeric_int_t x22168 = ite22169;
      ite22163 = x22168;
    };
    numeric_int_t x22162 = ite22163;
    ite22159 = x22162;
  };
  numeric_int_t x165 = ite22159;
  return x165; 
}

numeric_int_t x8350(void* x8344, void* x8345, void* x8346) {
  struct AGGRecord_Q18GRPRecord** x8347 = (struct AGGRecord_Q18GRPRecord**){x8346};
  struct AGGRecord_Q18GRPRecord* x8348 = (struct AGGRecord_Q18GRPRecord*){x8345};
  pointer_assign(x8347, x8348);
  return 1; 
}
