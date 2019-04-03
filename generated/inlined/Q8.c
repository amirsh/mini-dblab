#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct LINEITEMRecord_PARTRecord_ORDERSRecord;
struct LINEITEMRecord;
struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord;
struct REGIONRecord;
struct NATIONRecord;
struct LINEITEMRecord_PARTRecord;
struct ORDERSRecord;
struct PARTRecord;
struct AGGRecord_Int;
struct SUPPLIERRecord;
struct CUSTOMERRecord;
struct LINEITEMRecord_PARTRecord_ORDERSRecord {
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

struct LINEITEMRecord {
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

struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord {
  numeric_int_t REC1_N_NATIONKEY;
  char* REC1_N_NAME;
  numeric_int_t REC1_N_REGIONKEY;
  char* REC1_N_COMMENT;
  numeric_int_t REC2_S_SUPPKEY;
  char* REC2_S_NAME;
  char* REC2_S_ADDRESS;
  numeric_int_t REC2_S_NATIONKEY;
  char* REC2_S_PHONE;
  double REC2_S_ACCTBAL;
  char* REC2_S_COMMENT;
  numeric_int_t REC2_R_REGIONKEY;
  char* REC2_R_NAME;
  char* REC2_R_COMMENT;
  numeric_int_t REC2_N_NATIONKEY;
  char* REC2_N_NAME;
  numeric_int_t REC2_N_REGIONKEY;
  char* REC2_N_COMMENT;
  numeric_int_t REC2_L_ORDERKEY;
  numeric_int_t REC2_L_PARTKEY;
  numeric_int_t REC2_L_SUPPKEY;
  numeric_int_t REC2_L_LINENUMBER;
  double REC2_L_QUANTITY;
  double REC2_L_EXTENDEDPRICE;
  double REC2_L_DISCOUNT;
  double REC2_L_TAX;
  char REC2_L_RETURNFLAG;
  char REC2_L_LINESTATUS;
  numeric_int_t REC2_L_SHIPDATE;
  numeric_int_t REC2_L_COMMITDATE;
  numeric_int_t REC2_L_RECEIPTDATE;
  char* REC2_L_SHIPINSTRUCT;
  char* REC2_L_SHIPMODE;
  char* REC2_L_COMMENT;
  numeric_int_t REC2_P_PARTKEY;
  char* REC2_P_NAME;
  char* REC2_P_MFGR;
  char* REC2_P_BRAND;
  char* REC2_P_TYPE;
  numeric_int_t REC2_P_SIZE;
  char* REC2_P_CONTAINER;
  double REC2_P_RETAILPRICE;
  char* REC2_P_COMMENT;
  numeric_int_t REC2_O_ORDERKEY;
  numeric_int_t REC2_O_CUSTKEY;
  char REC2_O_ORDERSTATUS;
  double REC2_O_TOTALPRICE;
  numeric_int_t REC2_O_ORDERDATE;
  char* REC2_O_ORDERPRIORITY;
  char* REC2_O_CLERK;
  numeric_int_t REC2_O_SHIPPRIORITY;
  char* REC2_O_COMMENT;
  numeric_int_t REC2_C_CUSTKEY;
  char* REC2_C_NAME;
  char* REC2_C_ADDRESS;
  numeric_int_t REC2_C_NATIONKEY;
  char* REC2_C_PHONE;
  double REC2_C_ACCTBAL;
  char* REC2_C_MKTSEGMENT;
  char* REC2_C_COMMENT;
};

struct REGIONRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
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

struct ORDERSRecord {
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

struct PARTRecord {
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

struct AGGRecord_Int {
  numeric_int_t key;
  double* aggs;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
};

struct CUSTOMERRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
};


numeric_int_t x100843(numeric_int_t x29797);

boolean_t x100845(numeric_int_t x29802, numeric_int_t x29803);

numeric_int_t x100850(void* x26888);

numeric_int_t x100853(void* x26891, void* x26892);

numeric_int_t x100860(void* x26898);

numeric_int_t x100863(void* x26901, void* x26902);

numeric_int_t x100870(void* x26908);

numeric_int_t x100873(void* x26911, void* x26912);

numeric_int_t x100880(void* x26918);

numeric_int_t x100883(void* x26921, void* x26922);

numeric_int_t x100890(void* x26928);

numeric_int_t x100893(void* x26931, void* x26932);

numeric_int_t x100900(void* x26938);

numeric_int_t x100903(void* x26941, void* x26942);

numeric_int_t x100910(void* x26948);

numeric_int_t x100913(void* x26951, void* x26952);

numeric_int_t x100956(struct AGGRecord_Int* x326, struct AGGRecord_Int* x327);

numeric_int_t x32368(void* x32362, void* x32363, void* x32364);

int main(int argc, char** argv) {
  FILE* x21015 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", "r");
  /* VAR */ numeric_int_t x21016 = 0;
  numeric_int_t x21017 = x21016;
  numeric_int_t* x21018 = &x21017;
  numeric_int_t x21019 = fscanf(x21015, "%d", x21018);
  pclose(x21015);
  struct PARTRecord* x23481 = (struct PARTRecord*)malloc(x21017 * sizeof(struct PARTRecord));
  memset(x23481, 0, x21017 * sizeof(struct PARTRecord));
  numeric_int_t x21023 = O_RDONLY;
  numeric_int_t x21024 = open("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x21023);
  struct stat x21025 = (struct stat){0};
  /* VAR */ struct stat x21026 = x21025;
  struct stat x21027 = x21026;
  struct stat* x21028 = &x21027;
  numeric_int_t x21029 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x21028);
  size_t x21030 = x21028->st_size;
  numeric_int_t x21031 = PROT_READ;
  numeric_int_t x21032 = MAP_PRIVATE;
  char* x21033 = mmap(NULL, x21030, x21031, x21032, x21024, 0);
  /* VAR */ char* x21034 = x21033;
  char* x3 = x21034;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x21017);
    /* VAR */ boolean_t ite82938 = 0;
    if(x6) {
      char x96895 = *x3;
      boolean_t x96896 = x96895!=('\0');
      ite82938 = x96896;
    } else {
      
      ite82938 = 0;
    };
    boolean_t x76242 = ite82938;
    if (!(x76242)) break; 
    
