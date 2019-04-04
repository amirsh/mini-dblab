#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h" 


struct REGIONRecord_NATIONRecord;
struct LINEITEMRecord;
struct AGGRecord_OptimalString;
struct REGIONRecord_NATIONRecord_CUSTOMERRecord;
struct REGIONRecord;
struct NATIONRecord;
struct ORDERSRecord;
struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord;
struct SUPPLIERRecord;
struct CUSTOMERRecord;
struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord;
struct REGIONRecord_NATIONRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
};

struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
};

struct REGIONRecord_NATIONRecord_CUSTOMERRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
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
};

struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord {
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
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

struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
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


numeric_int_t x43183(char* x13391);

boolean_t x43201(char* x13396, char* x13397);

numeric_int_t x43207(void* x11032);

numeric_int_t x43210(void* x11035, void* x11036);

numeric_int_t x43217(void* x11042);

numeric_int_t x43220(void* x11045, void* x11046);

numeric_int_t x43227(void* x11052);

numeric_int_t x43230(void* x11055, void* x11056);

numeric_int_t x43237(void* x11062);

numeric_int_t x43240(void* x11065, void* x11066);

numeric_int_t x43247(void* x11072);

numeric_int_t x43250(void* x11075, void* x11076);

numeric_int_t x43295(struct AGGRecord_OptimalString* x249, struct AGGRecord_OptimalString* x250);

numeric_int_t x14179(void* x14173, void* x14174, void* x14175);

int main(int argc, char** argv) {
  numeric_int_t x6197;
  struct NATIONRecord* x8221;
  numeric_int_t* na_count = &x6197; 
  struct NATIONRecord** na_array = &x8221;
  loadNation(na_count, na_array);
  numeric_int_t x6274;
  struct REGIONRecord* x8301;
  numeric_int_t* re_count = &x6274;
  struct REGIONRecord** re_array = &x8301;
  loadRegion(re_count, re_array);
  numeric_int_t x6345;
  struct SUPPLIERRecord* x8375;
  numeric_int_t* su_count = &x6345;
  struct SUPPLIERRecord** su_array = &x8375;
  loadSupplier(su_count, su_array);
  numeric_int_t x6458;
  struct LINEITEMRecord* x8491;
  numeric_int_t* li_count = &x6458; 
  struct LINEITEMRecord** li_array = &x8491;
  loadLineitem(li_count, li_array);
  numeric_int_t x6647;
  struct ORDERSRecord* x8683;
  numeric_int_t* or_count = &x6647; 
  struct ORDERSRecord** or_array = &x8683;
  loadOrders(or_count, or_array);
  numeric_int_t x6773;
  struct CUSTOMERRecord* x8812;
  numeric_int_t* cu_count = &x6773; 
  struct CUSTOMERRecord** cu_array = &x8812;
  loadCustomer(cu_count, cu_array);
  numeric_int_t x145 = 0;
  for(; x145 < 1 ; x145 += 1) {
    
    GHashTable* x43206 = g_hash_table_new(x43183, x43201);
    void*** x43214 = (void***){x43207};
    numeric_int_t* x43215 = (numeric_int_t*){x43210};
    GHashTable* x43216 = g_hash_table_new(x43214, x43215);
    void*** x43224 = (void***){x43217};
    numeric_int_t* x43225 = (numeric_int_t*){x43220};
    GHashTable* x43226 = g_hash_table_new(x43224, x43225);
    void*** x43234 = (void***){x43227};
    numeric_int_t* x43235 = (numeric_int_t*){x43230};
    GHashTable* x43236 = g_hash_table_new(x43234, x43235);
    void*** x43244 = (void***){x43237};
    numeric_int_t* x43245 = (numeric_int_t*){x43240};
    GHashTable* x43246 = g_hash_table_new(x43244, x43245);
    void*** x43254 = (void***){x43247};
    numeric_int_t* x43255 = (numeric_int_t*){x43250};
    GHashTable* x43256 = g_hash_table_new(x43254, x43255);
    struct timeval x43257 = (struct timeval){0};
    /* VAR */ struct timeval x43258 = x43257;
    struct timeval x43259 = x43258;
    /* VAR */ struct timeval x43260 = x43257;
    struct timeval x43261 = x43260;
    /* VAR */ struct timeval x43262 = x43257;
    struct timeval x43263 = x43262;
    struct timeval* x43264 = &x43261;
    gettimeofday(x43264, NULL);
    /* VAR */ numeric_int_t x43266 = 0;
    /* VAR */ numeric_int_t x43267 = 0;
    /* VAR */ numeric_int_t x43268 = 0;
    /* VAR */ numeric_int_t x43269 = 0;
    /* VAR */ numeric_int_t x43270 = 0;
    /* VAR */ numeric_int_t x43271 = 0;
    numeric_int_t* x43318 = &(x43295);
    GTree* x43319 = g_tree_new(x43318);
    /* VAR */ boolean_t x43320 = 0;
    /* VAR */ numeric_int_t x43321 = 0;
    while(1) {
      
      numeric_int_t x43323 = x43271;
      boolean_t x43324 = x43323<(x6345);
      if (!(x43324)) break; 
      
      numeric_int_t x3146 = x43271;
      struct SUPPLIERRecord* x277 = &(x8375[x3146]);
      numeric_int_t x279 = x277->S_SUPPKEY;
      void* x11121 = (void*){x279};
      void* x11122 = (void*){x277};
      void* x11123 = g_hash_table_lookup(x43216, x11121);
      GList** x11124 = (GList**){x11123};
      GList** x11125 = NULL;
      boolean_t x11126 = x11124==(x11125);
      /* VAR */ GList** ite35235 = 0;
      if(x11126) {
        GList** x35236 = malloc(8);
        GList* x35237 = NULL;
        pointer_assign(x35236, x35237);
        ite35235 = x35236;
      } else {
        
        ite35235 = x11124;
      };
      GList** x11130 = ite35235;
      GList* x11131 = *(x11130);
      GList* x11132 = g_list_prepend(x11131, x11122);
      pointer_assign(x11130, x11132);
      void* x11134 = (void*){x11130};
      g_hash_table_insert(x43216, x11121, x11134);
      numeric_int_t x3151 = x43271;
      numeric_int_t x283 = x3151+(1);
      x43271 = x283;
    };
    while(1) {
      
      numeric_int_t x43352 = x43266;
      boolean_t x43353 = x43352<(x6274);
      if (!(x43353)) break; 
      
      numeric_int_t x3160 = x43266;
      struct REGIONRecord* x292 = &(x8301[x3160]);
      char* x294 = x292->R_NAME;
      boolean_t x27426 = strcmp(x294, "ASIA");
      boolean_t x27427 = x27426==(0);
      if(x27427) {
        numeric_int_t x296 = x292->R_REGIONKEY;
        void* x11149 = (void*){x296};
        void* x11150 = (void*){x292};
        void* x11151 = g_hash_table_lookup(x43256, x11149);
        GList** x11152 = (GList**){x11151};
        GList** x11153 = NULL;
        boolean_t x11154 = x11152==(x11153);
        /* VAR */ GList** ite35267 = 0;
        if(x11154) {
          GList** x35268 = malloc(8);
          GList* x35269 = NULL;
          pointer_assign(x35268, x35269);
          ite35267 = x35268;
        } else {
          
          ite35267 = x11152;
        };
        GList** x11158 = ite35267;
        GList* x11159 = *(x11158);
        GList* x11160 = g_list_prepend(x11159, x11150);
        pointer_assign(x11158, x11160);
        void* x11162 = (void*){x11158};
        g_hash_table_insert(x43256, x11149, x11162);
      };
      numeric_int_t x3168 = x43266;
      numeric_int_t x301 = x3168+(1);
      x43266 = x301;
    };
    while(1) {
      
      numeric_int_t x43385 = x43267;
      boolean_t x43386 = x43385<(x6197);
      if (!(x43386)) break; 
      
      numeric_int_t x3177 = x43267;
      struct NATIONRecord* x310 = &(x8221[x3177]);
      numeric_int_t x312 = x310->N_REGIONKEY;
      void* x11174 = (void*){x312};
      void* x11175 = g_hash_table_lookup(x43256, x11174);
      GList** x11176 = (GList**){x11175};
      boolean_t x21295 = x11176!=(NULL);
      if(x21295) {
        GList* x13593 = *(x11176);
        /* VAR */ GList* x13594 = x13593;
        while(1) {
          
          GList* x13595 = x13594;
          GList* x13596 = NULL;
          boolean_t x13597 = x13595!=(x13596);
          if (!(x13597)) break; 
          
          GList* x13598 = x13594;
          void* x13599 = g_list_nth_data(x13598, 0);
          struct REGIONRecord* x13600 = (struct REGIONRecord*){x13599};
          GList* x13601 = x13594;
          GList* x13602 = g_list_next(x13601);
          x13594 = x13602;
          numeric_int_t x13604 = x13600->R_REGIONKEY;
          boolean_t x13605 = x13604==(x312);
          if(x13605) {
            char* x1077 = x13600->R_NAME;
            char* x1078 = x13600->R_COMMENT;
            numeric_int_t x1079 = x310->N_NATIONKEY;
            char* x1080 = x310->N_NAME;
            char* x1081 = x310->N_COMMENT;
            struct REGIONRecord_NATIONRecord* x10065 = (struct REGIONRecord_NATIONRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord));
            memset(x10065, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord));
            x10065->R_REGIONKEY = x13604; x10065->R_NAME = x1077; x10065->R_COMMENT = x1078; x10065->N_NATIONKEY = x1079; x10065->N_NAME = x1080; x10065->N_REGIONKEY = x312; x10065->N_COMMENT = x1081;
            numeric_int_t x333 = x10065->N_NATIONKEY;
            void* x11195 = (void*){x333};
            void* x11196 = (void*){x10065};
            void* x11197 = g_hash_table_lookup(x43246, x11195);
            GList** x11198 = (GList**){x11197};
            GList** x11199 = NULL;
            boolean_t x11200 = x11198==(x11199);
            /* VAR */ GList** ite35358 = 0;
            if(x11200) {
              GList** x35359 = malloc(8);
              GList* x35360 = NULL;
              pointer_assign(x35359, x35360);
              ite35358 = x35359;
            } else {
              
              ite35358 = x11198;
            };
            GList** x11204 = ite35358;
            GList* x11205 = *(x11204);
            GList* x11206 = g_list_prepend(x11205, x11196);
            pointer_assign(x11204, x11206);
            void* x11208 = (void*){x11204};
            g_hash_table_insert(x43246, x11195, x11208);
          };
        };
      };
      numeric_int_t x3215 = x43267;
      numeric_int_t x341 = x3215+(1);
      x43267 = x341;
    };
    while(1) {
      
      numeric_int_t x43477 = x43270;
      boolean_t x43478 = x43477<(x6773);
      if (!(x43478)) break; 
      
      numeric_int_t x3225 = x43270;
      struct CUSTOMERRecord* x351 = &(x8812[x3225]);
      numeric_int_t x353 = x351->C_NATIONKEY;
      void* x11221 = (void*){x353};
      void* x11222 = g_hash_table_lookup(x43246, x11221);
      GList** x11223 = (GList**){x11222};
      boolean_t x21378 = x11223!=(NULL);
      if(x21378) {
        GList* x13686 = *(x11223);
        /* VAR */ GList* x13687 = x13686;
        while(1) {
          
          GList* x13688 = x13687;
          GList* x13689 = NULL;
          boolean_t x13690 = x13688!=(x13689);
          if (!(x13690)) break; 
          
          GList* x13691 = x13687;
          void* x13692 = g_list_nth_data(x13691, 0);
          struct REGIONRecord_NATIONRecord* x13693 = (struct REGIONRecord_NATIONRecord*){x13692};
          GList* x13694 = x13687;
          GList* x13695 = g_list_next(x13694);
          x13687 = x13695;
          numeric_int_t x13697 = x13693->N_NATIONKEY;
          boolean_t x13698 = x13697==(x353);
          if(x13698) {
            numeric_int_t x1136 = x13693->R_REGIONKEY;
            char* x1137 = x13693->R_NAME;
            char* x1138 = x13693->R_COMMENT;
            char* x1139 = x13693->N_NAME;
            numeric_int_t x1140 = x13693->N_REGIONKEY;
            char* x1141 = x13693->N_COMMENT;
            numeric_int_t x1142 = x351->C_CUSTKEY;
            char* x1143 = x351->C_NAME;
            char* x1144 = x351->C_ADDRESS;
            char* x1145 = x351->C_PHONE;
            double x1146 = x351->C_ACCTBAL;
            char* x1147 = x351->C_MKTSEGMENT;
            char* x1148 = x351->C_COMMENT;
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x10103 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
            memset(x10103, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
            x10103->R_REGIONKEY = x1136; x10103->R_NAME = x1137; x10103->R_COMMENT = x1138; x10103->N_NATIONKEY = x13697; x10103->N_NAME = x1139; x10103->N_REGIONKEY = x1140; x10103->N_COMMENT = x1141; x10103->C_CUSTKEY = x1142; x10103->C_NAME = x1143; x10103->C_ADDRESS = x1144; x10103->C_NATIONKEY = x353; x10103->C_PHONE = x1145; x10103->C_ACCTBAL = x1146; x10103->C_MKTSEGMENT = x1147; x10103->C_COMMENT = x1148;
            numeric_int_t x374 = x10103->C_CUSTKEY;
            void* x11250 = (void*){x374};
            void* x11251 = (void*){x10103};
            void* x11252 = g_hash_table_lookup(x43236, x11250);
            GList** x11253 = (GList**){x11252};
            GList** x11254 = NULL;
            boolean_t x11255 = x11253==(x11254);
            /* VAR */ GList** ite35465 = 0;
            if(x11255) {
              GList** x35466 = malloc(8);
              GList* x35467 = NULL;
              pointer_assign(x35466, x35467);
              ite35465 = x35466;
            } else {
              
              ite35465 = x11253;
            };
            GList** x11259 = ite35465;
            GList* x11260 = *(x11259);
            GList* x11261 = g_list_prepend(x11260, x11251);
            pointer_assign(x11259, x11261);
            void* x11263 = (void*){x11259};
            g_hash_table_insert(x43236, x11250, x11263);
          };
        };
      };
      numeric_int_t x3279 = x43270;
      numeric_int_t x382 = x3279+(1);
      x43270 = x382;
    };
    while(1) {
      
      numeric_int_t x43585 = x43269;
      boolean_t x43586 = x43585<(x6647);
      if (!(x43586)) break; 
      
      numeric_int_t x3288 = x43269;
      struct ORDERSRecord* x391 = &(x8683[x3288]);
      numeric_int_t x393 = x391->O_ORDERDATE;
      boolean_t x394 = x393>=(19960101);
      /* VAR */ boolean_t ite38175 = 0;
      if(x394) {
        boolean_t x43593 = x393<(19970101);
        ite38175 = x43593;
      } else {
        
        ite38175 = 0;
      };
      boolean_t x35488 = ite38175;
      if(x35488) {
        numeric_int_t x397 = x391->O_CUSTKEY;
        void* x11281 = (void*){x397};
        void* x11282 = g_hash_table_lookup(x43236, x11281);
        GList** x11283 = (GList**){x11282};
        boolean_t x21482 = x11283!=(NULL);
        if(x21482) {
          GList* x13800 = *(x11283);
          /* VAR */ GList* x13801 = x13800;
          while(1) {
            
            GList* x13802 = x13801;
            GList* x13803 = NULL;
            boolean_t x13804 = x13802!=(x13803);
            if (!(x13804)) break; 
            
            GList* x13805 = x13801;
            void* x13806 = g_list_nth_data(x13805, 0);
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x13807 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*){x13806};
            GList* x13808 = x13801;
            GList* x13809 = g_list_next(x13808);
            x13801 = x13809;
            numeric_int_t x13811 = x13807->C_CUSTKEY;
            boolean_t x13812 = x13811==(x397);
            if(x13812) {
              numeric_int_t x1215 = x13807->R_REGIONKEY;
              char* x1216 = x13807->R_NAME;
              char* x1217 = x13807->R_COMMENT;
              numeric_int_t x1218 = x13807->N_NATIONKEY;
              char* x1219 = x13807->N_NAME;
              numeric_int_t x1220 = x13807->N_REGIONKEY;
              char* x1221 = x13807->N_COMMENT;
              char* x1222 = x13807->C_NAME;
              char* x1223 = x13807->C_ADDRESS;
              numeric_int_t x1224 = x13807->C_NATIONKEY;
              char* x1225 = x13807->C_PHONE;
              double x1226 = x13807->C_ACCTBAL;
              char* x1227 = x13807->C_MKTSEGMENT;
              char* x1228 = x13807->C_COMMENT;
              numeric_int_t x1229 = x391->O_ORDERKEY;
              char x1230 = x391->O_ORDERSTATUS;
              double x1231 = x391->O_TOTALPRICE;
              char* x1232 = x391->O_ORDERPRIORITY;
              char* x1233 = x391->O_CLERK;
              numeric_int_t x1234 = x391->O_SHIPPRIORITY;
              char* x1235 = x391->O_COMMENT;
              struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x10154 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
              memset(x10154, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
              x10154->R_REGIONKEY = x1215; x10154->R_NAME = x1216; x10154->R_COMMENT = x1217; x10154->N_NATIONKEY = x1218; x10154->N_NAME = x1219; x10154->N_REGIONKEY = x1220; x10154->N_COMMENT = x1221; x10154->C_CUSTKEY = x13811; x10154->C_NAME = x1222; x10154->C_ADDRESS = x1223; x10154->C_NATIONKEY = x1224; x10154->C_PHONE = x1225; x10154->C_ACCTBAL = x1226; x10154->C_MKTSEGMENT = x1227; x10154->C_COMMENT = x1228; x10154->O_ORDERKEY = x1229; x10154->O_CUSTKEY = x397; x10154->O_ORDERSTATUS = x1230; x10154->O_TOTALPRICE = x1231; x10154->O_ORDERDATE = x393; x10154->O_ORDERPRIORITY = x1232; x10154->O_CLERK = x1233; x10154->O_SHIPPRIORITY = x1234; x10154->O_COMMENT = x1235;
              numeric_int_t x418 = x10154->O_ORDERKEY;
              void* x11318 = (void*){x418};
              void* x11319 = (void*){x10154};
              void* x11320 = g_hash_table_lookup(x43226, x11318);
              GList** x11321 = (GList**){x11320};
              GList** x11322 = NULL;
              boolean_t x11323 = x11321==(x11322);
              /* VAR */ GList** ite35593 = 0;
              if(x11323) {
                GList** x35594 = malloc(8);
                GList* x35595 = NULL;
                pointer_assign(x35594, x35595);
                ite35593 = x35594;
              } else {
                
                ite35593 = x11321;
              };
              GList** x11327 = ite35593;
              GList* x11328 = *(x11327);
              GList* x11329 = g_list_prepend(x11328, x11319);
              pointer_assign(x11327, x11329);
              void* x11331 = (void*){x11327};
              g_hash_table_insert(x43226, x11318, x11331);
            };
          };
        };
      };
      numeric_int_t x3363 = x43269;
      numeric_int_t x427 = x3363+(1);
      x43269 = x427;
    };
    while(1) {
      
      numeric_int_t x43719 = x43268;
      boolean_t x43720 = x43719<(x6458);
      if (!(x43720)) break; 
      
      numeric_int_t x3372 = x43268;
      struct LINEITEMRecord* x436 = &(x8491[x3372]);
      numeric_int_t x438 = x436->L_ORDERKEY;
      void* x11344 = (void*){x438};
      void* x11345 = g_hash_table_lookup(x43226, x11344);
      GList** x11346 = (GList**){x11345};
      boolean_t x21597 = x11346!=(NULL);
      if(x21597) {
        GList* x14004 = *(x11346);
        /* VAR */ GList* x14005 = x14004;
        while(1) {
          
          GList* x14006 = x14005;
          GList* x14007 = NULL;
          boolean_t x14008 = x14006!=(x14007);
          if (!(x14008)) break; 
          
          GList* x14009 = x14005;
          void* x14010 = g_list_nth_data(x14009, 0);
          struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x14011 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*){x14010};
          GList* x14012 = x14005;
          GList* x14013 = g_list_next(x14012);
          x14005 = x14013;
          numeric_int_t x14015 = x14011->O_ORDERKEY;
          boolean_t x14016 = x14015==(x438);
          if(x14016) {
            numeric_int_t x1491 = x14011->R_REGIONKEY;
            char* x1492 = x14011->R_NAME;
            char* x1493 = x14011->R_COMMENT;
            numeric_int_t x1494 = x14011->N_NATIONKEY;
            char* x1495 = x14011->N_NAME;
            numeric_int_t x1496 = x14011->N_REGIONKEY;
            char* x1497 = x14011->N_COMMENT;
            numeric_int_t x1498 = x14011->C_CUSTKEY;
            char* x1499 = x14011->C_NAME;
            char* x1500 = x14011->C_ADDRESS;
            numeric_int_t x1501 = x14011->C_NATIONKEY;
            char* x1502 = x14011->C_PHONE;
            double x1503 = x14011->C_ACCTBAL;
            char* x1504 = x14011->C_MKTSEGMENT;
            char* x1505 = x14011->C_COMMENT;
            numeric_int_t x1506 = x14011->O_CUSTKEY;
            char x1507 = x14011->O_ORDERSTATUS;
            double x1508 = x14011->O_TOTALPRICE;
            numeric_int_t x1509 = x14011->O_ORDERDATE;
            char* x1510 = x14011->O_ORDERPRIORITY;
            char* x1511 = x14011->O_CLERK;
            numeric_int_t x1512 = x14011->O_SHIPPRIORITY;
            char* x1513 = x14011->O_COMMENT;
            numeric_int_t x1514 = x436->L_PARTKEY;
            numeric_int_t x1515 = x436->L_SUPPKEY;
            numeric_int_t x1516 = x436->L_LINENUMBER;
            double x1517 = x436->L_QUANTITY;
            double x1518 = x436->L_EXTENDEDPRICE;
            double x1519 = x436->L_DISCOUNT;
            double x1520 = x436->L_TAX;
            char x1521 = x436->L_RETURNFLAG;
            char x1522 = x436->L_LINESTATUS;
            numeric_int_t x1523 = x436->L_SHIPDATE;
            numeric_int_t x1524 = x436->L_COMMITDATE;
            numeric_int_t x1525 = x436->L_RECEIPTDATE;
            char* x1526 = x436->L_SHIPINSTRUCT;
            char* x1527 = x436->L_SHIPMODE;
            char* x1528 = x436->L_COMMENT;
            void* x11394 = (void*){x1515};
            void* x11395 = g_hash_table_lookup(x43216, x11394);
            GList** x11396 = (GList**){x11395};
            boolean_t x21781 = x11396!=(NULL);
            if(x21781) {
              GList* x13960 = *(x11396);
              /* VAR */ GList* x13961 = x13960;
              while(1) {
                
                GList* x13962 = x13961;
                GList* x13963 = NULL;
                boolean_t x13964 = x13962!=(x13963);
                if (!(x13964)) break; 
                
                GList* x13965 = x13961;
                void* x13966 = g_list_nth_data(x13965, 0);
                struct SUPPLIERRecord* x13967 = (struct SUPPLIERRecord*){x13966};
                GList* x13968 = x13961;
                GList* x13969 = g_list_next(x13968);
                x13961 = x13969;
                numeric_int_t x13971 = x13967->S_SUPPKEY;
                boolean_t x13972 = x13971==(x1515);
                /* VAR */ boolean_t ite38580 = 0;
                if(x13972) {
                  numeric_int_t x43993 = x13967->S_NATIONKEY;
                  boolean_t x43994 = x1494==(x43993);
                  ite38580 = x43994;
                } else {
                  
                  ite38580 = 0;
                };
                boolean_t x35864 = ite38580;
                if(x35864) {
                  char* x1633 = x13967->S_NAME;
                  char* x1634 = x13967->S_ADDRESS;
                  numeric_int_t x1635 = x13967->S_NATIONKEY;
                  char* x1636 = x13967->S_PHONE;
                  double x1637 = x13967->S_ACCTBAL;
                  char* x1638 = x13967->S_COMMENT;
                  struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x10235 = (struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
                  memset(x10235, 0, 1 * sizeof(struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
                  x10235->S_SUPPKEY = x13971; x10235->S_NAME = x1633; x10235->S_ADDRESS = x1634; x10235->S_NATIONKEY = x1635; x10235->S_PHONE = x1636; x10235->S_ACCTBAL = x1637; x10235->S_COMMENT = x1638; x10235->R_REGIONKEY = x1491; x10235->R_NAME = x1492; x10235->R_COMMENT = x1493; x10235->N_NATIONKEY = x1494; x10235->N_NAME = x1495; x10235->N_REGIONKEY = x1496; x10235->N_COMMENT = x1497; x10235->C_CUSTKEY = x1498; x10235->C_NAME = x1499; x10235->C_ADDRESS = x1500; x10235->C_NATIONKEY = x1501; x10235->C_PHONE = x1502; x10235->C_ACCTBAL = x1503; x10235->C_MKTSEGMENT = x1504; x10235->C_COMMENT = x1505; x10235->O_ORDERKEY = x14015; x10235->O_CUSTKEY = x1506; x10235->O_ORDERSTATUS = x1507; x10235->O_TOTALPRICE = x1508; x10235->O_ORDERDATE = x1509; x10235->O_ORDERPRIORITY = x1510; x10235->O_CLERK = x1511; x10235->O_SHIPPRIORITY = x1512; x10235->O_COMMENT = x1513; x10235->L_ORDERKEY = x438; x10235->L_PARTKEY = x1514; x10235->L_SUPPKEY = x1515; x10235->L_LINENUMBER = x1516; x10235->L_QUANTITY = x1517; x10235->L_EXTENDEDPRICE = x1518; x10235->L_DISCOUNT = x1519; x10235->L_TAX = x1520; x10235->L_RETURNFLAG = x1521; x10235->L_LINESTATUS = x1522; x10235->L_SHIPDATE = x1523; x10235->L_COMMITDATE = x1524; x10235->L_RECEIPTDATE = x1525; x10235->L_SHIPINSTRUCT = x1526; x10235->L_SHIPMODE = x1527; x10235->L_COMMENT = x1528;
                  char* x602 = x10235->N_NAME;
                  void* x13987 = g_hash_table_lookup(x43206, x602);
                  boolean_t x13941 = x13987==(NULL);
                  /* VAR */ struct AGGRecord_OptimalString* ite35879 = 0;
                  if(x13941) {
                    double* x35880 = (double*)malloc(1 * sizeof(double));
                    memset(x35880, 0, 1 * sizeof(double));
                    struct AGGRecord_OptimalString* x35881 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
                    memset(x35881, 0, 1 * sizeof(struct AGGRecord_OptimalString));
                    x35881->key = x602; x35881->aggs = x35880;
                    g_hash_table_insert(x43206, x602, x35881);
                    ite35879 = x35881;
                  } else {
                    
                    ite35879 = x13987;
                  };
                  struct AGGRecord_OptimalString* x13951 = ite35879;
                  double* x607 = x13951->aggs;
                  double x621 = x607[0];
                  double x622 = x10235->L_EXTENDEDPRICE;
                  double x623 = x10235->L_DISCOUNT;
                  double x624 = 1.0-(x623);
                  double x625 = x622*(x624);
                  double x626 = x621+(x625);
                  *x607 = x626;
                };
              };
            };
          };
        };
      };
      numeric_int_t x3664 = x43268;
      numeric_int_t x641 = x3664+(1);
      x43268 = x641;
    };
    GList* x44038 = g_hash_table_get_keys(x43206);
    /* VAR */ GList* x44039 = x44038;
    numeric_int_t x44040 = g_hash_table_size(x43206);
    numeric_int_t x31106 = 0;
    for(; x31106 < x44040 ; x31106 += 1) {
      
      GList* x31107 = x44039;
      void* x31108 = g_list_nth_data(x31107, 0);
      GList* x31109 = g_list_next(x31107);
      x44039 = x31109;
      void* x31111 = g_hash_table_lookup(x43206, x31108);
      struct AGGRecord_OptimalString* x31113 = (struct AGGRecord_OptimalString*){x31111};
      g_tree_insert(x43319, x31113, x31113);
    };
    while(1) {
      
      boolean_t x3673 = x43320;
      boolean_t x652 = !(x3673);
      /* VAR */ boolean_t ite38653 = 0;
      if(x652) {
        numeric_int_t x44065 = g_tree_nnodes(x43319);
        boolean_t x44066 = x44065!=(0);
        ite38653 = x44066;
      } else {
        
        ite38653 = 0;
      };
      boolean_t x35930 = ite38653;
      if (!(x35930)) break; 
      
      void* x14172 = NULL;
      void** x14180 = &(x14172);
      g_tree_foreach(x43319, x14179, x14180);
      struct AGGRecord_OptimalString* x14182 = (struct AGGRecord_OptimalString*){x14172};
      numeric_int_t x14183 = g_tree_remove(x43319, x14182);
      if(0) {
        x43320 = 1;
      } else {
        
        char* x665 = x14182->key;
        double* x667 = x14182->aggs;
        double x668 = x667[0];
        printf("%s|%.4f\n", x665, x668);
        numeric_int_t x3691 = x43321;
        numeric_int_t x671 = x3691+(1);
        x43321 = x671;
      };
    };
    numeric_int_t x44092 = x43321;
    printf("(%d rows)\n", x44092);
    struct timeval* x44094 = &x43263;
    gettimeofday(x44094, NULL);
    struct timeval* x44096 = &x43259;
    struct timeval* x44097 = &x43263;
    struct timeval* x44098 = &x43261;
    long x44099 = timeval_subtract(x44096, x44097, x44098);
    printf("Generated code run in %ld milliseconds.\n", x44099);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x43183(char* x13391) {
  numeric_int_t x27276 = strlen(x13391);
  /* VAR */ numeric_int_t x24198 = 0;
  /* VAR */ numeric_int_t x24199 = 0;
  while(1) {
    
    numeric_int_t x24200 = x24198;
    boolean_t x24201 = x24200<(x27276);
    if (!(x24201)) break; 
    
    numeric_int_t x24202 = x24199;
    numeric_int_t x24203 = x24198;
    char* x27284 = pointer_add(x13391, x24203);
    char x27285 = *(x27284);
    numeric_int_t x24206 = x24202+(x27285);
    x24199 = x24206;
    numeric_int_t x24208 = x24198;
    numeric_int_t x24209 = x24208+(1);
    x24198 = x24209;
  };
  numeric_int_t x24212 = x24199;
  return x24212; 
}

boolean_t x43201(char* x13396, char* x13397) {
  boolean_t x24216 = strcmp(x13396, x13397);
  boolean_t x24217 = !(x24216);
  return x24217; 
}

numeric_int_t x43207(void* x11032) {
  numeric_int_t x11033 = g_direct_hash(x11032);
  return x11033; 
}

numeric_int_t x43210(void* x11035, void* x11036) {
  numeric_int_t x11037 = g_direct_equal(x11035, x11036);
  return x11037; 
}

numeric_int_t x43217(void* x11042) {
  numeric_int_t x11043 = g_direct_hash(x11042);
  return x11043; 
}

numeric_int_t x43220(void* x11045, void* x11046) {
  numeric_int_t x11047 = g_direct_equal(x11045, x11046);
  return x11047; 
}

numeric_int_t x43227(void* x11052) {
  numeric_int_t x11053 = g_direct_hash(x11052);
  return x11053; 
}

numeric_int_t x43230(void* x11055, void* x11056) {
  numeric_int_t x11057 = g_direct_equal(x11055, x11056);
  return x11057; 
}

numeric_int_t x43237(void* x11062) {
  numeric_int_t x11063 = g_direct_hash(x11062);
  return x11063; 
}

numeric_int_t x43240(void* x11065, void* x11066) {
  numeric_int_t x11067 = g_direct_equal(x11065, x11066);
  return x11067; 
}

numeric_int_t x43247(void* x11072) {
  numeric_int_t x11073 = g_direct_hash(x11072);
  return x11073; 
}

numeric_int_t x43250(void* x11075, void* x11076) {
  numeric_int_t x11077 = g_direct_equal(x11075, x11076);
  return x11077; 
}

numeric_int_t x43295(struct AGGRecord_OptimalString* x249, struct AGGRecord_OptimalString* x250) {
  double* x251 = x249->aggs;
  double x252 = x251[0];
  double* x253 = x250->aggs;
  double x254 = x253[0];
  boolean_t x255 = x252<(x254);
  /* VAR */ numeric_int_t ite35205 = 0;
  if(x255) {
    ite35205 = 1;
  } else {
    
    double x35207 = x251[0];
    double x35208 = x253[0];
    boolean_t x35209 = x35207>(x35208);
    /* VAR */ numeric_int_t ite35211 = 0;
    if(x35209) {
      ite35211 = -1;
    } else {
      
      ite35211 = 0;
    };
    numeric_int_t x35210 = ite35211;
    ite35205 = x35210;
  };
  numeric_int_t x260 = ite35205;
  return x260; 
}

numeric_int_t x14179(void* x14173, void* x14174, void* x14175) {
  struct AGGRecord_OptimalString** x14176 = (struct AGGRecord_OptimalString**){x14175};
  struct AGGRecord_OptimalString* x14177 = (struct AGGRecord_OptimalString*){x14174};
  pointer_assign(x14176, x14177);
  return 1; 
}
