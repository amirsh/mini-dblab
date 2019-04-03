#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h" 


struct AGGRecord_Q20GRPRecord;
struct LINEITEMRecord;
struct NATIONRecord;
struct PARTRecord_PARTSUPPRecord_LINEITEMRecord;
struct PARTRecord;
struct Q20GRPRecord;
struct PARTRecord_PARTSUPPRecord;
struct SUPPLIERRecord;
struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord;
struct PARTSUPPRecord;
struct AGGRecord_Q20GRPRecord {
  struct Q20GRPRecord* key;
  double* aggs;
};

struct PARTRecord_PARTSUPPRecord_LINEITEMRecord {
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
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

struct Q20GRPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
};

struct PARTRecord_PARTSUPPRecord {
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
};

struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
  struct Q20GRPRecord* key;
  double* aggs;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
};

numeric_int_t x36117(void* x8901);

numeric_int_t x36120(void* x8904, void* x8905);

numeric_int_t x36127(void* x8911);

numeric_int_t x36130(void* x8914, void* x8915);

numeric_int_t x36137(struct Q20GRPRecord* x10891);

boolean_t x36144(struct Q20GRPRecord* x10896, struct Q20GRPRecord* x10897);

numeric_int_t x36169(void* x8922);

numeric_int_t x36172(void* x8925, void* x8926);

numeric_int_t x36179(void* x8932);

numeric_int_t x36182(void* x8935, void* x8936);

numeric_int_t x36209(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x233, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x234);

numeric_int_t x11474(void* x11468, void* x11469, void* x11470);