    /* VAR */ numeric_int_t x21042 = 0;
    numeric_int_t x21043 = x21042;
    numeric_int_t* x21044 = &x21043;
    char* x21045 = strntoi_unchecked(x3, x21044);
    x3 = x21045;
    /* VAR */ char* x21047 = x3;
    while(1) {
      
      char x21048 = *x3;
      boolean_t x21049 = x21048!=('|');
      /* VAR */ boolean_t ite82956 = 0;
      if(x21049) {
        char x96912 = *x3;
        boolean_t x96913 = x96912!=('\n');
        ite82956 = x96913;
      } else {
        
        ite82956 = 0;
      };
      boolean_t x76253 = ite82956;
      if (!(x76253)) break; 
      
      x3 += 1;
    };
    char* x21055 = x21047;
    numeric_int_t x21056 = x3 - x21055;
    numeric_int_t x21057 = x21056+(1);
    char* x23518 = (char*)malloc(x21057 * sizeof(char));
    memset(x23518, 0, x21057 * sizeof(char));
    char* x21060 = x21047;
    char* x21061 = strncpy(x23518, x21060, x21056);
    x3 += 1;
    /* VAR */ char* x21063 = x3;
    while(1) {
      
      char x21064 = *x3;
      boolean_t x21065 = x21064!=('|');
      /* VAR */ boolean_t ite82977 = 0;
      if(x21065) {
        char x96932 = *x3;
        boolean_t x96933 = x96932!=('\n');
        ite82977 = x96933;
      } else {
        
        ite82977 = 0;
      };
      boolean_t x76267 = ite82977;
      if (!(x76267)) break; 
      
      x3 += 1;
    };
    char* x21071 = x21063;
    numeric_int_t x21072 = x3 - x21071;
    numeric_int_t x21073 = x21072+(1);
    char* x23534 = (char*)malloc(x21073 * sizeof(char));
    memset(x23534, 0, x21073 * sizeof(char));
    char* x21076 = x21063;
    char* x21077 = strncpy(x23534, x21076, x21072);
    x3 += 1;
    /* VAR */ char* x21079 = x3;
    while(1) {
      
      char x21080 = *x3;
      boolean_t x21081 = x21080!=('|');
      /* VAR */ boolean_t ite82998 = 0;
      if(x21081) {
        char x96952 = *x3;
        boolean_t x96953 = x96952!=('\n');
        ite82998 = x96953;
      } else {
        
        ite82998 = 0;
      };
      boolean_t x76281 = ite82998;
      if (!(x76281)) break; 
      
      x3 += 1;
    };
    char* x21087 = x21079;
    numeric_int_t x21088 = x3 - x21087;
    numeric_int_t x21089 = x21088+(1);
    char* x23550 = (char*)malloc(x21089 * sizeof(char));
    memset(x23550, 0, x21089 * sizeof(char));
    char* x21092 = x21079;
    char* x21093 = strncpy(x23550, x21092, x21088);
    x3 += 1;
    /* VAR */ char* x21095 = x3;
    while(1) {
      
      char x21096 = *x3;
      boolean_t x21097 = x21096!=('|');
      /* VAR */ boolean_t ite83019 = 0;
      if(x21097) {
        char x96972 = *x3;
        boolean_t x96973 = x96972!=('\n');
        ite83019 = x96973;
      } else {
        
        ite83019 = 0;
      };
      boolean_t x76295 = ite83019;
      if (!(x76295)) break; 
      
      x3 += 1;
    };
    char* x21103 = x21095;
    numeric_int_t x21104 = x3 - x21103;
    numeric_int_t x21105 = x21104+(1);
    char* x23566 = (char*)malloc(x21105 * sizeof(char));
    memset(x23566, 0, x21105 * sizeof(char));
    char* x21108 = x21095;
    char* x21109 = strncpy(x23566, x21108, x21104);
    x3 += 1;
    /* VAR */ numeric_int_t x21111 = 0;
    numeric_int_t x21112 = x21111;
    numeric_int_t* x21113 = &x21112;
    char* x21114 = strntoi_unchecked(x3, x21113);
    x3 = x21114;
    /* VAR */ char* x21116 = x3;
    while(1) {
      
      char x21117 = *x3;
      boolean_t x21118 = x21117!=('|');
      /* VAR */ boolean_t ite83045 = 0;
      if(x21118) {
        char x96997 = *x3;
        boolean_t x96998 = x96997!=('\n');
        ite83045 = x96998;
      } else {
        
        ite83045 = 0;
      };
      boolean_t x76314 = ite83045;
      if (!(x76314)) break; 
      
      x3 += 1;
    };
    char* x21124 = x21116;
    numeric_int_t x21125 = x3 - x21124;
    numeric_int_t x21126 = x21125+(1);
    char* x23587 = (char*)malloc(x21126 * sizeof(char));
    memset(x23587, 0, x21126 * sizeof(char));
    char* x21129 = x21116;
    char* x21130 = strncpy(x23587, x21129, x21125);
    x3 += 1;
    /* VAR */ double x21132 = 0.0;
    double x21133 = x21132;
    double* x21134 = &x21133;
    char* x21135 = strntod_unchecked(x3, x21134);
    x3 = x21135;
    /* VAR */ char* x21137 = x3;
    while(1) {
      
      char x21138 = *x3;
      boolean_t x21139 = x21138!=('|');
      /* VAR */ boolean_t ite83071 = 0;
      if(x21139) {
        char x97022 = *x3;
        boolean_t x97023 = x97022!=('\n');
        ite83071 = x97023;
      } else {
        
        ite83071 = 0;
      };
      boolean_t x76333 = ite83071;
      if (!(x76333)) break; 
      
      x3 += 1;
    };
    char* x21145 = x21137;
    numeric_int_t x21146 = x3 - x21145;
    numeric_int_t x21147 = x21146+(1);
    char* x23608 = (char*)malloc(x21147 * sizeof(char));
    memset(x23608, 0, x21147 * sizeof(char));
    char* x21150 = x21137;
    char* x21151 = strncpy(x23608, x21150, x21146);
    x3 += 1;
    struct PARTRecord* x24864 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x24864, 0, 1 * sizeof(struct PARTRecord));
    x24864->P_PARTKEY = x21043; x24864->P_NAME = x23518; x24864->P_MFGR = x23534; x24864->P_BRAND = x23550; x24864->P_TYPE = x23566; x24864->P_SIZE = x21112; x24864->P_CONTAINER = x23587; x24864->P_RETAILPRICE = x21133; x24864->P_COMMENT = x23608;
    numeric_int_t x19 = x4;
    struct PARTRecord x23615 = *x24864;
    *(x23481 + x19) = x23615;
    struct PARTRecord* x23617 = &(x23481[x19]);
    x24864 = x23617;
    numeric_int_t x21 = x4;
    numeric_int_t x22 = x21+(1);
    x4 = x22;
  };
  char* x21160 = x21034;
  munmap(x21160, x21030);
  FILE* x21161 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x21162 = 0;
  numeric_int_t x21163 = x21162;
  numeric_int_t* x21164 = &x21163;
  numeric_int_t x21165 = fscanf(x21161, "%d", x21164);
  pclose(x21161);
  struct LINEITEMRecord* x23630 = (struct LINEITEMRecord*)malloc(x21163 * sizeof(struct LINEITEMRecord));
  memset(x23630, 0, x21163 * sizeof(struct LINEITEMRecord));
  numeric_int_t x21169 = O_RDONLY;
  numeric_int_t x21170 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x21169);
  /* VAR */ struct stat x21171 = x21025;
  struct stat x21172 = x21171;
  struct stat* x21173 = &x21172;
  numeric_int_t x21174 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x21173);
  size_t x21175 = x21173->st_size;
  numeric_int_t x21176 = PROT_READ;
  numeric_int_t x21177 = MAP_PRIVATE;
  char* x21178 = mmap(NULL, x21175, x21176, x21177, x21170, 0);
  /* VAR */ char* x21179 = x21178;
  char* x28 = x21179;
  /* VAR */ numeric_int_t x29 = 0;
  while(1) {
    
    numeric_int_t x30 = x29;
    boolean_t x31 = x30<(x21163);
    /* VAR */ boolean_t ite83124 = 0;
    if(x31) {
      char x97074 = *x28;
      boolean_t x97075 = x97074!=('\0');
      ite83124 = x97075;
    } else {
      
      ite83124 = 0;
    };
    boolean_t x76379 = ite83124;
    if (!(x76379)) break; 
    
    /* VAR */ numeric_int_t x21187 = 0;
    numeric_int_t x21188 = x21187;
    numeric_int_t* x21189 = &x21188;
    char* x21190 = strntoi_unchecked(x28, x21189);
    x28 = x21190;
    /* VAR */ numeric_int_t x21192 = 0;
    numeric_int_t x21193 = x21192;
    numeric_int_t* x21194 = &x21193;
    char* x21195 = strntoi_unchecked(x28, x21194);
    x28 = x21195;
    /* VAR */ numeric_int_t x21197 = 0;
    numeric_int_t x21198 = x21197;
    numeric_int_t* x21199 = &x21198;
    char* x21200 = strntoi_unchecked(x28, x21199);
    x28 = x21200;
    /* VAR */ numeric_int_t x21202 = 0;
    numeric_int_t x21203 = x21202;
    numeric_int_t* x21204 = &x21203;
    char* x21205 = strntoi_unchecked(x28, x21204);
    x28 = x21205;
    /* VAR */ double x21207 = 0.0;
    double x21208 = x21207;
    double* x21209 = &x21208;
    char* x21210 = strntod_unchecked(x28, x21209);
    x28 = x21210;
    /* VAR */ double x21212 = 0.0;
    double x21213 = x21212;
    double* x21214 = &x21213;
    char* x21215 = strntod_unchecked(x28, x21214);
    x28 = x21215;
    /* VAR */ double x21217 = 0.0;
    double x21218 = x21217;
    double* x21219 = &x21218;
    char* x21220 = strntod_unchecked(x28, x21219);
    x28 = x21220;
    /* VAR */ double x21222 = 0.0;
    double x21223 = x21222;
    double* x21224 = &x21223;
    char* x21225 = strntod_unchecked(x28, x21224);
    x28 = x21225;
    char x21227 = *x28;
    /* VAR */ char x21228 = x21227;
    x28 += 1;
    x28 += 1;
    char x21231 = x21228;
    char x21232 = *x28;
    /* VAR */ char x21233 = x21232;
    x28 += 1;
    x28 += 1;
    char x21236 = x21233;
    /* VAR */ numeric_int_t x21237 = 0;
    numeric_int_t x21238 = x21237;
    numeric_int_t* x21239 = &x21238;
    char* x21240 = strntoi_unchecked(x28, x21239);
    x28 = x21240;
    /* VAR */ numeric_int_t x21242 = 0;
    numeric_int_t x21243 = x21242;
    numeric_int_t* x21244 = &x21243;
    char* x21245 = strntoi_unchecked(x28, x21244);
    x28 = x21245;
    /* VAR */ numeric_int_t x21247 = 0;
    numeric_int_t x21248 = x21247;
    numeric_int_t* x21249 = &x21248;
    char* x21250 = strntoi_unchecked(x28, x21249);
    x28 = x21250;
    numeric_int_t x21252 = x21238*(10000);
    numeric_int_t x21253 = x21243*(100);
    numeric_int_t x21254 = x21252+(x21253);
    numeric_int_t x21255 = x21254+(x21248);
    /* VAR */ numeric_int_t x21256 = 0;
    numeric_int_t x21257 = x21256;
    numeric_int_t* x21258 = &x21257;
    char* x21259 = strntoi_unchecked(x28, x21258);
    x28 = x21259;
    /* VAR */ numeric_int_t x21261 = 0;
    numeric_int_t x21262 = x21261;
    numeric_int_t* x21263 = &x21262;
    char* x21264 = strntoi_unchecked(x28, x21263);
    x28 = x21264;
    /* VAR */ numeric_int_t x21266 = 0;
    numeric_int_t x21267 = x21266;
    numeric_int_t* x21268 = &x21267;
    char* x21269 = strntoi_unchecked(x28, x21268);
    x28 = x21269;
    numeric_int_t x21271 = x21257*(10000);
    numeric_int_t x21272 = x21262*(100);
    numeric_int_t x21273 = x21271+(x21272);
    numeric_int_t x21274 = x21273+(x21267);
    /* VAR */ numeric_int_t x21275 = 0;
    numeric_int_t x21276 = x21275;
    numeric_int_t* x21277 = &x21276;
    char* x21278 = strntoi_unchecked(x28, x21277);
    x28 = x21278;
    /* VAR */ numeric_int_t x21280 = 0;
    numeric_int_t x21281 = x21280;
    numeric_int_t* x21282 = &x21281;
    char* x21283 = strntoi_unchecked(x28, x21282);
    x28 = x21283;
    /* VAR */ numeric_int_t x21285 = 0;
    numeric_int_t x21286 = x21285;
    numeric_int_t* x21287 = &x21286;
    char* x21288 = strntoi_unchecked(x28, x21287);
    x28 = x21288;
    numeric_int_t x21290 = x21276*(10000);
    numeric_int_t x21291 = x21281*(100);
    numeric_int_t x21292 = x21290+(x21291);
    numeric_int_t x21293 = x21292+(x21286);
    /* VAR */ char* x21294 = x28;
    while(1) {
      
      char x21295 = *x28;
      boolean_t x21296 = x21295!=('|');
      /* VAR */ boolean_t ite83244 = 0;
      if(x21296) {
        char x97193 = *x28;
        boolean_t x97194 = x97193!=('\n');
        ite83244 = x97194;
      } else {
        
        ite83244 = 0;
      };
      boolean_t x76492 = ite83244;
      if (!(x76492)) break; 
      
      x28 += 1;
    };
    char* x21302 = x21294;
    numeric_int_t x21303 = x28 - x21302;
    numeric_int_t x21304 = x21303+(1);
    char* x23768 = (char*)malloc(x21304 * sizeof(char));
    memset(x23768, 0, x21304 * sizeof(char));
    char* x21307 = x21294;
    char* x21308 = strncpy(x23768, x21307, x21303);
    x28 += 1;
    /* VAR */ char* x21310 = x28;
    while(1) {
      
      char x21311 = *x28;
      boolean_t x21312 = x21311!=('|');
      /* VAR */ boolean_t ite83265 = 0;
      if(x21312) {
        char x97213 = *x28;
        boolean_t x97214 = x97213!=('\n');
        ite83265 = x97214;
      } else {
        
        ite83265 = 0;
      };
      boolean_t x76506 = ite83265;
      if (!(x76506)) break; 
      
      x28 += 1;
    };
    char* x21318 = x21310;
    numeric_int_t x21319 = x28 - x21318;
    numeric_int_t x21320 = x21319+(1);
    char* x23784 = (char*)malloc(x21320 * sizeof(char));
    memset(x23784, 0, x21320 * sizeof(char));
    char* x21323 = x21310;
    char* x21324 = strncpy(x23784, x21323, x21319);
    x28 += 1;
    /* VAR */ char* x21326 = x28;
    while(1) {
      
      char x21327 = *x28;
      boolean_t x21328 = x21327!=('|');
      /* VAR */ boolean_t ite83286 = 0;
      if(x21328) {
        char x97233 = *x28;
        boolean_t x97234 = x97233!=('\n');
        ite83286 = x97234;
      } else {
        
        ite83286 = 0;
      };
      boolean_t x76520 = ite83286;
      if (!(x76520)) break; 
      
      x28 += 1;
    };
    char* x21334 = x21326;
    numeric_int_t x21335 = x28 - x21334;
    numeric_int_t x21336 = x21335+(1);
    char* x23800 = (char*)malloc(x21336 * sizeof(char));
    memset(x23800, 0, x21336 * sizeof(char));
    char* x21339 = x21326;
    char* x21340 = strncpy(x23800, x21339, x21335);
    x28 += 1;
    struct LINEITEMRecord* x25058 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x25058, 0, 1 * sizeof(struct LINEITEMRecord));
    x25058->L_ORDERKEY = x21188; x25058->L_PARTKEY = x21193; x25058->L_SUPPKEY = x21198; x25058->L_LINENUMBER = x21203; x25058->L_QUANTITY = x21208; x25058->L_EXTENDEDPRICE = x21213; x25058->L_DISCOUNT = x21218; x25058->L_TAX = x21223; x25058->L_RETURNFLAG = x21231; x25058->L_LINESTATUS = x21236; x25058->L_SHIPDATE = x21255; x25058->L_COMMITDATE = x21274; x25058->L_RECEIPTDATE = x21293; x25058->L_SHIPINSTRUCT = x23768; x25058->L_SHIPMODE = x23784; x25058->L_COMMENT = x23800;
    numeric_int_t x51 = x29;
    struct LINEITEMRecord x23807 = *x25058;
    *(x23630 + x51) = x23807;
    struct LINEITEMRecord* x23809 = &(x23630[x51]);
    x25058 = x23809;
    numeric_int_t x53 = x29;
    numeric_int_t x54 = x53+(1);
    x29 = x54;
  };
  char* x21349 = x21179;
  munmap(x21349, x21175);
  FILE* x21350 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x21351 = 0;
  numeric_int_t x21352 = x21351;
  numeric_int_t* x21353 = &x21352;
  numeric_int_t x21354 = fscanf(x21350, "%d", x21353);
  pclose(x21350);
  struct ORDERSRecord* x23822 = (struct ORDERSRecord*)malloc(x21352 * sizeof(struct ORDERSRecord));
  memset(x23822, 0, x21352 * sizeof(struct ORDERSRecord));
  numeric_int_t x21358 = O_RDONLY;
  numeric_int_t x21359 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x21358);
  /* VAR */ struct stat x21360 = x21025;
  struct stat x21361 = x21360;
  struct stat* x21362 = &x21361;
  numeric_int_t x21363 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x21362);
  size_t x21364 = x21362->st_size;
  numeric_int_t x21365 = PROT_READ;
  numeric_int_t x21366 = MAP_PRIVATE;
  char* x21367 = mmap(NULL, x21364, x21365, x21366, x21359, 0);
  /* VAR */ char* x21368 = x21367;
  char* x60 = x21368;
  /* VAR */ numeric_int_t x61 = 0;
  while(1) {
    
    numeric_int_t x62 = x61;
    boolean_t x63 = x62<(x21352);
    /* VAR */ boolean_t ite83339 = 0;
    if(x63) {
      char x97285 = *x60;
      boolean_t x97286 = x97285!=('\0');
      ite83339 = x97286;
    } else {
      
      ite83339 = 0;
    };
    boolean_t x76566 = ite83339;
    if (!(x76566)) break; 
    
    /* VAR */ numeric_int_t x21376 = 0;
    numeric_int_t x21377 = x21376;
    numeric_int_t* x21378 = &x21377;
    char* x21379 = strntoi_unchecked(x60, x21378);
    x60 = x21379;
    /* VAR */ numeric_int_t x21381 = 0;
    numeric_int_t x21382 = x21381;
    numeric_int_t* x21383 = &x21382;
    char* x21384 = strntoi_unchecked(x60, x21383);
    x60 = x21384;
    char x21386 = *x60;
    /* VAR */ char x21387 = x21386;
    x60 += 1;
    x60 += 1;
    char x21390 = x21387;
    /* VAR */ double x21391 = 0.0;
    double x21392 = x21391;
    double* x21393 = &x21392;
    char* x21394 = strntod_unchecked(x60, x21393);
    x60 = x21394;
    /* VAR */ numeric_int_t x21396 = 0;
    numeric_int_t x21397 = x21396;
    numeric_int_t* x21398 = &x21397;
    char* x21399 = strntoi_unchecked(x60, x21398);
    x60 = x21399;
    /* VAR */ numeric_int_t x21401 = 0;
    numeric_int_t x21402 = x21401;
    numeric_int_t* x21403 = &x21402;
    char* x21404 = strntoi_unchecked(x60, x21403);
    x60 = x21404;
    /* VAR */ numeric_int_t x21406 = 0;
    numeric_int_t x21407 = x21406;
    numeric_int_t* x21408 = &x21407;
    char* x21409 = strntoi_unchecked(x60, x21408);
    x60 = x21409;
    numeric_int_t x21411 = x21397*(10000);
    numeric_int_t x21412 = x21402*(100);
    numeric_int_t x21413 = x21411+(x21412);
    numeric_int_t x21414 = x21413+(x21407);
    /* VAR */ char* x21415 = x60;
    while(1) {
      
      char x21416 = *x60;
      boolean_t x21417 = x21416!=('|');
      /* VAR */ boolean_t ite83391 = 0;
      if(x21417) {
        char x97336 = *x60;
        boolean_t x97337 = x97336!=('\n');
        ite83391 = x97337;
      } else {
        
        ite83391 = 0;
      };
      boolean_t x76611 = ite83391;
      if (!(x76611)) break; 
      
      x60 += 1;
    };
    char* x21423 = x21415;
    numeric_int_t x21424 = x60 - x21423;
    numeric_int_t x21425 = x21424+(1);
    char* x23892 = (char*)malloc(x21425 * sizeof(char));
    memset(x23892, 0, x21425 * sizeof(char));
    char* x21428 = x21415;
    char* x21429 = strncpy(x23892, x21428, x21424);
    x60 += 1;
    /* VAR */ char* x21431 = x60;
    while(1) {
      
      char x21432 = *x60;
      boolean_t x21433 = x21432!=('|');
      /* VAR */ boolean_t ite83412 = 0;
      if(x21433) {
        char x97356 = *x60;
        boolean_t x97357 = x97356!=('\n');
        ite83412 = x97357;
      } else {
        
        ite83412 = 0;
      };
      boolean_t x76625 = ite83412;
      if (!(x76625)) break; 
      
      x60 += 1;
    };
    char* x21439 = x21431;
    numeric_int_t x21440 = x60 - x21439;
    numeric_int_t x21441 = x21440+(1);
    char* x23908 = (char*)malloc(x21441 * sizeof(char));
    memset(x23908, 0, x21441 * sizeof(char));
    char* x21444 = x21431;
    char* x21445 = strncpy(x23908, x21444, x21440);
    x60 += 1;
    /* VAR */ numeric_int_t x21447 = 0;
    numeric_int_t x21448 = x21447;
    numeric_int_t* x21449 = &x21448;
    char* x21450 = strntoi_unchecked(x60, x21449);
    x60 = x21450;
    /* VAR */ char* x21452 = x60;
    while(1) {
      
      char x21453 = *x60;
      boolean_t x21454 = x21453!=('|');
      /* VAR */ boolean_t ite83438 = 0;
      if(x21454) {
        char x97381 = *x60;
        boolean_t x97382 = x97381!=('\n');
        ite83438 = x97382;
      } else {
        
        ite83438 = 0;
      };
      boolean_t x76644 = ite83438;
      if (!(x76644)) break; 
      
      x60 += 1;
    };
    char* x21460 = x21452;
    numeric_int_t x21461 = x60 - x21460;
    numeric_int_t x21462 = x21461+(1);
    char* x23929 = (char*)malloc(x21462 * sizeof(char));
    memset(x23929, 0, x21462 * sizeof(char));
    char* x21465 = x21452;
    char* x21466 = strncpy(x23929, x21465, x21461);
    x60 += 1;
    struct ORDERSRecord* x25189 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x25189, 0, 1 * sizeof(struct ORDERSRecord));
    x25189->O_ORDERKEY = x21377; x25189->O_CUSTKEY = x21382; x25189->O_ORDERSTATUS = x21390; x25189->O_TOTALPRICE = x21392; x25189->O_ORDERDATE = x21414; x25189->O_ORDERPRIORITY = x23892; x25189->O_CLERK = x23908; x25189->O_SHIPPRIORITY = x21448; x25189->O_COMMENT = x23929;
    numeric_int_t x76 = x61;
    struct ORDERSRecord x23936 = *x25189;
    *(x23822 + x76) = x23936;
    struct ORDERSRecord* x23938 = &(x23822[x76]);
    x25189 = x23938;
    numeric_int_t x78 = x61;
    numeric_int_t x79 = x78+(1);
    x61 = x79;
  };
  char* x21475 = x21368;
  munmap(x21475, x21364);
  FILE* x21476 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", "r");
  /* VAR */ numeric_int_t x21477 = 0;
  numeric_int_t x21478 = x21477;
  numeric_int_t* x21479 = &x21478;
  numeric_int_t x21480 = fscanf(x21476, "%d", x21479);
  pclose(x21476);
  struct CUSTOMERRecord* x23951 = (struct CUSTOMERRecord*)malloc(x21478 * sizeof(struct CUSTOMERRecord));
  memset(x23951, 0, x21478 * sizeof(struct CUSTOMERRecord));
  numeric_int_t x21484 = O_RDONLY;
  numeric_int_t x21485 = open("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x21484);
  /* VAR */ struct stat x21486 = x21025;
  struct stat x21487 = x21486;
  struct stat* x21488 = &x21487;
  numeric_int_t x21489 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x21488);
  size_t x21490 = x21488->st_size;
  numeric_int_t x21491 = PROT_READ;
  numeric_int_t x21492 = MAP_PRIVATE;
  char* x21493 = mmap(NULL, x21490, x21491, x21492, x21485, 0);
  /* VAR */ char* x21494 = x21493;
  char* x85 = x21494;
  /* VAR */ numeric_int_t x86 = 0;
  while(1) {
    
    numeric_int_t x87 = x86;
    boolean_t x88 = x87<(x21478);
    /* VAR */ boolean_t ite83491 = 0;
    if(x88) {
      char x97433 = *x85;
      boolean_t x97434 = x97433!=('\0');
      ite83491 = x97434;
    } else {
      
      ite83491 = 0;
    };
    boolean_t x76690 = ite83491;
    if (!(x76690)) break; 
    
    /* VAR */ numeric_int_t x21502 = 0;
    numeric_int_t x21503 = x21502;
    numeric_int_t* x21504 = &x21503;
    char* x21505 = strntoi_unchecked(x85, x21504);
    x85 = x21505;
    /* VAR */ char* x21507 = x85;
    while(1) {
      
      char x21508 = *x85;
      boolean_t x21509 = x21508!=('|');
      /* VAR */ boolean_t ite83509 = 0;
      if(x21509) {
        char x97450 = *x85;
        boolean_t x97451 = x97450!=('\n');
        ite83509 = x97451;
      } else {
        
        ite83509 = 0;
      };
      boolean_t x76701 = ite83509;
      if (!(x76701)) break; 
      
      x85 += 1;
    };
    char* x21515 = x21507;
    numeric_int_t x21516 = x85 - x21515;
    numeric_int_t x21517 = x21516+(1);
    char* x23987 = (char*)malloc(x21517 * sizeof(char));
    memset(x23987, 0, x21517 * sizeof(char));
    char* x21520 = x21507;
    char* x21521 = strncpy(x23987, x21520, x21516);
    x85 += 1;
    /* VAR */ char* x21523 = x85;
    while(1) {
      
      char x21524 = *x85;
      boolean_t x21525 = x21524!=('|');
      /* VAR */ boolean_t ite83530 = 0;
      if(x21525) {
        char x97470 = *x85;
        boolean_t x97471 = x97470!=('\n');
        ite83530 = x97471;
      } else {
        
        ite83530 = 0;
      };
      boolean_t x76715 = ite83530;
      if (!(x76715)) break; 
      
      x85 += 1;
    };
    char* x21531 = x21523;
    numeric_int_t x21532 = x85 - x21531;
    numeric_int_t x21533 = x21532+(1);
    char* x24003 = (char*)malloc(x21533 * sizeof(char));
    memset(x24003, 0, x21533 * sizeof(char));
    char* x21536 = x21523;
    char* x21537 = strncpy(x24003, x21536, x21532);
    x85 += 1;
    /* VAR */ numeric_int_t x21539 = 0;
    numeric_int_t x21540 = x21539;
    numeric_int_t* x21541 = &x21540;
    char* x21542 = strntoi_unchecked(x85, x21541);
    x85 = x21542;
    /* VAR */ char* x21544 = x85;
    while(1) {
      
      char x21545 = *x85;
      boolean_t x21546 = x21545!=('|');
      /* VAR */ boolean_t ite83556 = 0;
      if(x21546) {
        char x97495 = *x85;
        boolean_t x97496 = x97495!=('\n');
        ite83556 = x97496;
      } else {
        
        ite83556 = 0;
      };
      boolean_t x76734 = ite83556;
      if (!(x76734)) break; 
      
      x85 += 1;
    };
    char* x21552 = x21544;
    numeric_int_t x21553 = x85 - x21552;
    numeric_int_t x21554 = x21553+(1);
    char* x24024 = (char*)malloc(x21554 * sizeof(char));
    memset(x24024, 0, x21554 * sizeof(char));
    char* x21557 = x21544;
    char* x21558 = strncpy(x24024, x21557, x21553);
    x85 += 1;
    /* VAR */ double x21560 = 0.0;
    double x21561 = x21560;
    double* x21562 = &x21561;
    char* x21563 = strntod_unchecked(x85, x21562);
    x85 = x21563;
    /* VAR */ char* x21565 = x85;
    while(1) {
      
      char x21566 = *x85;
      boolean_t x21567 = x21566!=('|');
      /* VAR */ boolean_t ite83582 = 0;
      if(x21567) {
        char x97520 = *x85;
        boolean_t x97521 = x97520!=('\n');
        ite83582 = x97521;
      } else {
        
        ite83582 = 0;
      };
      boolean_t x76753 = ite83582;
      if (!(x76753)) break; 
      
      x85 += 1;
    };
    char* x21573 = x21565;
    numeric_int_t x21574 = x85 - x21573;
    numeric_int_t x21575 = x21574+(1);
    char* x24045 = (char*)malloc(x21575 * sizeof(char));
    memset(x24045, 0, x21575 * sizeof(char));
    char* x21578 = x21565;
    char* x21579 = strncpy(x24045, x21578, x21574);
    x85 += 1;
    /* VAR */ char* x21581 = x85;
    while(1) {
      
      char x21582 = *x85;
      boolean_t x21583 = x21582!=('|');
      /* VAR */ boolean_t ite83603 = 0;
      if(x21583) {
        char x97540 = *x85;
        boolean_t x97541 = x97540!=('\n');
        ite83603 = x97541;
      } else {
        
        ite83603 = 0;
      };
      boolean_t x76767 = ite83603;
      if (!(x76767)) break; 
      
      x85 += 1;
    };
    char* x21589 = x21581;
    numeric_int_t x21590 = x85 - x21589;
    numeric_int_t x21591 = x21590+(1);
    char* x24061 = (char*)malloc(x21591 * sizeof(char));
    memset(x24061, 0, x21591 * sizeof(char));
    char* x21594 = x21581;
    char* x21595 = strncpy(x24061, x21594, x21590);
    x85 += 1;
    struct CUSTOMERRecord* x25323 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x25323, 0, 1 * sizeof(struct CUSTOMERRecord));
    x25323->C_CUSTKEY = x21503; x25323->C_NAME = x23987; x25323->C_ADDRESS = x24003; x25323->C_NATIONKEY = x21540; x25323->C_PHONE = x24024; x25323->C_ACCTBAL = x21561; x25323->C_MKTSEGMENT = x24045; x25323->C_COMMENT = x24061;
    numeric_int_t x100 = x86;
    struct CUSTOMERRecord x24068 = *x25323;
    *(x23951 + x100) = x24068;
    struct CUSTOMERRecord* x24070 = &(x23951[x100]);
    x25323 = x24070;
    numeric_int_t x102 = x86;
    numeric_int_t x103 = x102+(1);
    x86 = x103;
  };
  char* x21604 = x21494;
  munmap(x21604, x21490);
  FILE* x21605 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x21606 = 0;
  numeric_int_t x21607 = x21606;
  numeric_int_t* x21608 = &x21607;
  numeric_int_t x21609 = fscanf(x21605, "%d", x21608);
  pclose(x21605);
  struct NATIONRecord* x24083 = (struct NATIONRecord*)malloc(x21607 * sizeof(struct NATIONRecord));
  memset(x24083, 0, x21607 * sizeof(struct NATIONRecord));
  numeric_int_t x21613 = O_RDONLY;
  numeric_int_t x21614 = open("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x21613);
  /* VAR */ struct stat x21615 = x21025;
  struct stat x21616 = x21615;
  struct stat* x21617 = &x21616;
  numeric_int_t x21618 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x21617);
  size_t x21619 = x21617->st_size;
  numeric_int_t x21620 = PROT_READ;
  numeric_int_t x21621 = MAP_PRIVATE;
  char* x21622 = mmap(NULL, x21619, x21620, x21621, x21614, 0);
  /* VAR */ char* x21623 = x21622;
  char* x109 = x21623;
  /* VAR */ numeric_int_t x110 = 0;
  while(1) {
    
    numeric_int_t x111 = x110;
    boolean_t x112 = x111<(x21607);
    /* VAR */ boolean_t ite83656 = 0;
    if(x112) {
      char x97592 = *x109;
      boolean_t x97593 = x97592!=('\0');
      ite83656 = x97593;
    } else {
      
      ite83656 = 0;
    };
    boolean_t x76813 = ite83656;
    if (!(x76813)) break; 
    
    /* VAR */ numeric_int_t x21631 = 0;
    numeric_int_t x21632 = x21631;
    numeric_int_t* x21633 = &x21632;
    char* x21634 = strntoi_unchecked(x109, x21633);
    x109 = x21634;
    /* VAR */ char* x21636 = x109;
    while(1) {
      
      char x21637 = *x109;
      boolean_t x21638 = x21637!=('|');
      /* VAR */ boolean_t ite83674 = 0;
      if(x21638) {
        char x97609 = *x109;
        boolean_t x97610 = x97609!=('\n');
        ite83674 = x97610;
      } else {
        
        ite83674 = 0;
      };
      boolean_t x76824 = ite83674;
      if (!(x76824)) break; 
      
      x109 += 1;
    };
    char* x21644 = x21636;
    numeric_int_t x21645 = x109 - x21644;
    numeric_int_t x21646 = x21645+(1);
    char* x24119 = (char*)malloc(x21646 * sizeof(char));
    memset(x24119, 0, x21646 * sizeof(char));
    char* x21649 = x21636;
    char* x21650 = strncpy(x24119, x21649, x21645);
    x109 += 1;
    /* VAR */ numeric_int_t x21652 = 0;
    numeric_int_t x21653 = x21652;
    numeric_int_t* x21654 = &x21653;
    char* x21655 = strntoi_unchecked(x109, x21654);
    x109 = x21655;
    /* VAR */ char* x21657 = x109;
    while(1) {
      
      char x21658 = *x109;
      boolean_t x21659 = x21658!=('|');
      /* VAR */ boolean_t ite83700 = 0;
      if(x21659) {
        char x97634 = *x109;
        boolean_t x97635 = x97634!=('\n');
        ite83700 = x97635;
      } else {
        
        ite83700 = 0;
      };
      boolean_t x76843 = ite83700;
      if (!(x76843)) break; 
      
      x109 += 1;
    };
    char* x21665 = x21657;
    numeric_int_t x21666 = x109 - x21665;
    numeric_int_t x21667 = x21666+(1);
    char* x24140 = (char*)malloc(x21667 * sizeof(char));
    memset(x24140, 0, x21667 * sizeof(char));
    char* x21670 = x21657;
    char* x21671 = strncpy(x24140, x21670, x21666);
    x109 += 1;
    struct NATIONRecord* x25404 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x25404, 0, 1 * sizeof(struct NATIONRecord));
    x25404->N_NATIONKEY = x21632; x25404->N_NAME = x24119; x25404->N_REGIONKEY = x21653; x25404->N_COMMENT = x24140;
    numeric_int_t x120 = x110;
    struct NATIONRecord x24147 = *x25404;
    *(x24083 + x120) = x24147;
    struct NATIONRecord* x24149 = &(x24083[x120]);
    x25404 = x24149;
    numeric_int_t x122 = x110;
    numeric_int_t x123 = x122+(1);
    x110 = x123;
  };
  char* x21680 = x21623;
  munmap(x21680, x21619);
  FILE* x21681 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/region.tbl", "r");
  /* VAR */ numeric_int_t x21682 = 0;
  numeric_int_t x21683 = x21682;
  numeric_int_t* x21684 = &x21683;
  numeric_int_t x21685 = fscanf(x21681, "%d", x21684);
  pclose(x21681);
  struct REGIONRecord* x24162 = (struct REGIONRecord*)malloc(x21683 * sizeof(struct REGIONRecord));
  memset(x24162, 0, x21683 * sizeof(struct REGIONRecord));
  numeric_int_t x21689 = O_RDONLY;
  numeric_int_t x21690 = open("/Users/amirsh/Dropbox/sf0.1/sf1/region.tbl", x21689);
  /* VAR */ struct stat x21691 = x21025;
  struct stat x21692 = x21691;
  struct stat* x21693 = &x21692;
  numeric_int_t x21694 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/region.tbl", x21693);
  size_t x21695 = x21693->st_size;
  numeric_int_t x21696 = PROT_READ;
  numeric_int_t x21697 = MAP_PRIVATE;
  char* x21698 = mmap(NULL, x21695, x21696, x21697, x21690, 0);
  /* VAR */ char* x21699 = x21698;
  char* x129 = x21699;
  /* VAR */ numeric_int_t x130 = 0;
  while(1) {
    
    numeric_int_t x131 = x130;
    boolean_t x132 = x131<(x21683);
    /* VAR */ boolean_t ite83753 = 0;
    if(x132) {
      char x97686 = *x129;
      boolean_t x97687 = x97686!=('\0');
      ite83753 = x97687;
    } else {
      
      ite83753 = 0;
    };
    boolean_t x76889 = ite83753;
    if (!(x76889)) break; 
    
    /* VAR */ numeric_int_t x21707 = 0;
    numeric_int_t x21708 = x21707;
    numeric_int_t* x21709 = &x21708;
    char* x21710 = strntoi_unchecked(x129, x21709);
    x129 = x21710;
    /* VAR */ char* x21712 = x129;
    while(1) {
      
      char x21713 = *x129;
      boolean_t x21714 = x21713!=('|');
      /* VAR */ boolean_t ite83771 = 0;
      if(x21714) {
        char x97703 = *x129;
        boolean_t x97704 = x97703!=('\n');
        ite83771 = x97704;
      } else {
        
        ite83771 = 0;
      };
      boolean_t x76900 = ite83771;
      if (!(x76900)) break; 
      
      x129 += 1;
    };
    char* x21720 = x21712;
    numeric_int_t x21721 = x129 - x21720;
    numeric_int_t x21722 = x21721+(1);
    char* x24198 = (char*)malloc(x21722 * sizeof(char));
    memset(x24198, 0, x21722 * sizeof(char));
    char* x21725 = x21712;
    char* x21726 = strncpy(x24198, x21725, x21721);
    x129 += 1;
    /* VAR */ char* x21728 = x129;
    while(1) {
      
      char x21729 = *x129;
      boolean_t x21730 = x21729!=('|');
      /* VAR */ boolean_t ite83792 = 0;
      if(x21730) {
        char x97723 = *x129;
        boolean_t x97724 = x97723!=('\n');
        ite83792 = x97724;
      } else {
        
        ite83792 = 0;
      };
      boolean_t x76914 = ite83792;
      if (!(x76914)) break; 
      
      x129 += 1;
    };
    char* x21736 = x21728;
    numeric_int_t x21737 = x129 - x21736;
    numeric_int_t x21738 = x21737+(1);
    char* x24214 = (char*)malloc(x21738 * sizeof(char));
    memset(x24214, 0, x21738 * sizeof(char));
    char* x21741 = x21728;
    char* x21742 = strncpy(x24214, x21741, x21737);
    x129 += 1;
    struct REGIONRecord* x25480 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x25480, 0, 1 * sizeof(struct REGIONRecord));
    x25480->R_REGIONKEY = x21708; x25480->R_NAME = x24198; x25480->R_COMMENT = x24214;
    numeric_int_t x139 = x130;
    struct REGIONRecord x24221 = *x25480;
    *(x24162 + x139) = x24221;
    struct REGIONRecord* x24223 = &(x24162[x139]);
    x25480 = x24223;
    numeric_int_t x141 = x130;
    numeric_int_t x142 = x141+(1);
    x130 = x142;
  };
  char* x21751 = x21699;
  munmap(x21751, x21695);
  FILE* x21752 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x21753 = 0;
  numeric_int_t x21754 = x21753;
  numeric_int_t* x21755 = &x21754;
  numeric_int_t x21756 = fscanf(x21752, "%d", x21755);
  pclose(x21752);
  struct SUPPLIERRecord* x24236 = (struct SUPPLIERRecord*)malloc(x21754 * sizeof(struct SUPPLIERRecord));
  memset(x24236, 0, x21754 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x21760 = O_RDONLY;
  numeric_int_t x21761 = open("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x21760);
  /* VAR */ struct stat x21762 = x21025;
  struct stat x21763 = x21762;
  struct stat* x21764 = &x21763;
  numeric_int_t x21765 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x21764);
  size_t x21766 = x21764->st_size;
  numeric_int_t x21767 = PROT_READ;
  numeric_int_t x21768 = MAP_PRIVATE;
  char* x21769 = mmap(NULL, x21766, x21767, x21768, x21761, 0);
  /* VAR */ char* x21770 = x21769;
  char* x148 = x21770;
  /* VAR */ numeric_int_t x149 = 0;
  while(1) {
    
    numeric_int_t x150 = x149;
    boolean_t x151 = x150<(x21754);
    /* VAR */ boolean_t ite83845 = 0;
    if(x151) {
      char x97775 = *x148;
      boolean_t x97776 = x97775!=('\0');
      ite83845 = x97776;
    } else {
      
      ite83845 = 0;
    };
    boolean_t x76960 = ite83845;
    if (!(x76960)) break; 
    
    /* VAR */ numeric_int_t x21778 = 0;
    numeric_int_t x21779 = x21778;
    numeric_int_t* x21780 = &x21779;
    char* x21781 = strntoi_unchecked(x148, x21780);
    x148 = x21781;
    /* VAR */ char* x21783 = x148;
    while(1) {
      
      char x21784 = *x148;
      boolean_t x21785 = x21784!=('|');
      /* VAR */ boolean_t ite83863 = 0;
      if(x21785) {
        char x97792 = *x148;
        boolean_t x97793 = x97792!=('\n');
        ite83863 = x97793;
      } else {
        
        ite83863 = 0;
      };
      boolean_t x76971 = ite83863;
      if (!(x76971)) break; 
      
      x148 += 1;
    };
    char* x21791 = x21783;
    numeric_int_t x21792 = x148 - x21791;
    numeric_int_t x21793 = x21792+(1);
    char* x24272 = (char*)malloc(x21793 * sizeof(char));
    memset(x24272, 0, x21793 * sizeof(char));
    char* x21796 = x21783;
    char* x21797 = strncpy(x24272, x21796, x21792);
    x148 += 1;
    /* VAR */ char* x21799 = x148;
    while(1) {
      
      char x21800 = *x148;
      boolean_t x21801 = x21800!=('|');
      /* VAR */ boolean_t ite83884 = 0;
      if(x21801) {
        char x97812 = *x148;
        boolean_t x97813 = x97812!=('\n');
        ite83884 = x97813;
      } else {
        
        ite83884 = 0;
      };
      boolean_t x76985 = ite83884;
      if (!(x76985)) break; 
      
      x148 += 1;
    };
    char* x21807 = x21799;
    numeric_int_t x21808 = x148 - x21807;
    numeric_int_t x21809 = x21808+(1);
    char* x24288 = (char*)malloc(x21809 * sizeof(char));
    memset(x24288, 0, x21809 * sizeof(char));
    char* x21812 = x21799;
    char* x21813 = strncpy(x24288, x21812, x21808);
    x148 += 1;
    /* VAR */ numeric_int_t x21815 = 0;
    numeric_int_t x21816 = x21815;
    numeric_int_t* x21817 = &x21816;
    char* x21818 = strntoi_unchecked(x148, x21817);
    x148 = x21818;
    /* VAR */ char* x21820 = x148;
    while(1) {
      
      char x21821 = *x148;
      boolean_t x21822 = x21821!=('|');
      /* VAR */ boolean_t ite83910 = 0;
      if(x21822) {
        char x97837 = *x148;
        boolean_t x97838 = x97837!=('\n');
        ite83910 = x97838;
      } else {
        
        ite83910 = 0;
      };
      boolean_t x77004 = ite83910;
      if (!(x77004)) break; 
      
      x148 += 1;
    };
    char* x21828 = x21820;
    numeric_int_t x21829 = x148 - x21828;
    numeric_int_t x21830 = x21829+(1);
    char* x24309 = (char*)malloc(x21830 * sizeof(char));
    memset(x24309, 0, x21830 * sizeof(char));
    char* x21833 = x21820;
    char* x21834 = strncpy(x24309, x21833, x21829);
    x148 += 1;
    /* VAR */ double x21836 = 0.0;
    double x21837 = x21836;
    double* x21838 = &x21837;
    char* x21839 = strntod_unchecked(x148, x21838);
    x148 = x21839;
    /* VAR */ char* x21841 = x148;
    while(1) {
      
      char x21842 = *x148;
      boolean_t x21843 = x21842!=('|');
      /* VAR */ boolean_t ite83936 = 0;
      if(x21843) {
        char x97862 = *x148;
        boolean_t x97863 = x97862!=('\n');
        ite83936 = x97863;
      } else {
        
        ite83936 = 0;
      };
      boolean_t x77023 = ite83936;
      if (!(x77023)) break; 
      
      x148 += 1;
    };
    char* x21849 = x21841;
    numeric_int_t x21850 = x148 - x21849;
    numeric_int_t x21851 = x21850+(1);
    char* x24330 = (char*)malloc(x21851 * sizeof(char));
    memset(x24330, 0, x21851 * sizeof(char));
    char* x21854 = x21841;
    char* x21855 = strncpy(x24330, x21854, x21850);
    x148 += 1;
    struct SUPPLIERRecord* x25598 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x25598, 0, 1 * sizeof(struct SUPPLIERRecord));
    x25598->S_SUPPKEY = x21779; x25598->S_NAME = x24272; x25598->S_ADDRESS = x24288; x25598->S_NATIONKEY = x21816; x25598->S_PHONE = x24309; x25598->S_ACCTBAL = x21837; x25598->S_COMMENT = x24330;
    numeric_int_t x162 = x149;
    struct SUPPLIERRecord x24337 = *x25598;
    *(x24236 + x162) = x24337;
    struct SUPPLIERRecord* x24339 = &(x24236[x162]);
    x25598 = x24339;
    numeric_int_t x164 = x149;
    numeric_int_t x165 = x164+(1);
    x149 = x165;
  };
  char* x21864 = x21770;
  munmap(x21864, x21766);
  numeric_int_t x170 = 0;
  for(; x170 < 1 ; x170 += 1) {
    
    GHashTable* x100849 = g_hash_table_new(x100843, x100845);
    void*** x100857 = (void***){x100850};
    numeric_int_t* x100858 = (numeric_int_t*){x100853};
    GHashTable* x100859 = g_hash_table_new(x100857, x100858);
    void*** x100867 = (void***){x100860};
    numeric_int_t* x100868 = (numeric_int_t*){x100863};
    GHashTable* x100869 = g_hash_table_new(x100867, x100868);
    void*** x100877 = (void***){x100870};
    numeric_int_t* x100878 = (numeric_int_t*){x100873};
    GHashTable* x100879 = g_hash_table_new(x100877, x100878);
    void*** x100887 = (void***){x100880};
    numeric_int_t* x100888 = (numeric_int_t*){x100883};
    GHashTable* x100889 = g_hash_table_new(x100887, x100888);
    void*** x100897 = (void***){x100890};
    numeric_int_t* x100898 = (numeric_int_t*){x100893};
    GHashTable* x100899 = g_hash_table_new(x100897, x100898);
    void*** x100907 = (void***){x100900};
    numeric_int_t* x100908 = (numeric_int_t*){x100903};
    GHashTable* x100909 = g_hash_table_new(x100907, x100908);
    void*** x100917 = (void***){x100910};
    numeric_int_t* x100918 = (numeric_int_t*){x100913};
    GHashTable* x100919 = g_hash_table_new(x100917, x100918);
    struct timeval x100920 = (struct timeval){0};
    /* VAR */ struct timeval x100921 = x100920;
    struct timeval x100922 = x100921;
    /* VAR */ struct timeval x100923 = x100920;
    struct timeval x100924 = x100923;
    /* VAR */ struct timeval x100925 = x100920;
    struct timeval x100926 = x100925;
    struct timeval* x100927 = &x100924;
    gettimeofday(x100927, NULL);
    /* VAR */ numeric_int_t x100929 = 0;
    /* VAR */ numeric_int_t x100930 = 0;
    /* VAR */ numeric_int_t x100931 = 0;
    /* VAR */ numeric_int_t x100932 = 0;
    /* VAR */ numeric_int_t x100933 = 0;
    /* VAR */ numeric_int_t x100934 = 0;
    /* VAR */ numeric_int_t x100935 = 0;
    /* VAR */ numeric_int_t x100936 = 0;
    numeric_int_t* x100975 = &(x100956);
    GTree* x100976 = g_tree_new(x100975);
    /* VAR */ boolean_t x100977 = 0;
    /* VAR */ numeric_int_t x100978 = 0;
    while(1) {
      
      numeric_int_t x100980 = x100936;
      boolean_t x100981 = x100980<(x21607);
      if (!(x100981)) break; 
      
      numeric_int_t x15352 = x100936;
      struct NATIONRecord* x349 = &(x24083[x15352]);
      numeric_int_t x351 = x349->N_NATIONKEY;
      void* x26995 = (void*){x351};
      void* x26996 = (void*){x349};
      void* x26997 = g_hash_table_lookup(x100859, x26995);
      GList** x26998 = (GList**){x26997};
      GList** x26999 = NULL;
      boolean_t x27000 = x26998==(x26999);
      /* VAR */ GList** ite80129 = 0;
      if(x27000) {
        GList** x80130 = malloc(8);
        GList* x80131 = NULL;
        pointer_assign(x80130, x80131);
        ite80129 = x80130;
      } else {
        
        ite80129 = x26998;
      };
      GList** x27004 = ite80129;
      GList* x27005 = *(x27004);
      GList* x27006 = g_list_prepend(x27005, x26996);
      pointer_assign(x27004, x27006);
      void* x27008 = (void*){x27004};
      g_hash_table_insert(x100859, x26995, x27008);
      numeric_int_t x15357 = x100936;
      numeric_int_t x355 = x15357+(1);
      x100936 = x355;
    };
    while(1) {
      
      numeric_int_t x101009 = x100935;
      boolean_t x101010 = x101009<(x21754);
      if (!(x101010)) break; 
      
      numeric_int_t x15366 = x100935;
      struct SUPPLIERRecord* x364 = &(x24236[x15366]);
      numeric_int_t x366 = x364->S_SUPPKEY;
      void* x27020 = (void*){x366};
      void* x27021 = (void*){x364};
      void* x27022 = g_hash_table_lookup(x100869, x27020);
      GList** x27023 = (GList**){x27022};
      GList** x27024 = NULL;
      boolean_t x27025 = x27023==(x27024);
      /* VAR */ GList** ite80157 = 0;
      if(x27025) {
        GList** x80158 = malloc(8);
        GList* x80159 = NULL;
        pointer_assign(x80158, x80159);
        ite80157 = x80158;
      } else {
        
        ite80157 = x27023;
      };
      GList** x27029 = ite80157;
      GList* x27030 = *(x27029);
      GList* x27031 = g_list_prepend(x27030, x27021);
      pointer_assign(x27029, x27031);
      void* x27033 = (void*){x27029};
      g_hash_table_insert(x100869, x27020, x27033);
      numeric_int_t x15371 = x100935;
      numeric_int_t x370 = x15371+(1);
      x100935 = x370;
    };
    while(1) {
      
      numeric_int_t x101038 = x100934;
      boolean_t x101039 = x101038<(x21683);
      if (!(x101039)) break; 
      
      numeric_int_t x15380 = x100934;
      struct REGIONRecord* x379 = &(x24162[x15380]);
      char* x381 = x379->R_NAME;
      boolean_t x60985 = strcmp(x381, "ASIA");
      boolean_t x60986 = x60985==(0);
      if(x60986) {
        numeric_int_t x383 = x379->R_REGIONKEY;
        void* x27048 = (void*){x383};
        void* x27049 = (void*){x379};
        void* x27050 = g_hash_table_lookup(x100879, x27048);
        GList** x27051 = (GList**){x27050};
        GList** x27052 = NULL;
        boolean_t x27053 = x27051==(x27052);
        /* VAR */ GList** ite80189 = 0;
        if(x27053) {
          GList** x80190 = malloc(8);
          GList* x80191 = NULL;
          pointer_assign(x80190, x80191);
          ite80189 = x80190;
        } else {
          
          ite80189 = x27051;
        };
        GList** x27057 = ite80189;
        GList* x27058 = *(x27057);
        GList* x27059 = g_list_prepend(x27058, x27049);
        pointer_assign(x27057, x27059);
        void* x27061 = (void*){x27057};
        g_hash_table_insert(x100879, x27048, x27061);
      };
      numeric_int_t x15388 = x100934;
      numeric_int_t x388 = x15388+(1);
      x100934 = x388;
    };
    while(1) {
      
      numeric_int_t x101071 = x100933;
      boolean_t x101072 = x101071<(x21607);
      if (!(x101072)) break; 
      
      numeric_int_t x15397 = x100933;
      struct NATIONRecord* x397 = &(x24083[x15397]);
      numeric_int_t x399 = x397->N_NATIONKEY;
      void* x27073 = (void*){x399};
      void* x27074 = (void*){x397};
      void* x27075 = g_hash_table_lookup(x100889, x27073);
      GList** x27076 = (GList**){x27075};
      GList** x27077 = NULL;
      boolean_t x27078 = x27076==(x27077);
      /* VAR */ GList** ite80217 = 0;
      if(x27078) {
        GList** x80218 = malloc(8);
        GList* x80219 = NULL;
        pointer_assign(x80218, x80219);
        ite80217 = x80218;
      } else {
        
        ite80217 = x27076;
      };
      GList** x27082 = ite80217;
      GList* x27083 = *(x27082);
      GList* x27084 = g_list_prepend(x27083, x27074);
      pointer_assign(x27082, x27084);
      void* x27086 = (void*){x27082};
      g_hash_table_insert(x100889, x27073, x27086);
      numeric_int_t x15402 = x100933;
      numeric_int_t x403 = x15402+(1);
      x100933 = x403;
    };
    while(1) {
      
      numeric_int_t x101100 = x100930;
      boolean_t x101101 = x101100<(x21163);
      if (!(x101101)) break; 
      
      numeric_int_t x15411 = x100930;
      struct LINEITEMRecord* x412 = &(x23630[x15411]);
      numeric_int_t x414 = x412->L_PARTKEY;
      void* x27098 = (void*){x414};
      void* x27099 = (void*){x412};
      void* x27100 = g_hash_table_lookup(x100919, x27098);
      GList** x27101 = (GList**){x27100};
      GList** x27102 = NULL;
      boolean_t x27103 = x27101==(x27102);
      /* VAR */ GList** ite80245 = 0;
      if(x27103) {
        GList** x80246 = malloc(8);
        GList* x80247 = NULL;
        pointer_assign(x80246, x80247);
        ite80245 = x80246;
      } else {
        
        ite80245 = x27101;
      };
      GList** x27107 = ite80245;
      GList* x27108 = *(x27107);
      GList* x27109 = g_list_prepend(x27108, x27099);
      pointer_assign(x27107, x27109);
      void* x27111 = (void*){x27107};
      g_hash_table_insert(x100919, x27098, x27111);
      numeric_int_t x15416 = x100930;
      numeric_int_t x418 = x15416+(1);
      x100930 = x418;
    };
    while(1) {
      
      numeric_int_t x101129 = x100929;
      boolean_t x101130 = x101129<(x21017);
      if (!(x101130)) break; 
      
      numeric_int_t x15425 = x100929;
      struct PARTRecord* x427 = &(x23481[x15425]);
      char* x429 = x427->P_TYPE;
      boolean_t x61064 = strcmp(x429, "MEDIUM ANODIZED NICKEL");
      boolean_t x61065 = x61064==(0);
      if(x61065) {
        numeric_int_t x431 = x427->P_PARTKEY;
        void* x27126 = (void*){x431};
        void* x27127 = g_hash_table_lookup(x100919, x27126);
        GList** x27128 = (GList**){x27127};
        boolean_t x47453 = x27128!=(NULL);
        if(x47453) {
          GList* x30108 = *(x27128);
          /* VAR */ GList* x30109 = x30108;
          while(1) {
            
            GList* x30110 = x30109;
            GList* x30111 = NULL;
            boolean_t x30112 = x30110!=(x30111);
            if (!(x30112)) break; 
            
            GList* x30113 = x30109;
            void* x30114 = g_list_nth_data(x30113, 0);
            struct LINEITEMRecord* x30115 = (struct LINEITEMRecord*){x30114};
            GList* x30116 = x30109;
            GList* x30117 = g_list_next(x30116);
            x30109 = x30117;
            numeric_int_t x30119 = x30115->L_PARTKEY;
            boolean_t x30120 = x30119==(x431);
            if(x30120) {
              numeric_int_t x3176 = x30115->L_ORDERKEY;
              numeric_int_t x3177 = x30115->L_SUPPKEY;
              numeric_int_t x3178 = x30115->L_LINENUMBER;
              double x3179 = x30115->L_QUANTITY;
              double x3180 = x30115->L_EXTENDEDPRICE;
              double x3181 = x30115->L_DISCOUNT;
              double x3182 = x30115->L_TAX;
              char x3183 = x30115->L_RETURNFLAG;
              char x3184 = x30115->L_LINESTATUS;
              numeric_int_t x3185 = x30115->L_SHIPDATE;
              numeric_int_t x3186 = x30115->L_COMMITDATE;
              numeric_int_t x3187 = x30115->L_RECEIPTDATE;
              char* x3188 = x30115->L_SHIPINSTRUCT;
              char* x3189 = x30115->L_SHIPMODE;
              char* x3190 = x30115->L_COMMENT;
              char* x3191 = x427->P_NAME;
              char* x3192 = x427->P_MFGR;
              char* x3193 = x427->P_BRAND;
              numeric_int_t x3194 = x427->P_SIZE;
              char* x3195 = x427->P_CONTAINER;
              double x3196 = x427->P_RETAILPRICE;
              char* x3197 = x427->P_COMMENT;
              struct LINEITEMRecord_PARTRecord* x25751 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
              memset(x25751, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
              x25751->L_ORDERKEY = x3176; x25751->L_PARTKEY = x30119; x25751->L_SUPPKEY = x3177; x25751->L_LINENUMBER = x3178; x25751->L_QUANTITY = x3179; x25751->L_EXTENDEDPRICE = x3180; x25751->L_DISCOUNT = x3181; x25751->L_TAX = x3182; x25751->L_RETURNFLAG = x3183; x25751->L_LINESTATUS = x3184; x25751->L_SHIPDATE = x3185; x25751->L_COMMITDATE = x3186; x25751->L_RECEIPTDATE = x3187; x25751->L_SHIPINSTRUCT = x3188; x25751->L_SHIPMODE = x3189; x25751->L_COMMENT = x3190; x25751->P_PARTKEY = x431; x25751->P_NAME = x3191; x25751->P_MFGR = x3192; x25751->P_BRAND = x3193; x25751->P_TYPE = x429; x25751->P_SIZE = x3194; x25751->P_CONTAINER = x3195; x25751->P_RETAILPRICE = x3196; x25751->P_COMMENT = x3197;
              numeric_int_t x452 = x25751->L_ORDERKEY;
              void* x27164 = (void*){x452};
              void* x27165 = (void*){x25751};
              void* x27166 = g_hash_table_lookup(x100909, x27164);
              GList** x27167 = (GList**){x27166};
              GList** x27168 = NULL;
              boolean_t x27169 = x27167==(x27168);
              /* VAR */ GList** ite80374 = 0;
              if(x27169) {
                GList** x80375 = malloc(8);
                GList* x80376 = NULL;
                pointer_assign(x80375, x80376);
                ite80374 = x80375;
              } else {
                
                ite80374 = x27167;
              };
              GList** x27173 = ite80374;
              GList* x27174 = *(x27173);
              GList* x27175 = g_list_prepend(x27174, x27165);
              pointer_assign(x27173, x27175);
              void* x27177 = (void*){x27173};
              g_hash_table_insert(x100909, x27164, x27177);
            };
          };
        };
      };
      numeric_int_t x15500 = x100929;
      numeric_int_t x461 = x15500+(1);
      x100929 = x461;
    };
    while(1) {
      
      numeric_int_t x101259 = x100931;
      boolean_t x101260 = x101259<(x21352);
      if (!(x101260)) break; 
      
      numeric_int_t x15510 = x100931;
      struct ORDERSRecord* x471 = &(x23822[x15510]);
      numeric_int_t x473 = x471->O_ORDERDATE;
      boolean_t x474 = x473>=(19950101);
      /* VAR */ boolean_t ite87360 = 0;
      if(x474) {
        boolean_t x101267 = x473<=(19961231);
        ite87360 = x101267;
      } else {
        
        ite87360 = 0;
      };
      boolean_t x80397 = ite87360;
      if(x80397) {
        numeric_int_t x477 = x471->O_ORDERKEY;
        void* x27195 = (void*){x477};
        void* x27196 = g_hash_table_lookup(x100909, x27195);
        GList** x27197 = (GList**){x27196};
        boolean_t x47575 = x27197!=(NULL);
        if(x47575) {
          GList* x30241 = *(x27197);
          /* VAR */ GList* x30242 = x30241;
          while(1) {
            
            GList* x30243 = x30242;
            GList* x30244 = NULL;
            boolean_t x30245 = x30243!=(x30244);
            if (!(x30245)) break; 
            
            GList* x30246 = x30242;
            void* x30247 = g_list_nth_data(x30246, 0);
            struct LINEITEMRecord_PARTRecord* x30248 = (struct LINEITEMRecord_PARTRecord*){x30247};
            GList* x30249 = x30242;
            GList* x30250 = g_list_next(x30249);
            x30242 = x30250;
            numeric_int_t x30252 = x30248->L_ORDERKEY;
            boolean_t x30253 = x30252==(x477);
            if(x30253) {
              numeric_int_t x3275 = x30248->L_PARTKEY;
              numeric_int_t x3276 = x30248->L_SUPPKEY;
              numeric_int_t x3277 = x30248->L_LINENUMBER;
              double x3278 = x30248->L_QUANTITY;
              double x3279 = x30248->L_EXTENDEDPRICE;
              double x3280 = x30248->L_DISCOUNT;
              double x3281 = x30248->L_TAX;
              char x3282 = x30248->L_RETURNFLAG;
              char x3283 = x30248->L_LINESTATUS;
              numeric_int_t x3284 = x30248->L_SHIPDATE;
              numeric_int_t x3285 = x30248->L_COMMITDATE;
              numeric_int_t x3286 = x30248->L_RECEIPTDATE;
              char* x3287 = x30248->L_SHIPINSTRUCT;
              char* x3288 = x30248->L_SHIPMODE;
              char* x3289 = x30248->L_COMMENT;
              numeric_int_t x3290 = x30248->P_PARTKEY;
              char* x3291 = x30248->P_NAME;
              char* x3292 = x30248->P_MFGR;
              char* x3293 = x30248->P_BRAND;
              char* x3294 = x30248->P_TYPE;
              numeric_int_t x3295 = x30248->P_SIZE;
              char* x3296 = x30248->P_CONTAINER;
              double x3297 = x30248->P_RETAILPRICE;
              char* x3298 = x30248->P_COMMENT;
              numeric_int_t x3299 = x471->O_CUSTKEY;
              char x3300 = x471->O_ORDERSTATUS;
              double x3301 = x471->O_TOTALPRICE;
              char* x3302 = x471->O_ORDERPRIORITY;
              char* x3303 = x471->O_CLERK;
              numeric_int_t x3304 = x471->O_SHIPPRIORITY;
              char* x3305 = x471->O_COMMENT;
              struct LINEITEMRecord_PARTRecord_ORDERSRecord* x25812 = (struct LINEITEMRecord_PARTRecord_ORDERSRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
              memset(x25812, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
              x25812->L_ORDERKEY = x30252; x25812->L_PARTKEY = x3275; x25812->L_SUPPKEY = x3276; x25812->L_LINENUMBER = x3277; x25812->L_QUANTITY = x3278; x25812->L_EXTENDEDPRICE = x3279; x25812->L_DISCOUNT = x3280; x25812->L_TAX = x3281; x25812->L_RETURNFLAG = x3282; x25812->L_LINESTATUS = x3283; x25812->L_SHIPDATE = x3284; x25812->L_COMMITDATE = x3285; x25812->L_RECEIPTDATE = x3286; x25812->L_SHIPINSTRUCT = x3287; x25812->L_SHIPMODE = x3288; x25812->L_COMMENT = x3289; x25812->P_PARTKEY = x3290; x25812->P_NAME = x3291; x25812->P_MFGR = x3292; x25812->P_BRAND = x3293; x25812->P_TYPE = x3294; x25812->P_SIZE = x3295; x25812->P_CONTAINER = x3296; x25812->P_RETAILPRICE = x3297; x25812->P_COMMENT = x3298; x25812->O_ORDERKEY = x477; x25812->O_CUSTKEY = x3299; x25812->O_ORDERSTATUS = x3300; x25812->O_TOTALPRICE = x3301; x25812->O_ORDERDATE = x473; x25812->O_ORDERPRIORITY = x3302; x25812->O_CLERK = x3303; x25812->O_SHIPPRIORITY = x3304; x25812->O_COMMENT = x3305;
              numeric_int_t x498 = x25812->O_CUSTKEY;
              void* x27242 = (void*){x498};
              void* x27243 = (void*){x25812};
              void* x27244 = g_hash_table_lookup(x100899, x27242);
              GList** x27245 = (GList**){x27244};
              GList** x27246 = NULL;
              boolean_t x27247 = x27245==(x27246);
              /* VAR */ GList** ite80522 = 0;
              if(x27247) {
                GList** x80523 = malloc(8);
                GList* x80524 = NULL;
                pointer_assign(x80523, x80524);
                ite80522 = x80523;
              } else {
                
                ite80522 = x27245;
              };
              GList** x27251 = ite80522;
              GList* x27252 = *(x27251);
              GList* x27253 = g_list_prepend(x27252, x27243);
              pointer_assign(x27251, x27253);
              void* x27255 = (void*){x27251};
              g_hash_table_insert(x100899, x27242, x27255);
            };
          };
        };
      };
      numeric_int_t x15605 = x100931;
      numeric_int_t x507 = x15605+(1);
      x100931 = x507;
    };
    while(1) {
      
      numeric_int_t x101413 = x100932;
      boolean_t x101414 = x101413<(x21478);
      if (!(x101414)) break; 
      
      numeric_int_t x15614 = x100932;
      struct CUSTOMERRecord* x516 = &(x23951[x15614]);
      numeric_int_t x518 = x516->C_CUSTKEY;
      void* x27268 = (void*){x518};
      void* x27269 = g_hash_table_lookup(x100899, x27268);
      GList** x27270 = (GList**){x27269};
      boolean_t x47710 = x27270!=(NULL);
      if(x47710) {
        GList* x31319 = *(x27270);
        /* VAR */ GList* x31320 = x31319;
        while(1) {
          
          GList* x31321 = x31320;
          GList* x31322 = NULL;
          boolean_t x31323 = x31321!=(x31322);
          if (!(x31323)) break; 
          
          GList* x31324 = x31320;
          void* x31325 = g_list_nth_data(x31324, 0);
          struct LINEITEMRecord_PARTRecord_ORDERSRecord* x31326 = (struct LINEITEMRecord_PARTRecord_ORDERSRecord*){x31325};
          GList* x31327 = x31320;
          GList* x31328 = g_list_next(x31327);
          x31320 = x31328;
          numeric_int_t x31330 = x31326->O_CUSTKEY;
          boolean_t x31331 = x31330==(x518);
          if(x31331) {
            numeric_int_t x6037 = x31326->L_ORDERKEY;
            numeric_int_t x6038 = x31326->L_PARTKEY;
            numeric_int_t x6039 = x31326->L_SUPPKEY;
            numeric_int_t x6040 = x31326->L_LINENUMBER;
            double x6041 = x31326->L_QUANTITY;
            double x6042 = x31326->L_EXTENDEDPRICE;
            double x6043 = x31326->L_DISCOUNT;
            double x6044 = x31326->L_TAX;
            char x6045 = x31326->L_RETURNFLAG;
            char x6046 = x31326->L_LINESTATUS;
            numeric_int_t x6047 = x31326->L_SHIPDATE;
            numeric_int_t x6048 = x31326->L_COMMITDATE;
            numeric_int_t x6049 = x31326->L_RECEIPTDATE;
            char* x6050 = x31326->L_SHIPINSTRUCT;
            char* x6051 = x31326->L_SHIPMODE;
            char* x6052 = x31326->L_COMMENT;
            numeric_int_t x6053 = x31326->P_PARTKEY;
            char* x6054 = x31326->P_NAME;
            char* x6055 = x31326->P_MFGR;
            char* x6056 = x31326->P_BRAND;
            char* x6057 = x31326->P_TYPE;
            numeric_int_t x6058 = x31326->P_SIZE;
            char* x6059 = x31326->P_CONTAINER;
            double x6060 = x31326->P_RETAILPRICE;
            char* x6061 = x31326->P_COMMENT;
            numeric_int_t x6062 = x31326->O_ORDERKEY;
            char x6063 = x31326->O_ORDERSTATUS;
            double x6064 = x31326->O_TOTALPRICE;
            numeric_int_t x6065 = x31326->O_ORDERDATE;
            char* x6066 = x31326->O_ORDERPRIORITY;
            char* x6067 = x31326->O_CLERK;
            numeric_int_t x6068 = x31326->O_SHIPPRIORITY;
            char* x6069 = x31326->O_COMMENT;
            char* x6070 = x516->C_NAME;
            char* x6071 = x516->C_ADDRESS;
            numeric_int_t x6072 = x516->C_NATIONKEY;
            char* x6073 = x516->C_PHONE;
            double x6074 = x516->C_ACCTBAL;
            char* x6075 = x516->C_MKTSEGMENT;
            char* x6076 = x516->C_COMMENT;
            void* x27320 = (void*){x6072};
            void* x27321 = g_hash_table_lookup(x100889, x27320);
            GList** x27322 = (GList**){x27321};
            boolean_t x48732 = x27322!=(NULL);
            if(x48732) {
              GList* x30844 = *(x27322);
              /* VAR */ GList* x30845 = x30844;
              while(1) {
                
                GList* x30846 = x30845;
                GList* x30847 = NULL;
                boolean_t x30848 = x30846!=(x30847);
                if (!(x30848)) break; 
                
                GList* x30849 = x30845;
                void* x30850 = g_list_nth_data(x30849, 0);
                struct NATIONRecord* x30851 = (struct NATIONRecord*){x30850};
                GList* x30852 = x30845;
                GList* x30853 = g_list_next(x30852);
                x30845 = x30853;
                numeric_int_t x30855 = x30851->N_NATIONKEY;
                boolean_t x30856 = x30855==(x6072);
                if(x30856) {
                  char* x7414 = x30851->N_NAME;
                  numeric_int_t x7415 = x30851->N_REGIONKEY;
                  char* x7416 = x30851->N_COMMENT;
                  void* x27335 = (void*){x7415};
                  void* x27336 = g_hash_table_lookup(x100879, x27335);
                  GList** x27337 = (GList**){x27336};
                  boolean_t x49206 = x27337!=(NULL);
                  if(x49206) {
                    GList* x30614 = *(x27337);
                    /* VAR */ GList* x30615 = x30614;
                    while(1) {
                      
                      GList* x30616 = x30615;
                      GList* x30617 = NULL;
                      boolean_t x30618 = x30616!=(x30617);
                      if (!(x30618)) break; 
                      
                      GList* x30619 = x30615;
                      void* x30620 = g_list_nth_data(x30619, 0);
                      struct REGIONRecord* x30621 = (struct REGIONRecord*){x30620};
                      GList* x30622 = x30615;
                      GList* x30623 = g_list_next(x30622);
                      x30615 = x30623;
                      numeric_int_t x30625 = x30621->R_REGIONKEY;
                      boolean_t x30626 = x30625==(x7415);
                      if(x30626) {
                        char* x8104 = x30621->R_NAME;
                        char* x8105 = x30621->R_COMMENT;
                        void* x27349 = (void*){x6039};
                        void* x27350 = g_hash_table_lookup(x100869, x27349);
                        GList** x27351 = (GList**){x27350};
                        boolean_t x49442 = x27351!=(NULL);
                        if(x49442) {
                          GList* x30506 = *(x27351);
                          /* VAR */ GList* x30507 = x30506;
                          while(1) {
                            
                            GList* x30508 = x30507;
                            GList* x30509 = NULL;
                            boolean_t x30510 = x30508!=(x30509);
                            if (!(x30510)) break; 
                            
                            GList* x30511 = x30507;
                            void* x30512 = g_list_nth_data(x30511, 0);
                            struct SUPPLIERRecord* x30513 = (struct SUPPLIERRecord*){x30512};
                            GList* x30514 = x30507;
                            GList* x30515 = g_list_next(x30514);
                            x30507 = x30515;
                            numeric_int_t x30517 = x30513->S_SUPPKEY;
                            boolean_t x30518 = x30517==(x6039);
                            if(x30518) {
                              char* x8450 = x30513->S_NAME;
                              char* x8451 = x30513->S_ADDRESS;
                              numeric_int_t x8452 = x30513->S_NATIONKEY;
                              char* x8453 = x30513->S_PHONE;
                              double x8454 = x30513->S_ACCTBAL;
                              char* x8455 = x30513->S_COMMENT;
                              void* x27367 = (void*){x8452};
                              void* x27368 = g_hash_table_lookup(x100859, x27367);
                              GList** x27369 = (GList**){x27368};
                              boolean_t x49564 = x27369!=(NULL);
                              if(x49564) {
                                GList* x30461 = *(x27369);
                                /* VAR */ GList* x30462 = x30461;
                                while(1) {
                                  
                                  GList* x30463 = x30462;
                                  GList* x30464 = NULL;
                                  boolean_t x30465 = x30463!=(x30464);
                                  if (!(x30465)) break; 
                                  
                                  GList* x30466 = x30462;
                                  void* x30467 = g_list_nth_data(x30466, 0);
                                  struct NATIONRecord* x30468 = (struct NATIONRecord*){x30467};
                                  GList* x30469 = x30462;
                                  GList* x30470 = g_list_next(x30469);
                                  x30462 = x30470;
                                  numeric_int_t x30472 = x30468->N_NATIONKEY;
                                  boolean_t x30473 = x30472==(x8452);
                                  if(x30473) {
                                    char* x8626 = x30468->N_NAME;
                                    numeric_int_t x8627 = x30468->N_REGIONKEY;
                                    char* x8628 = x30468->N_COMMENT;
                                    struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord* x25927 = (struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord));
                                    memset(x25927, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord));
                                    x25927->REC1_N_NATIONKEY = x30472; x25927->REC1_N_NAME = x8626; x25927->REC1_N_REGIONKEY = x8627; x25927->REC1_N_COMMENT = x8628; x25927->REC2_S_SUPPKEY = x30517; x25927->REC2_S_NAME = x8450; x25927->REC2_S_ADDRESS = x8451; x25927->REC2_S_NATIONKEY = x8452; x25927->REC2_S_PHONE = x8453; x25927->REC2_S_ACCTBAL = x8454; x25927->REC2_S_COMMENT = x8455; x25927->REC2_R_REGIONKEY = x30625; x25927->REC2_R_NAME = x8104; x25927->REC2_R_COMMENT = x8105; x25927->REC2_N_NATIONKEY = x30855; x25927->REC2_N_NAME = x7414; x25927->REC2_N_REGIONKEY = x7415; x25927->REC2_N_COMMENT = x7416; x25927->REC2_L_ORDERKEY = x6037; x25927->REC2_L_PARTKEY = x6038; x25927->REC2_L_SUPPKEY = x6039; x25927->REC2_L_LINENUMBER = x6040; x25927->REC2_L_QUANTITY = x6041; x25927->REC2_L_EXTENDEDPRICE = x6042; x25927->REC2_L_DISCOUNT = x6043; x25927->REC2_L_TAX = x6044; x25927->REC2_L_RETURNFLAG = x6045; x25927->REC2_L_LINESTATUS = x6046; x25927->REC2_L_SHIPDATE = x6047; x25927->REC2_L_COMMITDATE = x6048; x25927->REC2_L_RECEIPTDATE = x6049; x25927->REC2_L_SHIPINSTRUCT = x6050; x25927->REC2_L_SHIPMODE = x6051; x25927->REC2_L_COMMENT = x6052; x25927->REC2_P_PARTKEY = x6053; x25927->REC2_P_NAME = x6054; x25927->REC2_P_MFGR = x6055; x25927->REC2_P_BRAND = x6056; x25927->REC2_P_TYPE = x6057; x25927->REC2_P_SIZE = x6058; x25927->REC2_P_CONTAINER = x6059; x25927->REC2_P_RETAILPRICE = x6060; x25927->REC2_P_COMMENT = x6061; x25927->REC2_O_ORDERKEY = x6062; x25927->REC2_O_CUSTKEY = x31330; x25927->REC2_O_ORDERSTATUS = x6063; x25927->REC2_O_TOTALPRICE = x6064; x25927->REC2_O_ORDERDATE = x6065; x25927->REC2_O_ORDERPRIORITY = x6066; x25927->REC2_O_CLERK = x6067; x25927->REC2_O_SHIPPRIORITY = x6068; x25927->REC2_O_COMMENT = x6069; x25927->REC2_C_CUSTKEY = x518; x25927->REC2_C_NAME = x6070; x25927->REC2_C_ADDRESS = x6071; x25927->REC2_C_NATIONKEY = x6072; x25927->REC2_C_PHONE = x6073; x25927->REC2_C_ACCTBAL = x6074; x25927->REC2_C_MKTSEGMENT = x6075; x25927->REC2_C_COMMENT = x6076;
                                    numeric_int_t x2513 = x25927->REC2_O_ORDERDATE;
                                    numeric_int_t x20597 = x2513/(10000);
                                    void* x30483 = g_hash_table_lookup(x100849, x20597);
                                    boolean_t x30436 = x30483==(NULL);
                                    /* VAR */ struct AGGRecord_Int* ite82804 = 0;
                                    if(x30436) {
                                      double* x82805 = (double*)malloc(3 * sizeof(double));
                                      memset(x82805, 0, 3 * sizeof(double));
                                      struct AGGRecord_Int* x82806 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
                                      memset(x82806, 0, 1 * sizeof(struct AGGRecord_Int));
                                      x82806->key = x20597; x82806->aggs = x82805;
                                      g_hash_table_insert(x100849, x20597, x82806);
                                      ite82804 = x82806;
                                    } else {
                                      
                                      ite82804 = x30483;
                                    };
                                    struct AGGRecord_Int* x30446 = ite82804;
                                    double* x2519 = x30446->aggs;
                                    double x2533 = x2519[0];
                                    double x2534 = x25927->REC2_L_EXTENDEDPRICE;
                                    double x2535 = x25927->REC2_L_DISCOUNT;
                                    double x2536 = 1.0-(x2535);
                                    double x2537 = x2534*(x2536);
                                    double x2538 = x2533+(x2537);
                                    *x2519 = x2538;
                                    double x2546 = x2519[1];
                                    char* x2547 = x25927->REC1_N_NAME;
                                    boolean_t x63291 = strcmp(x2547, "INDONESIA");
                                    boolean_t x63292 = x63291==(0);
                                    /* VAR */ double ite82827 = 0;
                                    if(x63292) {
                                      double x82828 = x2546+(x2537);
                                      ite82827 = x82828;
                                    } else {
                                      
                                      ite82827 = x2546;
                                    };
                                    double x2550 = ite82827;
                                    *(x2519 + 1) = x2550;
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
              };
            };
          };
        };
      };
      numeric_int_t x17882 = x100932;
      numeric_int_t x2577 = x17882+(1);
      x100932 = x2577;
    };
    GList* x103721 = g_hash_table_get_keys(x100849);
    /* VAR */ GList* x103722 = x103721;
    numeric_int_t x103723 = g_hash_table_size(x100849);
    numeric_int_t x70164 = 0;
    for(; x70164 < x103723 ; x70164 += 1) {
      
      GList* x70165 = x103722;
      void* x70166 = g_list_nth_data(x70165, 0);
      GList* x70167 = g_list_next(x70165);
      x103722 = x70167;
      void* x70169 = g_hash_table_lookup(x100849, x70166);
      struct AGGRecord_Int* x70171 = (struct AGGRecord_Int*){x70169};
      double* x70172 = x70171->aggs;
      double x70173 = x70172[1];
      double x70174 = x70172[0];
      double x70175 = x70173/(x70174);
      *(x70172 + 2) = x70175;
      g_tree_insert(x100976, x70171, x70171);
    };
    while(1) {
      
      boolean_t x17900 = x100977;
      boolean_t x2597 = !(x17900);
      /* VAR */ boolean_t ite89853 = 0;
      if(x2597) {
        numeric_int_t x103758 = g_tree_nnodes(x100976);
        boolean_t x103759 = x103758!=(0);
        ite89853 = x103759;
      } else {
        
        ite89853 = 0;
      };
      boolean_t x82882 = ite89853;
      if (!(x82882)) break; 
      
      void* x32361 = NULL;
      void** x32369 = &(x32361);
      g_tree_foreach(x100976, x32368, x32369);
      struct AGGRecord_Int* x32371 = (struct AGGRecord_Int*){x32361};
      numeric_int_t x32372 = g_tree_remove(x100976, x32371);
      if(0) {
        x100977 = 1;
      } else {
        
        numeric_int_t x2610 = x32371->key;
        double* x2611 = x32371->aggs;
        double x2612 = x2611[2];
        printf("%d|%.4f\n", x2610, x2612);
        numeric_int_t x17917 = x100978;
        numeric_int_t x2615 = x17917+(1);
        x100978 = x2615;
      };
    };
    numeric_int_t x103785 = x100978;
    printf("(%d rows)\n", x103785);
    struct timeval* x103787 = &x100926;
    gettimeofday(x103787, NULL);
    struct timeval* x103789 = &x100922;
    struct timeval* x103790 = &x100926;
    struct timeval* x103791 = &x100924;
    long x103792 = timeval_subtract(x103789, x103790, x103791);
    printf("Generated code run in %ld milliseconds.\n", x103792);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x100843(numeric_int_t x29797) {
  return x29797; 
}

boolean_t x100845(numeric_int_t x29802, numeric_int_t x29803) {
  boolean_t x29804 = x29802==(x29803);
  return x29804; 
}

numeric_int_t x100850(void* x26888) {
  numeric_int_t x26889 = g_direct_hash(x26888);
  return x26889; 
}

numeric_int_t x100853(void* x26891, void* x26892) {
  numeric_int_t x26893 = g_direct_equal(x26891, x26892);
  return x26893; 
}

numeric_int_t x100860(void* x26898) {
  numeric_int_t x26899 = g_direct_hash(x26898);
  return x26899; 
}

numeric_int_t x100863(void* x26901, void* x26902) {
  numeric_int_t x26903 = g_direct_equal(x26901, x26902);
  return x26903; 
}

numeric_int_t x100870(void* x26908) {
  numeric_int_t x26909 = g_direct_hash(x26908);
  return x26909; 
}

numeric_int_t x100873(void* x26911, void* x26912) {
  numeric_int_t x26913 = g_direct_equal(x26911, x26912);
  return x26913; 
}

numeric_int_t x100880(void* x26918) {
  numeric_int_t x26919 = g_direct_hash(x26918);
  return x26919; 
}

numeric_int_t x100883(void* x26921, void* x26922) {
  numeric_int_t x26923 = g_direct_equal(x26921, x26922);
  return x26923; 
}

numeric_int_t x100890(void* x26928) {
  numeric_int_t x26929 = g_direct_hash(x26928);
  return x26929; 
}

numeric_int_t x100893(void* x26931, void* x26932) {
  numeric_int_t x26933 = g_direct_equal(x26931, x26932);
  return x26933; 
}

numeric_int_t x100900(void* x26938) {
  numeric_int_t x26939 = g_direct_hash(x26938);
  return x26939; 
}

numeric_int_t x100903(void* x26941, void* x26942) {
  numeric_int_t x26943 = g_direct_equal(x26941, x26942);
  return x26943; 
}

numeric_int_t x100910(void* x26948) {
  numeric_int_t x26949 = g_direct_hash(x26948);
  return x26949; 
}

numeric_int_t x100913(void* x26951, void* x26952) {
  numeric_int_t x26953 = g_direct_equal(x26951, x26952);
  return x26953; 
}

numeric_int_t x100956(struct AGGRecord_Int* x326, struct AGGRecord_Int* x327) {
  numeric_int_t x328 = x326->key;
  numeric_int_t x329 = x327->key;
  boolean_t x330 = x328<(x329);
  /* VAR */ numeric_int_t ite80101 = 0;
  if(x330) {
    ite80101 = -1;
  } else {
    
    boolean_t x80103 = x328>(x329);
    /* VAR */ numeric_int_t ite80105 = 0;
    if(x80103) {
      ite80105 = 1;
    } else {
      
      ite80105 = 0;
    };
    numeric_int_t x80104 = ite80105;
    ite80101 = x80104;
  };
  numeric_int_t x333 = ite80101;
  return x333; 
}

numeric_int_t x32368(void* x32362, void* x32363, void* x32364) {
  struct AGGRecord_Int** x32365 = (struct AGGRecord_Int**){x32364};
  struct AGGRecord_Int* x32366 = (struct AGGRecord_Int*){x32363};
  pointer_assign(x32365, x32366);
  return 1; 
}
