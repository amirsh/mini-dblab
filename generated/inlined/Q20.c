#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


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

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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

struct PARTSUPPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
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
  FILE* x4845 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x4846 = 0;
  numeric_int_t x4847 = x4846;
  numeric_int_t* x4848 = &x4847;
  numeric_int_t x4849 = fscanf(x4845, "%d", x4848);
  pclose(x4845);
  struct NATIONRecord* x6543 = (struct NATIONRecord*)malloc(x4847 * sizeof(struct NATIONRecord));
  memset(x6543, 0, x4847 * sizeof(struct NATIONRecord));
  numeric_int_t x4853 = O_RDONLY;
  numeric_int_t x4854 = open("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x4853);
  struct stat x4855 = (struct stat){0};
  /* VAR */ struct stat x4856 = x4855;
  struct stat x4857 = x4856;
  struct stat* x4858 = &x4857;
  numeric_int_t x4859 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x4858);
  size_t x4860 = x4858->st_size;
  numeric_int_t x4861 = PROT_READ;
  numeric_int_t x4862 = MAP_PRIVATE;
  char* x4863 = mmap(NULL, x4860, x4861, x4862, x4854, 0);
  /* VAR */ char* x4864 = x4863;
  char* x3 = x4864;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x4847);
    /* VAR */ boolean_t ite30321 = 0;
    if(x6) {
      char x34712 = *x3;
      boolean_t x34713 = x34712!=('\0');
      ite30321 = x34713;
    } else {
      
      ite30321 = 0;
    };
    boolean_t x28371 = ite30321;
    if (!(x28371)) break; 
    
    /* VAR */ numeric_int_t x4872 = 0;
    numeric_int_t x4873 = x4872;
    numeric_int_t* x4874 = &x4873;
    char* x4875 = strntoi_unchecked(x3, x4874);
    x3 = x4875;
    /* VAR */ char* x4877 = x3;
    while(1) {
      
      char x4878 = *x3;
      boolean_t x4879 = x4878!=('|');
      /* VAR */ boolean_t ite30339 = 0;
      if(x4879) {
        char x34729 = *x3;
        boolean_t x34730 = x34729!=('\n');
        ite30339 = x34730;
      } else {
        
        ite30339 = 0;
      };
      boolean_t x28382 = ite30339;
      if (!(x28382)) break; 
      
      x3 += 1;
    };
    char* x4885 = x4877;
    numeric_int_t x4886 = x3 - x4885;
    numeric_int_t x4887 = x4886+(1);
    char* x6580 = (char*)malloc(x4887 * sizeof(char));
    memset(x6580, 0, x4887 * sizeof(char));
    char* x4890 = x4877;
    char* x4891 = strncpy(x6580, x4890, x4886);
    x3 += 1;
    /* VAR */ numeric_int_t x4893 = 0;
    numeric_int_t x4894 = x4893;
    numeric_int_t* x4895 = &x4894;
    char* x4896 = strntoi_unchecked(x3, x4895);
    x3 = x4896;
    /* VAR */ char* x4898 = x3;
    while(1) {
      
      char x4899 = *x3;
      boolean_t x4900 = x4899!=('|');
      /* VAR */ boolean_t ite30365 = 0;
      if(x4900) {
        char x34754 = *x3;
        boolean_t x34755 = x34754!=('\n');
        ite30365 = x34755;
      } else {
        
        ite30365 = 0;
      };
      boolean_t x28401 = ite30365;
      if (!(x28401)) break; 
      
      x3 += 1;
    };
    char* x4906 = x4898;
    numeric_int_t x4907 = x3 - x4906;
    numeric_int_t x4908 = x4907+(1);
    char* x6601 = (char*)malloc(x4908 * sizeof(char));
    memset(x6601, 0, x4908 * sizeof(char));
    char* x4911 = x4898;
    char* x4912 = strncpy(x6601, x4911, x4907);
    x3 += 1;
    struct NATIONRecord* x7467 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x7467, 0, 1 * sizeof(struct NATIONRecord));
    x7467->N_NATIONKEY = x4873; x7467->N_NAME = x6580; x7467->N_REGIONKEY = x4894; x7467->N_COMMENT = x6601;
    numeric_int_t x14 = x4;
    struct NATIONRecord x6608 = *x7467;
    *(x6543 + x14) = x6608;
    struct NATIONRecord* x6610 = &(x6543[x14]);
    x7467 = x6610;
    numeric_int_t x16 = x4;
    numeric_int_t x17 = x16+(1);
    x4 = x17;
  };
  char* x4921 = x4864;
  munmap(x4921, x4860);
  FILE* x4922 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x4923 = 0;
  numeric_int_t x4924 = x4923;
  numeric_int_t* x4925 = &x4924;
  numeric_int_t x4926 = fscanf(x4922, "%d", x4925);
  pclose(x4922);
  struct SUPPLIERRecord* x6623 = (struct SUPPLIERRecord*)malloc(x4924 * sizeof(struct SUPPLIERRecord));
  memset(x6623, 0, x4924 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x4930 = O_RDONLY;
  numeric_int_t x4931 = open("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x4930);
  /* VAR */ struct stat x4932 = x4855;
  struct stat x4933 = x4932;
  struct stat* x4934 = &x4933;
  numeric_int_t x4935 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x4934);
  size_t x4936 = x4934->st_size;
  numeric_int_t x4937 = PROT_READ;
  numeric_int_t x4938 = MAP_PRIVATE;
  char* x4939 = mmap(NULL, x4936, x4937, x4938, x4931, 0);
  /* VAR */ char* x4940 = x4939;
  char* x23 = x4940;
  /* VAR */ numeric_int_t x24 = 0;
  while(1) {
    
    numeric_int_t x25 = x24;
    boolean_t x26 = x25<(x4924);
    /* VAR */ boolean_t ite30418 = 0;
    if(x26) {
      char x34806 = *x23;
      boolean_t x34807 = x34806!=('\0');
      ite30418 = x34807;
    } else {
      
      ite30418 = 0;
    };
    boolean_t x28447 = ite30418;
    if (!(x28447)) break; 
    
    /* VAR */ numeric_int_t x4948 = 0;
    numeric_int_t x4949 = x4948;
    numeric_int_t* x4950 = &x4949;
    char* x4951 = strntoi_unchecked(x23, x4950);
    x23 = x4951;
    /* VAR */ char* x4953 = x23;
    while(1) {
      
      char x4954 = *x23;
      boolean_t x4955 = x4954!=('|');
      /* VAR */ boolean_t ite30436 = 0;
      if(x4955) {
        char x34823 = *x23;
        boolean_t x34824 = x34823!=('\n');
        ite30436 = x34824;
      } else {
        
        ite30436 = 0;
      };
      boolean_t x28458 = ite30436;
      if (!(x28458)) break; 
      
      x23 += 1;
    };
    char* x4961 = x4953;
    numeric_int_t x4962 = x23 - x4961;
    numeric_int_t x4963 = x4962+(1);
    char* x6659 = (char*)malloc(x4963 * sizeof(char));
    memset(x6659, 0, x4963 * sizeof(char));
    char* x4966 = x4953;
    char* x4967 = strncpy(x6659, x4966, x4962);
    x23 += 1;
    /* VAR */ char* x4969 = x23;
    while(1) {
      
      char x4970 = *x23;
      boolean_t x4971 = x4970!=('|');
      /* VAR */ boolean_t ite30457 = 0;
      if(x4971) {
        char x34843 = *x23;
        boolean_t x34844 = x34843!=('\n');
        ite30457 = x34844;
      } else {
        
        ite30457 = 0;
      };
      boolean_t x28472 = ite30457;
      if (!(x28472)) break; 
      
      x23 += 1;
    };
    char* x4977 = x4969;
    numeric_int_t x4978 = x23 - x4977;
    numeric_int_t x4979 = x4978+(1);
    char* x6675 = (char*)malloc(x4979 * sizeof(char));
    memset(x6675, 0, x4979 * sizeof(char));
    char* x4982 = x4969;
    char* x4983 = strncpy(x6675, x4982, x4978);
    x23 += 1;
    /* VAR */ numeric_int_t x4985 = 0;
    numeric_int_t x4986 = x4985;
    numeric_int_t* x4987 = &x4986;
    char* x4988 = strntoi_unchecked(x23, x4987);
    x23 = x4988;
    /* VAR */ char* x4990 = x23;
    while(1) {
      
      char x4991 = *x23;
      boolean_t x4992 = x4991!=('|');
      /* VAR */ boolean_t ite30483 = 0;
      if(x4992) {
        char x34868 = *x23;
        boolean_t x34869 = x34868!=('\n');
        ite30483 = x34869;
      } else {
        
        ite30483 = 0;
      };
      boolean_t x28491 = ite30483;
      if (!(x28491)) break; 
      
      x23 += 1;
    };
    char* x4998 = x4990;
    numeric_int_t x4999 = x23 - x4998;
    numeric_int_t x5000 = x4999+(1);
    char* x6696 = (char*)malloc(x5000 * sizeof(char));
    memset(x6696, 0, x5000 * sizeof(char));
    char* x5003 = x4990;
    char* x5004 = strncpy(x6696, x5003, x4999);
    x23 += 1;
    /* VAR */ double x5006 = 0.0;
    double x5007 = x5006;
    double* x5008 = &x5007;
    char* x5009 = strntod_unchecked(x23, x5008);
    x23 = x5009;
    /* VAR */ char* x5011 = x23;
    while(1) {
      
      char x5012 = *x23;
      boolean_t x5013 = x5012!=('|');
      /* VAR */ boolean_t ite30509 = 0;
      if(x5013) {
        char x34893 = *x23;
        boolean_t x34894 = x34893!=('\n');
        ite30509 = x34894;
      } else {
        
        ite30509 = 0;
      };
      boolean_t x28510 = ite30509;
      if (!(x28510)) break; 
      
      x23 += 1;
    };
    char* x5019 = x5011;
    numeric_int_t x5020 = x23 - x5019;
    numeric_int_t x5021 = x5020+(1);
    char* x6717 = (char*)malloc(x5021 * sizeof(char));
    memset(x6717, 0, x5021 * sizeof(char));
    char* x5024 = x5011;
    char* x5025 = strncpy(x6717, x5024, x5020);
    x23 += 1;
    struct SUPPLIERRecord* x7585 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x7585, 0, 1 * sizeof(struct SUPPLIERRecord));
    x7585->S_SUPPKEY = x4949; x7585->S_NAME = x6659; x7585->S_ADDRESS = x6675; x7585->S_NATIONKEY = x4986; x7585->S_PHONE = x6696; x7585->S_ACCTBAL = x5007; x7585->S_COMMENT = x6717;
    numeric_int_t x37 = x24;
    struct SUPPLIERRecord x6724 = *x7585;
    *(x6623 + x37) = x6724;
    struct SUPPLIERRecord* x6726 = &(x6623[x37]);
    x7585 = x6726;
    numeric_int_t x39 = x24;
    numeric_int_t x40 = x39+(1);
    x24 = x40;
  };
  char* x5034 = x4940;
  munmap(x5034, x4936);
  FILE* x5035 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", "r");
  /* VAR */ numeric_int_t x5036 = 0;
  numeric_int_t x5037 = x5036;
  numeric_int_t* x5038 = &x5037;
  numeric_int_t x5039 = fscanf(x5035, "%d", x5038);
  pclose(x5035);
  struct PARTRecord* x6739 = (struct PARTRecord*)malloc(x5037 * sizeof(struct PARTRecord));
  memset(x6739, 0, x5037 * sizeof(struct PARTRecord));
  numeric_int_t x5043 = O_RDONLY;
  numeric_int_t x5044 = open("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x5043);
  /* VAR */ struct stat x5045 = x4855;
  struct stat x5046 = x5045;
  struct stat* x5047 = &x5046;
  numeric_int_t x5048 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x5047);
  size_t x5049 = x5047->st_size;
  numeric_int_t x5050 = PROT_READ;
  numeric_int_t x5051 = MAP_PRIVATE;
  char* x5052 = mmap(NULL, x5049, x5050, x5051, x5044, 0);
  /* VAR */ char* x5053 = x5052;
  char* x46 = x5053;
  /* VAR */ numeric_int_t x47 = 0;
  while(1) {
    
    numeric_int_t x48 = x47;
    boolean_t x49 = x48<(x5037);
    /* VAR */ boolean_t ite30562 = 0;
    if(x49) {
      char x34945 = *x46;
      boolean_t x34946 = x34945!=('\0');
      ite30562 = x34946;
    } else {
      
      ite30562 = 0;
    };
    boolean_t x28556 = ite30562;
    if (!(x28556)) break; 
    
    /* VAR */ numeric_int_t x5061 = 0;
    numeric_int_t x5062 = x5061;
    numeric_int_t* x5063 = &x5062;
    char* x5064 = strntoi_unchecked(x46, x5063);
    x46 = x5064;
    /* VAR */ char* x5066 = x46;
    while(1) {
      
      char x5067 = *x46;
      boolean_t x5068 = x5067!=('|');
      /* VAR */ boolean_t ite30580 = 0;
      if(x5068) {
        char x34962 = *x46;
        boolean_t x34963 = x34962!=('\n');
        ite30580 = x34963;
      } else {
        
        ite30580 = 0;
      };
      boolean_t x28567 = ite30580;
      if (!(x28567)) break; 
      
      x46 += 1;
    };
    char* x5074 = x5066;
    numeric_int_t x5075 = x46 - x5074;
    numeric_int_t x5076 = x5075+(1);
    char* x6775 = (char*)malloc(x5076 * sizeof(char));
    memset(x6775, 0, x5076 * sizeof(char));
    char* x5079 = x5066;
    char* x5080 = strncpy(x6775, x5079, x5075);
    x46 += 1;
    /* VAR */ char* x5082 = x46;
    while(1) {
      
      char x5083 = *x46;
      boolean_t x5084 = x5083!=('|');
      /* VAR */ boolean_t ite30601 = 0;
      if(x5084) {
        char x34982 = *x46;
        boolean_t x34983 = x34982!=('\n');
        ite30601 = x34983;
      } else {
        
        ite30601 = 0;
      };
      boolean_t x28581 = ite30601;
      if (!(x28581)) break; 
      
      x46 += 1;
    };
    char* x5090 = x5082;
    numeric_int_t x5091 = x46 - x5090;
    numeric_int_t x5092 = x5091+(1);
    char* x6791 = (char*)malloc(x5092 * sizeof(char));
    memset(x6791, 0, x5092 * sizeof(char));
    char* x5095 = x5082;
    char* x5096 = strncpy(x6791, x5095, x5091);
    x46 += 1;
    /* VAR */ char* x5098 = x46;
    while(1) {
      
      char x5099 = *x46;
      boolean_t x5100 = x5099!=('|');
      /* VAR */ boolean_t ite30622 = 0;
      if(x5100) {
        char x35002 = *x46;
        boolean_t x35003 = x35002!=('\n');
        ite30622 = x35003;
      } else {
        
        ite30622 = 0;
      };
      boolean_t x28595 = ite30622;
      if (!(x28595)) break; 
      
      x46 += 1;
    };
    char* x5106 = x5098;
    numeric_int_t x5107 = x46 - x5106;
    numeric_int_t x5108 = x5107+(1);
    char* x6807 = (char*)malloc(x5108 * sizeof(char));
    memset(x6807, 0, x5108 * sizeof(char));
    char* x5111 = x5098;
    char* x5112 = strncpy(x6807, x5111, x5107);
    x46 += 1;
    /* VAR */ char* x5114 = x46;
    while(1) {
      
      char x5115 = *x46;
      boolean_t x5116 = x5115!=('|');
      /* VAR */ boolean_t ite30643 = 0;
      if(x5116) {
        char x35022 = *x46;
        boolean_t x35023 = x35022!=('\n');
        ite30643 = x35023;
      } else {
        
        ite30643 = 0;
      };
      boolean_t x28609 = ite30643;
      if (!(x28609)) break; 
      
      x46 += 1;
    };
    char* x5122 = x5114;
    numeric_int_t x5123 = x46 - x5122;
    numeric_int_t x5124 = x5123+(1);
    char* x6823 = (char*)malloc(x5124 * sizeof(char));
    memset(x6823, 0, x5124 * sizeof(char));
    char* x5127 = x5114;
    char* x5128 = strncpy(x6823, x5127, x5123);
    x46 += 1;
    /* VAR */ numeric_int_t x5130 = 0;
    numeric_int_t x5131 = x5130;
    numeric_int_t* x5132 = &x5131;
    char* x5133 = strntoi_unchecked(x46, x5132);
    x46 = x5133;
    /* VAR */ char* x5135 = x46;
    while(1) {
      
      char x5136 = *x46;
      boolean_t x5137 = x5136!=('|');
      /* VAR */ boolean_t ite30669 = 0;
      if(x5137) {
        char x35047 = *x46;
        boolean_t x35048 = x35047!=('\n');
        ite30669 = x35048;
      } else {
        
        ite30669 = 0;
      };
      boolean_t x28628 = ite30669;
      if (!(x28628)) break; 
      
      x46 += 1;
    };
    char* x5143 = x5135;
    numeric_int_t x5144 = x46 - x5143;
    numeric_int_t x5145 = x5144+(1);
    char* x6844 = (char*)malloc(x5145 * sizeof(char));
    memset(x6844, 0, x5145 * sizeof(char));
    char* x5148 = x5135;
    char* x5149 = strncpy(x6844, x5148, x5144);
    x46 += 1;
    /* VAR */ double x5151 = 0.0;
    double x5152 = x5151;
    double* x5153 = &x5152;
    char* x5154 = strntod_unchecked(x46, x5153);
    x46 = x5154;
    /* VAR */ char* x5156 = x46;
    while(1) {
      
      char x5157 = *x46;
      boolean_t x5158 = x5157!=('|');
      /* VAR */ boolean_t ite30695 = 0;
      if(x5158) {
        char x35072 = *x46;
        boolean_t x35073 = x35072!=('\n');
        ite30695 = x35073;
      } else {
        
        ite30695 = 0;
      };
      boolean_t x28647 = ite30695;
      if (!(x28647)) break; 
      
      x46 += 1;
    };
    char* x5164 = x5156;
    numeric_int_t x5165 = x46 - x5164;
    numeric_int_t x5166 = x5165+(1);
    char* x6865 = (char*)malloc(x5166 * sizeof(char));
    memset(x6865, 0, x5166 * sizeof(char));
    char* x5169 = x5156;
    char* x5170 = strncpy(x6865, x5169, x5165);
    x46 += 1;
    struct PARTRecord* x7735 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x7735, 0, 1 * sizeof(struct PARTRecord));
    x7735->P_PARTKEY = x5062; x7735->P_NAME = x6775; x7735->P_MFGR = x6791; x7735->P_BRAND = x6807; x7735->P_TYPE = x6823; x7735->P_SIZE = x5131; x7735->P_CONTAINER = x6844; x7735->P_RETAILPRICE = x5152; x7735->P_COMMENT = x6865;
    numeric_int_t x62 = x47;
    struct PARTRecord x6872 = *x7735;
    *(x6739 + x62) = x6872;
    struct PARTRecord* x6874 = &(x6739[x62]);
    x7735 = x6874;
    numeric_int_t x64 = x47;
    numeric_int_t x65 = x64+(1);
    x47 = x65;
  };
  char* x5179 = x5053;
  munmap(x5179, x5049);
  FILE* x5180 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x5181 = 0;
  numeric_int_t x5182 = x5181;
  numeric_int_t* x5183 = &x5182;
  numeric_int_t x5184 = fscanf(x5180, "%d", x5183);
  pclose(x5180);
  struct PARTSUPPRecord* x6887 = (struct PARTSUPPRecord*)malloc(x5182 * sizeof(struct PARTSUPPRecord));
  memset(x6887, 0, x5182 * sizeof(struct PARTSUPPRecord));
  numeric_int_t x5188 = O_RDONLY;
  numeric_int_t x5189 = open("/Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", x5188);
  /* VAR */ struct stat x5190 = x4855;
  struct stat x5191 = x5190;
  struct stat* x5192 = &x5191;
  numeric_int_t x5193 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", x5192);
  size_t x5194 = x5192->st_size;
  numeric_int_t x5195 = PROT_READ;
  numeric_int_t x5196 = MAP_PRIVATE;
  char* x5197 = mmap(NULL, x5194, x5195, x5196, x5189, 0);
  /* VAR */ char* x5198 = x5197;
  char* x71 = x5198;
  /* VAR */ numeric_int_t x72 = 0;
  while(1) {
    
    numeric_int_t x73 = x72;
    boolean_t x74 = x73<(x5182);
    /* VAR */ boolean_t ite30748 = 0;
    if(x74) {
      char x35124 = *x71;
      boolean_t x35125 = x35124!=('\0');
      ite30748 = x35125;
    } else {
      
      ite30748 = 0;
    };
    boolean_t x28693 = ite30748;
    if (!(x28693)) break; 
    
    /* VAR */ numeric_int_t x5206 = 0;
    numeric_int_t x5207 = x5206;
    numeric_int_t* x5208 = &x5207;
    char* x5209 = strntoi_unchecked(x71, x5208);
    x71 = x5209;
    /* VAR */ numeric_int_t x5211 = 0;
    numeric_int_t x5212 = x5211;
    numeric_int_t* x5213 = &x5212;
    char* x5214 = strntoi_unchecked(x71, x5213);
    x71 = x5214;
    /* VAR */ numeric_int_t x5216 = 0;
    numeric_int_t x5217 = x5216;
    numeric_int_t* x5218 = &x5217;
    char* x5219 = strntoi_unchecked(x71, x5218);
    x71 = x5219;
    /* VAR */ double x5221 = 0.0;
    double x5222 = x5221;
    double* x5223 = &x5222;
    char* x5224 = strntod_unchecked(x71, x5223);
    x71 = x5224;
    /* VAR */ char* x5226 = x71;
    while(1) {
      
      char x5227 = *x71;
      boolean_t x5228 = x5227!=('|');
      /* VAR */ boolean_t ite30781 = 0;
      if(x5228) {
        char x35156 = *x71;
        boolean_t x35157 = x35156!=('\n');
        ite30781 = x35157;
      } else {
        
        ite30781 = 0;
      };
      boolean_t x28719 = ite30781;
      if (!(x28719)) break; 
      
      x71 += 1;
    };
    char* x5234 = x5226;
    numeric_int_t x5235 = x71 - x5234;
    numeric_int_t x5236 = x5235+(1);
    char* x6938 = (char*)malloc(x5236 * sizeof(char));
    memset(x6938, 0, x5236 * sizeof(char));
    char* x5239 = x5226;
    char* x5240 = strncpy(x6938, x5239, x5235);
    x71 += 1;
    struct PARTSUPPRecord* x7810 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x7810, 0, 1 * sizeof(struct PARTSUPPRecord));
    x7810->PS_PARTKEY = x5207; x7810->PS_SUPPKEY = x5212; x7810->PS_AVAILQTY = x5217; x7810->PS_SUPPLYCOST = x5222; x7810->PS_COMMENT = x6938;
    numeric_int_t x83 = x72;
    struct PARTSUPPRecord x6945 = *x7810;
    *(x6887 + x83) = x6945;
    struct PARTSUPPRecord* x6947 = &(x6887[x83]);
    x7810 = x6947;
    numeric_int_t x85 = x72;
    numeric_int_t x86 = x85+(1);
    x72 = x86;
  };
  char* x5249 = x5198;
  munmap(x5249, x5194);
  FILE* x5250 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x5251 = 0;
  numeric_int_t x5252 = x5251;
  numeric_int_t* x5253 = &x5252;
  numeric_int_t x5254 = fscanf(x5250, "%d", x5253);
  pclose(x5250);
  struct LINEITEMRecord* x6960 = (struct LINEITEMRecord*)malloc(x5252 * sizeof(struct LINEITEMRecord));
  memset(x6960, 0, x5252 * sizeof(struct LINEITEMRecord));
  numeric_int_t x5258 = O_RDONLY;
  numeric_int_t x5259 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x5258);
  /* VAR */ struct stat x5260 = x4855;
  struct stat x5261 = x5260;
  struct stat* x5262 = &x5261;
  numeric_int_t x5263 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x5262);
  size_t x5264 = x5262->st_size;
  numeric_int_t x5265 = PROT_READ;
  numeric_int_t x5266 = MAP_PRIVATE;
  char* x5267 = mmap(NULL, x5264, x5265, x5266, x5259, 0);
  /* VAR */ char* x5268 = x5267;
  char* x92 = x5268;
  /* VAR */ numeric_int_t x93 = 0;
  while(1) {
    
    numeric_int_t x94 = x93;
    boolean_t x95 = x94<(x5252);
    /* VAR */ boolean_t ite30834 = 0;
    if(x95) {
      char x35208 = *x92;
      boolean_t x35209 = x35208!=('\0');
      ite30834 = x35209;
    } else {
      
      ite30834 = 0;
    };
    boolean_t x28765 = ite30834;
    if (!(x28765)) break; 
    
    /* VAR */ numeric_int_t x5276 = 0;
    numeric_int_t x5277 = x5276;
    numeric_int_t* x5278 = &x5277;
    char* x5279 = strntoi_unchecked(x92, x5278);
    x92 = x5279;
    /* VAR */ numeric_int_t x5281 = 0;
    numeric_int_t x5282 = x5281;
    numeric_int_t* x5283 = &x5282;
    char* x5284 = strntoi_unchecked(x92, x5283);
    x92 = x5284;
    /* VAR */ numeric_int_t x5286 = 0;
    numeric_int_t x5287 = x5286;
    numeric_int_t* x5288 = &x5287;
    char* x5289 = strntoi_unchecked(x92, x5288);
    x92 = x5289;
    /* VAR */ numeric_int_t x5291 = 0;
    numeric_int_t x5292 = x5291;
    numeric_int_t* x5293 = &x5292;
    char* x5294 = strntoi_unchecked(x92, x5293);
    x92 = x5294;
    /* VAR */ double x5296 = 0.0;
    double x5297 = x5296;
    double* x5298 = &x5297;
    char* x5299 = strntod_unchecked(x92, x5298);
    x92 = x5299;
    /* VAR */ double x5301 = 0.0;
    double x5302 = x5301;
    double* x5303 = &x5302;
    char* x5304 = strntod_unchecked(x92, x5303);
    x92 = x5304;
    /* VAR */ double x5306 = 0.0;
    double x5307 = x5306;
    double* x5308 = &x5307;
    char* x5309 = strntod_unchecked(x92, x5308);
    x92 = x5309;
    /* VAR */ double x5311 = 0.0;
    double x5312 = x5311;
    double* x5313 = &x5312;
    char* x5314 = strntod_unchecked(x92, x5313);
    x92 = x5314;
    char x5316 = *x92;
    /* VAR */ char x5317 = x5316;
    x92 += 1;
    x92 += 1;
    char x5320 = x5317;
    char x5321 = *x92;
    /* VAR */ char x5322 = x5321;
    x92 += 1;
    x92 += 1;
    char x5325 = x5322;
    /* VAR */ numeric_int_t x5326 = 0;
    numeric_int_t x5327 = x5326;
    numeric_int_t* x5328 = &x5327;
    char* x5329 = strntoi_unchecked(x92, x5328);
    x92 = x5329;
    /* VAR */ numeric_int_t x5331 = 0;
    numeric_int_t x5332 = x5331;
    numeric_int_t* x5333 = &x5332;
    char* x5334 = strntoi_unchecked(x92, x5333);
    x92 = x5334;
    /* VAR */ numeric_int_t x5336 = 0;
    numeric_int_t x5337 = x5336;
    numeric_int_t* x5338 = &x5337;
    char* x5339 = strntoi_unchecked(x92, x5338);
    x92 = x5339;
    numeric_int_t x5341 = x5327*(10000);
    numeric_int_t x5342 = x5332*(100);
    numeric_int_t x5343 = x5341+(x5342);
    numeric_int_t x5344 = x5343+(x5337);
    /* VAR */ numeric_int_t x5345 = 0;
    numeric_int_t x5346 = x5345;
    numeric_int_t* x5347 = &x5346;
    char* x5348 = strntoi_unchecked(x92, x5347);
    x92 = x5348;
    /* VAR */ numeric_int_t x5350 = 0;
    numeric_int_t x5351 = x5350;
    numeric_int_t* x5352 = &x5351;
    char* x5353 = strntoi_unchecked(x92, x5352);
    x92 = x5353;
    /* VAR */ numeric_int_t x5355 = 0;
    numeric_int_t x5356 = x5355;
    numeric_int_t* x5357 = &x5356;
    char* x5358 = strntoi_unchecked(x92, x5357);
    x92 = x5358;
    numeric_int_t x5360 = x5346*(10000);
    numeric_int_t x5361 = x5351*(100);
    numeric_int_t x5362 = x5360+(x5361);
    numeric_int_t x5363 = x5362+(x5356);
    /* VAR */ numeric_int_t x5364 = 0;
    numeric_int_t x5365 = x5364;
    numeric_int_t* x5366 = &x5365;
    char* x5367 = strntoi_unchecked(x92, x5366);
    x92 = x5367;
    /* VAR */ numeric_int_t x5369 = 0;
    numeric_int_t x5370 = x5369;
    numeric_int_t* x5371 = &x5370;
    char* x5372 = strntoi_unchecked(x92, x5371);
    x92 = x5372;
    /* VAR */ numeric_int_t x5374 = 0;
    numeric_int_t x5375 = x5374;
    numeric_int_t* x5376 = &x5375;
    char* x5377 = strntoi_unchecked(x92, x5376);
    x92 = x5377;
    numeric_int_t x5379 = x5365*(10000);
    numeric_int_t x5380 = x5370*(100);
    numeric_int_t x5381 = x5379+(x5380);
    numeric_int_t x5382 = x5381+(x5375);
    /* VAR */ char* x5383 = x92;
    while(1) {
      
      char x5384 = *x92;
      boolean_t x5385 = x5384!=('|');
      /* VAR */ boolean_t ite30954 = 0;
      if(x5385) {
        char x35327 = *x92;
        boolean_t x35328 = x35327!=('\n');
        ite30954 = x35328;
      } else {
        
        ite30954 = 0;
      };
      boolean_t x28878 = ite30954;
      if (!(x28878)) break; 
      
      x92 += 1;
    };
    char* x5391 = x5383;
    numeric_int_t x5392 = x92 - x5391;
    numeric_int_t x5393 = x5392+(1);
    char* x7098 = (char*)malloc(x5393 * sizeof(char));
    memset(x7098, 0, x5393 * sizeof(char));
    char* x5396 = x5383;
    char* x5397 = strncpy(x7098, x5396, x5392);
    x92 += 1;
    /* VAR */ char* x5399 = x92;
    while(1) {
      
      char x5400 = *x92;
      boolean_t x5401 = x5400!=('|');
      /* VAR */ boolean_t ite30975 = 0;
      if(x5401) {
        char x35347 = *x92;
        boolean_t x35348 = x35347!=('\n');
        ite30975 = x35348;
      } else {
        
        ite30975 = 0;
      };
      boolean_t x28892 = ite30975;
      if (!(x28892)) break; 
      
      x92 += 1;
    };
    char* x5407 = x5399;
    numeric_int_t x5408 = x92 - x5407;
    numeric_int_t x5409 = x5408+(1);
    char* x7114 = (char*)malloc(x5409 * sizeof(char));
    memset(x7114, 0, x5409 * sizeof(char));
    char* x5412 = x5399;
    char* x5413 = strncpy(x7114, x5412, x5408);
    x92 += 1;
    /* VAR */ char* x5415 = x92;
    while(1) {
      
      char x5416 = *x92;
      boolean_t x5417 = x5416!=('|');
      /* VAR */ boolean_t ite30996 = 0;
      if(x5417) {
        char x35367 = *x92;
        boolean_t x35368 = x35367!=('\n');
        ite30996 = x35368;
      } else {
        
        ite30996 = 0;
      };
      boolean_t x28906 = ite30996;
      if (!(x28906)) break; 
      
      x92 += 1;
    };
    char* x5423 = x5415;
    numeric_int_t x5424 = x92 - x5423;
    numeric_int_t x5425 = x5424+(1);
    char* x7130 = (char*)malloc(x5425 * sizeof(char));
    memset(x7130, 0, x5425 * sizeof(char));
    char* x5428 = x5415;
    char* x5429 = strncpy(x7130, x5428, x5424);
    x92 += 1;
    struct LINEITEMRecord* x8004 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8004, 0, 1 * sizeof(struct LINEITEMRecord));
    x8004->L_ORDERKEY = x5277; x8004->L_PARTKEY = x5282; x8004->L_SUPPKEY = x5287; x8004->L_LINENUMBER = x5292; x8004->L_QUANTITY = x5297; x8004->L_EXTENDEDPRICE = x5302; x8004->L_DISCOUNT = x5307; x8004->L_TAX = x5312; x8004->L_RETURNFLAG = x5320; x8004->L_LINESTATUS = x5325; x8004->L_SHIPDATE = x5344; x8004->L_COMMITDATE = x5363; x8004->L_RECEIPTDATE = x5382; x8004->L_SHIPINSTRUCT = x7098; x8004->L_SHIPMODE = x7114; x8004->L_COMMENT = x7130;
    numeric_int_t x115 = x93;
    struct LINEITEMRecord x7137 = *x8004;
    *(x6960 + x115) = x7137;
    struct LINEITEMRecord* x7139 = &(x6960[x115]);
    x8004 = x7139;
    numeric_int_t x117 = x93;
    numeric_int_t x118 = x117+(1);
    x93 = x118;
  };
  char* x5438 = x5268;
  munmap(x5438, x5264);
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
