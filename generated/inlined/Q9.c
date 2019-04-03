#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


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

struct NATIONRecord {
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

struct AGGRecord_Q9GRPRecord {
  struct Q9GRPRecord* key;
  double* aggs;
};

struct Q9GRPRecord {
  char* NATION;
  numeric_int_t O_YEAR;
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

struct PARTSUPPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
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
  FILE* x6705 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", "r");
  /* VAR */ numeric_int_t x6706 = 0;
  numeric_int_t x6707 = x6706;
  numeric_int_t* x6708 = &x6707;
  numeric_int_t x6709 = fscanf(x6705, "%d", x6708);
  pclose(x6705);
  struct PARTRecord* x8885 = (struct PARTRecord*)malloc(x6707 * sizeof(struct PARTRecord));
  memset(x8885, 0, x6707 * sizeof(struct PARTRecord));
  numeric_int_t x6713 = O_RDONLY;
  numeric_int_t x6714 = open("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x6713);
  struct stat x6715 = (struct stat){0};
  /* VAR */ struct stat x6716 = x6715;
  struct stat x6717 = x6716;
  struct stat* x6718 = &x6717;
  numeric_int_t x6719 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x6718);
  size_t x6720 = x6718->st_size;
  numeric_int_t x6721 = PROT_READ;
  numeric_int_t x6722 = MAP_PRIVATE;
  char* x6723 = mmap(NULL, x6720, x6721, x6722, x6714, 0);
  /* VAR */ char* x6724 = x6723;
  char* x3 = x6724;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x6707);
    /* VAR */ boolean_t ite40960 = 0;
    if(x6) {
      char x47027 = *x3;
      boolean_t x47028 = x47027!=('\0');
      ite40960 = x47028;
    } else {
      
      ite40960 = 0;
    };
    boolean_t x38206 = ite40960;
    if (!(x38206)) break; 
    