int main(int argc, char** argv) {
  numeric_int_t* na_count; 
  struct NATIONRecord** na_array;
  loadNation(na_count, na_array);
  numeric_int_t x4847 = *na_count;
  struct NATIONRecord* x6543 = *na_array;
  numeric_int_t* su_count;
  struct SUPPLIERRecord** su_array;
  loadSupplier(su_count, su_array);
  numeric_int_t x4924 = *su_count;
  struct SUPPLIERRecord* x6623 = *su_array;
  numeric_int_t* pa_count; 
  struct PARTRecord** pa_array;
  loadPart(pa_count, pa_array);
  numeric_int_t x5037 = *pa_count;
  struct PARTRecord* x6739 = *pa_array;
  numeric_int_t* ps_count; 
  struct PARTSUPPRecord** ps_array;
  loadPartsupp(ps_count, ps_array);
  numeric_int_t x5182 = *ps_count;
  struct PARTSUPPRecord* x6887 = *ps_array;
  numeric_int_t* li_count; 
  struct LINEITEMRecord** li_array;
  loadLineitem(li_count, li_array);
  numeric_int_t x5252 = *li_count;
  struct LINEITEMRecord* x6960 = *li_array;
  numeric_int_t x123 = 0;
  for(; x123 < 1 ; x123 += 1) {
    
    void*** x36124 = (void***){x36117};
    numeric_int_t* x36125 = (numeric_int_t*){x36120};
    GHashTable* x36126 = g_hash_table_new(x36124, x36125);
    void*** x36134 = (void***){x36127};
    numeric_int_t* x36135 = (numeric_int_t*){x36130};
    GHashTable* x36136 = g_hash_table_new(x36134, x36135);
    GHashTable* x36168 = g_hash_table_new(x36137, x36144);
    void*** x36176 = (void***){x36169};
    numeric_int_t* x36177 = (numeric_int_t*){x36172};
    GHashTable* x36178 = g_hash_table_new(x36176, x36177);
    void*** x36186 = (void***){x36179};
    numeric_int_t* x36187 = (numeric_int_t*){x36182};
    GHashTable* x36188 = g_hash_table_new(x36186, x36187);
    struct timeval x36189 = (struct timeval){0};
    /* VAR */ struct timeval x36190 = x36189;
    struct timeval x36191 = x36190;
    /* VAR */ struct timeval x36192 = x36189;
    struct timeval x36193 = x36192;
    /* VAR */ struct timeval x36194 = x36189;
    struct timeval x36195 = x36194;
    struct timeval* x36196 = &x36193;
    gettimeofday(x36196, NULL);
    /* VAR */ numeric_int_t x36198 = 0;
    /* VAR */ numeric_int_t x36199 = 0;
    /* VAR */ numeric_int_t x36200 = 0;
    /* VAR */ numeric_int_t x36201 = 0;
    /* VAR */ numeric_int_t x36202 = 0;
    numeric_int_t* x36215 = &(x36209);
    GTree* x36216 = g_tree_new(x36215);
    /* VAR */ boolean_t x36217 = 0;
    /* VAR */ numeric_int_t x36218 = 0;
    while(1) {
      
      numeric_int_t x36220 = x36201;
      boolean_t x36221 = x36220<(x4847);
      if (!(x36221)) break; 
      
      numeric_int_t x2378 = x36201;
      struct NATIONRecord* x254 = &(x6543[x2378]);
      char* x256 = x254->N_NAME;
      boolean_t x23402 = strcmp(x256, "JORDAN");
      boolean_t x23403 = x23402==(0);
      if(x23403) {
        numeric_int_t x258 = x254->N_NATIONKEY;
        void* x8976 = (void*){x258};
        void* x8977 = (void*){x254};
        void* x8978 = g_hash_table_lookup(x36126, x8976);
        GList** x8979 = (GList**){x8978};
        GList** x8980 = NULL;
        boolean_t x8981 = x8979==(x8980);
        /* VAR */ GList** ite29724 = 0;
        if(x8981) {
          GList** x29725 = malloc(8);
          GList* x29726 = NULL;
          pointer_assign(x29725, x29726);
          ite29724 = x29725;
        } else {
          
          ite29724 = x8979;
        };
        GList** x8985 = ite29724;
        GList* x8986 = *(x8985);
        GList* x8987 = g_list_prepend(x8986, x8977);
        pointer_assign(x8985, x8987);
        void* x8989 = (void*){x8985};
        g_hash_table_insert(x36126, x8976, x8989);
      };
      numeric_int_t x2386 = x36201;
      numeric_int_t x263 = x2386+(1);
      x36201 = x263;
    };
    while(1) {
      
      numeric_int_t x36253 = x36198;
      boolean_t x36254 = x36253<(x5037);
      if (!(x36254)) break; 
      
      numeric_int_t x2395 = x36198;
      struct PARTRecord* x272 = &(x6739[x2395]);
      char* x274 = x272->P_NAME;
      numeric_int_t x23431 = strlen("azure");
      numeric_int_t x23432 = strncmp(x274, "azure", x23431);
      boolean_t x23433 = x23432==(0);
      if(x23433) {
        numeric_int_t x276 = x272->P_PARTKEY;
        void* x9004 = (void*){x276};
        void* x9005 = (void*){x272};
        void* x9006 = g_hash_table_lookup(x36188, x9004);
        GList** x9007 = (GList**){x9006};
        GList** x9008 = NULL;
        boolean_t x9009 = x9007==(x9008);
        /* VAR */ GList** ite29757 = 0;
        if(x9009) {
          GList** x29758 = malloc(8);
          GList* x29759 = NULL;
          pointer_assign(x29758, x29759);
          ite29757 = x29758;
        } else {
          
          ite29757 = x9007;
        };
        GList** x9013 = ite29757;
        GList* x9014 = *(x9013);
        GList* x9015 = g_list_prepend(x9014, x9005);
        pointer_assign(x9013, x9015);
        void* x9017 = (void*){x9013};
        g_hash_table_insert(x36188, x9004, x9017);
      };
      numeric_int_t x2403 = x36198;
      numeric_int_t x281 = x2403+(1);
      x36198 = x281;
    };
    while(1) {
      
      numeric_int_t x36287 = x36199;
      boolean_t x36288 = x36287<(x5182);
      if (!(x36288)) break; 
      
      numeric_int_t x2412 = x36199;
      struct PARTSUPPRecord* x290 = &(x6887[x2412]);
      numeric_int_t x292 = x290->PS_PARTKEY;
      void* x9029 = (void*){x292};
      void* x9030 = g_hash_table_lookup(x36188, x9029);
      GList** x9031 = (GList**){x9030};
      boolean_t x17248 = x9031!=(NULL);
      if(x17248) {
        GList* x11058 = *(x9031);
        /* VAR */ GList* x11059 = x11058;
        while(1) {
          
          GList* x11060 = x11059;
          GList* x11061 = NULL;
          boolean_t x11062 = x11060!=(x11061);
          if (!(x11062)) break; 
          
          GList* x11063 = x11059;
          void* x11064 = g_list_nth_data(x11063, 0);
          struct PARTRecord* x11065 = (struct PARTRecord*){x11064};
          GList* x11066 = x11059;
          GList* x11067 = g_list_next(x11066);
          x11059 = x11067;
          numeric_int_t x11069 = x11065->P_PARTKEY;
          boolean_t x11070 = x11069==(x292);
          if(x11070) {
            char* x947 = x11065->P_NAME;
            char* x948 = x11065->P_MFGR;
            char* x949 = x11065->P_BRAND;
            char* x950 = x11065->P_TYPE;
            numeric_int_t x951 = x11065->P_SIZE;
            char* x952 = x11065->P_CONTAINER;
            double x953 = x11065->P_RETAILPRICE;
            char* x954 = x11065->P_COMMENT;
            numeric_int_t x955 = x290->PS_SUPPKEY;
            numeric_int_t x956 = x290->PS_AVAILQTY;
            double x957 = x290->PS_SUPPLYCOST;
            char* x958 = x290->PS_COMMENT;
            struct PARTRecord_PARTSUPPRecord* x8105 = (struct PARTRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord));
            memset(x8105, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord));
            x8105->P_PARTKEY = x11069; x8105->P_NAME = x947; x8105->P_MFGR = x948; x8105->P_BRAND = x949; x8105->P_TYPE = x950; x8105->P_SIZE = x951; x8105->P_CONTAINER = x952; x8105->P_RETAILPRICE = x953; x8105->P_COMMENT = x954; x8105->PS_PARTKEY = x292; x8105->PS_SUPPKEY = x955; x8105->PS_AVAILQTY = x956; x8105->PS_SUPPLYCOST = x957; x8105->PS_COMMENT = x958;
            numeric_int_t x313 = x8105->PS_PARTKEY;
            void* x9057 = (void*){x313};
            void* x9058 = (void*){x8105};
            void* x9059 = g_hash_table_lookup(x36178, x9057);
            GList** x9060 = (GList**){x9059};
            GList** x9061 = NULL;
            boolean_t x9062 = x9060==(x9061);
            /* VAR */ GList** ite29862 = 0;
            if(x9062) {
              GList** x29863 = malloc(8);
              GList* x29864 = NULL;
              pointer_assign(x29863, x29864);
              ite29862 = x29863;
            } else {
              
              ite29862 = x9060;
            };
            GList** x9066 = ite29862;
            GList* x9067 = *(x9066);
            GList* x9068 = g_list_prepend(x9067, x9058);
            pointer_assign(x9066, x9068);
            void* x9070 = (void*){x9066};
            g_hash_table_insert(x36178, x9057, x9070);
          };
        };
      };
      numeric_int_t x2464 = x36199;
      numeric_int_t x321 = x2464+(1);
      x36199 = x321;
    };
    while(1) {
      
      numeric_int_t x36393 = x36202;
      boolean_t x36394 = x36393<(x5252);
      if (!(x36394)) break; 
      
      numeric_int_t x2474 = x36202;
      struct LINEITEMRecord* x331 = &(x6960[x2474]);
      numeric_int_t x333 = x331->L_SHIPDATE;
      boolean_t x334 = x333>=(19960101);
      /* VAR */ boolean_t ite32049 = 0;
      if(x334) {
        boolean_t x36401 = x333<(19970101);
        ite32049 = x36401;
      } else {
        
        ite32049 = 0;
      };
      boolean_t x29885 = ite32049;
      if(x29885) {
        numeric_int_t x337 = x331->L_PARTKEY;
        void* x9088 = (void*){x337};
        void* x9089 = g_hash_table_lookup(x36178, x9088);
        GList** x9090 = (GList**){x9089};
        boolean_t x17350 = x9090!=(NULL);
        if(x17350) {
          GList* x11188 = *(x9090);
          /* VAR */ GList* x11189 = x11188;
          while(1) {
            
            GList* x11190 = x11189;
            GList* x11191 = NULL;
            boolean_t x11192 = x11190!=(x11191);
            if (!(x11192)) break; 
            
            GList* x11193 = x11189;
            void* x11194 = g_list_nth_data(x11193, 0);
            struct PARTRecord_PARTSUPPRecord* x11195 = (struct PARTRecord_PARTSUPPRecord*){x11194};
            GList* x11196 = x11189;
            GList* x11197 = g_list_next(x11196);
            x11189 = x11197;
            numeric_int_t x11199 = x11195->PS_PARTKEY;
            boolean_t x11200 = x11199==(x337);
            /* VAR */ boolean_t ite32147 = 0;
            if(x11200) {
              numeric_int_t x36497 = x11195->PS_SUPPKEY;
              numeric_int_t x36498 = x331->L_SUPPKEY;
              boolean_t x36499 = x36497==(x36498);
              ite32147 = x36499;
            } else {
              
              ite32147 = 0;
            };
            boolean_t x29969 = ite32147;
            if(x29969) {
              numeric_int_t x1067 = x11195->P_PARTKEY;
              char* x1068 = x11195->P_NAME;
              char* x1069 = x11195->P_MFGR;
              char* x1070 = x11195->P_BRAND;
              char* x1071 = x11195->P_TYPE;
              numeric_int_t x1072 = x11195->P_SIZE;
              char* x1073 = x11195->P_CONTAINER;
              double x1074 = x11195->P_RETAILPRICE;
              char* x1075 = x11195->P_COMMENT;
              numeric_int_t x1076 = x11195->PS_SUPPKEY;
              numeric_int_t x1077 = x11195->PS_AVAILQTY;
              double x1078 = x11195->PS_SUPPLYCOST;
              char* x1079 = x11195->PS_COMMENT;
              numeric_int_t x1080 = x331->L_ORDERKEY;
              numeric_int_t x1081 = x331->L_SUPPKEY;
              numeric_int_t x1082 = x331->L_LINENUMBER;
              double x1083 = x331->L_QUANTITY;
              double x1084 = x331->L_EXTENDEDPRICE;
              double x1085 = x331->L_DISCOUNT;
              double x1086 = x331->L_TAX;
              char x1087 = x331->L_RETURNFLAG;
              char x1088 = x331->L_LINESTATUS;
              numeric_int_t x1089 = x331->L_COMMITDATE;
              numeric_int_t x1090 = x331->L_RECEIPTDATE;
              char* x1091 = x331->L_SHIPINSTRUCT;
              char* x1092 = x331->L_SHIPMODE;
              char* x1093 = x331->L_COMMENT;
              struct PARTRecord_PARTSUPPRecord_LINEITEMRecord* x8166 = (struct PARTRecord_PARTSUPPRecord_LINEITEMRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord_LINEITEMRecord));
              memset(x8166, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord_LINEITEMRecord));
              x8166->P_PARTKEY = x1067; x8166->P_NAME = x1068; x8166->P_MFGR = x1069; x8166->P_BRAND = x1070; x8166->P_TYPE = x1071; x8166->P_SIZE = x1072; x8166->P_CONTAINER = x1073; x8166->P_RETAILPRICE = x1074; x8166->P_COMMENT = x1075; x8166->PS_PARTKEY = x11199; x8166->PS_SUPPKEY = x1076; x8166->PS_AVAILQTY = x1077; x8166->PS_SUPPLYCOST = x1078; x8166->PS_COMMENT = x1079; x8166->L_ORDERKEY = x1080; x8166->L_PARTKEY = x337; x8166->L_SUPPKEY = x1081; x8166->L_LINENUMBER = x1082; x8166->L_QUANTITY = x1083; x8166->L_EXTENDEDPRICE = x1084; x8166->L_DISCOUNT = x1085; x8166->L_TAX = x1086; x8166->L_RETURNFLAG = x1087; x8166->L_LINESTATUS = x1088; x8166->L_SHIPDATE = x333; x8166->L_COMMITDATE = x1089; x8166->L_RECEIPTDATE = x1090; x8166->L_SHIPINSTRUCT = x1091; x8166->L_SHIPMODE = x1092; x8166->L_COMMENT = x1093;
              numeric_int_t x393 = x8166->PS_PARTKEY;
              numeric_int_t x394 = x8166->PS_SUPPKEY;
              numeric_int_t x395 = x8166->PS_AVAILQTY;
              struct Q20GRPRecord* x8172 = (struct Q20GRPRecord*)malloc(1 * sizeof(struct Q20GRPRecord));
              memset(x8172, 0, 1 * sizeof(struct Q20GRPRecord));
              x8172->PS_PARTKEY = x393; x8172->PS_SUPPKEY = x394; x8172->PS_AVAILQTY = x395;
              void* x11242 = g_hash_table_lookup(x36168, x8172);
              boolean_t x11172 = x11242==(NULL);
              /* VAR */ struct AGGRecord_Q20GRPRecord* ite30010 = 0;
              if(x11172) {
                double* x30011 = (double*)malloc(1 * sizeof(double));
                memset(x30011, 0, 1 * sizeof(double));
                struct AGGRecord_Q20GRPRecord* x30012 = (struct AGGRecord_Q20GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q20GRPRecord));
                memset(x30012, 0, 1 * sizeof(struct AGGRecord_Q20GRPRecord));
                x30012->key = x8172; x30012->aggs = x30011;
                g_hash_table_insert(x36168, x8172, x30012);
                ite30010 = x30012;
              } else {
                
                ite30010 = x11242;
              };
              struct AGGRecord_Q20GRPRecord* x11182 = ite30010;
              double* x401 = x11182->aggs;
              double x415 = x401[0];
              double x416 = x8166->L_QUANTITY;
              double x417 = x415+(x416);
              *x401 = x417;
            };
          };
        };
      };
      numeric_int_t x2623 = x36202;
      numeric_int_t x429 = x2623+(1);
      x36202 = x429;
    };
    GList* x36593 = g_hash_table_get_keys(x36168);
    /* VAR */ GList* x36594 = x36593;
    numeric_int_t x36595 = g_hash_table_size(x36168);
    numeric_int_t x26226 = 0;
    for(; x26226 < x36595 ; x26226 += 1) {
      
      GList* x26227 = x36594;
      void* x26228 = g_list_nth_data(x26227, 0);
      GList* x26229 = g_list_next(x26227);
      x36594 = x26229;
      void* x26231 = g_hash_table_lookup(x36168, x26228);
      struct AGGRecord_Q20GRPRecord* x26233 = (struct AGGRecord_Q20GRPRecord*){x26231};
      struct Q20GRPRecord* x26234 = x26233->key;
      numeric_int_t x26235 = x26234->PS_SUPPKEY;
      numeric_int_t x26236 = x26234->PS_AVAILQTY;
      double* x26237 = x26233->aggs;
      double x26238 = x26237[0];
      double x26239 = 0.5*(x26238);
      boolean_t x26241 = x26236>(x26239);
      if(x26241) {
        void* x9166 = (void*){x26235};
        void* x9167 = (void*){x26233};
        void* x9168 = g_hash_table_lookup(x36136, x9166);
        GList** x9169 = (GList**){x9168};
        GList** x9170 = NULL;
        boolean_t x9171 = x9169==(x9170);
        /* VAR */ GList** ite30122 = 0;
        if(x9171) {
          GList** x30123 = malloc(8);
          GList* x30124 = NULL;
          pointer_assign(x30123, x30124);
          ite30122 = x30123;
        } else {
          
          ite30122 = x9169;
        };
        GList** x9175 = ite30122;
        GList* x9176 = *(x9175);
        GList* x9177 = g_list_prepend(x9176, x9167);
        pointer_assign(x9175, x9177);
        void* x9179 = (void*){x9175};
        g_hash_table_insert(x36136, x9166, x9179);
      };
    };
    while(1) {
      
      numeric_int_t x36670 = x36200;
      boolean_t x36671 = x36670<(x4924);
      if (!(x36671)) break; 
      
      numeric_int_t x2647 = x36200;
      struct SUPPLIERRecord* x455 = &(x6623[x2647]);
      numeric_int_t x457 = x455->S_SUPPKEY;
      void* x9189 = (void*){x457};
      void* x9190 = g_hash_table_lookup(x36136, x9189);
      GList** x9191 = (GList**){x9190};
      boolean_t x17556 = x9191!=(NULL);
      if(x17556) {
        GList* x11394 = *(x9191);
        /* VAR */ GList* x11395 = x11394;
        while(1) {
          
          GList* x11396 = x11395;
          GList* x11397 = NULL;
          boolean_t x11398 = x11396!=(x11397);
          if (!(x11398)) break; 
          
          GList* x11399 = x11395;
          void* x11400 = g_list_nth_data(x11399, 0);
          struct AGGRecord_Q20GRPRecord* x11401 = (struct AGGRecord_Q20GRPRecord*){x11400};
          GList* x11402 = x11395;
          GList* x11403 = g_list_next(x11402);
          x11395 = x11403;
          struct Q20GRPRecord* x11405 = x11401->key;
          numeric_int_t x11406 = x11405->PS_SUPPKEY;
          boolean_t x11407 = x11406==(x457);
          if(x11407) {
            double* x1234 = x11401->aggs;
            char* x1235 = x455->S_NAME;
            char* x1236 = x455->S_ADDRESS;
            numeric_int_t x1237 = x455->S_NATIONKEY;
            char* x1238 = x455->S_PHONE;
            double x1239 = x455->S_ACCTBAL;
            char* x1240 = x455->S_COMMENT;
            void* x9209 = (void*){x1237};
            void* x9210 = g_hash_table_lookup(x36126, x9209);
            GList** x9211 = (GList**){x9210};
            boolean_t x17636 = x9211!=(NULL);
            if(x17636) {
              GList* x11372 = *(x9211);
              /* VAR */ GList* x11373 = x11372;
              while(1) {
                
                GList* x11374 = x11373;
                GList* x11375 = NULL;
                boolean_t x11376 = x11374!=(x11375);
                if (!(x11376)) break; 
                
                GList* x11377 = x11373;
                void* x11378 = g_list_nth_data(x11377, 0);
                struct NATIONRecord* x11379 = (struct NATIONRecord*){x11378};
                GList* x11380 = x11373;
                GList* x11381 = g_list_next(x11380);
                x11373 = x11381;
                numeric_int_t x11383 = x11379->N_NATIONKEY;
                boolean_t x11384 = x11383==(x1237);
                if(x11384) {
                  char* x1275 = x11379->N_NAME;
                  numeric_int_t x1276 = x11379->N_REGIONKEY;
                  char* x1277 = x11379->N_COMMENT;
                  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x8239 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
                  memset(x8239, 0, 1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
                  x8239->N_NATIONKEY = x11383; x8239->N_NAME = x1275; x8239->N_REGIONKEY = x1276; x8239->N_COMMENT = x1277; x8239->key = x11405; x8239->aggs = x1234; x8239->S_SUPPKEY = x457; x8239->S_NAME = x1235; x8239->S_ADDRESS = x1236; x8239->S_NATIONKEY = x1237; x8239->S_PHONE = x1238; x8239->S_ACCTBAL = x1239; x8239->S_COMMENT = x1240;
                  g_tree_insert(x36216, x8239, x8239);
                };
              };
            };
          };
        };
      };
      numeric_int_t x2743 = x36200;
      numeric_int_t x534 = x2743+(1);
      x36200 = x534;
    };
    while(1) {
      
      boolean_t x2747 = x36217;
      boolean_t x538 = !(x2747);
      /* VAR */ boolean_t ite32454 = 0;
      if(x538) {
        numeric_int_t x36802 = g_tree_nnodes(x36216);
        boolean_t x36803 = x36802!=(0);
        ite32454 = x36803;
      } else {
        
        ite32454 = 0;
      };
      boolean_t x30266 = ite32454;
      if (!(x30266)) break; 
      
      void* x11467 = NULL;
      void** x11475 = &(x11467);
      g_tree_foreach(x36216, x11474, x11475);
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x11477 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x11467};
      numeric_int_t x11478 = g_tree_remove(x36216, x11477);
      if(0) {
        x36217 = 1;
      } else {
        
        char* x551 = x11477->S_NAME;
        char* x553 = x11477->S_ADDRESS;
        printf("%s|%s\n", x551, x553);
        numeric_int_t x2765 = x36218;
        numeric_int_t x557 = x2765+(1);
        x36218 = x557;
      };
    };
    numeric_int_t x36828 = x36218;
    printf("(%d rows)\n", x36828);
    struct timeval* x36830 = &x36195;
    gettimeofday(x36830, NULL);
    struct timeval* x36832 = &x36191;
    struct timeval* x36833 = &x36195;
    struct timeval* x36834 = &x36193;
    long x36835 = timeval_subtract(x36832, x36833, x36834);
    printf("Generated code run in %ld milliseconds.\n", x36835);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x36117(void* x8901) {
  numeric_int_t x8902 = g_direct_hash(x8901);
  return x8902; 
}

