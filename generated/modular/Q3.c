#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h" 

struct Q3GRPRecord;
struct LINEITEMRecord;
struct AGGRecord_Q3GRPRecord;
struct CUSTOMERRecord_ORDERSRecord;
struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord;
struct ORDERSRecord;
struct CUSTOMERRecord;
struct Q3GRPRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t O_ORDERDATE;
  numeric_int_t O_SHIPPRIORITY;
};

struct AGGRecord_Q3GRPRecord {
  struct Q3GRPRecord* key;
  double* aggs;
};

struct CUSTOMERRecord_ORDERSRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
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

struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
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

numeric_int_t x26151(struct Q3GRPRecord* x7963);

boolean_t x26158(struct Q3GRPRecord* x7968, struct Q3GRPRecord* x7969);

numeric_int_t x26183(void* x6520);

numeric_int_t x26186(void* x6523, void* x6524);

numeric_int_t x26193(void* x6530);

numeric_int_t x26196(void* x6533, void* x6534);

numeric_int_t x26254(struct AGGRecord_Q3GRPRecord* x146, struct AGGRecord_Q3GRPRecord* x147);

numeric_int_t x8370(void* x8364, void* x8365, void* x8366);

int main(int argc, char** argv) {
  numeric_int_t x3438;
  struct LINEITEMRecord* x4736;
  numeric_int_t* li_count = &x3438; 
  struct LINEITEMRecord** li_array = &x4736;
  loadLineitem(li_count, li_array);
  numeric_int_t x3628;
  struct ORDERSRecord* x4929;
  numeric_int_t* or_count = &x3628; 
  struct ORDERSRecord** or_array = &x4929;
  loadOrders(or_count, or_array);
  numeric_int_t x3754;
  struct CUSTOMERRecord* x5058;
  numeric_int_t* cu_count = &x3754; 
  struct CUSTOMERRecord** cu_array = &x5058;
  loadCustomer(cu_count, cu_array);
  numeric_int_t x83 = 0;
  for(; x83 < 1 ; x83 += 1) {
    
    GHashTable* x26182 = g_hash_table_new(x26151, x26158);
    void*** x26190 = (void***){x26183};
    numeric_int_t* x26191 = (numeric_int_t*){x26186};
    GHashTable* x26192 = g_hash_table_new(x26190, x26191);
    void*** x26200 = (void***){x26193};
    numeric_int_t* x26201 = (numeric_int_t*){x26196};
    GHashTable* x26202 = g_hash_table_new(x26200, x26201);
    struct timeval x26203 = (struct timeval){0};
    /* VAR */ struct timeval x26204 = x26203;
    struct timeval x26205 = x26204;
    /* VAR */ struct timeval x26206 = x26203;
    struct timeval x26207 = x26206;
    /* VAR */ struct timeval x26208 = x26203;
    struct timeval x26209 = x26208;
    struct timeval* x26210 = &x26207;
    gettimeofday(x26210, NULL);
    /* VAR */ numeric_int_t x26212 = 0;
    /* VAR */ numeric_int_t x26213 = 0;
    /* VAR */ numeric_int_t x26214 = 0;
    numeric_int_t* x26293 = &(x26254);
    GTree* x26294 = g_tree_new(x26293);
    /* VAR */ boolean_t x26295 = 0;
    /* VAR */ numeric_int_t x26296 = 0;
    while(1) {
      
      numeric_int_t x26298 = x26212;
      boolean_t x26299 = x26298<(x3754);
      if (!(x26299)) break; 
      
      numeric_int_t x1603 = x26212;
      struct CUSTOMERRecord* x183 = &(x5058[x1603]);
      char* x185 = x183->C_MKTSEGMENT;
      boolean_t x17003 = strcmp(x185, "HOUSEHOLD");
      boolean_t x17004 = x17003==(0);
      if(x17004) {
        numeric_int_t x187 = x183->C_CUSTKEY;
        void* x6585 = (void*){x187};
        void* x6586 = (void*){x183};
        void* x6587 = g_hash_table_lookup(x26202, x6585);
        GList** x6588 = (GList**){x6587};
        GList** x6589 = NULL;
        boolean_t x6590 = x6588==(x6589);
        /* VAR */ GList** ite21570 = 0;
        if(x6590) {
          GList** x21571 = malloc(8);
          GList* x21572 = NULL;
          pointer_assign(x21571, x21572);
          ite21570 = x21571;
        } else {
          
          ite21570 = x6588;
        };
        GList** x6594 = ite21570;
        GList* x6595 = *(x6594);
        GList* x6596 = g_list_prepend(x6595, x6586);
        pointer_assign(x6594, x6596);
        void* x6598 = (void*){x6594};
        g_hash_table_insert(x26202, x6585, x6598);
      };
      numeric_int_t x1611 = x26212;
      numeric_int_t x192 = x1611+(1);
      x26212 = x192;
    };
    while(1) {
      
      numeric_int_t x26331 = x26213;
      boolean_t x26332 = x26331<(x3628);
      if (!(x26332)) break; 
      
      numeric_int_t x1620 = x26213;
      struct ORDERSRecord* x201 = &(x4929[x1620]);
      numeric_int_t x203 = x201->O_ORDERDATE;
      boolean_t x204 = x203<(19950304);
      if(x204) {
        numeric_int_t x205 = x201->O_CUSTKEY;
        void* x6613 = (void*){x205};
        void* x6614 = g_hash_table_lookup(x26202, x6613);
        GList** x6615 = (GList**){x6614};
        boolean_t x12554 = x6615!=(NULL);
        if(x12554) {
          GList* x8131 = *(x6615);
          /* VAR */ GList* x8132 = x8131;
          while(1) {
            
            GList* x8133 = x8132;
            GList* x8134 = NULL;
            boolean_t x8135 = x8133!=(x8134);
            if (!(x8135)) break; 
            
            GList* x8136 = x8132;
            void* x8137 = g_list_nth_data(x8136, 0);
            struct CUSTOMERRecord* x8138 = (struct CUSTOMERRecord*){x8137};
            GList* x8139 = x8132;
            GList* x8140 = g_list_next(x8139);
            x8132 = x8140;
            numeric_int_t x8142 = x8138->C_CUSTKEY;
            boolean_t x8143 = x8142==(x205);
            if(x8143) {
              char* x661 = x8138->C_NAME;
              char* x662 = x8138->C_ADDRESS;
              numeric_int_t x663 = x8138->C_NATIONKEY;
              char* x664 = x8138->C_PHONE;
              double x665 = x8138->C_ACCTBAL;
              char* x666 = x8138->C_MKTSEGMENT;
              char* x667 = x8138->C_COMMENT;
              numeric_int_t x668 = x201->O_ORDERKEY;
              char x669 = x201->O_ORDERSTATUS;
              double x670 = x201->O_TOTALPRICE;
              char* x671 = x201->O_ORDERPRIORITY;
              char* x672 = x201->O_CLERK;
              numeric_int_t x673 = x201->O_SHIPPRIORITY;
              char* x674 = x201->O_COMMENT;
              struct CUSTOMERRecord_ORDERSRecord* x5934 = (struct CUSTOMERRecord_ORDERSRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
              memset(x5934, 0, 1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
              x5934->C_CUSTKEY = x8142; x5934->C_NAME = x661; x5934->C_ADDRESS = x662; x5934->C_NATIONKEY = x663; x5934->C_PHONE = x664; x5934->C_ACCTBAL = x665; x5934->C_MKTSEGMENT = x666; x5934->C_COMMENT = x667; x5934->O_ORDERKEY = x668; x5934->O_CUSTKEY = x205; x5934->O_ORDERSTATUS = x669; x5934->O_TOTALPRICE = x670; x5934->O_ORDERDATE = x203; x5934->O_ORDERPRIORITY = x671; x5934->O_CLERK = x672; x5934->O_SHIPPRIORITY = x673; x5934->O_COMMENT = x674;
              numeric_int_t x226 = x5934->O_ORDERKEY;
              void* x6643 = (void*){x226};
              void* x6644 = (void*){x5934};
              void* x6645 = g_hash_table_lookup(x26192, x6643);
              GList** x6646 = (GList**){x6645};
              GList** x6647 = NULL;
              boolean_t x6648 = x6646==(x6647);
              /* VAR */ GList** ite21682 = 0;
              if(x6648) {
                GList** x21683 = malloc(8);
                GList* x21684 = NULL;
                pointer_assign(x21683, x21684);
                ite21682 = x21683;
              } else {
                
                ite21682 = x6646;
              };
              GList** x6652 = ite21682;
              GList* x6653 = *(x6652);
              GList* x6654 = g_list_prepend(x6653, x6644);
              pointer_assign(x6652, x6654);
              void* x6656 = (void*){x6652};
              g_hash_table_insert(x26192, x6643, x6656);
            };
          };
        };
      };
      numeric_int_t x1679 = x26213;
      numeric_int_t x235 = x1679+(1);
      x26213 = x235;
    };
    while(1) {
      
      numeric_int_t x26444 = x26214;
      boolean_t x26445 = x26444<(x3438);
      if (!(x26445)) break; 
      
      numeric_int_t x1689 = x26214;
      struct LINEITEMRecord* x245 = &(x4736[x1689]);
      numeric_int_t x247 = x245->L_SHIPDATE;
      boolean_t x248 = x247>(19950304);
      if(x248) {
        numeric_int_t x249 = x245->L_ORDERKEY;
        void* x6672 = (void*){x249};
        void* x6673 = g_hash_table_lookup(x26192, x6672);
        GList** x6674 = (GList**){x6673};
        boolean_t x12658 = x6674!=(NULL);
        if(x12658) {
          GList* x8263 = *(x6674);
          /* VAR */ GList* x8264 = x8263;
          while(1) {
            
            GList* x8265 = x8264;
            GList* x8266 = NULL;
            boolean_t x8267 = x8265!=(x8266);
            if (!(x8267)) break; 
            
            GList* x8268 = x8264;
            void* x8269 = g_list_nth_data(x8268, 0);
            struct CUSTOMERRecord_ORDERSRecord* x8270 = (struct CUSTOMERRecord_ORDERSRecord*){x8269};
            GList* x8271 = x8264;
            GList* x8272 = g_list_next(x8271);
            x8264 = x8272;
            numeric_int_t x8274 = x8270->O_ORDERKEY;
            boolean_t x8275 = x8274==(x249);
            if(x8275) {
              numeric_int_t x779 = x8270->C_CUSTKEY;
              char* x780 = x8270->C_NAME;
              char* x781 = x8270->C_ADDRESS;
              numeric_int_t x782 = x8270->C_NATIONKEY;
              char* x783 = x8270->C_PHONE;
              double x784 = x8270->C_ACCTBAL;
              char* x785 = x8270->C_MKTSEGMENT;
              char* x786 = x8270->C_COMMENT;
              numeric_int_t x787 = x8270->O_CUSTKEY;
              char x788 = x8270->O_ORDERSTATUS;
              double x789 = x8270->O_TOTALPRICE;
              numeric_int_t x790 = x8270->O_ORDERDATE;
              char* x791 = x8270->O_ORDERPRIORITY;
              char* x792 = x8270->O_CLERK;
              numeric_int_t x793 = x8270->O_SHIPPRIORITY;
              char* x794 = x8270->O_COMMENT;
              numeric_int_t x795 = x245->L_PARTKEY;
              numeric_int_t x796 = x245->L_SUPPKEY;
              numeric_int_t x797 = x245->L_LINENUMBER;
              double x798 = x245->L_QUANTITY;
              double x799 = x245->L_EXTENDEDPRICE;
              double x800 = x245->L_DISCOUNT;
              double x801 = x245->L_TAX;
              char x802 = x245->L_RETURNFLAG;
              char x803 = x245->L_LINESTATUS;
              numeric_int_t x804 = x245->L_COMMITDATE;
              numeric_int_t x805 = x245->L_RECEIPTDATE;
              char* x806 = x245->L_SHIPINSTRUCT;
              char* x807 = x245->L_SHIPMODE;
              char* x808 = x245->L_COMMENT;
              struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x5992 = (struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
              memset(x5992, 0, 1 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
              x5992->C_CUSTKEY = x779; x5992->C_NAME = x780; x5992->C_ADDRESS = x781; x5992->C_NATIONKEY = x782; x5992->C_PHONE = x783; x5992->C_ACCTBAL = x784; x5992->C_MKTSEGMENT = x785; x5992->C_COMMENT = x786; x5992->O_ORDERKEY = x8274; x5992->O_CUSTKEY = x787; x5992->O_ORDERSTATUS = x788; x5992->O_TOTALPRICE = x789; x5992->O_ORDERDATE = x790; x5992->O_ORDERPRIORITY = x791; x5992->O_CLERK = x792; x5992->O_SHIPPRIORITY = x793; x5992->O_COMMENT = x794; x5992->L_ORDERKEY = x249; x5992->L_PARTKEY = x795; x5992->L_SUPPKEY = x796; x5992->L_LINENUMBER = x797; x5992->L_QUANTITY = x798; x5992->L_EXTENDEDPRICE = x799; x5992->L_DISCOUNT = x800; x5992->L_TAX = x801; x5992->L_RETURNFLAG = x802; x5992->L_LINESTATUS = x803; x5992->L_SHIPDATE = x247; x5992->L_COMMITDATE = x804; x5992->L_RECEIPTDATE = x805; x5992->L_SHIPINSTRUCT = x806; x5992->L_SHIPMODE = x807; x5992->L_COMMENT = x808;
              numeric_int_t x300 = x5992->L_ORDERKEY;
              numeric_int_t x301 = x5992->O_ORDERDATE;
              numeric_int_t x302 = x5992->O_SHIPPRIORITY;
              struct Q3GRPRecord* x5998 = (struct Q3GRPRecord*)malloc(1 * sizeof(struct Q3GRPRecord));
              memset(x5998, 0, 1 * sizeof(struct Q3GRPRecord));
              x5998->L_ORDERKEY = x300; x5998->O_ORDERDATE = x301; x5998->O_SHIPPRIORITY = x302;
              void* x8316 = g_hash_table_lookup(x26182, x5998);
              boolean_t x8244 = x8316==(NULL);
              /* VAR */ struct AGGRecord_Q3GRPRecord* ite21833 = 0;
              if(x8244) {
                double* x21834 = (double*)malloc(1 * sizeof(double));
                memset(x21834, 0, 1 * sizeof(double));
                struct AGGRecord_Q3GRPRecord* x21835 = (struct AGGRecord_Q3GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q3GRPRecord));
                memset(x21835, 0, 1 * sizeof(struct AGGRecord_Q3GRPRecord));
                x21835->key = x5998; x21835->aggs = x21834;
                g_hash_table_insert(x26182, x5998, x21835);
                ite21833 = x21835;
              } else {
                
                ite21833 = x8316;
              };
              struct AGGRecord_Q3GRPRecord* x8254 = ite21833;
              double* x308 = x8254->aggs;
              double x322 = x308[0];
              double x323 = x5992->L_EXTENDEDPRICE;
              double x324 = x5992->L_DISCOUNT;
              double x325 = 1.0-(x324);
              double x326 = x323*(x325);
              double x327 = x322+(x326);
              *x308 = x327;
            };
          };
        };
      };
      numeric_int_t x1840 = x26214;
      numeric_int_t x339 = x1840+(1);
      x26214 = x339;
    };
    GList* x26604 = g_hash_table_get_keys(x26182);
    /* VAR */ GList* x26605 = x26604;
    numeric_int_t x26606 = g_hash_table_size(x26182);
    numeric_int_t x19076 = 0;
    for(; x19076 < x26606 ; x19076 += 1) {
      
      GList* x19077 = x26605;
      void* x19078 = g_list_nth_data(x19077, 0);
      GList* x19079 = g_list_next(x19077);
      x26605 = x19079;
      void* x19081 = g_hash_table_lookup(x26182, x19078);
      struct AGGRecord_Q3GRPRecord* x19083 = (struct AGGRecord_Q3GRPRecord*){x19081};
      g_tree_insert(x26294, x19083, x19083);
    };
    while(1) {
      
      boolean_t x1849 = x26295;
      boolean_t x350 = !(x1849);
      /* VAR */ boolean_t ite23470 = 0;
      if(x350) {
        numeric_int_t x26631 = g_tree_nnodes(x26294);
        boolean_t x26632 = x26631!=(0);
        ite23470 = x26632;
      } else {
        
        ite23470 = 0;
      };
      boolean_t x21884 = ite23470;
      if (!(x21884)) break; 
      
      void* x8363 = NULL;
      void** x8371 = &(x8363);
      g_tree_foreach(x26294, x8370, x8371);
      struct AGGRecord_Q3GRPRecord* x8373 = (struct AGGRecord_Q3GRPRecord*){x8363};
      numeric_int_t x8374 = g_tree_remove(x26294, x8373);
      numeric_int_t x1857 = x26296;
      boolean_t x360 = x1857>=(10);
      if(x360) {
        x26295 = 1;
      } else {
        
        struct Q3GRPRecord* x362 = x8373->key;
        numeric_int_t x363 = x362->L_ORDERKEY;
        double* x364 = x8373->aggs;
        double x365 = x364[0];
        numeric_int_t x366 = x362->O_ORDERDATE;
        char* x367 = ltoa(x366);
        numeric_int_t x368 = x362->O_SHIPPRIORITY;
        printf("%d|%.4f|%s|%d\n", x363, x365, x367, x368);
        numeric_int_t x1869 = x26296;
        numeric_int_t x371 = x1869+(1);
        x26296 = x371;
      };
    };
    numeric_int_t x26664 = x26296;
    printf("(%d rows)\n", x26664);
    struct timeval* x26666 = &x26209;
    gettimeofday(x26666, NULL);
    struct timeval* x26668 = &x26205;
    struct timeval* x26669 = &x26209;
    struct timeval* x26670 = &x26207;
    long x26671 = timeval_subtract(x26668, x26669, x26670);
    printf("Generated code run in %ld milliseconds.\n", x26671);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x26151(struct Q3GRPRecord* x7963) {
  numeric_int_t x14207 = x7963->L_ORDERKEY;
  numeric_int_t x14209 = x7963->O_ORDERDATE;
  numeric_int_t x14211 = x7963->O_SHIPPRIORITY;
  numeric_int_t x14213 = x14207+(x14209);
  numeric_int_t x14214 = x14213+(x14211);
  return x14214; 
}

boolean_t x26158(struct Q3GRPRecord* x7968, struct Q3GRPRecord* x7969) {
  numeric_int_t x14218 = x7968->L_ORDERKEY;
  numeric_int_t x14219 = x7969->L_ORDERKEY;
  boolean_t x14220 = x14218==(x14219);
  numeric_int_t x14221 = x7968->O_ORDERDATE;
  numeric_int_t x14222 = x7969->O_ORDERDATE;
  boolean_t x14223 = x14221==(x14222);
  numeric_int_t x14224 = x7968->O_SHIPPRIORITY;
  numeric_int_t x14225 = x7969->O_SHIPPRIORITY;
  boolean_t x14226 = x14224==(x14225);
  /* VAR */ boolean_t ite23006 = 0;
  if(x14220) {
    ite23006 = x14223;
  } else {
    
    ite23006 = 0;
  };
  boolean_t x21436 = ite23006;
  /* VAR */ boolean_t ite23013 = 0;
  if(x21436) {
    ite23013 = x14226;
  } else {
    
    ite23013 = 0;
  };
  boolean_t x21438 = ite23013;
  return x21438; 
}

numeric_int_t x26183(void* x6520) {
  numeric_int_t x6521 = g_direct_hash(x6520);
  return x6521; 
}

numeric_int_t x26186(void* x6523, void* x6524) {
  numeric_int_t x6525 = g_direct_equal(x6523, x6524);
  return x6525; 
}

numeric_int_t x26193(void* x6530) {
  numeric_int_t x6531 = g_direct_hash(x6530);
  return x6531; 
}

numeric_int_t x26196(void* x6533, void* x6534) {
  numeric_int_t x6535 = g_direct_equal(x6533, x6534);
  return x6535; 
}

numeric_int_t x26254(struct AGGRecord_Q3GRPRecord* x146, struct AGGRecord_Q3GRPRecord* x147) {
  double* x148 = x146->aggs;
  double x149 = x148[0];
  double* x150 = x147->aggs;
  double x151 = x150[0];
  boolean_t x152 = x149<(x151);
  /* VAR */ numeric_int_t ite21520 = 0;
  if(x152) {
    ite21520 = 1;
  } else {
    
    boolean_t x21522 = x149>(x151);
    /* VAR */ numeric_int_t ite21524 = 0;
    if(x21522) {
      ite21524 = -1;
    } else {
      
      struct Q3GRPRecord* x21526 = x146->key;
      numeric_int_t x21527 = x21526->O_ORDERDATE;
      struct Q3GRPRecord* x21528 = x147->key;
      numeric_int_t x21529 = x21528->O_ORDERDATE;
      boolean_t x21530 = x21527<(x21529);
      /* VAR */ numeric_int_t ite21532 = 0;
      if(x21530) {
        ite21532 = -1;
      } else {
        
        boolean_t x21534 = x21527>(x21529);
        /* VAR */ numeric_int_t ite21536 = 0;
        if(x21534) {
          ite21536 = 1;
        } else {
          
          ite21536 = 0;
        };
        numeric_int_t x21535 = ite21536;
        ite21532 = x21535;
      };
      numeric_int_t x21531 = ite21532;
      ite21524 = x21531;
    };
    numeric_int_t x21523 = ite21524;
    ite21520 = x21523;
  };
  numeric_int_t x163 = ite21520;
  return x163; 
}

numeric_int_t x8370(void* x8364, void* x8365, void* x8366) {
  struct AGGRecord_Q3GRPRecord** x8367 = (struct AGGRecord_Q3GRPRecord**){x8366};
  struct AGGRecord_Q3GRPRecord* x8368 = (struct AGGRecord_Q3GRPRecord*){x8365};
  pointer_assign(x8367, x8368);
  return 1; 
}