    /* VAR */ numeric_int_t x6732 = 0;
    numeric_int_t x6733 = x6732;
    numeric_int_t* x6734 = &x6733;
    char* x6735 = strntoi_unchecked(x3, x6734);
    x3 = x6735;
    /* VAR */ char* x6737 = x3;
    while(1) {
      
      char x6738 = *x3;
      boolean_t x6739 = x6738!=('|');
      /* VAR */ boolean_t ite40978 = 0;
      if(x6739) {
        char x47044 = *x3;
        boolean_t x47045 = x47044!=('\n');
        ite40978 = x47045;
      } else {
        
        ite40978 = 0;
      };
      boolean_t x38217 = ite40978;
      if (!(x38217)) break; 
      
      x3 += 1;
    };
    char* x6745 = x6737;
    numeric_int_t x6746 = x3 - x6745;
    numeric_int_t x6747 = x6746+(1);
    char* x8922 = (char*)malloc(x6747 * sizeof(char));
    memset(x8922, 0, x6747 * sizeof(char));
    char* x6750 = x6737;
    char* x6751 = strncpy(x8922, x6750, x6746);
    x3 += 1;
    /* VAR */ char* x6753 = x3;
    while(1) {
      
      char x6754 = *x3;
      boolean_t x6755 = x6754!=('|');
      /* VAR */ boolean_t ite40999 = 0;
      if(x6755) {
        char x47064 = *x3;
        boolean_t x47065 = x47064!=('\n');
        ite40999 = x47065;
      } else {
        
        ite40999 = 0;
      };
      boolean_t x38231 = ite40999;
      if (!(x38231)) break; 
      
      x3 += 1;
    };
    char* x6761 = x6753;
    numeric_int_t x6762 = x3 - x6761;
    numeric_int_t x6763 = x6762+(1);
    char* x8938 = (char*)malloc(x6763 * sizeof(char));
    memset(x8938, 0, x6763 * sizeof(char));
    char* x6766 = x6753;
    char* x6767 = strncpy(x8938, x6766, x6762);
    x3 += 1;
    /* VAR */ char* x6769 = x3;
    while(1) {
      
      char x6770 = *x3;
      boolean_t x6771 = x6770!=('|');
      /* VAR */ boolean_t ite41020 = 0;
      if(x6771) {
        char x47084 = *x3;
        boolean_t x47085 = x47084!=('\n');
        ite41020 = x47085;
      } else {
        
        ite41020 = 0;
      };
      boolean_t x38245 = ite41020;
      if (!(x38245)) break; 
      
      x3 += 1;
    };
    char* x6777 = x6769;
    numeric_int_t x6778 = x3 - x6777;
    numeric_int_t x6779 = x6778+(1);
    char* x8954 = (char*)malloc(x6779 * sizeof(char));
    memset(x8954, 0, x6779 * sizeof(char));
    char* x6782 = x6769;
    char* x6783 = strncpy(x8954, x6782, x6778);
    x3 += 1;
    /* VAR */ char* x6785 = x3;
    while(1) {
      
      char x6786 = *x3;
      boolean_t x6787 = x6786!=('|');
      /* VAR */ boolean_t ite41041 = 0;
      if(x6787) {
        char x47104 = *x3;
        boolean_t x47105 = x47104!=('\n');
        ite41041 = x47105;
      } else {
        
        ite41041 = 0;
      };
      boolean_t x38259 = ite41041;
      if (!(x38259)) break; 
      
      x3 += 1;
    };
    char* x6793 = x6785;
    numeric_int_t x6794 = x3 - x6793;
    numeric_int_t x6795 = x6794+(1);
    char* x8970 = (char*)malloc(x6795 * sizeof(char));
    memset(x8970, 0, x6795 * sizeof(char));
    char* x6798 = x6785;
    char* x6799 = strncpy(x8970, x6798, x6794);
    x3 += 1;
    /* VAR */ numeric_int_t x6801 = 0;
    numeric_int_t x6802 = x6801;
    numeric_int_t* x6803 = &x6802;
    char* x6804 = strntoi_unchecked(x3, x6803);
    x3 = x6804;
    /* VAR */ char* x6806 = x3;
    while(1) {
      
      char x6807 = *x3;
      boolean_t x6808 = x6807!=('|');
      /* VAR */ boolean_t ite41067 = 0;
      if(x6808) {
        char x47129 = *x3;
        boolean_t x47130 = x47129!=('\n');
        ite41067 = x47130;
      } else {
        
        ite41067 = 0;
      };
      boolean_t x38278 = ite41067;
      if (!(x38278)) break; 
      
      x3 += 1;
    };
    char* x6814 = x6806;
    numeric_int_t x6815 = x3 - x6814;
    numeric_int_t x6816 = x6815+(1);
    char* x8991 = (char*)malloc(x6816 * sizeof(char));
    memset(x8991, 0, x6816 * sizeof(char));
    char* x6819 = x6806;
    char* x6820 = strncpy(x8991, x6819, x6815);
    x3 += 1;
    /* VAR */ double x6822 = 0.0;
    double x6823 = x6822;
    double* x6824 = &x6823;
    char* x6825 = strntod_unchecked(x3, x6824);
    x3 = x6825;
    /* VAR */ char* x6827 = x3;
    while(1) {
      
      char x6828 = *x3;
      boolean_t x6829 = x6828!=('|');
      /* VAR */ boolean_t ite41093 = 0;
      if(x6829) {
        char x47154 = *x3;
        boolean_t x47155 = x47154!=('\n');
        ite41093 = x47155;
      } else {
        
        ite41093 = 0;
      };
      boolean_t x38297 = ite41093;
      if (!(x38297)) break; 
      
      x3 += 1;
    };
    char* x6835 = x6827;
    numeric_int_t x6836 = x3 - x6835;
    numeric_int_t x6837 = x6836+(1);
    char* x9012 = (char*)malloc(x6837 * sizeof(char));
    memset(x9012, 0, x6837 * sizeof(char));
    char* x6840 = x6827;
    char* x6841 = strncpy(x9012, x6840, x6836);
    x3 += 1;
    struct PARTRecord* x10122 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x10122, 0, 1 * sizeof(struct PARTRecord));
    x10122->P_PARTKEY = x6733; x10122->P_NAME = x8922; x10122->P_MFGR = x8938; x10122->P_BRAND = x8954; x10122->P_TYPE = x8970; x10122->P_SIZE = x6802; x10122->P_CONTAINER = x8991; x10122->P_RETAILPRICE = x6823; x10122->P_COMMENT = x9012;
    numeric_int_t x19 = x4;
    struct PARTRecord x9019 = *x10122;
    *(x8885 + x19) = x9019;
    struct PARTRecord* x9021 = &(x8885[x19]);
    x10122 = x9021;
    numeric_int_t x21 = x4;
    numeric_int_t x22 = x21+(1);
    x4 = x22;
  };
  char* x6850 = x6724;
  munmap(x6850, x6720);
  FILE* x6851 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x6852 = 0;
  numeric_int_t x6853 = x6852;
  numeric_int_t* x6854 = &x6853;
  numeric_int_t x6855 = fscanf(x6851, "%d", x6854);
  pclose(x6851);
  struct NATIONRecord* x9034 = (struct NATIONRecord*)malloc(x6853 * sizeof(struct NATIONRecord));
  memset(x9034, 0, x6853 * sizeof(struct NATIONRecord));
  numeric_int_t x6859 = O_RDONLY;
  numeric_int_t x6860 = open("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x6859);
  /* VAR */ struct stat x6861 = x6715;
  struct stat x6862 = x6861;
  struct stat* x6863 = &x6862;
  numeric_int_t x6864 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x6863);
  size_t x6865 = x6863->st_size;
  numeric_int_t x6866 = PROT_READ;
  numeric_int_t x6867 = MAP_PRIVATE;
  char* x6868 = mmap(NULL, x6865, x6866, x6867, x6860, 0);
  /* VAR */ char* x6869 = x6868;
  char* x28 = x6869;
  /* VAR */ numeric_int_t x29 = 0;
  while(1) {
    
    numeric_int_t x30 = x29;
    boolean_t x31 = x30<(x6853);
    /* VAR */ boolean_t ite41146 = 0;
    if(x31) {
      char x47206 = *x28;
      boolean_t x47207 = x47206!=('\0');
      ite41146 = x47207;
    } else {
      
      ite41146 = 0;
    };
    boolean_t x38343 = ite41146;
    if (!(x38343)) break; 
    
    /* VAR */ numeric_int_t x6877 = 0;
    numeric_int_t x6878 = x6877;
    numeric_int_t* x6879 = &x6878;
    char* x6880 = strntoi_unchecked(x28, x6879);
    x28 = x6880;
    /* VAR */ char* x6882 = x28;
    while(1) {
      
      char x6883 = *x28;
      boolean_t x6884 = x6883!=('|');
      /* VAR */ boolean_t ite41164 = 0;
      if(x6884) {
        char x47223 = *x28;
        boolean_t x47224 = x47223!=('\n');
        ite41164 = x47224;
      } else {
        
        ite41164 = 0;
      };
      boolean_t x38354 = ite41164;
      if (!(x38354)) break; 
      
      x28 += 1;
    };
    char* x6890 = x6882;
    numeric_int_t x6891 = x28 - x6890;
    numeric_int_t x6892 = x6891+(1);
    char* x9070 = (char*)malloc(x6892 * sizeof(char));
    memset(x9070, 0, x6892 * sizeof(char));
    char* x6895 = x6882;
    char* x6896 = strncpy(x9070, x6895, x6891);
    x28 += 1;
    /* VAR */ numeric_int_t x6898 = 0;
    numeric_int_t x6899 = x6898;
    numeric_int_t* x6900 = &x6899;
    char* x6901 = strntoi_unchecked(x28, x6900);
    x28 = x6901;
    /* VAR */ char* x6903 = x28;
    while(1) {
      
      char x6904 = *x28;
      boolean_t x6905 = x6904!=('|');
      /* VAR */ boolean_t ite41190 = 0;
      if(x6905) {
        char x47248 = *x28;
        boolean_t x47249 = x47248!=('\n');
        ite41190 = x47249;
      } else {
        
        ite41190 = 0;
      };
      boolean_t x38373 = ite41190;
      if (!(x38373)) break; 
      
      x28 += 1;
    };
    char* x6911 = x6903;
    numeric_int_t x6912 = x28 - x6911;
    numeric_int_t x6913 = x6912+(1);
    char* x9091 = (char*)malloc(x6913 * sizeof(char));
    memset(x9091, 0, x6913 * sizeof(char));
    char* x6916 = x6903;
    char* x6917 = strncpy(x9091, x6916, x6912);
    x28 += 1;
    struct NATIONRecord* x10203 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x10203, 0, 1 * sizeof(struct NATIONRecord));
    x10203->N_NATIONKEY = x6878; x10203->N_NAME = x9070; x10203->N_REGIONKEY = x6899; x10203->N_COMMENT = x9091;
    numeric_int_t x39 = x29;
    struct NATIONRecord x9098 = *x10203;
    *(x9034 + x39) = x9098;
    struct NATIONRecord* x9100 = &(x9034[x39]);
    x10203 = x9100;
    numeric_int_t x41 = x29;
    numeric_int_t x42 = x41+(1);
    x29 = x42;
  };
  char* x6926 = x6869;
  munmap(x6926, x6865);
  FILE* x6927 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x6928 = 0;
  numeric_int_t x6929 = x6928;
  numeric_int_t* x6930 = &x6929;
  numeric_int_t x6931 = fscanf(x6927, "%d", x6930);
  pclose(x6927);
  struct ORDERSRecord* x9113 = (struct ORDERSRecord*)malloc(x6929 * sizeof(struct ORDERSRecord));
  memset(x9113, 0, x6929 * sizeof(struct ORDERSRecord));
  numeric_int_t x6935 = O_RDONLY;
  numeric_int_t x6936 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x6935);
  /* VAR */ struct stat x6937 = x6715;
  struct stat x6938 = x6937;
  struct stat* x6939 = &x6938;
  numeric_int_t x6940 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x6939);
  size_t x6941 = x6939->st_size;
  numeric_int_t x6942 = PROT_READ;
  numeric_int_t x6943 = MAP_PRIVATE;
  char* x6944 = mmap(NULL, x6941, x6942, x6943, x6936, 0);
  /* VAR */ char* x6945 = x6944;
  char* x48 = x6945;
  /* VAR */ numeric_int_t x49 = 0;
  while(1) {
    
    numeric_int_t x50 = x49;
    boolean_t x51 = x50<(x6929);
    /* VAR */ boolean_t ite41243 = 0;
    if(x51) {
      char x47300 = *x48;
      boolean_t x47301 = x47300!=('\0');
      ite41243 = x47301;
    } else {
      
      ite41243 = 0;
    };
    boolean_t x38419 = ite41243;
    if (!(x38419)) break; 
    
    /* VAR */ numeric_int_t x6953 = 0;
    numeric_int_t x6954 = x6953;
    numeric_int_t* x6955 = &x6954;
    char* x6956 = strntoi_unchecked(x48, x6955);
    x48 = x6956;
    /* VAR */ numeric_int_t x6958 = 0;
    numeric_int_t x6959 = x6958;
    numeric_int_t* x6960 = &x6959;
    char* x6961 = strntoi_unchecked(x48, x6960);
    x48 = x6961;
    char x6963 = *x48;
    /* VAR */ char x6964 = x6963;
    x48 += 1;
    x48 += 1;
    char x6967 = x6964;
    /* VAR */ double x6968 = 0.0;
    double x6969 = x6968;
    double* x6970 = &x6969;
    char* x6971 = strntod_unchecked(x48, x6970);
    x48 = x6971;
    /* VAR */ numeric_int_t x6973 = 0;
    numeric_int_t x6974 = x6973;
    numeric_int_t* x6975 = &x6974;
    char* x6976 = strntoi_unchecked(x48, x6975);
    x48 = x6976;
    /* VAR */ numeric_int_t x6978 = 0;
    numeric_int_t x6979 = x6978;
    numeric_int_t* x6980 = &x6979;
    char* x6981 = strntoi_unchecked(x48, x6980);
    x48 = x6981;
    /* VAR */ numeric_int_t x6983 = 0;
    numeric_int_t x6984 = x6983;
    numeric_int_t* x6985 = &x6984;
    char* x6986 = strntoi_unchecked(x48, x6985);
    x48 = x6986;
    numeric_int_t x6988 = x6974*(10000);
    numeric_int_t x6989 = x6979*(100);
    numeric_int_t x6990 = x6988+(x6989);
    numeric_int_t x6991 = x6990+(x6984);
    /* VAR */ char* x6992 = x48;
    while(1) {
      
      char x6993 = *x48;
      boolean_t x6994 = x6993!=('|');
      /* VAR */ boolean_t ite41295 = 0;
      if(x6994) {
        char x47351 = *x48;
        boolean_t x47352 = x47351!=('\n');
        ite41295 = x47352;
      } else {
        
        ite41295 = 0;
      };
      boolean_t x38464 = ite41295;
      if (!(x38464)) break; 
      
      x48 += 1;
    };
    char* x7000 = x6992;
    numeric_int_t x7001 = x48 - x7000;
    numeric_int_t x7002 = x7001+(1);
    char* x9183 = (char*)malloc(x7002 * sizeof(char));
    memset(x9183, 0, x7002 * sizeof(char));
    char* x7005 = x6992;
    char* x7006 = strncpy(x9183, x7005, x7001);
    x48 += 1;
    /* VAR */ char* x7008 = x48;
    while(1) {
      
      char x7009 = *x48;
      boolean_t x7010 = x7009!=('|');
      /* VAR */ boolean_t ite41316 = 0;
      if(x7010) {
        char x47371 = *x48;
        boolean_t x47372 = x47371!=('\n');
        ite41316 = x47372;
      } else {
        
        ite41316 = 0;
      };
      boolean_t x38478 = ite41316;
      if (!(x38478)) break; 
      
      x48 += 1;
    };
    char* x7016 = x7008;
    numeric_int_t x7017 = x48 - x7016;
    numeric_int_t x7018 = x7017+(1);
    char* x9199 = (char*)malloc(x7018 * sizeof(char));
    memset(x9199, 0, x7018 * sizeof(char));
    char* x7021 = x7008;
    char* x7022 = strncpy(x9199, x7021, x7017);
    x48 += 1;
    /* VAR */ numeric_int_t x7024 = 0;
    numeric_int_t x7025 = x7024;
    numeric_int_t* x7026 = &x7025;
    char* x7027 = strntoi_unchecked(x48, x7026);
    x48 = x7027;
    /* VAR */ char* x7029 = x48;
    while(1) {
      
      char x7030 = *x48;
      boolean_t x7031 = x7030!=('|');
      /* VAR */ boolean_t ite41342 = 0;
      if(x7031) {
        char x47396 = *x48;
        boolean_t x47397 = x47396!=('\n');
        ite41342 = x47397;
      } else {
        
        ite41342 = 0;
      };
      boolean_t x38497 = ite41342;
      if (!(x38497)) break; 
      
      x48 += 1;
    };
    char* x7037 = x7029;
    numeric_int_t x7038 = x48 - x7037;
    numeric_int_t x7039 = x7038+(1);
    char* x9220 = (char*)malloc(x7039 * sizeof(char));
    memset(x9220, 0, x7039 * sizeof(char));
    char* x7042 = x7029;
    char* x7043 = strncpy(x9220, x7042, x7038);
    x48 += 1;
    struct ORDERSRecord* x10334 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x10334, 0, 1 * sizeof(struct ORDERSRecord));
    x10334->O_ORDERKEY = x6954; x10334->O_CUSTKEY = x6959; x10334->O_ORDERSTATUS = x6967; x10334->O_TOTALPRICE = x6969; x10334->O_ORDERDATE = x6991; x10334->O_ORDERPRIORITY = x9183; x10334->O_CLERK = x9199; x10334->O_SHIPPRIORITY = x7025; x10334->O_COMMENT = x9220;
    numeric_int_t x64 = x49;
    struct ORDERSRecord x9227 = *x10334;
    *(x9113 + x64) = x9227;
    struct ORDERSRecord* x9229 = &(x9113[x64]);
    x10334 = x9229;
    numeric_int_t x66 = x49;
    numeric_int_t x67 = x66+(1);
    x49 = x67;
  };
  char* x7052 = x6945;
  munmap(x7052, x6941);
  FILE* x7053 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x7054 = 0;
  numeric_int_t x7055 = x7054;
  numeric_int_t* x7056 = &x7055;
  numeric_int_t x7057 = fscanf(x7053, "%d", x7056);
  pclose(x7053);
  struct PARTSUPPRecord* x9242 = (struct PARTSUPPRecord*)malloc(x7055 * sizeof(struct PARTSUPPRecord));
  memset(x9242, 0, x7055 * sizeof(struct PARTSUPPRecord));
  numeric_int_t x7061 = O_RDONLY;
  numeric_int_t x7062 = open("/Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", x7061);
  /* VAR */ struct stat x7063 = x6715;
  struct stat x7064 = x7063;
  struct stat* x7065 = &x7064;
  numeric_int_t x7066 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", x7065);
  size_t x7067 = x7065->st_size;
  numeric_int_t x7068 = PROT_READ;
  numeric_int_t x7069 = MAP_PRIVATE;
  char* x7070 = mmap(NULL, x7067, x7068, x7069, x7062, 0);
  /* VAR */ char* x7071 = x7070;
  char* x73 = x7071;
  /* VAR */ numeric_int_t x74 = 0;
  while(1) {
    
    numeric_int_t x75 = x74;
    boolean_t x76 = x75<(x7055);
    /* VAR */ boolean_t ite41395 = 0;
    if(x76) {
      char x47448 = *x73;
      boolean_t x47449 = x47448!=('\0');
      ite41395 = x47449;
    } else {
      
      ite41395 = 0;
    };
    boolean_t x38543 = ite41395;
    if (!(x38543)) break; 
    
    /* VAR */ numeric_int_t x7079 = 0;
    numeric_int_t x7080 = x7079;
    numeric_int_t* x7081 = &x7080;
    char* x7082 = strntoi_unchecked(x73, x7081);
    x73 = x7082;
    /* VAR */ numeric_int_t x7084 = 0;
    numeric_int_t x7085 = x7084;
    numeric_int_t* x7086 = &x7085;
    char* x7087 = strntoi_unchecked(x73, x7086);
    x73 = x7087;
    /* VAR */ numeric_int_t x7089 = 0;
    numeric_int_t x7090 = x7089;
    numeric_int_t* x7091 = &x7090;
    char* x7092 = strntoi_unchecked(x73, x7091);
    x73 = x7092;
    /* VAR */ double x7094 = 0.0;
    double x7095 = x7094;
    double* x7096 = &x7095;
    char* x7097 = strntod_unchecked(x73, x7096);
    x73 = x7097;
    /* VAR */ char* x7099 = x73;
    while(1) {
      
      char x7100 = *x73;
      boolean_t x7101 = x7100!=('|');
      /* VAR */ boolean_t ite41428 = 0;
      if(x7101) {
        char x47480 = *x73;
        boolean_t x47481 = x47480!=('\n');
        ite41428 = x47481;
      } else {
        
        ite41428 = 0;
      };
      boolean_t x38569 = ite41428;
      if (!(x38569)) break; 
      
      x73 += 1;
    };
    char* x7107 = x7099;
    numeric_int_t x7108 = x73 - x7107;
    numeric_int_t x7109 = x7108+(1);
    char* x9293 = (char*)malloc(x7109 * sizeof(char));
    memset(x9293, 0, x7109 * sizeof(char));
    char* x7112 = x7099;
    char* x7113 = strncpy(x9293, x7112, x7108);
    x73 += 1;
    struct PARTSUPPRecord* x10409 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x10409, 0, 1 * sizeof(struct PARTSUPPRecord));
    x10409->PS_PARTKEY = x7080; x10409->PS_SUPPKEY = x7085; x10409->PS_AVAILQTY = x7090; x10409->PS_SUPPLYCOST = x7095; x10409->PS_COMMENT = x9293;
    numeric_int_t x85 = x74;
    struct PARTSUPPRecord x9300 = *x10409;
    *(x9242 + x85) = x9300;
    struct PARTSUPPRecord* x9302 = &(x9242[x85]);
    x10409 = x9302;
    numeric_int_t x87 = x74;
    numeric_int_t x88 = x87+(1);
    x74 = x88;
  };
  char* x7122 = x7071;
  munmap(x7122, x7067);
  FILE* x7123 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x7124 = 0;
  numeric_int_t x7125 = x7124;
  numeric_int_t* x7126 = &x7125;
  numeric_int_t x7127 = fscanf(x7123, "%d", x7126);
  pclose(x7123);
  struct SUPPLIERRecord* x9315 = (struct SUPPLIERRecord*)malloc(x7125 * sizeof(struct SUPPLIERRecord));
  memset(x9315, 0, x7125 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x7131 = O_RDONLY;
  numeric_int_t x7132 = open("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x7131);
  /* VAR */ struct stat x7133 = x6715;
  struct stat x7134 = x7133;
  struct stat* x7135 = &x7134;
  numeric_int_t x7136 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x7135);
  size_t x7137 = x7135->st_size;
  numeric_int_t x7138 = PROT_READ;
  numeric_int_t x7139 = MAP_PRIVATE;
  char* x7140 = mmap(NULL, x7137, x7138, x7139, x7132, 0);
  /* VAR */ char* x7141 = x7140;
  char* x94 = x7141;
  /* VAR */ numeric_int_t x95 = 0;
  while(1) {
    
    numeric_int_t x96 = x95;
    boolean_t x97 = x96<(x7125);
    /* VAR */ boolean_t ite41481 = 0;
    if(x97) {
      char x47532 = *x94;
      boolean_t x47533 = x47532!=('\0');
      ite41481 = x47533;
    } else {
      
      ite41481 = 0;
    };
    boolean_t x38615 = ite41481;
    if (!(x38615)) break; 
    
    /* VAR */ numeric_int_t x7149 = 0;
    numeric_int_t x7150 = x7149;
    numeric_int_t* x7151 = &x7150;
    char* x7152 = strntoi_unchecked(x94, x7151);
    x94 = x7152;
    /* VAR */ char* x7154 = x94;
    while(1) {
      
      char x7155 = *x94;
      boolean_t x7156 = x7155!=('|');
      /* VAR */ boolean_t ite41499 = 0;
      if(x7156) {
        char x47549 = *x94;
        boolean_t x47550 = x47549!=('\n');
        ite41499 = x47550;
      } else {
        
        ite41499 = 0;
      };
      boolean_t x38626 = ite41499;
      if (!(x38626)) break; 
      
      x94 += 1;
    };
    char* x7162 = x7154;
    numeric_int_t x7163 = x94 - x7162;
    numeric_int_t x7164 = x7163+(1);
    char* x9351 = (char*)malloc(x7164 * sizeof(char));
    memset(x9351, 0, x7164 * sizeof(char));
    char* x7167 = x7154;
    char* x7168 = strncpy(x9351, x7167, x7163);
    x94 += 1;
    /* VAR */ char* x7170 = x94;
    while(1) {
      
      char x7171 = *x94;
      boolean_t x7172 = x7171!=('|');
      /* VAR */ boolean_t ite41520 = 0;
      if(x7172) {
        char x47569 = *x94;
        boolean_t x47570 = x47569!=('\n');
        ite41520 = x47570;
      } else {
        
        ite41520 = 0;
      };
      boolean_t x38640 = ite41520;
      if (!(x38640)) break; 
      
      x94 += 1;
    };
    char* x7178 = x7170;
    numeric_int_t x7179 = x94 - x7178;
    numeric_int_t x7180 = x7179+(1);
    char* x9367 = (char*)malloc(x7180 * sizeof(char));
    memset(x9367, 0, x7180 * sizeof(char));
    char* x7183 = x7170;
    char* x7184 = strncpy(x9367, x7183, x7179);
    x94 += 1;
    /* VAR */ numeric_int_t x7186 = 0;
    numeric_int_t x7187 = x7186;
    numeric_int_t* x7188 = &x7187;
    char* x7189 = strntoi_unchecked(x94, x7188);
    x94 = x7189;
    /* VAR */ char* x7191 = x94;
    while(1) {
      
      char x7192 = *x94;
      boolean_t x7193 = x7192!=('|');
      /* VAR */ boolean_t ite41546 = 0;
      if(x7193) {
        char x47594 = *x94;
        boolean_t x47595 = x47594!=('\n');
        ite41546 = x47595;
      } else {
        
        ite41546 = 0;
      };
      boolean_t x38659 = ite41546;
      if (!(x38659)) break; 
      
      x94 += 1;
    };
    char* x7199 = x7191;
    numeric_int_t x7200 = x94 - x7199;
    numeric_int_t x7201 = x7200+(1);
    char* x9388 = (char*)malloc(x7201 * sizeof(char));
    memset(x9388, 0, x7201 * sizeof(char));
    char* x7204 = x7191;
    char* x7205 = strncpy(x9388, x7204, x7200);
    x94 += 1;
    /* VAR */ double x7207 = 0.0;
    double x7208 = x7207;
    double* x7209 = &x7208;
    char* x7210 = strntod_unchecked(x94, x7209);
    x94 = x7210;
    /* VAR */ char* x7212 = x94;
    while(1) {
      
      char x7213 = *x94;
      boolean_t x7214 = x7213!=('|');
      /* VAR */ boolean_t ite41572 = 0;
      if(x7214) {
        char x47619 = *x94;
        boolean_t x47620 = x47619!=('\n');
        ite41572 = x47620;
      } else {
        
        ite41572 = 0;
      };
      boolean_t x38678 = ite41572;
      if (!(x38678)) break; 
      
      x94 += 1;
    };
    char* x7220 = x7212;
    numeric_int_t x7221 = x94 - x7220;
    numeric_int_t x7222 = x7221+(1);
    char* x9409 = (char*)malloc(x7222 * sizeof(char));
    memset(x9409, 0, x7222 * sizeof(char));
    char* x7225 = x7212;
    char* x7226 = strncpy(x9409, x7225, x7221);
    x94 += 1;
    struct SUPPLIERRecord* x10527 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x10527, 0, 1 * sizeof(struct SUPPLIERRecord));
    x10527->S_SUPPKEY = x7150; x10527->S_NAME = x9351; x10527->S_ADDRESS = x9367; x10527->S_NATIONKEY = x7187; x10527->S_PHONE = x9388; x10527->S_ACCTBAL = x7208; x10527->S_COMMENT = x9409;
    numeric_int_t x108 = x95;
    struct SUPPLIERRecord x9416 = *x10527;
    *(x9315 + x108) = x9416;
    struct SUPPLIERRecord* x9418 = &(x9315[x108]);
    x10527 = x9418;
    numeric_int_t x110 = x95;
    numeric_int_t x111 = x110+(1);
    x95 = x111;
  };
  char* x7235 = x7141;
  munmap(x7235, x7137);
  FILE* x7236 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x7237 = 0;
  numeric_int_t x7238 = x7237;
  numeric_int_t* x7239 = &x7238;
  numeric_int_t x7240 = fscanf(x7236, "%d", x7239);
  pclose(x7236);
  struct LINEITEMRecord* x9431 = (struct LINEITEMRecord*)malloc(x7238 * sizeof(struct LINEITEMRecord));
  memset(x9431, 0, x7238 * sizeof(struct LINEITEMRecord));
  numeric_int_t x7244 = O_RDONLY;
  numeric_int_t x7245 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x7244);
  /* VAR */ struct stat x7246 = x6715;
  struct stat x7247 = x7246;
  struct stat* x7248 = &x7247;
  numeric_int_t x7249 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x7248);
  size_t x7250 = x7248->st_size;
  numeric_int_t x7251 = PROT_READ;
  numeric_int_t x7252 = MAP_PRIVATE;
  char* x7253 = mmap(NULL, x7250, x7251, x7252, x7245, 0);
  /* VAR */ char* x7254 = x7253;
  char* x117 = x7254;
  /* VAR */ numeric_int_t x118 = 0;
  while(1) {
    
    numeric_int_t x119 = x118;
    boolean_t x120 = x119<(x7238);
    /* VAR */ boolean_t ite41625 = 0;
    if(x120) {
      char x47671 = *x117;
      boolean_t x47672 = x47671!=('\0');
      ite41625 = x47672;
    } else {
      
      ite41625 = 0;
    };
    boolean_t x38724 = ite41625;
    if (!(x38724)) break; 
    
    /* VAR */ numeric_int_t x7262 = 0;
    numeric_int_t x7263 = x7262;
    numeric_int_t* x7264 = &x7263;
    char* x7265 = strntoi_unchecked(x117, x7264);
    x117 = x7265;
    /* VAR */ numeric_int_t x7267 = 0;
    numeric_int_t x7268 = x7267;
    numeric_int_t* x7269 = &x7268;
    char* x7270 = strntoi_unchecked(x117, x7269);
    x117 = x7270;
    /* VAR */ numeric_int_t x7272 = 0;
    numeric_int_t x7273 = x7272;
    numeric_int_t* x7274 = &x7273;
    char* x7275 = strntoi_unchecked(x117, x7274);
    x117 = x7275;
    /* VAR */ numeric_int_t x7277 = 0;
    numeric_int_t x7278 = x7277;
    numeric_int_t* x7279 = &x7278;
    char* x7280 = strntoi_unchecked(x117, x7279);
    x117 = x7280;
    /* VAR */ double x7282 = 0.0;
    double x7283 = x7282;
    double* x7284 = &x7283;
    char* x7285 = strntod_unchecked(x117, x7284);
    x117 = x7285;
    /* VAR */ double x7287 = 0.0;
    double x7288 = x7287;
    double* x7289 = &x7288;
    char* x7290 = strntod_unchecked(x117, x7289);
    x117 = x7290;
    /* VAR */ double x7292 = 0.0;
    double x7293 = x7292;
    double* x7294 = &x7293;
    char* x7295 = strntod_unchecked(x117, x7294);
    x117 = x7295;
    /* VAR */ double x7297 = 0.0;
    double x7298 = x7297;
    double* x7299 = &x7298;
    char* x7300 = strntod_unchecked(x117, x7299);
    x117 = x7300;
    char x7302 = *x117;
    /* VAR */ char x7303 = x7302;
    x117 += 1;
    x117 += 1;
    char x7306 = x7303;
    char x7307 = *x117;
    /* VAR */ char x7308 = x7307;
    x117 += 1;
    x117 += 1;
    char x7311 = x7308;
    /* VAR */ numeric_int_t x7312 = 0;
    numeric_int_t x7313 = x7312;
    numeric_int_t* x7314 = &x7313;
    char* x7315 = strntoi_unchecked(x117, x7314);
    x117 = x7315;
    /* VAR */ numeric_int_t x7317 = 0;
    numeric_int_t x7318 = x7317;
    numeric_int_t* x7319 = &x7318;
    char* x7320 = strntoi_unchecked(x117, x7319);
    x117 = x7320;
    /* VAR */ numeric_int_t x7322 = 0;
    numeric_int_t x7323 = x7322;
    numeric_int_t* x7324 = &x7323;
    char* x7325 = strntoi_unchecked(x117, x7324);
    x117 = x7325;
    numeric_int_t x7327 = x7313*(10000);
    numeric_int_t x7328 = x7318*(100);
    numeric_int_t x7329 = x7327+(x7328);
    numeric_int_t x7330 = x7329+(x7323);
    /* VAR */ numeric_int_t x7331 = 0;
    numeric_int_t x7332 = x7331;
    numeric_int_t* x7333 = &x7332;
    char* x7334 = strntoi_unchecked(x117, x7333);
    x117 = x7334;
    /* VAR */ numeric_int_t x7336 = 0;
    numeric_int_t x7337 = x7336;
    numeric_int_t* x7338 = &x7337;
    char* x7339 = strntoi_unchecked(x117, x7338);
    x117 = x7339;
    /* VAR */ numeric_int_t x7341 = 0;
    numeric_int_t x7342 = x7341;
    numeric_int_t* x7343 = &x7342;
    char* x7344 = strntoi_unchecked(x117, x7343);
    x117 = x7344;
    numeric_int_t x7346 = x7332*(10000);
    numeric_int_t x7347 = x7337*(100);
    numeric_int_t x7348 = x7346+(x7347);
    numeric_int_t x7349 = x7348+(x7342);
    /* VAR */ numeric_int_t x7350 = 0;
    numeric_int_t x7351 = x7350;
    numeric_int_t* x7352 = &x7351;
    char* x7353 = strntoi_unchecked(x117, x7352);
    x117 = x7353;
    /* VAR */ numeric_int_t x7355 = 0;
    numeric_int_t x7356 = x7355;
    numeric_int_t* x7357 = &x7356;
    char* x7358 = strntoi_unchecked(x117, x7357);
    x117 = x7358;
    /* VAR */ numeric_int_t x7360 = 0;
    numeric_int_t x7361 = x7360;
    numeric_int_t* x7362 = &x7361;
    char* x7363 = strntoi_unchecked(x117, x7362);
    x117 = x7363;
    numeric_int_t x7365 = x7351*(10000);
    numeric_int_t x7366 = x7356*(100);
    numeric_int_t x7367 = x7365+(x7366);
    numeric_int_t x7368 = x7367+(x7361);
    /* VAR */ char* x7369 = x117;
    while(1) {
      
      char x7370 = *x117;
      boolean_t x7371 = x7370!=('|');
      /* VAR */ boolean_t ite41745 = 0;
      if(x7371) {
        char x47790 = *x117;
        boolean_t x47791 = x47790!=('\n');
        ite41745 = x47791;
      } else {
        
        ite41745 = 0;
      };
      boolean_t x38837 = ite41745;
      if (!(x38837)) break; 
      
      x117 += 1;
    };
    char* x7377 = x7369;
    numeric_int_t x7378 = x117 - x7377;
    numeric_int_t x7379 = x7378+(1);
    char* x9569 = (char*)malloc(x7379 * sizeof(char));
    memset(x9569, 0, x7379 * sizeof(char));
    char* x7382 = x7369;
    char* x7383 = strncpy(x9569, x7382, x7378);
    x117 += 1;
    /* VAR */ char* x7385 = x117;
    while(1) {
      
      char x7386 = *x117;
      boolean_t x7387 = x7386!=('|');
      /* VAR */ boolean_t ite41766 = 0;
      if(x7387) {
        char x47810 = *x117;
        boolean_t x47811 = x47810!=('\n');
        ite41766 = x47811;
      } else {
        
        ite41766 = 0;
      };
      boolean_t x38851 = ite41766;
      if (!(x38851)) break; 
      
      x117 += 1;
    };
    char* x7393 = x7385;
    numeric_int_t x7394 = x117 - x7393;
    numeric_int_t x7395 = x7394+(1);
    char* x9585 = (char*)malloc(x7395 * sizeof(char));
    memset(x9585, 0, x7395 * sizeof(char));
    char* x7398 = x7385;
    char* x7399 = strncpy(x9585, x7398, x7394);
    x117 += 1;
    /* VAR */ char* x7401 = x117;
    while(1) {
      
      char x7402 = *x117;
      boolean_t x7403 = x7402!=('|');
      /* VAR */ boolean_t ite41787 = 0;
      if(x7403) {
        char x47830 = *x117;
        boolean_t x47831 = x47830!=('\n');
        ite41787 = x47831;
      } else {
        
        ite41787 = 0;
      };
      boolean_t x38865 = ite41787;
      if (!(x38865)) break; 
      
      x117 += 1;
    };
    char* x7409 = x7401;
    numeric_int_t x7410 = x117 - x7409;
    numeric_int_t x7411 = x7410+(1);
    char* x9601 = (char*)malloc(x7411 * sizeof(char));
    memset(x9601, 0, x7411 * sizeof(char));
    char* x7414 = x7401;
    char* x7415 = strncpy(x9601, x7414, x7410);
    x117 += 1;
    struct LINEITEMRecord* x10721 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x10721, 0, 1 * sizeof(struct LINEITEMRecord));
    x10721->L_ORDERKEY = x7263; x10721->L_PARTKEY = x7268; x10721->L_SUPPKEY = x7273; x10721->L_LINENUMBER = x7278; x10721->L_QUANTITY = x7283; x10721->L_EXTENDEDPRICE = x7288; x10721->L_DISCOUNT = x7293; x10721->L_TAX = x7298; x10721->L_RETURNFLAG = x7306; x10721->L_LINESTATUS = x7311; x10721->L_SHIPDATE = x7330; x10721->L_COMMITDATE = x7349; x10721->L_RECEIPTDATE = x7368; x10721->L_SHIPINSTRUCT = x9569; x10721->L_SHIPMODE = x9585; x10721->L_COMMENT = x9601;
    numeric_int_t x140 = x118;
    struct LINEITEMRecord x9608 = *x10721;
    *(x9431 + x140) = x9608;
    struct LINEITEMRecord* x9610 = &(x9431[x140]);
    x10721 = x9610;
    numeric_int_t x142 = x118;
    numeric_int_t x143 = x142+(1);
    x118 = x143;
  };
  char* x7424 = x7254;
  munmap(x7424, x7250);
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
