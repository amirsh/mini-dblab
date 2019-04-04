#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h"


struct LINEITEMRecord;
struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord;
struct NATIONRecord;
struct LINEITEMRecord_PARTRecord_SUPPLIERRecord;
struct LINEITEMRecord_PARTRecord;
struct ORDERSRecord;
struct PARTRecord;
struct AGGRecord_Q9GRPRecord;
struct Q9GRPRecord;
struct SUPPLIERRecord;
struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord;
struct PARTSUPPRecord;

struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord {
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
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
};

struct LINEITEMRecord_PARTRecord_SUPPLIERRecord {
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
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
};

struct LINEITEMRecord_PARTRecord {
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
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
};

struct AGGRecord_Q9GRPRecord {
  struct Q9GRPRecord* key;
  double* aggs;
};

struct Q9GRPRecord {
  char* NATION;
  numeric_int_t O_YEAR;
};

struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord {
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
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
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

numeric_int_t x48922(struct Q9GRPRecord* x14384);

boolean_t x48943(struct Q9GRPRecord* x14389, struct Q9GRPRecord* x14390);

numeric_int_t x48960(void* x11867);

numeric_int_t x48963(void* x11870, void* x11871);

numeric_int_t x48970(void* x11877);

numeric_int_t x48973(void* x11880, void* x11881);

numeric_int_t x48980(void* x11887);

numeric_int_t x48983(void* x11890, void* x11891);

numeric_int_t x48990(void* x11897);

numeric_int_t x48993(void* x11900, void* x11901);

numeric_int_t x49000(void* x11907);

numeric_int_t x49003(void* x11910, void* x11911);

numeric_int_t x49056(struct AGGRecord_Q9GRPRecord* x250, struct AGGRecord_Q9GRPRecord* x251);

numeric_int_t x15295(void* x15289, void* x15290, void* x15291);

int main(int argc, char** argv) {
  numeric_int_t x6707;
  struct PARTRecord* x8885;
  numeric_int_t* pa_count = &x6707; 
  struct PARTRecord** pa_array = &x8885;
  loadPart(pa_count, pa_array);
  numeric_int_t x6853;
  struct NATIONRecord* x9034;
  numeric_int_t* na_count = &x6853; 
  struct NATIONRecord** na_array = &x9034;
  loadNation(na_count, na_array);
  numeric_int_t x6929;
  struct ORDERSRecord* x9113;
  numeric_int_t* or_count = &x6929; 
  struct ORDERSRecord** or_array = &x9113;
  loadOrders(or_count, or_array);
  numeric_int_t x7055;
  struct PARTSUPPRecord* x9242;
  numeric_int_t* ps_count = &x7055; 
  struct PARTSUPPRecord** ps_array = &x9242;
  loadPartsupp(ps_count, ps_array);
  numeric_int_t x7125;
  struct SUPPLIERRecord* x9315;
  numeric_int_t* su_count = &x7125;
  struct SUPPLIERRecord** su_array = &x9315;
  loadSupplier(su_count, su_array);
  numeric_int_t x7238;
  struct LINEITEMRecord* x9431;
  numeric_int_t* li_count = &x7238; 
  struct LINEITEMRecord** li_array = &x9431;
  loadLineitem(li_count, li_array);
  numeric_int_t x148 = 0;
  for(; x148 < 1 ; x148 += 1) {
    
    GHashTable* x48959 = g_hash_table_new(x48922, x48943);
    void*** x48967 = (void***){x48960};
    numeric_int_t* x48968 = (numeric_int_t*){x48963};
    GHashTable* x48969 = g_hash_table_new(x48967, x48968);
    void*** x48977 = (void***){x48970};
    numeric_int_t* x48978 = (numeric_int_t*){x48973};
    GHashTable* x48979 = g_hash_table_new(x48977, x48978);
    void*** x48987 = (void***){x48980};
    numeric_int_t* x48988 = (numeric_int_t*){x48983};
    GHashTable* x48989 = g_hash_table_new(x48987, x48988);
    void*** x48997 = (void***){x48990};
    numeric_int_t* x48998 = (numeric_int_t*){x48993};
    GHashTable* x48999 = g_hash_table_new(x48997, x48998);
    void*** x49007 = (void***){x49000};
    numeric_int_t* x49008 = (numeric_int_t*){x49003};
    GHashTable* x49009 = g_hash_table_new(x49007, x49008);
    struct timeval x49010 = (struct timeval){0};
    /* VAR */ struct timeval x49011 = x49010;
    struct timeval x49012 = x49011;
    /* VAR */ struct timeval x49013 = x49010;
    struct timeval x49014 = x49013;
    /* VAR */ struct timeval x49015 = x49010;
    struct timeval x49016 = x49015;
    struct timeval* x49017 = &x49014;
    gettimeofday(x49017, NULL);
    /* VAR */ numeric_int_t x49019 = 0;
    /* VAR */ numeric_int_t x49020 = 0;
    /* VAR */ numeric_int_t x49021 = 0;
    /* VAR */ numeric_int_t x49022 = 0;
    /* VAR */ numeric_int_t x49023 = 0;
    /* VAR */ numeric_int_t x49024 = 0;
    numeric_int_t* x49087 = &(x49056);
    GTree* x49088 = g_tree_new(x49087);
    /* VAR */ boolean_t x49089 = 0;
    /* VAR */ numeric_int_t x49090 = 0;
    while(1) {
      
      numeric_int_t x49092 = x49023;
      boolean_t x49093 = x49092<(x7055);
      if (!(x49093)) break; 
      
      numeric_int_t x3215 = x49023;
      struct PARTSUPPRecord* x283 = &(x9242[x3215]);
      numeric_int_t x285 = x283->PS_PARTKEY;
      void* x11959 = (void*){x285};
      void* x11960 = (void*){x283};
      void* x11961 = g_hash_table_lookup(x48979, x11959);
      GList** x11962 = (GList**){x11961};
      GList** x11963 = NULL;
      boolean_t x11964 = x11962==(x11963);
      /* VAR */ GList** ite40090 = 0;
      if(x11964) {
        GList** x40091 = malloc(8);
        GList* x40092 = NULL;
        pointer_assign(x40091, x40092);
        ite40090 = x40091;
      } else {
        
        ite40090 = x11962;
      };
      GList** x11968 = ite40090;
      GList* x11969 = *(x11968);
      GList* x11970 = g_list_prepend(x11969, x11960);
      pointer_assign(x11968, x11970);
      void* x11972 = (void*){x11968};
      g_hash_table_insert(x48979, x11959, x11972);
      numeric_int_t x3220 = x49023;
      numeric_int_t x289 = x3220+(1);
      x49023 = x289;
    };
    while(1) {
      
      numeric_int_t x49121 = x49021;
      boolean_t x49122 = x49121<(x7238);
      if (!(x49122)) break; 
      
      numeric_int_t x3229 = x49021;
      struct LINEITEMRecord* x298 = &(x9431[x3229]);
      numeric_int_t x300 = x298->L_PARTKEY;
      void* x11984 = (void*){x300};
      void* x11985 = (void*){x298};
      void* x11986 = g_hash_table_lookup(x49009, x11984);
      GList** x11987 = (GList**){x11986};
      GList** x11988 = NULL;
      boolean_t x11989 = x11987==(x11988);
      /* VAR */ GList** ite40118 = 0;
      if(x11989) {
        GList** x40119 = malloc(8);
        GList* x40120 = NULL;
        pointer_assign(x40119, x40120);
        ite40118 = x40119;
      } else {
        
        ite40118 = x11987;
      };
      GList** x11993 = ite40118;
      GList* x11994 = *(x11993);
      GList* x11995 = g_list_prepend(x11994, x11985);
      pointer_assign(x11993, x11995);
      void* x11997 = (void*){x11993};
      g_hash_table_insert(x49009, x11984, x11997);
      numeric_int_t x3234 = x49021;
      numeric_int_t x304 = x3234+(1);
      x49021 = x304;
    };
    while(1) {
      
      numeric_int_t x49150 = x49022;
      boolean_t x49151 = x49150<(x6707);
      if (!(x49151)) break; 
      
      numeric_int_t x3243 = x49022;
      struct PARTRecord* x313 = &(x8885[x3243]);
      char* x315 = x313->P_NAME;
      char* x31420 = strstr(x315, "ghost");
      boolean_t x31421 = x31420!=(NULL);
      if(x31421) {
        numeric_int_t x317 = x313->P_PARTKEY;
        void* x12012 = (void*){x317};
        void* x12013 = g_hash_table_lookup(x49009, x12012);
        GList** x12014 = (GList**){x12013};
        boolean_t x22994 = x12014!=(NULL);
        if(x22994) {
          GList* x14609 = *(x12014);
          /* VAR */ GList* x14610 = x14609;
          while(1) {
            
            GList* x14611 = x14610;
            GList* x14612 = NULL;
            boolean_t x14613 = x14611!=(x14612);
            if (!(x14613)) break; 
            
            GList* x14614 = x14610;
            void* x14615 = g_list_nth_data(x14614, 0);
            struct LINEITEMRecord* x14616 = (struct LINEITEMRecord*){x14615};
            GList* x14617 = x14610;
            GList* x14618 = g_list_next(x14617);
            x14610 = x14618;
            numeric_int_t x14620 = x14616->L_PARTKEY;
            boolean_t x14621 = x14620==(x317);
            if(x14621) {
              numeric_int_t x1061 = x14616->L_ORDERKEY;
              numeric_int_t x1062 = x14616->L_SUPPKEY;
              numeric_int_t x1063 = x14616->L_LINENUMBER;
              double x1064 = x14616->L_QUANTITY;
              double x1065 = x14616->L_EXTENDEDPRICE;
              double x1066 = x14616->L_DISCOUNT;
              double x1067 = x14616->L_TAX;
              char x1068 = x14616->L_RETURNFLAG;
              char x1069 = x14616->L_LINESTATUS;
              numeric_int_t x1070 = x14616->L_SHIPDATE;
              numeric_int_t x1071 = x14616->L_COMMITDATE;
              numeric_int_t x1072 = x14616->L_RECEIPTDATE;
              char* x1073 = x14616->L_SHIPINSTRUCT;
              char* x1074 = x14616->L_SHIPMODE;
              char* x1075 = x14616->L_COMMENT;
              char* x1076 = x313->P_MFGR;
              char* x1077 = x313->P_BRAND;
              char* x1078 = x313->P_TYPE;
              numeric_int_t x1079 = x313->P_SIZE;
              char* x1080 = x313->P_CONTAINER;
              double x1081 = x313->P_RETAILPRICE;
              char* x1082 = x313->P_COMMENT;
              struct LINEITEMRecord_PARTRecord* x10841 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
              memset(x10841, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
              x10841->L_ORDERKEY = x1061; x10841->L_PARTKEY = x14620; x10841->L_SUPPKEY = x1062; x10841->L_LINENUMBER = x1063; x10841->L_QUANTITY = x1064; x10841->L_EXTENDEDPRICE = x1065; x10841->L_DISCOUNT = x1066; x10841->L_TAX = x1067; x10841->L_RETURNFLAG = x1068; x10841->L_LINESTATUS = x1069; x10841->L_SHIPDATE = x1070; x10841->L_COMMITDATE = x1071; x10841->L_RECEIPTDATE = x1072; x10841->L_SHIPINSTRUCT = x1073; x10841->L_SHIPMODE = x1074; x10841->L_COMMENT = x1075; x10841->P_PARTKEY = x317; x10841->P_NAME = x315; x10841->P_MFGR = x1076; x10841->P_BRAND = x1077; x10841->P_TYPE = x1078; x10841->P_SIZE = x1079; x10841->P_CONTAINER = x1080; x10841->P_RETAILPRICE = x1081; x10841->P_COMMENT = x1082;
              numeric_int_t x338 = x10841->L_SUPPKEY;
              void* x12050 = (void*){x338};
              void* x12051 = (void*){x10841};
              void* x12052 = g_hash_table_lookup(x48999, x12050);
              GList** x12053 = (GList**){x12052};
              GList** x12054 = NULL;
              boolean_t x12055 = x12053==(x12054);
              /* VAR */ GList** ite40247 = 0;
              if(x12055) {
                GList** x40248 = malloc(8);
                GList* x40249 = NULL;
                pointer_assign(x40248, x40249);
                ite40247 = x40248;
              } else {
                
                ite40247 = x12053;
              };
              GList** x12059 = ite40247;
              GList* x12060 = *(x12059);
              GList* x12061 = g_list_prepend(x12060, x12051);
              pointer_assign(x12059, x12061);
              void* x12063 = (void*){x12059};
              g_hash_table_insert(x48999, x12050, x12063);
            };
          };
        };
      };
      numeric_int_t x3318 = x49022;
      numeric_int_t x347 = x3318+(1);
      x49022 = x347;
    };
    while(1) {
      
      numeric_int_t x49280 = x49020;
      boolean_t x49281 = x49280<(x7125);
      if (!(x49281)) break; 
      
      numeric_int_t x3328 = x49020;
      struct SUPPLIERRecord* x357 = &(x9315[x3328]);
      numeric_int_t x359 = x357->S_SUPPKEY;
      void* x12076 = (void*){x359};
      void* x12077 = g_hash_table_lookup(x48999, x12076);
      GList** x12078 = (GList**){x12077};
      boolean_t x23111 = x12078!=(NULL);
      if(x23111) {
        GList* x14736 = *(x12078);
        /* VAR */ GList* x14737 = x14736;
        while(1) {
          
          GList* x14738 = x14737;
          GList* x14739 = NULL;
          boolean_t x14740 = x14738!=(x14739);
          if (!(x14740)) break; 
          
          GList* x14741 = x14737;
          void* x14742 = g_list_nth_data(x14741, 0);
          struct LINEITEMRecord_PARTRecord* x14743 = (struct LINEITEMRecord_PARTRecord*){x14742};
          GList* x14744 = x14737;
          GList* x14745 = g_list_next(x14744);
          x14737 = x14745;
          numeric_int_t x14747 = x14743->L_SUPPKEY;
          boolean_t x14748 = x14747==(x359);
          if(x14748) {
            numeric_int_t x1154 = x14743->L_ORDERKEY;
            numeric_int_t x1155 = x14743->L_PARTKEY;
            numeric_int_t x1156 = x14743->L_LINENUMBER;
            double x1157 = x14743->L_QUANTITY;
            double x1158 = x14743->L_EXTENDEDPRICE;
            double x1159 = x14743->L_DISCOUNT;
            double x1160 = x14743->L_TAX;
            char x1161 = x14743->L_RETURNFLAG;
            char x1162 = x14743->L_LINESTATUS;
            numeric_int_t x1163 = x14743->L_SHIPDATE;
            numeric_int_t x1164 = x14743->L_COMMITDATE;
            numeric_int_t x1165 = x14743->L_RECEIPTDATE;
            char* x1166 = x14743->L_SHIPINSTRUCT;
            char* x1167 = x14743->L_SHIPMODE;
            char* x1168 = x14743->L_COMMENT;
            numeric_int_t x1169 = x14743->P_PARTKEY;
            char* x1170 = x14743->P_NAME;
            char* x1171 = x14743->P_MFGR;
            char* x1172 = x14743->P_BRAND;
            char* x1173 = x14743->P_TYPE;
            numeric_int_t x1174 = x14743->P_SIZE;
            char* x1175 = x14743->P_CONTAINER;
            double x1176 = x14743->P_RETAILPRICE;
            char* x1177 = x14743->P_COMMENT;
            char* x1178 = x357->S_NAME;
            char* x1179 = x357->S_ADDRESS;
            numeric_int_t x1180 = x357->S_NATIONKEY;
            char* x1181 = x357->S_PHONE;
            double x1182 = x357->S_ACCTBAL;
            char* x1183 = x357->S_COMMENT;
            struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x10896 = (struct LINEITEMRecord_PARTRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
            memset(x10896, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
            x10896->L_ORDERKEY = x1154; x10896->L_PARTKEY = x1155; x10896->L_SUPPKEY = x14747; x10896->L_LINENUMBER = x1156; x10896->L_QUANTITY = x1157; x10896->L_EXTENDEDPRICE = x1158; x10896->L_DISCOUNT = x1159; x10896->L_TAX = x1160; x10896->L_RETURNFLAG = x1161; x10896->L_LINESTATUS = x1162; x10896->L_SHIPDATE = x1163; x10896->L_COMMITDATE = x1164; x10896->L_RECEIPTDATE = x1165; x10896->L_SHIPINSTRUCT = x1166; x10896->L_SHIPMODE = x1167; x10896->L_COMMENT = x1168; x10896->P_PARTKEY = x1169; x10896->P_NAME = x1170; x10896->P_MFGR = x1171; x10896->P_BRAND = x1172; x10896->P_TYPE = x1173; x10896->P_SIZE = x1174; x10896->P_CONTAINER = x1175; x10896->P_RETAILPRICE = x1176; x10896->P_COMMENT = x1177; x10896->S_SUPPKEY = x359; x10896->S_NAME = x1178; x10896->S_ADDRESS = x1179; x10896->S_NATIONKEY = x1180; x10896->S_PHONE = x1181; x10896->S_ACCTBAL = x1182; x10896->S_COMMENT = x1183;
            numeric_int_t x380 = x10896->S_NATIONKEY;
            void* x12122 = (void*){x380};
            void* x12123 = (void*){x10896};
            void* x12124 = g_hash_table_lookup(x48989, x12122);
            GList** x12125 = (GList**){x12124};
            GList** x12126 = NULL;
            boolean_t x12127 = x12125==(x12126);
            /* VAR */ GList** ite40388 = 0;
            if(x12127) {
              GList** x40389 = malloc(8);
              GList* x40390 = NULL;
              pointer_assign(x40389, x40390);
              ite40388 = x40389;
            } else {
              
              ite40388 = x12125;
            };
            GList** x12131 = ite40388;
            GList* x12132 = *(x12131);
            GList* x12133 = g_list_prepend(x12132, x12123);
            pointer_assign(x12131, x12133);
            void* x12135 = (void*){x12131};
            g_hash_table_insert(x48989, x12122, x12135);
          };
        };
      };
      numeric_int_t x3416 = x49020;
      numeric_int_t x388 = x3416+(1);
      x49020 = x388;
    };
    while(1) {
      
      numeric_int_t x49422 = x49019;
      boolean_t x49423 = x49422<(x6853);
      if (!(x49423)) break; 
      
      numeric_int_t x3425 = x49019;
      struct NATIONRecord* x397 = &(x9034[x3425]);
      numeric_int_t x399 = x397->N_NATIONKEY;
      void* x12148 = (void*){x399};
      void* x12149 = g_hash_table_lookup(x48989, x12148);
      GList** x12150 = (GList**){x12149};
      boolean_t x23244 = x12150!=(NULL);
      if(x23244) {
        GList* x14935 = *(x12150);
        /* VAR */ GList* x14936 = x14935;
        while(1) {
          
          GList* x14937 = x14936;
          GList* x14938 = NULL;
          boolean_t x14939 = x14937!=(x14938);
          if (!(x14939)) break; 
          
          GList* x14940 = x14936;
          void* x14941 = g_list_nth_data(x14940, 0);
          struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x14942 = (struct LINEITEMRecord_PARTRecord_SUPPLIERRecord*){x14941};
          GList* x14943 = x14936;
          GList* x14944 = g_list_next(x14943);
          x14936 = x14944;
          numeric_int_t x14946 = x14942->S_NATIONKEY;
          boolean_t x14947 = x14946==(x399);
          if(x14947) {
            numeric_int_t x1369 = x14942->L_ORDERKEY;
            numeric_int_t x1370 = x14942->L_PARTKEY;
            numeric_int_t x1371 = x14942->L_SUPPKEY;
            numeric_int_t x1372 = x14942->L_LINENUMBER;
            double x1373 = x14942->L_QUANTITY;
            double x1374 = x14942->L_EXTENDEDPRICE;
            double x1375 = x14942->L_DISCOUNT;
            double x1376 = x14942->L_TAX;
            char x1377 = x14942->L_RETURNFLAG;
            char x1378 = x14942->L_LINESTATUS;
            numeric_int_t x1379 = x14942->L_SHIPDATE;
            numeric_int_t x1380 = x14942->L_COMMITDATE;
            numeric_int_t x1381 = x14942->L_RECEIPTDATE;
            char* x1382 = x14942->L_SHIPINSTRUCT;
            char* x1383 = x14942->L_SHIPMODE;
            char* x1384 = x14942->L_COMMENT;
            numeric_int_t x1385 = x14942->P_PARTKEY;
            char* x1386 = x14942->P_NAME;
            char* x1387 = x14942->P_MFGR;
            char* x1388 = x14942->P_BRAND;
            char* x1389 = x14942->P_TYPE;
            numeric_int_t x1390 = x14942->P_SIZE;
            char* x1391 = x14942->P_CONTAINER;
            double x1392 = x14942->P_RETAILPRICE;
            char* x1393 = x14942->P_COMMENT;
            numeric_int_t x1394 = x14942->S_SUPPKEY;
            char* x1395 = x14942->S_NAME;
            char* x1396 = x14942->S_ADDRESS;
            char* x1397 = x14942->S_PHONE;
            double x1398 = x14942->S_ACCTBAL;
            char* x1399 = x14942->S_COMMENT;
            char* x1400 = x397->N_NAME;
            numeric_int_t x1401 = x397->N_REGIONKEY;
            char* x1402 = x397->N_COMMENT;
            void* x12194 = (void*){x1370};
            void* x12195 = g_hash_table_lookup(x48979, x12194);
            GList** x12196 = (GList**){x12195};
            boolean_t x23414 = x12196!=(NULL);
            if(x23414) {
              GList* x14894 = *(x12196);
              /* VAR */ GList* x14895 = x14894;
              while(1) {
                
                GList* x14896 = x14895;
                GList* x14897 = NULL;
                boolean_t x14898 = x14896!=(x14897);
                if (!(x14898)) break; 
                
                GList* x14899 = x14895;
                void* x14900 = g_list_nth_data(x14899, 0);
                struct PARTSUPPRecord* x14901 = (struct PARTSUPPRecord*){x14900};
                GList* x14902 = x14895;
                GList* x14903 = g_list_next(x14902);
                x14895 = x14903;
                numeric_int_t x14905 = x14901->PS_PARTKEY;
                boolean_t x14906 = x14905==(x1370);
                /* VAR */ boolean_t ite43659 = 0;
                if(x14906) {
                  numeric_int_t x49679 = x14901->PS_SUPPKEY;
                  boolean_t x49680 = x49679==(x1371);
                  ite43659 = x49680;
                } else {
                  
                  ite43659 = 0;
                };
                boolean_t x40642 = ite43659;
                if(x40642) {
                  numeric_int_t x1474 = x14901->PS_SUPPKEY;
                  numeric_int_t x1475 = x14901->PS_AVAILQTY;
                  double x1476 = x14901->PS_SUPPLYCOST;
                  char* x1477 = x14901->PS_COMMENT;
                  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x10971 = (struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord*)malloc(1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
                  memset(x10971, 0, 1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
                  x10971->PS_PARTKEY = x14905; x10971->PS_SUPPKEY = x1474; x10971->PS_AVAILQTY = x1475; x10971->PS_SUPPLYCOST = x1476; x10971->PS_COMMENT = x1477; x10971->L_ORDERKEY = x1369; x10971->L_PARTKEY = x1370; x10971->L_SUPPKEY = x1371; x10971->L_LINENUMBER = x1372; x10971->L_QUANTITY = x1373; x10971->L_EXTENDEDPRICE = x1374; x10971->L_DISCOUNT = x1375; x10971->L_TAX = x1376; x10971->L_RETURNFLAG = x1377; x10971->L_LINESTATUS = x1378; x10971->L_SHIPDATE = x1379; x10971->L_COMMITDATE = x1380; x10971->L_RECEIPTDATE = x1381; x10971->L_SHIPINSTRUCT = x1382; x10971->L_SHIPMODE = x1383; x10971->L_COMMENT = x1384; x10971->P_PARTKEY = x1385; x10971->P_NAME = x1386; x10971->P_MFGR = x1387; x10971->P_BRAND = x1388; x10971->P_TYPE = x1389; x10971->P_SIZE = x1390; x10971->P_CONTAINER = x1391; x10971->P_RETAILPRICE = x1392; x10971->P_COMMENT = x1393; x10971->S_SUPPKEY = x1394; x10971->S_NAME = x1395; x10971->S_ADDRESS = x1396; x10971->S_NATIONKEY = x14946; x10971->S_PHONE = x1397; x10971->S_ACCTBAL = x1398; x10971->S_COMMENT = x1399; x10971->N_NATIONKEY = x399; x10971->N_NAME = x1400; x10971->N_REGIONKEY = x1401; x10971->N_COMMENT = x1402;
                  numeric_int_t x482 = x10971->L_ORDERKEY;
                  void* x12217 = (void*){x482};
                  void* x12218 = (void*){x10971};
                  void* x12219 = g_hash_table_lookup(x48969, x12217);
                  GList** x12220 = (GList**){x12219};
                  GList** x12221 = NULL;
                  boolean_t x12222 = x12220==(x12221);
                  /* VAR */ GList** ite40659 = 0;
                  if(x12222) {
                    GList** x40660 = malloc(8);
                    GList* x40661 = NULL;
                    pointer_assign(x40660, x40661);
                    ite40659 = x40660;
                  } else {
                    
                    ite40659 = x12220;
                  };
                  GList** x12226 = ite40659;
                  GList* x12227 = *(x12226);
                  GList* x12228 = g_list_prepend(x12227, x12218);
                  pointer_assign(x12226, x12228);
                  void* x12230 = (void*){x12226};
                  g_hash_table_insert(x48969, x12217, x12230);
                };
              };
            };
          };
        };
      };
      numeric_int_t x3593 = x49019;
      numeric_int_t x494 = x3593+(1);
      x49019 = x494;
    };
    while(1) {
      
      numeric_int_t x49718 = x49024;
      boolean_t x49719 = x49718<(x6929);
      if (!(x49719)) break; 
      
      numeric_int_t x3602 = x49024;
      struct ORDERSRecord* x503 = &(x9113[x3602]);
      numeric_int_t x505 = x503->O_ORDERKEY;
      void* x12244 = (void*){x505};
      void* x12245 = g_hash_table_lookup(x48969, x12244);
      GList** x12246 = (GList**){x12245};
      boolean_t x23501 = x12246!=(NULL);
      if(x23501) {
        GList* x15166 = *(x12246);
        /* VAR */ GList* x15167 = x15166;
        while(1) {
          
          GList* x15168 = x15167;
          GList* x15169 = NULL;
          boolean_t x15170 = x15168!=(x15169);
          if (!(x15170)) break; 
          
          GList* x15171 = x15167;
          void* x15172 = g_list_nth_data(x15171, 0);
          struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x15173 = (struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord*){x15172};
          GList* x15174 = x15167;
          GList* x15175 = g_list_next(x15174);
          x15167 = x15175;
          numeric_int_t x15177 = x15173->L_ORDERKEY;
          boolean_t x15178 = x15177==(x505);
          if(x15178) {
            numeric_int_t x1636 = x15173->PS_PARTKEY;
            numeric_int_t x1637 = x15173->PS_SUPPKEY;
            numeric_int_t x1638 = x15173->PS_AVAILQTY;
            double x1639 = x15173->PS_SUPPLYCOST;
            char* x1640 = x15173->PS_COMMENT;
            numeric_int_t x1641 = x15173->L_PARTKEY;
            numeric_int_t x1642 = x15173->L_SUPPKEY;
            numeric_int_t x1643 = x15173->L_LINENUMBER;
            double x1644 = x15173->L_QUANTITY;
            double x1645 = x15173->L_EXTENDEDPRICE;
            double x1646 = x15173->L_DISCOUNT;
            double x1647 = x15173->L_TAX;
            char x1648 = x15173->L_RETURNFLAG;
            char x1649 = x15173->L_LINESTATUS;
            numeric_int_t x1650 = x15173->L_SHIPDATE;
            numeric_int_t x1651 = x15173->L_COMMITDATE;
            numeric_int_t x1652 = x15173->L_RECEIPTDATE;
            char* x1653 = x15173->L_SHIPINSTRUCT;
            char* x1654 = x15173->L_SHIPMODE;
            char* x1655 = x15173->L_COMMENT;
            numeric_int_t x1656 = x15173->P_PARTKEY;
            char* x1657 = x15173->P_NAME;
            char* x1658 = x15173->P_MFGR;
            char* x1659 = x15173->P_BRAND;
            char* x1660 = x15173->P_TYPE;
            numeric_int_t x1661 = x15173->P_SIZE;
            char* x1662 = x15173->P_CONTAINER;
            double x1663 = x15173->P_RETAILPRICE;
            char* x1664 = x15173->P_COMMENT;
            numeric_int_t x1665 = x15173->S_SUPPKEY;
            char* x1666 = x15173->S_NAME;
            char* x1667 = x15173->S_ADDRESS;
            numeric_int_t x1668 = x15173->S_NATIONKEY;
            char* x1669 = x15173->S_PHONE;
            double x1670 = x15173->S_ACCTBAL;
            char* x1671 = x15173->S_COMMENT;
            numeric_int_t x1672 = x15173->N_NATIONKEY;
            char* x1673 = x15173->N_NAME;
            numeric_int_t x1674 = x15173->N_REGIONKEY;
            char* x1675 = x15173->N_COMMENT;
            numeric_int_t x1676 = x503->O_CUSTKEY;
            char x1677 = x503->O_ORDERSTATUS;
            double x1678 = x503->O_TOTALPRICE;
            numeric_int_t x1679 = x503->O_ORDERDATE;
            char* x1680 = x503->O_ORDERPRIORITY;
            char* x1681 = x503->O_CLERK;
            numeric_int_t x1682 = x503->O_SHIPPRIORITY;
            char* x1683 = x503->O_COMMENT;
            struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord* x11045 = (struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord*)malloc(1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord));
            memset(x11045, 0, 1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord));
            x11045->PS_PARTKEY = x1636; x11045->PS_SUPPKEY = x1637; x11045->PS_AVAILQTY = x1638; x11045->PS_SUPPLYCOST = x1639; x11045->PS_COMMENT = x1640; x11045->L_ORDERKEY = x15177; x11045->L_PARTKEY = x1641; x11045->L_SUPPKEY = x1642; x11045->L_LINENUMBER = x1643; x11045->L_QUANTITY = x1644; x11045->L_EXTENDEDPRICE = x1645; x11045->L_DISCOUNT = x1646; x11045->L_TAX = x1647; x11045->L_RETURNFLAG = x1648; x11045->L_LINESTATUS = x1649; x11045->L_SHIPDATE = x1650; x11045->L_COMMITDATE = x1651; x11045->L_RECEIPTDATE = x1652; x11045->L_SHIPINSTRUCT = x1653; x11045->L_SHIPMODE = x1654; x11045->L_COMMENT = x1655; x11045->P_PARTKEY = x1656; x11045->P_NAME = x1657; x11045->P_MFGR = x1658; x11045->P_BRAND = x1659; x11045->P_TYPE = x1660; x11045->P_SIZE = x1661; x11045->P_CONTAINER = x1662; x11045->P_RETAILPRICE = x1663; x11045->P_COMMENT = x1664; x11045->S_SUPPKEY = x1665; x11045->S_NAME = x1666; x11045->S_ADDRESS = x1667; x11045->S_NATIONKEY = x1668; x11045->S_PHONE = x1669; x11045->S_ACCTBAL = x1670; x11045->S_COMMENT = x1671; x11045->N_NATIONKEY = x1672; x11045->N_NAME = x1673; x11045->N_REGIONKEY = x1674; x11045->N_COMMENT = x1675; x11045->O_ORDERKEY = x505; x11045->O_CUSTKEY = x1676; x11045->O_ORDERSTATUS = x1677; x11045->O_TOTALPRICE = x1678; x11045->O_ORDERDATE = x1679; x11045->O_ORDERPRIORITY = x1680; x11045->O_CLERK = x1681; x11045->O_SHIPPRIORITY = x1682; x11045->O_COMMENT = x1683;
            char* x560 = x11045->N_NAME;
            numeric_int_t x561 = x11045->O_ORDERDATE;
            numeric_int_t x6305 = x561/(10000);
            struct Q9GRPRecord* x11051 = (struct Q9GRPRecord*)malloc(1 * sizeof(struct Q9GRPRecord));
            memset(x11051, 0, 1 * sizeof(struct Q9GRPRecord));
            x11051->NATION = x560; x11051->O_YEAR = x6305;
            void* x15237 = g_hash_table_lookup(x48959, x11051);
            boolean_t x15143 = x15237==(NULL);
            /* VAR */ struct AGGRecord_Q9GRPRecord* ite40847 = 0;
            if(x15143) {
              double* x40848 = (double*)malloc(1 * sizeof(double));
              memset(x40848, 0, 1 * sizeof(double));
              struct AGGRecord_Q9GRPRecord* x40849 = (struct AGGRecord_Q9GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q9GRPRecord));
              memset(x40849, 0, 1 * sizeof(struct AGGRecord_Q9GRPRecord));
              x40849->key = x11051; x40849->aggs = x40848;
              g_hash_table_insert(x48959, x11051, x40849);
              ite40847 = x40849;
            } else {
              
              ite40847 = x15237;
            };
            struct AGGRecord_Q9GRPRecord* x15153 = ite40847;
            double* x568 = x15153->aggs;
            double x582 = x568[0];
            double x583 = x11045->L_EXTENDEDPRICE;
            double x584 = x11045->L_DISCOUNT;
            double x585 = 1.0-(x584);
            double x586 = x583*(x585);
            double x587 = x582+(x586);
            double x588 = x11045->PS_SUPPLYCOST;
            double x589 = x11045->L_QUANTITY;
            double x590 = x588*(x589);
            double x591 = x587-(x590);
            *x568 = x591;
          };
        };
      };
      numeric_int_t x3794 = x49024;
      numeric_int_t x602 = x3794+(1);
      x49024 = x602;
    };
    GList* x49919 = g_hash_table_get_keys(x48959);
    /* VAR */ GList* x49920 = x49919;
    numeric_int_t x49921 = g_hash_table_size(x48959);
    numeric_int_t x35490 = 0;
    for(; x35490 < x49921 ; x35490 += 1) {
      
      GList* x35491 = x49920;
      void* x35492 = g_list_nth_data(x35491, 0);
      GList* x35493 = g_list_next(x35491);
      x49920 = x35493;
      void* x35495 = g_hash_table_lookup(x48959, x35492);
      struct AGGRecord_Q9GRPRecord* x35497 = (struct AGGRecord_Q9GRPRecord*){x35495};
      g_tree_insert(x49088, x35497, x35497);
    };
    while(1) {
      
      boolean_t x3803 = x49089;
      boolean_t x613 = !(x3803);
      /* VAR */ boolean_t ite43928 = 0;
      if(x613) {
        numeric_int_t x49946 = g_tree_nnodes(x49088);
        boolean_t x49947 = x49946!=(0);
        ite43928 = x49947;
      } else {
        
        ite43928 = 0;
      };
      boolean_t x40902 = ite43928;
      if (!(x40902)) break; 
      
      void* x15288 = NULL;
      void** x15296 = &(x15288);
      g_tree_foreach(x49088, x15295, x15296);
      struct AGGRecord_Q9GRPRecord* x15298 = (struct AGGRecord_Q9GRPRecord*){x15288};
      numeric_int_t x15299 = g_tree_remove(x49088, x15298);
      if(0) {
        x49089 = 1;
      } else {
        
        struct Q9GRPRecord* x626 = x15298->key;
        char* x627 = x626->NATION;
        numeric_int_t x629 = x626->O_YEAR;
        double* x630 = x15298->aggs;
        double x631 = x630[0];
        printf("%s|%d|%.4f\n", x627, x629, x631);
        numeric_int_t x3823 = x49090;
        numeric_int_t x634 = x3823+(1);
        x49090 = x634;
      };
    };
    numeric_int_t x49975 = x49090;
    printf("(%d rows)\n", x49975);
    struct timeval* x49977 = &x49016;
    gettimeofday(x49977, NULL);
    struct timeval* x49979 = &x49012;
    struct timeval* x49980 = &x49016;
    struct timeval* x49981 = &x49014;
    long x49982 = timeval_subtract(x49979, x49980, x49981);
    printf("Generated code run in %ld milliseconds.\n", x49982);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x48922(struct Q9GRPRecord* x14384) {
  char* x26170 = x14384->NATION;
  numeric_int_t x31231 = strlen(x26170);
  /* VAR */ numeric_int_t x27855 = 0;
  /* VAR */ numeric_int_t x27856 = 0;
  while(1) {
    
    numeric_int_t x27857 = x27855;
    boolean_t x27858 = x27857<(x31231);
    if (!(x27858)) break; 
    
    numeric_int_t x27859 = x27856;
    numeric_int_t x27860 = x27855;
    char* x31239 = pointer_add(x26170, x27860);
    char x31240 = *(x31239);
    numeric_int_t x27863 = x27859+(x31240);
    x27856 = x27863;
    numeric_int_t x27865 = x27855;
    numeric_int_t x27866 = x27865+(1);
    x27855 = x27866;
  };
  numeric_int_t x27869 = x27856;
  numeric_int_t x26172 = x14384->O_YEAR;
  numeric_int_t x26174 = x27869+(x26172);
  return x26174; 
}

boolean_t x48943(struct Q9GRPRecord* x14389, struct Q9GRPRecord* x14390) {
  char* x26178 = x14389->NATION;
  char* x26179 = x14390->NATION;
  boolean_t x27877 = strcmp(x26178, x26179);
  boolean_t x27878 = !(x27877);
  numeric_int_t x26181 = x14389->O_YEAR;
  numeric_int_t x26182 = x14390->O_YEAR;
  boolean_t x26183 = x26181==(x26182);
  /* VAR */ boolean_t ite42926 = 0;
  if(x27878) {
    ite42926 = x26183;
  } else {
    
    ite42926 = 0;
  };
  boolean_t x39945 = ite42926;
  return x39945; 
}

numeric_int_t x48960(void* x11867) {
  numeric_int_t x11868 = g_direct_hash(x11867);
  return x11868; 
}

numeric_int_t x48963(void* x11870, void* x11871) {
  numeric_int_t x11872 = g_direct_equal(x11870, x11871);
  return x11872; 
}

numeric_int_t x48970(void* x11877) {
  numeric_int_t x11878 = g_direct_hash(x11877);
  return x11878; 
}

numeric_int_t x48973(void* x11880, void* x11881) {
  numeric_int_t x11882 = g_direct_equal(x11880, x11881);
  return x11882; 
}

numeric_int_t x48980(void* x11887) {
  numeric_int_t x11888 = g_direct_hash(x11887);
  return x11888; 
}

numeric_int_t x48983(void* x11890, void* x11891) {
  numeric_int_t x11892 = g_direct_equal(x11890, x11891);
  return x11892; 
}

numeric_int_t x48990(void* x11897) {
  numeric_int_t x11898 = g_direct_hash(x11897);
  return x11898; 
}

numeric_int_t x48993(void* x11900, void* x11901) {
  numeric_int_t x11902 = g_direct_equal(x11900, x11901);
  return x11902; 
}

numeric_int_t x49000(void* x11907) {
  numeric_int_t x11908 = g_direct_hash(x11907);
  return x11908; 
}

numeric_int_t x49003(void* x11910, void* x11911) {
  numeric_int_t x11912 = g_direct_equal(x11910, x11911);
  return x11912; 
}

numeric_int_t x49056(struct AGGRecord_Q9GRPRecord* x250, struct AGGRecord_Q9GRPRecord* x251) {
  struct Q9GRPRecord* x252 = x250->key;
  struct Q9GRPRecord* x253 = x251->key;
  char* x254 = x252->NATION;
  char* x255 = x253->NATION;
  numeric_int_t x31350 = strcmp(x254, x255);
  boolean_t x257 = x31350==(0);
  /* VAR */ numeric_int_t ite40053 = 0;
  if(x257) {
    numeric_int_t x40054 = x252->O_YEAR;
    numeric_int_t x40055 = x253->O_YEAR;
    boolean_t x40056 = x40054<(x40055);
    /* VAR */ numeric_int_t ite40058 = 0;
    if(x40056) {
      ite40058 = 1;
    } else {
      
      boolean_t x40060 = x40054>(x40055);
      /* VAR */ numeric_int_t ite40062 = 0;
      if(x40060) {
        ite40062 = -1;
      } else {
        
        ite40062 = 0;
      };
      numeric_int_t x40061 = ite40062;
      ite40058 = x40061;
    };
    numeric_int_t x40057 = ite40058;
    ite40053 = x40057;
  } else {
    
    ite40053 = x31350;
  };
  numeric_int_t x264 = ite40053;
  return x264; 
}

numeric_int_t x15295(void* x15289, void* x15290, void* x15291) {
  struct AGGRecord_Q9GRPRecord** x15292 = (struct AGGRecord_Q9GRPRecord**){x15291};
  struct AGGRecord_Q9GRPRecord* x15293 = (struct AGGRecord_Q9GRPRecord*){x15290};
  pointer_assign(x15292, x15293);
  return 1; 
}
