#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


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

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
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
  FILE* x5911 = popen("wc -l ../../data/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x5912 = 0;
  numeric_int_t x5913 = x5912;
  numeric_int_t* x5914 = &x5913;
  numeric_int_t x5915 = fscanf(x5911, "%d", x5914);
  pclose(x5911);
  struct LINEITEMRecord* x7387 = (struct LINEITEMRecord*)malloc(x5913 * sizeof(struct LINEITEMRecord));
  memset(x7387, 0, x5913 * sizeof(struct LINEITEMRecord));
  numeric_int_t x5919 = O_RDONLY;
  numeric_int_t x5920 = open("../../data/sf1/lineitem.tbl", x5919);
  struct stat x5921 = (struct stat){0};
  /* VAR */ struct stat x5922 = x5921;
  struct stat x5923 = x5922;
  struct stat* x5924 = &x5923;
  numeric_int_t x5925 = stat("../../data/sf1/lineitem.tbl", x5924);
  size_t x5926 = x5924->st_size;
  numeric_int_t x5927 = PROT_READ;
  numeric_int_t x5928 = MAP_PRIVATE;
  char* x5929 = mmap(NULL, x5926, x5927, x5928, x5920, 0);
  /* VAR */ char* x5930 = x5929;
  char* x3 = x5930;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x5913);
    /* VAR */ boolean_t ite30246 = 0;
    if(x6) {
      char x34847 = *x3;
      boolean_t x34848 = x34847!=('\0');
      ite30246 = x34848;
    } else {
      
      ite30246 = 0;
    };
    boolean_t x28107 = ite30246;
    if (!(x28107)) break; 
    
    /* VAR */ numeric_int_t x5938 = 0;
    numeric_int_t x5939 = x5938;
    numeric_int_t* x5940 = &x5939;
    char* x5941 = strntoi_unchecked(x3, x5940);
    x3 = x5941;
    /* VAR */ numeric_int_t x5943 = 0;
    numeric_int_t x5944 = x5943;
    numeric_int_t* x5945 = &x5944;
    char* x5946 = strntoi_unchecked(x3, x5945);
    x3 = x5946;
    /* VAR */ numeric_int_t x5948 = 0;
    numeric_int_t x5949 = x5948;
    numeric_int_t* x5950 = &x5949;
    char* x5951 = strntoi_unchecked(x3, x5950);
    x3 = x5951;
    /* VAR */ numeric_int_t x5953 = 0;
    numeric_int_t x5954 = x5953;
    numeric_int_t* x5955 = &x5954;
    char* x5956 = strntoi_unchecked(x3, x5955);
    x3 = x5956;
    /* VAR */ double x5958 = 0.0;
    double x5959 = x5958;
    double* x5960 = &x5959;
    char* x5961 = strntod_unchecked(x3, x5960);
    x3 = x5961;
    /* VAR */ double x5963 = 0.0;
    double x5964 = x5963;
    double* x5965 = &x5964;
    char* x5966 = strntod_unchecked(x3, x5965);
    x3 = x5966;
    /* VAR */ double x5968 = 0.0;
    double x5969 = x5968;
    double* x5970 = &x5969;
    char* x5971 = strntod_unchecked(x3, x5970);
    x3 = x5971;
    /* VAR */ double x5973 = 0.0;
    double x5974 = x5973;
    double* x5975 = &x5974;
    char* x5976 = strntod_unchecked(x3, x5975);
    x3 = x5976;
    char x5978 = *x3;
    /* VAR */ char x5979 = x5978;
    x3 += 1;
    x3 += 1;
    char x5982 = x5979;
    char x5983 = *x3;
    /* VAR */ char x5984 = x5983;
    x3 += 1;
    x3 += 1;
    char x5987 = x5984;
    /* VAR */ numeric_int_t x5988 = 0;
    numeric_int_t x5989 = x5988;
    numeric_int_t* x5990 = &x5989;
    char* x5991 = strntoi_unchecked(x3, x5990);
    x3 = x5991;
    /* VAR */ numeric_int_t x5993 = 0;
    numeric_int_t x5994 = x5993;
    numeric_int_t* x5995 = &x5994;
    char* x5996 = strntoi_unchecked(x3, x5995);
    x3 = x5996;
    /* VAR */ numeric_int_t x5998 = 0;
    numeric_int_t x5999 = x5998;
    numeric_int_t* x6000 = &x5999;
    char* x6001 = strntoi_unchecked(x3, x6000);
    x3 = x6001;
    numeric_int_t x6003 = x5989*(10000);
    numeric_int_t x6004 = x5994*(100);
    numeric_int_t x6005 = x6003+(x6004);
    numeric_int_t x6006 = x6005+(x5999);
    /* VAR */ numeric_int_t x6007 = 0;
    numeric_int_t x6008 = x6007;
    numeric_int_t* x6009 = &x6008;
    char* x6010 = strntoi_unchecked(x3, x6009);
    x3 = x6010;
    /* VAR */ numeric_int_t x6012 = 0;
    numeric_int_t x6013 = x6012;
    numeric_int_t* x6014 = &x6013;
    char* x6015 = strntoi_unchecked(x3, x6014);
    x3 = x6015;
    /* VAR */ numeric_int_t x6017 = 0;
    numeric_int_t x6018 = x6017;
    numeric_int_t* x6019 = &x6018;
    char* x6020 = strntoi_unchecked(x3, x6019);
    x3 = x6020;
    numeric_int_t x6022 = x6008*(10000);
    numeric_int_t x6023 = x6013*(100);
    numeric_int_t x6024 = x6022+(x6023);
    numeric_int_t x6025 = x6024+(x6018);
    /* VAR */ numeric_int_t x6026 = 0;
    numeric_int_t x6027 = x6026;
    numeric_int_t* x6028 = &x6027;
    char* x6029 = strntoi_unchecked(x3, x6028);
    x3 = x6029;
    /* VAR */ numeric_int_t x6031 = 0;
    numeric_int_t x6032 = x6031;
    numeric_int_t* x6033 = &x6032;
    char* x6034 = strntoi_unchecked(x3, x6033);
    x3 = x6034;
    /* VAR */ numeric_int_t x6036 = 0;
    numeric_int_t x6037 = x6036;
    numeric_int_t* x6038 = &x6037;
    char* x6039 = strntoi_unchecked(x3, x6038);
    x3 = x6039;
    numeric_int_t x6041 = x6027*(10000);
    numeric_int_t x6042 = x6032*(100);
    numeric_int_t x6043 = x6041+(x6042);
    numeric_int_t x6044 = x6043+(x6037);
    /* VAR */ char* x6045 = x3;
    while(1) {
      
      char x6046 = *x3;
      boolean_t x6047 = x6046!=('|');
      /* VAR */ boolean_t ite30366 = 0;
      if(x6047) {
        char x34966 = *x3;
        boolean_t x34967 = x34966!=('\n');
        ite30366 = x34967;
      } else {
        
        ite30366 = 0;
      };
      boolean_t x28220 = ite30366;
      if (!(x28220)) break; 
      
      x3 += 1;
    };
    char* x6053 = x6045;
    numeric_int_t x6054 = x3 - x6053;
    numeric_int_t x6055 = x6054+(1);
    char* x7526 = (char*)malloc(x6055 * sizeof(char));
    memset(x7526, 0, x6055 * sizeof(char));
    char* x6058 = x6045;
    char* x6059 = strncpy(x7526, x6058, x6054);
    x3 += 1;
    /* VAR */ char* x6061 = x3;
    while(1) {
      
      char x6062 = *x3;
      boolean_t x6063 = x6062!=('|');
      /* VAR */ boolean_t ite30387 = 0;
      if(x6063) {
        char x34986 = *x3;
        boolean_t x34987 = x34986!=('\n');
        ite30387 = x34987;
      } else {
        
        ite30387 = 0;
      };
      boolean_t x28234 = ite30387;
      if (!(x28234)) break; 
      
      x3 += 1;
    };
    char* x6069 = x6061;
    numeric_int_t x6070 = x3 - x6069;
    numeric_int_t x6071 = x6070+(1);
    char* x7542 = (char*)malloc(x6071 * sizeof(char));
    memset(x7542, 0, x6071 * sizeof(char));
    char* x6074 = x6061;
    char* x6075 = strncpy(x7542, x6074, x6070);
    x3 += 1;
    /* VAR */ char* x6077 = x3;
    while(1) {
      
      char x6078 = *x3;
      boolean_t x6079 = x6078!=('|');
      /* VAR */ boolean_t ite30408 = 0;
      if(x6079) {
        char x35006 = *x3;
        boolean_t x35007 = x35006!=('\n');
        ite30408 = x35007;
      } else {
        
        ite30408 = 0;
      };
      boolean_t x28248 = ite30408;
      if (!(x28248)) break; 
      
      x3 += 1;
    };
    char* x6085 = x6077;
    numeric_int_t x6086 = x3 - x6085;
    numeric_int_t x6087 = x6086+(1);
    char* x7558 = (char*)malloc(x6087 * sizeof(char));
    memset(x7558, 0, x6087 * sizeof(char));
    char* x6090 = x6077;
    char* x6091 = strncpy(x7558, x6090, x6086);
    x3 += 1;
    struct LINEITEMRecord* x8310 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8310, 0, 1 * sizeof(struct LINEITEMRecord));
    x8310->L_ORDERKEY = x5939; x8310->L_PARTKEY = x5944; x8310->L_SUPPKEY = x5949; x8310->L_LINENUMBER = x5954; x8310->L_QUANTITY = x5959; x8310->L_EXTENDEDPRICE = x5964; x8310->L_DISCOUNT = x5969; x8310->L_TAX = x5974; x8310->L_RETURNFLAG = x5982; x8310->L_LINESTATUS = x5987; x8310->L_SHIPDATE = x6006; x8310->L_COMMITDATE = x6025; x8310->L_RECEIPTDATE = x6044; x8310->L_SHIPINSTRUCT = x7526; x8310->L_SHIPMODE = x7542; x8310->L_COMMENT = x7558;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x7565 = *x8310;
    *(x7387 + x26) = x7565;
    struct LINEITEMRecord* x7567 = &(x7387[x26]);
    x8310 = x7567;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x6100 = x5930;
  munmap(x6100, x5926);
  FILE* x6101 = popen("wc -l ../../data/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x6102 = 0;
  numeric_int_t x6103 = x6102;
  numeric_int_t* x6104 = &x6103;
  numeric_int_t x6105 = fscanf(x6101, "%d", x6104);
  pclose(x6101);
  struct NATIONRecord* x7580 = (struct NATIONRecord*)malloc(x6103 * sizeof(struct NATIONRecord));
  memset(x7580, 0, x6103 * sizeof(struct NATIONRecord));
  numeric_int_t x6109 = O_RDONLY;
  numeric_int_t x6110 = open("../../data/sf1/nation.tbl", x6109);
  /* VAR */ struct stat x6111 = x5921;
  struct stat x6112 = x6111;
  struct stat* x6113 = &x6112;
  numeric_int_t x6114 = stat("../../data/sf1/nation.tbl", x6113);
  size_t x6115 = x6113->st_size;
  numeric_int_t x6116 = PROT_READ;
  numeric_int_t x6117 = MAP_PRIVATE;
  char* x6118 = mmap(NULL, x6115, x6116, x6117, x6110, 0);
  /* VAR */ char* x6119 = x6118;
  char* x35 = x6119;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x6103);
    /* VAR */ boolean_t ite30461 = 0;
    if(x38) {
      char x35058 = *x35;
      boolean_t x35059 = x35058!=('\0');
      ite30461 = x35059;
    } else {
      
      ite30461 = 0;
    };
    boolean_t x28294 = ite30461;
    if (!(x28294)) break; 
    
    /* VAR */ numeric_int_t x6127 = 0;
    numeric_int_t x6128 = x6127;
    numeric_int_t* x6129 = &x6128;
    char* x6130 = strntoi_unchecked(x35, x6129);
    x35 = x6130;
    /* VAR */ char* x6132 = x35;
    while(1) {
      
      char x6133 = *x35;
      boolean_t x6134 = x6133!=('|');
      /* VAR */ boolean_t ite30479 = 0;
      if(x6134) {
        char x35075 = *x35;
        boolean_t x35076 = x35075!=('\n');
        ite30479 = x35076;
      } else {
        
        ite30479 = 0;
      };
      boolean_t x28305 = ite30479;
      if (!(x28305)) break; 
      
      x35 += 1;
    };
    char* x6140 = x6132;
    numeric_int_t x6141 = x35 - x6140;
    numeric_int_t x6142 = x6141+(1);
    char* x7616 = (char*)malloc(x6142 * sizeof(char));
    memset(x7616, 0, x6142 * sizeof(char));
    char* x6145 = x6132;
    char* x6146 = strncpy(x7616, x6145, x6141);
    x35 += 1;
    /* VAR */ numeric_int_t x6148 = 0;
    numeric_int_t x6149 = x6148;
    numeric_int_t* x6150 = &x6149;
    char* x6151 = strntoi_unchecked(x35, x6150);
    x35 = x6151;
    /* VAR */ char* x6153 = x35;
    while(1) {
      
      char x6154 = *x35;
      boolean_t x6155 = x6154!=('|');
      /* VAR */ boolean_t ite30505 = 0;
      if(x6155) {
        char x35100 = *x35;
        boolean_t x35101 = x35100!=('\n');
        ite30505 = x35101;
      } else {
        
        ite30505 = 0;
      };
      boolean_t x28324 = ite30505;
      if (!(x28324)) break; 
      
      x35 += 1;
    };
    char* x6161 = x6153;
    numeric_int_t x6162 = x35 - x6161;
    numeric_int_t x6163 = x6162+(1);
    char* x7637 = (char*)malloc(x6163 * sizeof(char));
    memset(x7637, 0, x6163 * sizeof(char));
    char* x6166 = x6153;
    char* x6167 = strncpy(x7637, x6166, x6162);
    x35 += 1;
    struct NATIONRecord* x8391 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x8391, 0, 1 * sizeof(struct NATIONRecord));
    x8391->N_NATIONKEY = x6128; x8391->N_NAME = x7616; x8391->N_REGIONKEY = x6149; x8391->N_COMMENT = x7637;
    numeric_int_t x46 = x36;
    struct NATIONRecord x7644 = *x8391;
    *(x7580 + x46) = x7644;
    struct NATIONRecord* x7646 = &(x7580[x46]);
    x8391 = x7646;
    numeric_int_t x48 = x36;
    numeric_int_t x49 = x48+(1);
    x36 = x49;
  };
  char* x6176 = x6119;
  munmap(x6176, x6115);
  FILE* x6177 = popen("wc -l ../../data/sf1/customer.tbl", "r");
  /* VAR */ numeric_int_t x6178 = 0;
  numeric_int_t x6179 = x6178;
  numeric_int_t* x6180 = &x6179;
  numeric_int_t x6181 = fscanf(x6177, "%d", x6180);
  pclose(x6177);
  struct CUSTOMERRecord* x7659 = (struct CUSTOMERRecord*)malloc(x6179 * sizeof(struct CUSTOMERRecord));
  memset(x7659, 0, x6179 * sizeof(struct CUSTOMERRecord));
  numeric_int_t x6185 = O_RDONLY;
  numeric_int_t x6186 = open("../../data/sf1/customer.tbl", x6185);
  /* VAR */ struct stat x6187 = x5921;
  struct stat x6188 = x6187;
  struct stat* x6189 = &x6188;
  numeric_int_t x6190 = stat("../../data/sf1/customer.tbl", x6189);
  size_t x6191 = x6189->st_size;
  numeric_int_t x6192 = PROT_READ;
  numeric_int_t x6193 = MAP_PRIVATE;
  char* x6194 = mmap(NULL, x6191, x6192, x6193, x6186, 0);
  /* VAR */ char* x6195 = x6194;
  char* x55 = x6195;
  /* VAR */ numeric_int_t x56 = 0;
  while(1) {
    
    numeric_int_t x57 = x56;
    boolean_t x58 = x57<(x6179);
    /* VAR */ boolean_t ite30558 = 0;
    if(x58) {
      char x35152 = *x55;
      boolean_t x35153 = x35152!=('\0');
      ite30558 = x35153;
    } else {
      
      ite30558 = 0;
    };
    boolean_t x28370 = ite30558;
    if (!(x28370)) break; 
    
    /* VAR */ numeric_int_t x6203 = 0;
    numeric_int_t x6204 = x6203;
    numeric_int_t* x6205 = &x6204;
    char* x6206 = strntoi_unchecked(x55, x6205);
    x55 = x6206;
    /* VAR */ char* x6208 = x55;
    while(1) {
      
      char x6209 = *x55;
      boolean_t x6210 = x6209!=('|');
      /* VAR */ boolean_t ite30576 = 0;
      if(x6210) {
        char x35169 = *x55;
        boolean_t x35170 = x35169!=('\n');
        ite30576 = x35170;
      } else {
        
        ite30576 = 0;
      };
      boolean_t x28381 = ite30576;
      if (!(x28381)) break; 
      
      x55 += 1;
    };
    char* x6216 = x6208;
    numeric_int_t x6217 = x55 - x6216;
    numeric_int_t x6218 = x6217+(1);
    char* x7695 = (char*)malloc(x6218 * sizeof(char));
    memset(x7695, 0, x6218 * sizeof(char));
    char* x6221 = x6208;
    char* x6222 = strncpy(x7695, x6221, x6217);
    x55 += 1;
    /* VAR */ char* x6224 = x55;
    while(1) {
      
      char x6225 = *x55;
      boolean_t x6226 = x6225!=('|');
      /* VAR */ boolean_t ite30597 = 0;
      if(x6226) {
        char x35189 = *x55;
        boolean_t x35190 = x35189!=('\n');
        ite30597 = x35190;
      } else {
        
        ite30597 = 0;
      };
      boolean_t x28395 = ite30597;
      if (!(x28395)) break; 
      
      x55 += 1;
    };
    char* x6232 = x6224;
    numeric_int_t x6233 = x55 - x6232;
    numeric_int_t x6234 = x6233+(1);
    char* x7711 = (char*)malloc(x6234 * sizeof(char));
    memset(x7711, 0, x6234 * sizeof(char));
    char* x6237 = x6224;
    char* x6238 = strncpy(x7711, x6237, x6233);
    x55 += 1;
    /* VAR */ numeric_int_t x6240 = 0;
    numeric_int_t x6241 = x6240;
    numeric_int_t* x6242 = &x6241;
    char* x6243 = strntoi_unchecked(x55, x6242);
    x55 = x6243;
    /* VAR */ char* x6245 = x55;
    while(1) {
      
      char x6246 = *x55;
      boolean_t x6247 = x6246!=('|');
      /* VAR */ boolean_t ite30623 = 0;
      if(x6247) {
        char x35214 = *x55;
        boolean_t x35215 = x35214!=('\n');
        ite30623 = x35215;
      } else {
        
        ite30623 = 0;
      };
      boolean_t x28414 = ite30623;
      if (!(x28414)) break; 
      
      x55 += 1;
    };
    char* x6253 = x6245;
    numeric_int_t x6254 = x55 - x6253;
    numeric_int_t x6255 = x6254+(1);
    char* x7732 = (char*)malloc(x6255 * sizeof(char));
    memset(x7732, 0, x6255 * sizeof(char));
    char* x6258 = x6245;
    char* x6259 = strncpy(x7732, x6258, x6254);
    x55 += 1;
    /* VAR */ double x6261 = 0.0;
    double x6262 = x6261;
    double* x6263 = &x6262;
    char* x6264 = strntod_unchecked(x55, x6263);
    x55 = x6264;
    /* VAR */ char* x6266 = x55;
    while(1) {
      
      char x6267 = *x55;
      boolean_t x6268 = x6267!=('|');
      /* VAR */ boolean_t ite30649 = 0;
      if(x6268) {
        char x35239 = *x55;
        boolean_t x35240 = x35239!=('\n');
        ite30649 = x35240;
      } else {
        
        ite30649 = 0;
      };
      boolean_t x28433 = ite30649;
      if (!(x28433)) break; 
      
      x55 += 1;
    };
    char* x6274 = x6266;
    numeric_int_t x6275 = x55 - x6274;
    numeric_int_t x6276 = x6275+(1);
    char* x7753 = (char*)malloc(x6276 * sizeof(char));
    memset(x7753, 0, x6276 * sizeof(char));
    char* x6279 = x6266;
    char* x6280 = strncpy(x7753, x6279, x6275);
    x55 += 1;
    /* VAR */ char* x6282 = x55;
    while(1) {
      
      char x6283 = *x55;
      boolean_t x6284 = x6283!=('|');
      /* VAR */ boolean_t ite30670 = 0;
      if(x6284) {
        char x35259 = *x55;
        boolean_t x35260 = x35259!=('\n');
        ite30670 = x35260;
      } else {
        
        ite30670 = 0;
      };
      boolean_t x28447 = ite30670;
      if (!(x28447)) break; 
      
      x55 += 1;
    };
    char* x6290 = x6282;
    numeric_int_t x6291 = x55 - x6290;
    numeric_int_t x6292 = x6291+(1);
    char* x7769 = (char*)malloc(x6292 * sizeof(char));
    memset(x7769, 0, x6292 * sizeof(char));
    char* x6295 = x6282;
    char* x6296 = strncpy(x7769, x6295, x6291);
    x55 += 1;
    struct CUSTOMERRecord* x8525 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x8525, 0, 1 * sizeof(struct CUSTOMERRecord));
    x8525->C_CUSTKEY = x6204; x8525->C_NAME = x7695; x8525->C_ADDRESS = x7711; x8525->C_NATIONKEY = x6241; x8525->C_PHONE = x7732; x8525->C_ACCTBAL = x6262; x8525->C_MKTSEGMENT = x7753; x8525->C_COMMENT = x7769;
    numeric_int_t x70 = x56;
    struct CUSTOMERRecord x7776 = *x8525;
    *(x7659 + x70) = x7776;
    struct CUSTOMERRecord* x7778 = &(x7659[x70]);
    x8525 = x7778;
    numeric_int_t x72 = x56;
    numeric_int_t x73 = x72+(1);
    x56 = x73;
  };
  char* x6305 = x6195;
  munmap(x6305, x6191);
  FILE* x6306 = popen("wc -l ../../data/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x6307 = 0;
  numeric_int_t x6308 = x6307;
  numeric_int_t* x6309 = &x6308;
  numeric_int_t x6310 = fscanf(x6306, "%d", x6309);
  pclose(x6306);
  struct ORDERSRecord* x7791 = (struct ORDERSRecord*)malloc(x6308 * sizeof(struct ORDERSRecord));
  memset(x7791, 0, x6308 * sizeof(struct ORDERSRecord));
  numeric_int_t x6314 = O_RDONLY;
  numeric_int_t x6315 = open("../../data/sf1/orders.tbl", x6314);
  /* VAR */ struct stat x6316 = x5921;
  struct stat x6317 = x6316;
  struct stat* x6318 = &x6317;
  numeric_int_t x6319 = stat("../../data/sf1/orders.tbl", x6318);
  size_t x6320 = x6318->st_size;
  numeric_int_t x6321 = PROT_READ;
  numeric_int_t x6322 = MAP_PRIVATE;
  char* x6323 = mmap(NULL, x6320, x6321, x6322, x6315, 0);
  /* VAR */ char* x6324 = x6323;
  char* x79 = x6324;
  /* VAR */ numeric_int_t x80 = 0;
  while(1) {
    
    numeric_int_t x81 = x80;
    boolean_t x82 = x81<(x6308);
    /* VAR */ boolean_t ite30723 = 0;
    if(x82) {
      char x35311 = *x79;
      boolean_t x35312 = x35311!=('\0');
      ite30723 = x35312;
    } else {
      
      ite30723 = 0;
    };
    boolean_t x28493 = ite30723;
    if (!(x28493)) break; 
    
    /* VAR */ numeric_int_t x6332 = 0;
    numeric_int_t x6333 = x6332;
    numeric_int_t* x6334 = &x6333;
    char* x6335 = strntoi_unchecked(x79, x6334);
    x79 = x6335;
    /* VAR */ numeric_int_t x6337 = 0;
    numeric_int_t x6338 = x6337;
    numeric_int_t* x6339 = &x6338;
    char* x6340 = strntoi_unchecked(x79, x6339);
    x79 = x6340;
    char x6342 = *x79;
    /* VAR */ char x6343 = x6342;
    x79 += 1;
    x79 += 1;
    char x6346 = x6343;
    /* VAR */ double x6347 = 0.0;
    double x6348 = x6347;
    double* x6349 = &x6348;
    char* x6350 = strntod_unchecked(x79, x6349);
    x79 = x6350;
    /* VAR */ numeric_int_t x6352 = 0;
    numeric_int_t x6353 = x6352;
    numeric_int_t* x6354 = &x6353;
    char* x6355 = strntoi_unchecked(x79, x6354);
    x79 = x6355;
    /* VAR */ numeric_int_t x6357 = 0;
    numeric_int_t x6358 = x6357;
    numeric_int_t* x6359 = &x6358;
    char* x6360 = strntoi_unchecked(x79, x6359);
    x79 = x6360;
    /* VAR */ numeric_int_t x6362 = 0;
    numeric_int_t x6363 = x6362;
    numeric_int_t* x6364 = &x6363;
    char* x6365 = strntoi_unchecked(x79, x6364);
    x79 = x6365;
    numeric_int_t x6367 = x6353*(10000);
    numeric_int_t x6368 = x6358*(100);
    numeric_int_t x6369 = x6367+(x6368);
    numeric_int_t x6370 = x6369+(x6363);
    /* VAR */ char* x6371 = x79;
    while(1) {
      
      char x6372 = *x79;
      boolean_t x6373 = x6372!=('|');
      /* VAR */ boolean_t ite30775 = 0;
      if(x6373) {
        char x35362 = *x79;
        boolean_t x35363 = x35362!=('\n');
        ite30775 = x35363;
      } else {
        
        ite30775 = 0;
      };
      boolean_t x28538 = ite30775;
      if (!(x28538)) break; 
      
      x79 += 1;
    };
    char* x6379 = x6371;
    numeric_int_t x6380 = x79 - x6379;
    numeric_int_t x6381 = x6380+(1);
    char* x7861 = (char*)malloc(x6381 * sizeof(char));
    memset(x7861, 0, x6381 * sizeof(char));
    char* x6384 = x6371;
    char* x6385 = strncpy(x7861, x6384, x6380);
    x79 += 1;
    /* VAR */ char* x6387 = x79;
    while(1) {
      
      char x6388 = *x79;
      boolean_t x6389 = x6388!=('|');
      /* VAR */ boolean_t ite30796 = 0;
      if(x6389) {
        char x35382 = *x79;
        boolean_t x35383 = x35382!=('\n');
        ite30796 = x35383;
      } else {
        
        ite30796 = 0;
      };
      boolean_t x28552 = ite30796;
      if (!(x28552)) break; 
      
      x79 += 1;
    };
    char* x6395 = x6387;
    numeric_int_t x6396 = x79 - x6395;
    numeric_int_t x6397 = x6396+(1);
    char* x7877 = (char*)malloc(x6397 * sizeof(char));
    memset(x7877, 0, x6397 * sizeof(char));
    char* x6400 = x6387;
    char* x6401 = strncpy(x7877, x6400, x6396);
    x79 += 1;
    /* VAR */ numeric_int_t x6403 = 0;
    numeric_int_t x6404 = x6403;
    numeric_int_t* x6405 = &x6404;
    char* x6406 = strntoi_unchecked(x79, x6405);
    x79 = x6406;
    /* VAR */ char* x6408 = x79;
    while(1) {
      
      char x6409 = *x79;
      boolean_t x6410 = x6409!=('|');
      /* VAR */ boolean_t ite30822 = 0;
      if(x6410) {
        char x35407 = *x79;
        boolean_t x35408 = x35407!=('\n');
        ite30822 = x35408;
      } else {
        
        ite30822 = 0;
      };
      boolean_t x28571 = ite30822;
      if (!(x28571)) break; 
      
      x79 += 1;
    };
    char* x6416 = x6408;
    numeric_int_t x6417 = x79 - x6416;
    numeric_int_t x6418 = x6417+(1);
    char* x7898 = (char*)malloc(x6418 * sizeof(char));
    memset(x7898, 0, x6418 * sizeof(char));
    char* x6421 = x6408;
    char* x6422 = strncpy(x7898, x6421, x6417);
    x79 += 1;
    struct ORDERSRecord* x8656 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x8656, 0, 1 * sizeof(struct ORDERSRecord));
    x8656->O_ORDERKEY = x6333; x8656->O_CUSTKEY = x6338; x8656->O_ORDERSTATUS = x6346; x8656->O_TOTALPRICE = x6348; x8656->O_ORDERDATE = x6370; x8656->O_ORDERPRIORITY = x7861; x8656->O_CLERK = x7877; x8656->O_SHIPPRIORITY = x6404; x8656->O_COMMENT = x7898;
    numeric_int_t x95 = x80;
    struct ORDERSRecord x7905 = *x8656;
    *(x7791 + x95) = x7905;
    struct ORDERSRecord* x7907 = &(x7791[x95]);
    x8656 = x7907;
    numeric_int_t x97 = x80;
    numeric_int_t x98 = x97+(1);
    x80 = x98;
  };
  char* x6431 = x6324;
  munmap(x6431, x6320);
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