numeric_int_t x36120(void* x8904, void* x8905) {
  numeric_int_t x8906 = g_direct_equal(x8904, x8905);
  return x8906; 
}

numeric_int_t x36127(void* x8911) {
  numeric_int_t x8912 = g_direct_hash(x8911);
  return x8912; 
}

numeric_int_t x36130(void* x8914, void* x8915) {
  numeric_int_t x8916 = g_direct_equal(x8914, x8915);
  return x8916; 
}

numeric_int_t x36137(struct Q20GRPRecord* x10891) {
  numeric_int_t x19594 = x10891->PS_PARTKEY;
  numeric_int_t x19596 = x10891->PS_SUPPKEY;
  numeric_int_t x19598 = x10891->PS_AVAILQTY;
  numeric_int_t x19600 = x19594+(x19596);
  numeric_int_t x19601 = x19600+(x19598);
  return x19601; 
}

boolean_t x36144(struct Q20GRPRecord* x10896, struct Q20GRPRecord* x10897) {
  numeric_int_t x19605 = x10896->PS_PARTKEY;
  numeric_int_t x19606 = x10897->PS_PARTKEY;
  boolean_t x19607 = x19605==(x19606);
  numeric_int_t x19608 = x10896->PS_SUPPKEY;
  numeric_int_t x19609 = x10897->PS_SUPPKEY;
  boolean_t x19610 = x19608==(x19609);
  numeric_int_t x19611 = x10896->PS_AVAILQTY;
  numeric_int_t x19612 = x10897->PS_AVAILQTY;
  boolean_t x19613 = x19611==(x19612);
  /* VAR */ boolean_t ite31800 = 0;
  if(x19607) {
    ite31800 = x19610;
  } else {
    
    ite31800 = 0;
  };
  boolean_t x29654 = ite31800;
  /* VAR */ boolean_t ite31807 = 0;
  if(x29654) {
    ite31807 = x19613;
  } else {
    
    ite31807 = 0;
  };
  boolean_t x29656 = ite31807;
  return x29656; 
}

numeric_int_t x36169(void* x8922) {
  numeric_int_t x8923 = g_direct_hash(x8922);
  return x8923; 
}

numeric_int_t x36172(void* x8925, void* x8926) {
  numeric_int_t x8927 = g_direct_equal(x8925, x8926);
  return x8927; 
}

numeric_int_t x36179(void* x8932) {
  numeric_int_t x8933 = g_direct_hash(x8932);
  return x8933; 
}

numeric_int_t x36182(void* x8935, void* x8936) {
  numeric_int_t x8937 = g_direct_equal(x8935, x8936);
  return x8937; 
}

numeric_int_t x36209(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x233, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x234) {
  char* x235 = x233->S_NAME;
  char* x236 = x234->S_NAME;
  numeric_int_t x23390 = strcmp(x235, x236);
  return x23390; 
}

numeric_int_t x11474(void* x11468, void* x11469, void* x11470) {
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord** x11471 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord**){x11470};
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x11472 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x11469};
  pointer_assign(x11471, x11472);
  return 1; 
}
