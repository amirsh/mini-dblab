#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct NATIONRecord_NATIONRecord;
struct LINEITEMRecord;
struct NATIONRecord_NATIONRecord_SUPPLIERRecord;
struct AGGRecord_Q7GRPRecord;
struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
struct NATIONRecord;
struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord;
struct ORDERSRecord;
struct Q7GRPRecord;
struct SUPPLIERRecord;
struct CUSTOMERRecord;
struct NATIONRecord_NATIONRecord {
  numeric_int_t N1_N_NATIONKEY;
  char* N1_N_NAME;
  numeric_int_t N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  numeric_int_t N2_N_NATIONKEY;
  char* N2_N_NAME;
  numeric_int_t N2_N_REGIONKEY;
  char* N2_N_COMMENT;
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

struct NATIONRecord_NATIONRecord_SUPPLIERRecord {
  numeric_int_t N1_N_NATIONKEY;
  char* N1_N_NAME;
  numeric_int_t N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  numeric_int_t N2_N_NATIONKEY;
  char* N2_N_NAME;
  numeric_int_t N2_N_REGIONKEY;
  char* N2_N_COMMENT;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
};

struct AGGRecord_Q7GRPRecord {
  struct Q7GRPRecord* key;
  double* aggs;
};

struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  numeric_int_t N1_N_NATIONKEY;
  char* N1_N_NAME;
  numeric_int_t N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  numeric_int_t N2_N_NATIONKEY;
  char* N2_N_NAME;
  numeric_int_t N2_N_REGIONKEY;
  char* N2_N_COMMENT;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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

struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  numeric_int_t N1_N_NATIONKEY;
  char* N1_N_NAME;
  numeric_int_t N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  numeric_int_t N2_N_NATIONKEY;
  char* N2_N_NAME;
  numeric_int_t N2_N_REGIONKEY;
  char* N2_N_COMMENT;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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

struct Q7GRPRecord {
  char* SUPP_NATION;
  char* CUST_NATION;
  numeric_int_t L_YEAR;
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


numeric_int_t x46611(struct Q7GRPRecord* x13103);

boolean_t x46650(struct Q7GRPRecord* x13108, struct Q7GRPRecord* x13109);

numeric_int_t x46677(void* x10892);

numeric_int_t x46680(void* x10895, void* x10896);

numeric_int_t x46687(void* x10902);

numeric_int_t x46690(void* x10905, void* x10906);

numeric_int_t x46697(void* x10912);

numeric_int_t x46700(void* x10915, void* x10916);

numeric_int_t x46707(void* x10922);

numeric_int_t x46710(void* x10925, void* x10926);

numeric_int_t x46774(struct AGGRecord_Q7GRPRecord* x231, struct AGGRecord_Q7GRPRecord* x232);

numeric_int_t x13887(void* x13881, void* x13882, void* x13883);

int main(int argc, char** argv) {
  FILE* x6317 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x6318 = 0;
  numeric_int_t x6319 = x6318;
  numeric_int_t* x6320 = &x6319;
  numeric_int_t x6321 = fscanf(x6317, "%d", x6320);
  pclose(x6317);
  struct NATIONRecord* x8253 = (struct NATIONRecord*)malloc(x6319 * sizeof(struct NATIONRecord));
  memset(x8253, 0, x6319 * sizeof(struct NATIONRecord));
  numeric_int_t x6325 = O_RDONLY;
  numeric_int_t x6326 = open("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x6325);
  struct stat x6327 = (struct stat){0};
  /* VAR */ struct stat x6328 = x6327;
  struct stat x6329 = x6328;
  struct stat* x6330 = &x6329;
  numeric_int_t x6331 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x6330);
  size_t x6332 = x6330->st_size;
  numeric_int_t x6333 = PROT_READ;
  numeric_int_t x6334 = MAP_PRIVATE;
  char* x6335 = mmap(NULL, x6332, x6333, x6334, x6326, 0);
  /* VAR */ char* x6336 = x6335;
  char* x3 = x6336;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x6319);
    /* VAR */ boolean_t ite36538 = 0;
    if(x6) {
      char x44893 = *x3;
      boolean_t x44894 = x44893!=('\0');
      ite36538 = x44894;
    } else {
      
      ite36538 = 0;
    };
    boolean_t x34078 = ite36538;
    if (!(x34078)) break; 
    
    /* VAR */ numeric_int_t x6344 = 0;
    numeric_int_t x6345 = x6344;
    numeric_int_t* x6346 = &x6345;
    char* x6347 = strntoi_unchecked(x3, x6346);
    x3 = x6347;
    /* VAR */ char* x6349 = x3;
    while(1) {
      
      char x6350 = *x3;
      boolean_t x6351 = x6350!=('|');
      /* VAR */ boolean_t ite36556 = 0;
      if(x6351) {
        char x44910 = *x3;
        boolean_t x44911 = x44910!=('\n');
        ite36556 = x44911;
      } else {
        
        ite36556 = 0;
      };
      boolean_t x34089 = ite36556;
      if (!(x34089)) break; 
      
      x3 += 1;
    };
    char* x6357 = x6349;
    numeric_int_t x6358 = x3 - x6357;
    numeric_int_t x6359 = x6358+(1);
    char* x8290 = (char*)malloc(x6359 * sizeof(char));
    memset(x8290, 0, x6359 * sizeof(char));
    char* x6362 = x6349;
    char* x6363 = strncpy(x8290, x6362, x6358);
    x3 += 1;
    /* VAR */ numeric_int_t x6365 = 0;
    numeric_int_t x6366 = x6365;
    numeric_int_t* x6367 = &x6366;
    char* x6368 = strntoi_unchecked(x3, x6367);
    x3 = x6368;
    /* VAR */ char* x6370 = x3;
    while(1) {
      
      char x6371 = *x3;
      boolean_t x6372 = x6371!=('|');
      /* VAR */ boolean_t ite36582 = 0;
      if(x6372) {
        char x44935 = *x3;
        boolean_t x44936 = x44935!=('\n');
        ite36582 = x44936;
      } else {
        
        ite36582 = 0;
      };
      boolean_t x34108 = ite36582;
      if (!(x34108)) break; 
      
      x3 += 1;
    };
    char* x6378 = x6370;
    numeric_int_t x6379 = x3 - x6378;
    numeric_int_t x6380 = x6379+(1);
    char* x8311 = (char*)malloc(x6380 * sizeof(char));
    memset(x8311, 0, x6380 * sizeof(char));
    char* x6383 = x6370;
    char* x6384 = strncpy(x8311, x6383, x6379);
    x3 += 1;
    struct NATIONRecord* x9296 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x9296, 0, 1 * sizeof(struct NATIONRecord));
    x9296->N_NATIONKEY = x6345; x9296->N_NAME = x8290; x9296->N_REGIONKEY = x6366; x9296->N_COMMENT = x8311;
    numeric_int_t x14 = x4;
    struct NATIONRecord x8318 = *x9296;
    *(x8253 + x14) = x8318;
    struct NATIONRecord* x8320 = &(x8253[x14]);
    x9296 = x8320;
    numeric_int_t x16 = x4;
    numeric_int_t x17 = x16+(1);
    x4 = x17;
  };
  char* x6393 = x6336;
  munmap(x6393, x6332);
  FILE* x6394 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x6395 = 0;
  numeric_int_t x6396 = x6395;
  numeric_int_t* x6397 = &x6396;
  numeric_int_t x6398 = fscanf(x6394, "%d", x6397);
  pclose(x6394);
  struct ORDERSRecord* x8333 = (struct ORDERSRecord*)malloc(x6396 * sizeof(struct ORDERSRecord));
  memset(x8333, 0, x6396 * sizeof(struct ORDERSRecord));
  numeric_int_t x6402 = O_RDONLY;
  numeric_int_t x6403 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x6402);
  /* VAR */ struct stat x6404 = x6327;
  struct stat x6405 = x6404;
  struct stat* x6406 = &x6405;
  numeric_int_t x6407 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x6406);
  size_t x6408 = x6406->st_size;
  numeric_int_t x6409 = PROT_READ;
  numeric_int_t x6410 = MAP_PRIVATE;
  char* x6411 = mmap(NULL, x6408, x6409, x6410, x6403, 0);
  /* VAR */ char* x6412 = x6411;
  char* x23 = x6412;
  /* VAR */ numeric_int_t x24 = 0;
  while(1) {
    
    numeric_int_t x25 = x24;
    boolean_t x26 = x25<(x6396);
    /* VAR */ boolean_t ite36635 = 0;
    if(x26) {
      char x44987 = *x23;
      boolean_t x44988 = x44987!=('\0');
      ite36635 = x44988;
    } else {
      
      ite36635 = 0;
    };
    boolean_t x34154 = ite36635;
    if (!(x34154)) break; 
    
    /* VAR */ numeric_int_t x6420 = 0;
    numeric_int_t x6421 = x6420;
    numeric_int_t* x6422 = &x6421;
    char* x6423 = strntoi_unchecked(x23, x6422);
    x23 = x6423;
    /* VAR */ numeric_int_t x6425 = 0;
    numeric_int_t x6426 = x6425;
    numeric_int_t* x6427 = &x6426;
    char* x6428 = strntoi_unchecked(x23, x6427);
    x23 = x6428;
    char x6430 = *x23;
    /* VAR */ char x6431 = x6430;
    x23 += 1;
    x23 += 1;
    char x6434 = x6431;
    /* VAR */ double x6435 = 0.0;
    double x6436 = x6435;
    double* x6437 = &x6436;
    char* x6438 = strntod_unchecked(x23, x6437);
    x23 = x6438;
    /* VAR */ numeric_int_t x6440 = 0;
    numeric_int_t x6441 = x6440;
    numeric_int_t* x6442 = &x6441;
    char* x6443 = strntoi_unchecked(x23, x6442);
    x23 = x6443;
    /* VAR */ numeric_int_t x6445 = 0;
    numeric_int_t x6446 = x6445;
    numeric_int_t* x6447 = &x6446;
    char* x6448 = strntoi_unchecked(x23, x6447);
    x23 = x6448;
    /* VAR */ numeric_int_t x6450 = 0;
    numeric_int_t x6451 = x6450;
    numeric_int_t* x6452 = &x6451;
    char* x6453 = strntoi_unchecked(x23, x6452);
    x23 = x6453;
    numeric_int_t x6455 = x6441*(10000);
    numeric_int_t x6456 = x6446*(100);
    numeric_int_t x6457 = x6455+(x6456);
    numeric_int_t x6458 = x6457+(x6451);
    /* VAR */ char* x6459 = x23;
    while(1) {
      
      char x6460 = *x23;
      boolean_t x6461 = x6460!=('|');
      /* VAR */ boolean_t ite36687 = 0;
      if(x6461) {
        char x45038 = *x23;
        boolean_t x45039 = x45038!=('\n');
        ite36687 = x45039;
      } else {
        
        ite36687 = 0;
      };
      boolean_t x34199 = ite36687;
      if (!(x34199)) break; 
      
      x23 += 1;
    };
    char* x6467 = x6459;
    numeric_int_t x6468 = x23 - x6467;
    numeric_int_t x6469 = x6468+(1);
    char* x8403 = (char*)malloc(x6469 * sizeof(char));
    memset(x8403, 0, x6469 * sizeof(char));
    char* x6472 = x6459;
    char* x6473 = strncpy(x8403, x6472, x6468);
    x23 += 1;
    /* VAR */ char* x6475 = x23;
    while(1) {
      
      char x6476 = *x23;
      boolean_t x6477 = x6476!=('|');
      /* VAR */ boolean_t ite36708 = 0;
      if(x6477) {
        char x45058 = *x23;
        boolean_t x45059 = x45058!=('\n');
        ite36708 = x45059;
      } else {
        
        ite36708 = 0;
      };
      boolean_t x34213 = ite36708;
      if (!(x34213)) break; 
      
      x23 += 1;
    };
    char* x6483 = x6475;
    numeric_int_t x6484 = x23 - x6483;
    numeric_int_t x6485 = x6484+(1);
    char* x8419 = (char*)malloc(x6485 * sizeof(char));
    memset(x8419, 0, x6485 * sizeof(char));
    char* x6488 = x6475;
    char* x6489 = strncpy(x8419, x6488, x6484);
    x23 += 1;
    /* VAR */ numeric_int_t x6491 = 0;
    numeric_int_t x6492 = x6491;
    numeric_int_t* x6493 = &x6492;
    char* x6494 = strntoi_unchecked(x23, x6493);
    x23 = x6494;
    /* VAR */ char* x6496 = x23;
    while(1) {
      
      char x6497 = *x23;
      boolean_t x6498 = x6497!=('|');
      /* VAR */ boolean_t ite36734 = 0;
      if(x6498) {
        char x45083 = *x23;
        boolean_t x45084 = x45083!=('\n');
        ite36734 = x45084;
      } else {
        
        ite36734 = 0;
      };
      boolean_t x34232 = ite36734;
      if (!(x34232)) break; 
      
      x23 += 1;
    };
    char* x6504 = x6496;
    numeric_int_t x6505 = x23 - x6504;
    numeric_int_t x6506 = x6505+(1);
    char* x8440 = (char*)malloc(x6506 * sizeof(char));
    memset(x8440, 0, x6506 * sizeof(char));
    char* x6509 = x6496;
    char* x6510 = strncpy(x8440, x6509, x6505);
    x23 += 1;
    struct ORDERSRecord* x9427 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x9427, 0, 1 * sizeof(struct ORDERSRecord));
    x9427->O_ORDERKEY = x6421; x9427->O_CUSTKEY = x6426; x9427->O_ORDERSTATUS = x6434; x9427->O_TOTALPRICE = x6436; x9427->O_ORDERDATE = x6458; x9427->O_ORDERPRIORITY = x8403; x9427->O_CLERK = x8419; x9427->O_SHIPPRIORITY = x6492; x9427->O_COMMENT = x8440;
    numeric_int_t x39 = x24;
    struct ORDERSRecord x8447 = *x9427;
    *(x8333 + x39) = x8447;
    struct ORDERSRecord* x8449 = &(x8333[x39]);
    x9427 = x8449;
    numeric_int_t x41 = x24;
    numeric_int_t x42 = x41+(1);
    x24 = x42;
  };
  char* x6519 = x6412;
  munmap(x6519, x6408);
  FILE* x6520 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x6521 = 0;
  numeric_int_t x6522 = x6521;
  numeric_int_t* x6523 = &x6522;
  numeric_int_t x6524 = fscanf(x6520, "%d", x6523);
  pclose(x6520);
  struct LINEITEMRecord* x8462 = (struct LINEITEMRecord*)malloc(x6522 * sizeof(struct LINEITEMRecord));
  memset(x8462, 0, x6522 * sizeof(struct LINEITEMRecord));
  numeric_int_t x6528 = O_RDONLY;
  numeric_int_t x6529 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x6528);
  /* VAR */ struct stat x6530 = x6327;
  struct stat x6531 = x6530;
  struct stat* x6532 = &x6531;
  numeric_int_t x6533 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x6532);
  size_t x6534 = x6532->st_size;
  numeric_int_t x6535 = PROT_READ;
  numeric_int_t x6536 = MAP_PRIVATE;
  char* x6537 = mmap(NULL, x6534, x6535, x6536, x6529, 0);
  /* VAR */ char* x6538 = x6537;
  char* x48 = x6538;
  /* VAR */ numeric_int_t x49 = 0;
  while(1) {
    
    numeric_int_t x50 = x49;
    boolean_t x51 = x50<(x6522);
    /* VAR */ boolean_t ite36787 = 0;
    if(x51) {
      char x45135 = *x48;
      boolean_t x45136 = x45135!=('\0');
      ite36787 = x45136;
    } else {
      
      ite36787 = 0;
    };
    boolean_t x34278 = ite36787;
    if (!(x34278)) break; 
    
    /* VAR */ numeric_int_t x6546 = 0;
    numeric_int_t x6547 = x6546;
    numeric_int_t* x6548 = &x6547;
    char* x6549 = strntoi_unchecked(x48, x6548);
    x48 = x6549;
    /* VAR */ numeric_int_t x6551 = 0;
    numeric_int_t x6552 = x6551;
    numeric_int_t* x6553 = &x6552;
    char* x6554 = strntoi_unchecked(x48, x6553);
    x48 = x6554;
    /* VAR */ numeric_int_t x6556 = 0;
    numeric_int_t x6557 = x6556;
    numeric_int_t* x6558 = &x6557;
    char* x6559 = strntoi_unchecked(x48, x6558);
    x48 = x6559;
    /* VAR */ numeric_int_t x6561 = 0;
    numeric_int_t x6562 = x6561;
    numeric_int_t* x6563 = &x6562;
    char* x6564 = strntoi_unchecked(x48, x6563);
    x48 = x6564;
    /* VAR */ double x6566 = 0.0;
    double x6567 = x6566;
    double* x6568 = &x6567;
    char* x6569 = strntod_unchecked(x48, x6568);
    x48 = x6569;
    /* VAR */ double x6571 = 0.0;
    double x6572 = x6571;
    double* x6573 = &x6572;
    char* x6574 = strntod_unchecked(x48, x6573);
    x48 = x6574;
    /* VAR */ double x6576 = 0.0;
    double x6577 = x6576;
    double* x6578 = &x6577;
    char* x6579 = strntod_unchecked(x48, x6578);
    x48 = x6579;
    /* VAR */ double x6581 = 0.0;
    double x6582 = x6581;
    double* x6583 = &x6582;
    char* x6584 = strntod_unchecked(x48, x6583);
    x48 = x6584;
    char x6586 = *x48;
    /* VAR */ char x6587 = x6586;
    x48 += 1;
    x48 += 1;
    char x6590 = x6587;
    char x6591 = *x48;
    /* VAR */ char x6592 = x6591;
    x48 += 1;
    x48 += 1;
    char x6595 = x6592;
    /* VAR */ numeric_int_t x6596 = 0;
    numeric_int_t x6597 = x6596;
    numeric_int_t* x6598 = &x6597;
    char* x6599 = strntoi_unchecked(x48, x6598);
    x48 = x6599;
    /* VAR */ numeric_int_t x6601 = 0;
    numeric_int_t x6602 = x6601;
    numeric_int_t* x6603 = &x6602;
    char* x6604 = strntoi_unchecked(x48, x6603);
    x48 = x6604;
    /* VAR */ numeric_int_t x6606 = 0;
    numeric_int_t x6607 = x6606;
    numeric_int_t* x6608 = &x6607;
    char* x6609 = strntoi_unchecked(x48, x6608);
    x48 = x6609;
    numeric_int_t x6611 = x6597*(10000);
    numeric_int_t x6612 = x6602*(100);
    numeric_int_t x6613 = x6611+(x6612);
    numeric_int_t x6614 = x6613+(x6607);
    /* VAR */ numeric_int_t x6615 = 0;
    numeric_int_t x6616 = x6615;
    numeric_int_t* x6617 = &x6616;
    char* x6618 = strntoi_unchecked(x48, x6617);
    x48 = x6618;
    /* VAR */ numeric_int_t x6620 = 0;
    numeric_int_t x6621 = x6620;
    numeric_int_t* x6622 = &x6621;
    char* x6623 = strntoi_unchecked(x48, x6622);
    x48 = x6623;
    /* VAR */ numeric_int_t x6625 = 0;
    numeric_int_t x6626 = x6625;
    numeric_int_t* x6627 = &x6626;
    char* x6628 = strntoi_unchecked(x48, x6627);
    x48 = x6628;
    numeric_int_t x6630 = x6616*(10000);
    numeric_int_t x6631 = x6621*(100);
    numeric_int_t x6632 = x6630+(x6631);
    numeric_int_t x6633 = x6632+(x6626);
    /* VAR */ numeric_int_t x6634 = 0;
    numeric_int_t x6635 = x6634;
    numeric_int_t* x6636 = &x6635;
    char* x6637 = strntoi_unchecked(x48, x6636);
    x48 = x6637;
    /* VAR */ numeric_int_t x6639 = 0;
    numeric_int_t x6640 = x6639;
    numeric_int_t* x6641 = &x6640;
    char* x6642 = strntoi_unchecked(x48, x6641);
    x48 = x6642;
    /* VAR */ numeric_int_t x6644 = 0;
    numeric_int_t x6645 = x6644;
    numeric_int_t* x6646 = &x6645;
    char* x6647 = strntoi_unchecked(x48, x6646);
    x48 = x6647;
    numeric_int_t x6649 = x6635*(10000);
    numeric_int_t x6650 = x6640*(100);
    numeric_int_t x6651 = x6649+(x6650);
    numeric_int_t x6652 = x6651+(x6645);
    /* VAR */ char* x6653 = x48;
    while(1) {
      
      char x6654 = *x48;
      boolean_t x6655 = x6654!=('|');
      /* VAR */ boolean_t ite36907 = 0;
      if(x6655) {
        char x45254 = *x48;
        boolean_t x45255 = x45254!=('\n');
        ite36907 = x45255;
      } else {
        
        ite36907 = 0;
      };
      boolean_t x34391 = ite36907;
      if (!(x34391)) break; 
      
      x48 += 1;
    };
    char* x6661 = x6653;
    numeric_int_t x6662 = x48 - x6661;
    numeric_int_t x6663 = x6662+(1);
    char* x8600 = (char*)malloc(x6663 * sizeof(char));
    memset(x8600, 0, x6663 * sizeof(char));
    char* x6666 = x6653;
    char* x6667 = strncpy(x8600, x6666, x6662);
    x48 += 1;
    /* VAR */ char* x6669 = x48;
    while(1) {
      
      char x6670 = *x48;
      boolean_t x6671 = x6670!=('|');
      /* VAR */ boolean_t ite36928 = 0;
      if(x6671) {
        char x45274 = *x48;
        boolean_t x45275 = x45274!=('\n');
        ite36928 = x45275;
      } else {
        
        ite36928 = 0;
      };
      boolean_t x34405 = ite36928;
      if (!(x34405)) break; 
      
      x48 += 1;
    };
    char* x6677 = x6669;
    numeric_int_t x6678 = x48 - x6677;
    numeric_int_t x6679 = x6678+(1);
    char* x8616 = (char*)malloc(x6679 * sizeof(char));
    memset(x8616, 0, x6679 * sizeof(char));
    char* x6682 = x6669;
    char* x6683 = strncpy(x8616, x6682, x6678);
    x48 += 1;
    /* VAR */ char* x6685 = x48;
    while(1) {
      
      char x6686 = *x48;
      boolean_t x6687 = x6686!=('|');
      /* VAR */ boolean_t ite36949 = 0;
      if(x6687) {
        char x45294 = *x48;
        boolean_t x45295 = x45294!=('\n');
        ite36949 = x45295;
      } else {
        
        ite36949 = 0;
      };
      boolean_t x34419 = ite36949;
      if (!(x34419)) break; 
      
      x48 += 1;
    };
    char* x6693 = x6685;
    numeric_int_t x6694 = x48 - x6693;
    numeric_int_t x6695 = x6694+(1);
    char* x8632 = (char*)malloc(x6695 * sizeof(char));
    memset(x8632, 0, x6695 * sizeof(char));
    char* x6698 = x6685;
    char* x6699 = strncpy(x8632, x6698, x6694);
    x48 += 1;
    struct LINEITEMRecord* x9621 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x9621, 0, 1 * sizeof(struct LINEITEMRecord));
    x9621->L_ORDERKEY = x6547; x9621->L_PARTKEY = x6552; x9621->L_SUPPKEY = x6557; x9621->L_LINENUMBER = x6562; x9621->L_QUANTITY = x6567; x9621->L_EXTENDEDPRICE = x6572; x9621->L_DISCOUNT = x6577; x9621->L_TAX = x6582; x9621->L_RETURNFLAG = x6590; x9621->L_LINESTATUS = x6595; x9621->L_SHIPDATE = x6614; x9621->L_COMMITDATE = x6633; x9621->L_RECEIPTDATE = x6652; x9621->L_SHIPINSTRUCT = x8600; x9621->L_SHIPMODE = x8616; x9621->L_COMMENT = x8632;
    numeric_int_t x71 = x49;
    struct LINEITEMRecord x8639 = *x9621;
    *(x8462 + x71) = x8639;
    struct LINEITEMRecord* x8641 = &(x8462[x71]);
    x9621 = x8641;
    numeric_int_t x73 = x49;
    numeric_int_t x74 = x73+(1);
    x49 = x74;
  };
  char* x6708 = x6538;
  munmap(x6708, x6534);
  FILE* x6709 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", "r");
  /* VAR */ numeric_int_t x6710 = 0;
  numeric_int_t x6711 = x6710;
  numeric_int_t* x6712 = &x6711;
  numeric_int_t x6713 = fscanf(x6709, "%d", x6712);
  pclose(x6709);
  struct CUSTOMERRecord* x8654 = (struct CUSTOMERRecord*)malloc(x6711 * sizeof(struct CUSTOMERRecord));
  memset(x8654, 0, x6711 * sizeof(struct CUSTOMERRecord));
  numeric_int_t x6717 = O_RDONLY;
  numeric_int_t x6718 = open("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x6717);
  /* VAR */ struct stat x6719 = x6327;
  struct stat x6720 = x6719;
  struct stat* x6721 = &x6720;
  numeric_int_t x6722 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x6721);
  size_t x6723 = x6721->st_size;
  numeric_int_t x6724 = PROT_READ;
  numeric_int_t x6725 = MAP_PRIVATE;
  char* x6726 = mmap(NULL, x6723, x6724, x6725, x6718, 0);
  /* VAR */ char* x6727 = x6726;
  char* x80 = x6727;
  /* VAR */ numeric_int_t x81 = 0;
  while(1) {
    
    numeric_int_t x82 = x81;
    boolean_t x83 = x82<(x6711);
    /* VAR */ boolean_t ite37002 = 0;
    if(x83) {
      char x45346 = *x80;
      boolean_t x45347 = x45346!=('\0');
      ite37002 = x45347;
    } else {
      
      ite37002 = 0;
    };
    boolean_t x34465 = ite37002;
    if (!(x34465)) break; 
    
    /* VAR */ numeric_int_t x6735 = 0;
    numeric_int_t x6736 = x6735;
    numeric_int_t* x6737 = &x6736;
    char* x6738 = strntoi_unchecked(x80, x6737);
    x80 = x6738;
    /* VAR */ char* x6740 = x80;
    while(1) {
      
      char x6741 = *x80;
      boolean_t x6742 = x6741!=('|');
      /* VAR */ boolean_t ite37020 = 0;
      if(x6742) {
        char x45363 = *x80;
        boolean_t x45364 = x45363!=('\n');
        ite37020 = x45364;
      } else {
        
        ite37020 = 0;
      };
      boolean_t x34476 = ite37020;
      if (!(x34476)) break; 
      
      x80 += 1;
    };
    char* x6748 = x6740;
    numeric_int_t x6749 = x80 - x6748;
    numeric_int_t x6750 = x6749+(1);
    char* x8690 = (char*)malloc(x6750 * sizeof(char));
    memset(x8690, 0, x6750 * sizeof(char));
    char* x6753 = x6740;
    char* x6754 = strncpy(x8690, x6753, x6749);
    x80 += 1;
    /* VAR */ char* x6756 = x80;
    while(1) {
      
      char x6757 = *x80;
      boolean_t x6758 = x6757!=('|');
      /* VAR */ boolean_t ite37041 = 0;
      if(x6758) {
        char x45383 = *x80;
        boolean_t x45384 = x45383!=('\n');
        ite37041 = x45384;
      } else {
        
        ite37041 = 0;
      };
      boolean_t x34490 = ite37041;
      if (!(x34490)) break; 
      
      x80 += 1;
    };
    char* x6764 = x6756;
    numeric_int_t x6765 = x80 - x6764;
    numeric_int_t x6766 = x6765+(1);
    char* x8706 = (char*)malloc(x6766 * sizeof(char));
    memset(x8706, 0, x6766 * sizeof(char));
    char* x6769 = x6756;
    char* x6770 = strncpy(x8706, x6769, x6765);
    x80 += 1;
    /* VAR */ numeric_int_t x6772 = 0;
    numeric_int_t x6773 = x6772;
    numeric_int_t* x6774 = &x6773;
    char* x6775 = strntoi_unchecked(x80, x6774);
    x80 = x6775;
    /* VAR */ char* x6777 = x80;
    while(1) {
      
      char x6778 = *x80;
      boolean_t x6779 = x6778!=('|');
      /* VAR */ boolean_t ite37067 = 0;
      if(x6779) {
        char x45408 = *x80;
        boolean_t x45409 = x45408!=('\n');
        ite37067 = x45409;
      } else {
        
        ite37067 = 0;
      };
      boolean_t x34509 = ite37067;
      if (!(x34509)) break; 
      
      x80 += 1;
    };
    char* x6785 = x6777;
    numeric_int_t x6786 = x80 - x6785;
    numeric_int_t x6787 = x6786+(1);
    char* x8727 = (char*)malloc(x6787 * sizeof(char));
    memset(x8727, 0, x6787 * sizeof(char));
    char* x6790 = x6777;
    char* x6791 = strncpy(x8727, x6790, x6786);
    x80 += 1;
    /* VAR */ double x6793 = 0.0;
    double x6794 = x6793;
    double* x6795 = &x6794;
    char* x6796 = strntod_unchecked(x80, x6795);
    x80 = x6796;
    /* VAR */ char* x6798 = x80;
    while(1) {
      
      char x6799 = *x80;
      boolean_t x6800 = x6799!=('|');
      /* VAR */ boolean_t ite37093 = 0;
      if(x6800) {
        char x45433 = *x80;
        boolean_t x45434 = x45433!=('\n');
        ite37093 = x45434;
      } else {
        
        ite37093 = 0;
      };
      boolean_t x34528 = ite37093;
      if (!(x34528)) break; 
      
      x80 += 1;
    };
    char* x6806 = x6798;
    numeric_int_t x6807 = x80 - x6806;
    numeric_int_t x6808 = x6807+(1);
    char* x8748 = (char*)malloc(x6808 * sizeof(char));
    memset(x8748, 0, x6808 * sizeof(char));
    char* x6811 = x6798;
    char* x6812 = strncpy(x8748, x6811, x6807);
    x80 += 1;
    /* VAR */ char* x6814 = x80;
    while(1) {
      
      char x6815 = *x80;
      boolean_t x6816 = x6815!=('|');
      /* VAR */ boolean_t ite37114 = 0;
      if(x6816) {
        char x45453 = *x80;
        boolean_t x45454 = x45453!=('\n');
        ite37114 = x45454;
      } else {
        
        ite37114 = 0;
      };
      boolean_t x34542 = ite37114;
      if (!(x34542)) break; 
      
      x80 += 1;
    };
    char* x6822 = x6814;
    numeric_int_t x6823 = x80 - x6822;
    numeric_int_t x6824 = x6823+(1);
    char* x8764 = (char*)malloc(x6824 * sizeof(char));
    memset(x8764, 0, x6824 * sizeof(char));
    char* x6827 = x6814;
    char* x6828 = strncpy(x8764, x6827, x6823);
    x80 += 1;
    struct CUSTOMERRecord* x9755 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x9755, 0, 1 * sizeof(struct CUSTOMERRecord));
    x9755->C_CUSTKEY = x6736; x9755->C_NAME = x8690; x9755->C_ADDRESS = x8706; x9755->C_NATIONKEY = x6773; x9755->C_PHONE = x8727; x9755->C_ACCTBAL = x6794; x9755->C_MKTSEGMENT = x8748; x9755->C_COMMENT = x8764;
    numeric_int_t x95 = x81;
    struct CUSTOMERRecord x8771 = *x9755;
    *(x8654 + x95) = x8771;
    struct CUSTOMERRecord* x8773 = &(x8654[x95]);
    x9755 = x8773;
    numeric_int_t x97 = x81;
    numeric_int_t x98 = x97+(1);
    x81 = x98;
  };
  char* x6837 = x6727;
  munmap(x6837, x6723);
  FILE* x6838 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x6839 = 0;
  numeric_int_t x6840 = x6839;
  numeric_int_t* x6841 = &x6840;
  numeric_int_t x6842 = fscanf(x6838, "%d", x6841);
  pclose(x6838);
  struct SUPPLIERRecord* x8786 = (struct SUPPLIERRecord*)malloc(x6840 * sizeof(struct SUPPLIERRecord));
  memset(x8786, 0, x6840 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x6846 = O_RDONLY;
  numeric_int_t x6847 = open("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x6846);
  /* VAR */ struct stat x6848 = x6327;
  struct stat x6849 = x6848;
  struct stat* x6850 = &x6849;
  numeric_int_t x6851 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x6850);
  size_t x6852 = x6850->st_size;
  numeric_int_t x6853 = PROT_READ;
  numeric_int_t x6854 = MAP_PRIVATE;
  char* x6855 = mmap(NULL, x6852, x6853, x6854, x6847, 0);
  /* VAR */ char* x6856 = x6855;
  char* x104 = x6856;
  /* VAR */ numeric_int_t x105 = 0;
  while(1) {
    
    numeric_int_t x106 = x105;
    boolean_t x107 = x106<(x6840);
    /* VAR */ boolean_t ite37167 = 0;
    if(x107) {
      char x45505 = *x104;
      boolean_t x45506 = x45505!=('\0');
      ite37167 = x45506;
    } else {
      
      ite37167 = 0;
    };
    boolean_t x34588 = ite37167;
    if (!(x34588)) break; 
    
    /* VAR */ numeric_int_t x6864 = 0;
    numeric_int_t x6865 = x6864;
    numeric_int_t* x6866 = &x6865;
    char* x6867 = strntoi_unchecked(x104, x6866);
    x104 = x6867;
    /* VAR */ char* x6869 = x104;
    while(1) {
      
      char x6870 = *x104;
      boolean_t x6871 = x6870!=('|');
      /* VAR */ boolean_t ite37185 = 0;
      if(x6871) {
        char x45522 = *x104;
        boolean_t x45523 = x45522!=('\n');
        ite37185 = x45523;
      } else {
        
        ite37185 = 0;
      };
      boolean_t x34599 = ite37185;
      if (!(x34599)) break; 
      
      x104 += 1;
    };
    char* x6877 = x6869;
    numeric_int_t x6878 = x104 - x6877;
    numeric_int_t x6879 = x6878+(1);
    char* x8822 = (char*)malloc(x6879 * sizeof(char));
    memset(x8822, 0, x6879 * sizeof(char));
    char* x6882 = x6869;
    char* x6883 = strncpy(x8822, x6882, x6878);
    x104 += 1;
    /* VAR */ char* x6885 = x104;
    while(1) {
      
      char x6886 = *x104;
      boolean_t x6887 = x6886!=('|');
      /* VAR */ boolean_t ite37206 = 0;
      if(x6887) {
        char x45542 = *x104;
        boolean_t x45543 = x45542!=('\n');
        ite37206 = x45543;
      } else {
        
        ite37206 = 0;
      };
      boolean_t x34613 = ite37206;
      if (!(x34613)) break; 
      
      x104 += 1;
    };
    char* x6893 = x6885;
    numeric_int_t x6894 = x104 - x6893;
    numeric_int_t x6895 = x6894+(1);
    char* x8838 = (char*)malloc(x6895 * sizeof(char));
    memset(x8838, 0, x6895 * sizeof(char));
    char* x6898 = x6885;
    char* x6899 = strncpy(x8838, x6898, x6894);
    x104 += 1;
    /* VAR */ numeric_int_t x6901 = 0;
    numeric_int_t x6902 = x6901;
    numeric_int_t* x6903 = &x6902;
    char* x6904 = strntoi_unchecked(x104, x6903);
    x104 = x6904;
    /* VAR */ char* x6906 = x104;
    while(1) {
      
      char x6907 = *x104;
      boolean_t x6908 = x6907!=('|');
      /* VAR */ boolean_t ite37232 = 0;
      if(x6908) {
        char x45567 = *x104;
        boolean_t x45568 = x45567!=('\n');
        ite37232 = x45568;
      } else {
        
        ite37232 = 0;
      };
      boolean_t x34632 = ite37232;
      if (!(x34632)) break; 
      
      x104 += 1;
    };
    char* x6914 = x6906;
    numeric_int_t x6915 = x104 - x6914;
    numeric_int_t x6916 = x6915+(1);
    char* x8859 = (char*)malloc(x6916 * sizeof(char));
    memset(x8859, 0, x6916 * sizeof(char));
    char* x6919 = x6906;
    char* x6920 = strncpy(x8859, x6919, x6915);
    x104 += 1;
    /* VAR */ double x6922 = 0.0;
    double x6923 = x6922;
    double* x6924 = &x6923;
    char* x6925 = strntod_unchecked(x104, x6924);
    x104 = x6925;
    /* VAR */ char* x6927 = x104;
    while(1) {
      
      char x6928 = *x104;
      boolean_t x6929 = x6928!=('|');
      /* VAR */ boolean_t ite37258 = 0;
      if(x6929) {
        char x45592 = *x104;
        boolean_t x45593 = x45592!=('\n');
        ite37258 = x45593;
      } else {
        
        ite37258 = 0;
      };
      boolean_t x34651 = ite37258;
      if (!(x34651)) break; 
      
      x104 += 1;
    };
    char* x6935 = x6927;
    numeric_int_t x6936 = x104 - x6935;
    numeric_int_t x6937 = x6936+(1);
    char* x8880 = (char*)malloc(x6937 * sizeof(char));
    memset(x8880, 0, x6937 * sizeof(char));
    char* x6940 = x6927;
    char* x6941 = strncpy(x8880, x6940, x6936);
    x104 += 1;
    struct SUPPLIERRecord* x9873 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x9873, 0, 1 * sizeof(struct SUPPLIERRecord));
    x9873->S_SUPPKEY = x6865; x9873->S_NAME = x8822; x9873->S_ADDRESS = x8838; x9873->S_NATIONKEY = x6902; x9873->S_PHONE = x8859; x9873->S_ACCTBAL = x6923; x9873->S_COMMENT = x8880;
    numeric_int_t x118 = x105;
    struct SUPPLIERRecord x8887 = *x9873;
    *(x8786 + x118) = x8887;
    struct SUPPLIERRecord* x8889 = &(x8786[x118]);
    x9873 = x8889;
    numeric_int_t x120 = x105;
    numeric_int_t x121 = x120+(1);
    x105 = x121;
  };
  char* x6950 = x6856;
  munmap(x6950, x6852);
  numeric_int_t x126 = 0;
  for(; x126 < 1 ; x126 += 1) {
    
    GHashTable* x46676 = g_hash_table_new(x46611, x46650);
    void*** x46684 = (void***){x46677};
    numeric_int_t* x46685 = (numeric_int_t*){x46680};
    GHashTable* x46686 = g_hash_table_new(x46684, x46685);
    void*** x46694 = (void***){x46687};
    numeric_int_t* x46695 = (numeric_int_t*){x46690};
    GHashTable* x46696 = g_hash_table_new(x46694, x46695);
    void*** x46704 = (void***){x46697};
    numeric_int_t* x46705 = (numeric_int_t*){x46700};
    GHashTable* x46706 = g_hash_table_new(x46704, x46705);
    void*** x46714 = (void***){x46707};
    numeric_int_t* x46715 = (numeric_int_t*){x46710};
    GHashTable* x46716 = g_hash_table_new(x46714, x46715);
    struct timeval x46717 = (struct timeval){0};
    /* VAR */ struct timeval x46718 = x46717;
    struct timeval x46719 = x46718;
    /* VAR */ struct timeval x46720 = x46717;
    struct timeval x46721 = x46720;
    /* VAR */ struct timeval x46722 = x46717;
    struct timeval x46723 = x46722;
    struct timeval* x46724 = &x46721;
    gettimeofday(x46724, NULL);
    /* VAR */ numeric_int_t x46726 = 0;
    /* VAR */ numeric_int_t x46727 = 0;
    /* VAR */ struct NATIONRecord* x46728 = NULL;
    /* VAR */ numeric_int_t x46729 = 0;
    /* VAR */ numeric_int_t x46730 = 0;
    /* VAR */ numeric_int_t x46731 = 0;
    /* VAR */ numeric_int_t x46732 = 0;
    numeric_int_t* x46815 = &(x46774);
    GTree* x46816 = g_tree_new(x46815);
    /* VAR */ boolean_t x46817 = 0;
    /* VAR */ numeric_int_t x46818 = 0;
    while(1) {
      
      numeric_int_t x46820 = x46732;
      boolean_t x46821 = x46820<(x6711);
      if (!(x46821)) break; 
      
      numeric_int_t x3175 = x46732;
      struct CUSTOMERRecord* x271 = &(x8654[x3175]);
      numeric_int_t x273 = x271->C_CUSTKEY;
      void* x10980 = (void*){x273};
      void* x10981 = (void*){x271};
      void* x10982 = g_hash_table_lookup(x46686, x10980);
      GList** x10983 = (GList**){x10982};
      GList** x10984 = NULL;
      boolean_t x10985 = x10983==(x10984);
      /* VAR */ GList** ite35807 = 0;
      if(x10985) {
        GList** x35808 = malloc(8);
        GList* x35809 = NULL;
        pointer_assign(x35808, x35809);
        ite35807 = x35808;
      } else {
        
        ite35807 = x10983;
      };
      GList** x10989 = ite35807;
      GList* x10990 = *(x10989);
      GList* x10991 = g_list_prepend(x10990, x10981);
      pointer_assign(x10989, x10991);
      void* x10993 = (void*){x10989};
      g_hash_table_insert(x46686, x10980, x10993);
      numeric_int_t x3180 = x46732;
      numeric_int_t x277 = x3180+(1);
      x46732 = x277;
    };
    while(1) {
      
      numeric_int_t x46849 = x46726;
      boolean_t x46850 = x46849<(x6319);
      if (!(x46850)) break; 
      
      numeric_int_t x3189 = x46726;
      struct NATIONRecord* x286 = &(x8253[x3189]);
      x46728 = x286;
      while(1) {
        
        numeric_int_t x46855 = x46727;
        boolean_t x46856 = x46855<(x6319);
        if (!(x46856)) break; 
        
        numeric_int_t x3199 = x46727;
        struct NATIONRecord* x295 = &(x8253[x3199]);
        struct NATIONRecord* x3202 = x46728;
        char* x298 = x3202->N_NAME;
        boolean_t x28052 = strcmp(x298, "UNITED STATES");
        boolean_t x28053 = x28052==(0);
        /* VAR */ boolean_t ite38547 = 0;
        if(x28053) {
          char* x46865 = x295->N_NAME;
          boolean_t x46866 = strcmp(x46865, "INDONESIA");
          boolean_t x46867 = x46866==(0);
          ite38547 = x46867;
        } else {
          
          ite38547 = 0;
        };
        boolean_t x35837 = ite38547;
        /* VAR */ boolean_t ite38557 = 0;
        if(x35837) {
          ite38557 = 1;
        } else {
          
          boolean_t x46875 = strcmp(x298, "INDONESIA");
          boolean_t x46876 = x46875==(0);
          /* VAR */ boolean_t x46877 = 0;
          if(x46876) {
            char* x46879 = x295->N_NAME;
            boolean_t x46880 = strcmp(x46879, "UNITED STATES");
            boolean_t x46881 = x46880==(0);
            x46877 = x46881;
          } else {
            
            x46877 = 0;
          };
          boolean_t x46885 = x46877;
          ite38557 = x46885;
        };
        boolean_t x35839 = ite38557;
        if(x35839) {
          struct NATIONRecord* x3214 = x46728;
          numeric_int_t x1049 = x3214->N_NATIONKEY;
          char* x1050 = x3214->N_NAME;
          numeric_int_t x1051 = x3214->N_REGIONKEY;
          char* x1052 = x3214->N_COMMENT;
          numeric_int_t x1053 = x295->N_NATIONKEY;
          char* x1054 = x295->N_NAME;
          numeric_int_t x1055 = x295->N_REGIONKEY;
          char* x1056 = x295->N_COMMENT;
          struct NATIONRecord_NATIONRecord* x9980 = (struct NATIONRecord_NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord_NATIONRecord));
          memset(x9980, 0, 1 * sizeof(struct NATIONRecord_NATIONRecord));
          x9980->N1_N_NATIONKEY = x1049; x9980->N1_N_NAME = x1050; x9980->N1_N_REGIONKEY = x1051; x9980->N1_N_COMMENT = x1052; x9980->N2_N_NATIONKEY = x1053; x9980->N2_N_NAME = x1054; x9980->N2_N_REGIONKEY = x1055; x9980->N2_N_COMMENT = x1056;
          numeric_int_t x310 = x9980->N1_N_NATIONKEY;
          void* x11036 = (void*){x310};
          void* x11037 = (void*){x9980};
          void* x11038 = g_hash_table_lookup(x46716, x11036);
          GList** x11039 = (GList**){x11038};
          GList** x11040 = NULL;
          boolean_t x11041 = x11039==(x11040);
          /* VAR */ GList** ite35861 = 0;
          if(x11041) {
            GList** x35862 = malloc(8);
            GList* x35863 = NULL;
            pointer_assign(x35862, x35863);
            ite35861 = x35862;
          } else {
            
            ite35861 = x11039;
          };
          GList** x11045 = ite35861;
          GList* x11046 = *(x11045);
          GList* x11047 = g_list_prepend(x11046, x11037);
          pointer_assign(x11045, x11047);
          void* x11049 = (void*){x11045};
          g_hash_table_insert(x46716, x11036, x11049);
        };
        numeric_int_t x3226 = x46727;
        numeric_int_t x315 = x3226+(1);
        x46727 = x315;
      };
      x46727 = 0;
      numeric_int_t x3230 = x46726;
      numeric_int_t x320 = x3230+(1);
      x46726 = x320;
    };
    while(1) {
      
      numeric_int_t x46931 = x46729;
      boolean_t x46932 = x46931<(x6840);
      if (!(x46932)) break; 
      
      numeric_int_t x3239 = x46729;
      struct SUPPLIERRecord* x329 = &(x8786[x3239]);
      numeric_int_t x331 = x329->S_NATIONKEY;
      void* x11065 = (void*){x331};
      void* x11066 = g_hash_table_lookup(x46716, x11065);
      GList** x11067 = (GList**){x11066};
      boolean_t x20666 = x11067!=(NULL);
      if(x20666) {
        GList* x13352 = *(x11067);
        /* VAR */ GList* x13353 = x13352;
        while(1) {
          
          GList* x13354 = x13353;
          GList* x13355 = NULL;
          boolean_t x13356 = x13354!=(x13355);
          if (!(x13356)) break; 
          
          GList* x13357 = x13353;
          void* x13358 = g_list_nth_data(x13357, 0);
          struct NATIONRecord_NATIONRecord* x13359 = (struct NATIONRecord_NATIONRecord*){x13358};
          GList* x13360 = x13353;
          GList* x13361 = g_list_next(x13360);
          x13353 = x13361;
          numeric_int_t x13363 = x13359->N1_N_NATIONKEY;
          boolean_t x13364 = x13363==(x331);
          if(x13364) {
            char* x1113 = x13359->N1_N_NAME;
            numeric_int_t x1114 = x13359->N1_N_REGIONKEY;
            char* x1115 = x13359->N1_N_COMMENT;
            numeric_int_t x1116 = x13359->N2_N_NATIONKEY;
            char* x1117 = x13359->N2_N_NAME;
            numeric_int_t x1118 = x13359->N2_N_REGIONKEY;
            char* x1119 = x13359->N2_N_COMMENT;
            numeric_int_t x1120 = x329->S_SUPPKEY;
            char* x1121 = x329->S_NAME;
            char* x1122 = x329->S_ADDRESS;
            char* x1123 = x329->S_PHONE;
            double x1124 = x329->S_ACCTBAL;
            char* x1125 = x329->S_COMMENT;
            struct NATIONRecord_NATIONRecord_SUPPLIERRecord* x10021 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord));
            memset(x10021, 0, 1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord));
            x10021->N1_N_NATIONKEY = x13363; x10021->N1_N_NAME = x1113; x10021->N1_N_REGIONKEY = x1114; x10021->N1_N_COMMENT = x1115; x10021->N2_N_NATIONKEY = x1116; x10021->N2_N_NAME = x1117; x10021->N2_N_REGIONKEY = x1118; x10021->N2_N_COMMENT = x1119; x10021->S_SUPPKEY = x1120; x10021->S_NAME = x1121; x10021->S_ADDRESS = x1122; x10021->S_NATIONKEY = x331; x10021->S_PHONE = x1123; x10021->S_ACCTBAL = x1124; x10021->S_COMMENT = x1125;
            numeric_int_t x352 = x10021->S_SUPPKEY;
            void* x11094 = (void*){x352};
            void* x11095 = (void*){x10021};
            void* x11096 = g_hash_table_lookup(x46706, x11094);
            GList** x11097 = (GList**){x11096};
            GList** x11098 = NULL;
            boolean_t x11099 = x11097==(x11098);
            /* VAR */ GList** ite35972 = 0;
            if(x11099) {
              GList** x35973 = malloc(8);
              GList* x35974 = NULL;
              pointer_assign(x35973, x35974);
              ite35972 = x35973;
            } else {
              
              ite35972 = x11097;
            };
            GList** x11103 = ite35972;
            GList* x11104 = *(x11103);
            GList* x11105 = g_list_prepend(x11104, x11095);
            pointer_assign(x11103, x11105);
            void* x11107 = (void*){x11103};
            g_hash_table_insert(x46706, x11094, x11107);
          };
        };
      };
      numeric_int_t x3293 = x46729;
      numeric_int_t x360 = x3293+(1);
      x46729 = x360;
    };
    while(1) {
      
      numeric_int_t x47039 = x46730;
      boolean_t x47040 = x47039<(x6522);
      if (!(x47040)) break; 
      
      numeric_int_t x3303 = x46730;
      struct LINEITEMRecord* x370 = &(x8462[x3303]);
      numeric_int_t x372 = x370->L_SHIPDATE;
      boolean_t x374 = x372>=(19950101);
      /* VAR */ boolean_t ite38726 = 0;
      if(x374) {
        boolean_t x47047 = x372<=(19961231);
        ite38726 = x47047;
      } else {
        
        ite38726 = 0;
      };
      boolean_t x35995 = ite38726;
      if(x35995) {
        numeric_int_t x378 = x370->L_SUPPKEY;
        void* x11125 = (void*){x378};
        void* x11126 = g_hash_table_lookup(x46706, x11125);
        GList** x11127 = (GList**){x11126};
        boolean_t x20770 = x11127!=(NULL);
        if(x20770) {
          GList* x13473 = *(x11127);
          /* VAR */ GList* x13474 = x13473;
          while(1) {
            
            GList* x13475 = x13474;
            GList* x13476 = NULL;
            boolean_t x13477 = x13475!=(x13476);
            if (!(x13477)) break; 
            
            GList* x13478 = x13474;
            void* x13479 = g_list_nth_data(x13478, 0);
            struct NATIONRecord_NATIONRecord_SUPPLIERRecord* x13480 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord*){x13479};
            GList* x13481 = x13474;
            GList* x13482 = g_list_next(x13481);
            x13474 = x13482;
            numeric_int_t x13484 = x13480->S_SUPPKEY;
            boolean_t x13485 = x13484==(x378);
            if(x13485) {
              numeric_int_t x1202 = x13480->N1_N_NATIONKEY;
              char* x1203 = x13480->N1_N_NAME;
              numeric_int_t x1204 = x13480->N1_N_REGIONKEY;
              char* x1205 = x13480->N1_N_COMMENT;
              numeric_int_t x1206 = x13480->N2_N_NATIONKEY;
              char* x1207 = x13480->N2_N_NAME;
              numeric_int_t x1208 = x13480->N2_N_REGIONKEY;
              char* x1209 = x13480->N2_N_COMMENT;
              char* x1210 = x13480->S_NAME;
              char* x1211 = x13480->S_ADDRESS;
              numeric_int_t x1212 = x13480->S_NATIONKEY;
              char* x1213 = x13480->S_PHONE;
              double x1214 = x13480->S_ACCTBAL;
              char* x1215 = x13480->S_COMMENT;
              numeric_int_t x1216 = x370->L_ORDERKEY;
              numeric_int_t x1217 = x370->L_PARTKEY;
              numeric_int_t x1218 = x370->L_LINENUMBER;
              double x1219 = x370->L_QUANTITY;
              double x1220 = x370->L_EXTENDEDPRICE;
              double x1221 = x370->L_DISCOUNT;
              double x1222 = x370->L_TAX;
              char x1223 = x370->L_RETURNFLAG;
              char x1224 = x370->L_LINESTATUS;
              numeric_int_t x1225 = x370->L_COMMITDATE;
              numeric_int_t x1226 = x370->L_RECEIPTDATE;
              char* x1227 = x370->L_SHIPINSTRUCT;
              char* x1228 = x370->L_SHIPMODE;
              char* x1229 = x370->L_COMMENT;
              struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x10079 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              memset(x10079, 0, 1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              x10079->N1_N_NATIONKEY = x1202; x10079->N1_N_NAME = x1203; x10079->N1_N_REGIONKEY = x1204; x10079->N1_N_COMMENT = x1205; x10079->N2_N_NATIONKEY = x1206; x10079->N2_N_NAME = x1207; x10079->N2_N_REGIONKEY = x1208; x10079->N2_N_COMMENT = x1209; x10079->S_SUPPKEY = x13484; x10079->S_NAME = x1210; x10079->S_ADDRESS = x1211; x10079->S_NATIONKEY = x1212; x10079->S_PHONE = x1213; x10079->S_ACCTBAL = x1214; x10079->S_COMMENT = x1215; x10079->L_ORDERKEY = x1216; x10079->L_PARTKEY = x1217; x10079->L_SUPPKEY = x378; x10079->L_LINENUMBER = x1218; x10079->L_QUANTITY = x1219; x10079->L_EXTENDEDPRICE = x1220; x10079->L_DISCOUNT = x1221; x10079->L_TAX = x1222; x10079->L_RETURNFLAG = x1223; x10079->L_LINESTATUS = x1224; x10079->L_SHIPDATE = x372; x10079->L_COMMITDATE = x1225; x10079->L_RECEIPTDATE = x1226; x10079->L_SHIPINSTRUCT = x1227; x10079->L_SHIPMODE = x1228; x10079->L_COMMENT = x1229;
              numeric_int_t x399 = x10079->L_ORDERKEY;
              void* x11169 = (void*){x399};
              void* x11170 = (void*){x10079};
              void* x11171 = g_hash_table_lookup(x46696, x11169);
              GList** x11172 = (GList**){x11171};
              GList** x11173 = NULL;
              boolean_t x11174 = x11172==(x11173);
              /* VAR */ GList** ite36114 = 0;
              if(x11174) {
                GList** x36115 = malloc(8);
                GList* x36116 = NULL;
                pointer_assign(x36115, x36116);
                ite36114 = x36115;
              } else {
                
                ite36114 = x11172;
              };
              GList** x11178 = ite36114;
              GList* x11179 = *(x11178);
              GList* x11180 = g_list_prepend(x11179, x11170);
              pointer_assign(x11178, x11180);
              void* x11182 = (void*){x11178};
              g_hash_table_insert(x46696, x11169, x11182);
            };
          };
        };
      };
      numeric_int_t x3394 = x46730;
      numeric_int_t x408 = x3394+(1);
      x46730 = x408;
    };
    while(1) {
      
      numeric_int_t x47187 = x46731;
      boolean_t x47188 = x47187<(x6396);
      if (!(x47188)) break; 
      
      numeric_int_t x3403 = x46731;
      struct ORDERSRecord* x417 = &(x8333[x3403]);
      numeric_int_t x419 = x417->O_ORDERKEY;
      void* x11195 = (void*){x419};
      void* x11196 = g_hash_table_lookup(x46696, x11195);
      GList** x11197 = (GList**){x11196};
      boolean_t x20899 = x11197!=(NULL);
      if(x20899) {
        GList* x13698 = *(x11197);
        /* VAR */ GList* x13699 = x13698;
        while(1) {
          
          GList* x13700 = x13699;
          GList* x13701 = NULL;
          boolean_t x13702 = x13700!=(x13701);
          if (!(x13702)) break; 
          
          GList* x13703 = x13699;
          void* x13704 = g_list_nth_data(x13703, 0);
          struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x13705 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x13704};
          GList* x13706 = x13699;
          GList* x13707 = g_list_next(x13706);
          x13699 = x13707;
          numeric_int_t x13709 = x13705->L_ORDERKEY;
          boolean_t x13710 = x13709==(x419);
          if(x13710) {
            numeric_int_t x1495 = x13705->N1_N_NATIONKEY;
            char* x1496 = x13705->N1_N_NAME;
            numeric_int_t x1497 = x13705->N1_N_REGIONKEY;
            char* x1498 = x13705->N1_N_COMMENT;
            numeric_int_t x1499 = x13705->N2_N_NATIONKEY;
            char* x1500 = x13705->N2_N_NAME;
            numeric_int_t x1501 = x13705->N2_N_REGIONKEY;
            char* x1502 = x13705->N2_N_COMMENT;
            numeric_int_t x1503 = x13705->S_SUPPKEY;
            char* x1504 = x13705->S_NAME;
            char* x1505 = x13705->S_ADDRESS;
            numeric_int_t x1506 = x13705->S_NATIONKEY;
            char* x1507 = x13705->S_PHONE;
            double x1508 = x13705->S_ACCTBAL;
            char* x1509 = x13705->S_COMMENT;
            numeric_int_t x1510 = x13705->L_PARTKEY;
            numeric_int_t x1511 = x13705->L_SUPPKEY;
            numeric_int_t x1512 = x13705->L_LINENUMBER;
            double x1513 = x13705->L_QUANTITY;
            double x1514 = x13705->L_EXTENDEDPRICE;
            double x1515 = x13705->L_DISCOUNT;
            double x1516 = x13705->L_TAX;
            char x1517 = x13705->L_RETURNFLAG;
            char x1518 = x13705->L_LINESTATUS;
            numeric_int_t x1519 = x13705->L_SHIPDATE;
            numeric_int_t x1520 = x13705->L_COMMITDATE;
            numeric_int_t x1521 = x13705->L_RECEIPTDATE;
            char* x1522 = x13705->L_SHIPINSTRUCT;
            char* x1523 = x13705->L_SHIPMODE;
            char* x1524 = x13705->L_COMMENT;
            numeric_int_t x1525 = x417->O_CUSTKEY;
            char x1526 = x417->O_ORDERSTATUS;
            double x1527 = x417->O_TOTALPRICE;
            numeric_int_t x1528 = x417->O_ORDERDATE;
            char* x1529 = x417->O_ORDERPRIORITY;
            char* x1530 = x417->O_CLERK;
            numeric_int_t x1531 = x417->O_SHIPPRIORITY;
            char* x1532 = x417->O_COMMENT;
            void* x11245 = (void*){x1525};
            void* x11246 = g_hash_table_lookup(x46686, x11245);
            GList** x11247 = (GList**){x11246};
            boolean_t x21097 = x11247!=(NULL);
            if(x21097) {
              GList* x13647 = *(x11247);
              /* VAR */ GList* x13648 = x13647;
              while(1) {
                
                GList* x13649 = x13648;
                GList* x13650 = NULL;
                boolean_t x13651 = x13649!=(x13650);
                if (!(x13651)) break; 
                
                GList* x13652 = x13648;
                void* x13653 = g_list_nth_data(x13652, 0);
                struct CUSTOMERRecord* x13654 = (struct CUSTOMERRecord*){x13653};
                GList* x13655 = x13648;
                GList* x13656 = g_list_next(x13655);
                x13648 = x13656;
                numeric_int_t x13658 = x13654->C_CUSTKEY;
                boolean_t x13659 = x13658==(x1525);
                /* VAR */ boolean_t ite39166 = 0;
                if(x13659) {
                  numeric_int_t x47482 = x13654->C_NATIONKEY;
                  boolean_t x47483 = x47482==(x1499);
                  ite39166 = x47483;
                } else {
                  
                  ite39166 = 0;
                };
                boolean_t x36406 = ite39166;
                if(x36406) {
                  char* x1642 = x13654->C_NAME;
                  char* x1643 = x13654->C_ADDRESS;
                  numeric_int_t x1644 = x13654->C_NATIONKEY;
                  char* x1645 = x13654->C_PHONE;
                  double x1646 = x13654->C_ACCTBAL;
                  char* x1647 = x13654->C_MKTSEGMENT;
                  char* x1648 = x13654->C_COMMENT;
                  struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord* x10161 = (struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord));
                  memset(x10161, 0, 1 * sizeof(struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord));
                  x10161->C_CUSTKEY = x13658; x10161->C_NAME = x1642; x10161->C_ADDRESS = x1643; x10161->C_NATIONKEY = x1644; x10161->C_PHONE = x1645; x10161->C_ACCTBAL = x1646; x10161->C_MKTSEGMENT = x1647; x10161->C_COMMENT = x1648; x10161->N1_N_NATIONKEY = x1495; x10161->N1_N_NAME = x1496; x10161->N1_N_REGIONKEY = x1497; x10161->N1_N_COMMENT = x1498; x10161->N2_N_NATIONKEY = x1499; x10161->N2_N_NAME = x1500; x10161->N2_N_REGIONKEY = x1501; x10161->N2_N_COMMENT = x1502; x10161->S_SUPPKEY = x1503; x10161->S_NAME = x1504; x10161->S_ADDRESS = x1505; x10161->S_NATIONKEY = x1506; x10161->S_PHONE = x1507; x10161->S_ACCTBAL = x1508; x10161->S_COMMENT = x1509; x10161->L_ORDERKEY = x13709; x10161->L_PARTKEY = x1510; x10161->L_SUPPKEY = x1511; x10161->L_LINENUMBER = x1512; x10161->L_QUANTITY = x1513; x10161->L_EXTENDEDPRICE = x1514; x10161->L_DISCOUNT = x1515; x10161->L_TAX = x1516; x10161->L_RETURNFLAG = x1517; x10161->L_LINESTATUS = x1518; x10161->L_SHIPDATE = x1519; x10161->L_COMMITDATE = x1520; x10161->L_RECEIPTDATE = x1521; x10161->L_SHIPINSTRUCT = x1522; x10161->L_SHIPMODE = x1523; x10161->L_COMMENT = x1524; x10161->O_ORDERKEY = x419; x10161->O_CUSTKEY = x1525; x10161->O_ORDERSTATUS = x1526; x10161->O_TOTALPRICE = x1527; x10161->O_ORDERDATE = x1528; x10161->O_ORDERPRIORITY = x1529; x10161->O_CLERK = x1530; x10161->O_SHIPPRIORITY = x1531; x10161->O_COMMENT = x1532;
                  char* x595 = x10161->N1_N_NAME;
                  char* x596 = x10161->N2_N_NAME;
                  numeric_int_t x597 = x10161->L_SHIPDATE;
                  numeric_int_t x5953 = x597/(10000);
                  struct Q7GRPRecord* x10168 = (struct Q7GRPRecord*)malloc(1 * sizeof(struct Q7GRPRecord));
                  memset(x10168, 0, 1 * sizeof(struct Q7GRPRecord));
                  x10168->SUPP_NATION = x595; x10168->CUST_NATION = x596; x10168->L_YEAR = x5953;
                  void* x13681 = g_hash_table_lookup(x46676, x10168);
                  boolean_t x13628 = x13681==(NULL);
                  /* VAR */ struct AGGRecord_Q7GRPRecord* ite36428 = 0;
                  if(x13628) {
                    double* x36429 = (double*)malloc(1 * sizeof(double));
                    memset(x36429, 0, 1 * sizeof(double));
                    struct AGGRecord_Q7GRPRecord* x36430 = (struct AGGRecord_Q7GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q7GRPRecord));
                    memset(x36430, 0, 1 * sizeof(struct AGGRecord_Q7GRPRecord));
                    x36430->key = x10168; x36430->aggs = x36429;
                    g_hash_table_insert(x46676, x10168, x36430);
                    ite36428 = x36430;
                  } else {
                    
                    ite36428 = x13681;
                  };
                  struct AGGRecord_Q7GRPRecord* x13638 = ite36428;
                  double* x604 = x13638->aggs;
                  double x618 = x604[0];
                  double x619 = x10161->L_EXTENDEDPRICE;
                  double x620 = x10161->L_DISCOUNT;
                  double x621 = 1.0-(x620);
                  double x622 = x619*(x621);
                  double x623 = x618+(x622);
                  *x604 = x623;
                };
              };
            };
          };
        };
      };
      numeric_int_t x3715 = x46731;
      numeric_int_t x638 = x3715+(1);
      x46731 = x638;
    };
    GList* x47534 = g_hash_table_get_keys(x46676);
    /* VAR */ GList* x47535 = x47534;
    numeric_int_t x47536 = g_hash_table_size(x46676);
    numeric_int_t x31644 = 0;
    for(; x31644 < x47536 ; x31644 += 1) {
      
      GList* x31645 = x47535;
      void* x31646 = g_list_nth_data(x31645, 0);
      GList* x31647 = g_list_next(x31645);
      x47535 = x31647;
      void* x31649 = g_hash_table_lookup(x46676, x31646);
      struct AGGRecord_Q7GRPRecord* x31651 = (struct AGGRecord_Q7GRPRecord*){x31649};
      g_tree_insert(x46816, x31651, x31651);
    };
    while(1) {
      
      boolean_t x3724 = x46817;
      boolean_t x649 = !(x3724);
      /* VAR */ boolean_t ite39246 = 0;
      if(x649) {
        numeric_int_t x47561 = g_tree_nnodes(x46816);
        boolean_t x47562 = x47561!=(0);
        ite39246 = x47562;
      } else {
        
        ite39246 = 0;
      };
      boolean_t x36479 = ite39246;
      if (!(x36479)) break; 
      
      void* x13880 = NULL;
      void** x13888 = &(x13880);
      g_tree_foreach(x46816, x13887, x13888);
      struct AGGRecord_Q7GRPRecord* x13890 = (struct AGGRecord_Q7GRPRecord*){x13880};
      numeric_int_t x13891 = g_tree_remove(x46816, x13890);
      if(0) {
        x46817 = 1;
      } else {
        
        struct Q7GRPRecord* x662 = x13890->key;
        char* x663 = x662->SUPP_NATION;
        char* x665 = x662->CUST_NATION;
        numeric_int_t x667 = x662->L_YEAR;
        double* x668 = x13890->aggs;
        double x669 = x668[0];
        printf("%s|%s|%d|%.4f\n", x663, x665, x667, x669);
        numeric_int_t x3746 = x46818;
        numeric_int_t x672 = x3746+(1);
        x46818 = x672;
      };
    };
    numeric_int_t x47591 = x46818;
    printf("(%d rows)\n", x47591);
    struct timeval* x47593 = &x46723;
    gettimeofday(x47593, NULL);
    struct timeval* x47595 = &x46719;
    struct timeval* x47596 = &x46723;
    struct timeval* x47597 = &x46721;
    long x47598 = timeval_subtract(x47595, x47596, x47597);
    printf("Generated code run in %ld milliseconds.\n", x47598);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x46611(struct Q7GRPRecord* x13103) {
  char* x23381 = x13103->SUPP_NATION;
  numeric_int_t x27855 = strlen(x23381);
  /* VAR */ numeric_int_t x24859 = 0;
  /* VAR */ numeric_int_t x24860 = 0;
  while(1) {
    
    numeric_int_t x24861 = x24859;
    boolean_t x24862 = x24861<(x27855);
    if (!(x24862)) break; 
    
    numeric_int_t x24863 = x24860;
    numeric_int_t x24864 = x24859;
    char* x27863 = pointer_add(x23381, x24864);
    char x27864 = *(x27863);
    numeric_int_t x24867 = x24863+(x27864);
    x24860 = x24867;
    numeric_int_t x24869 = x24859;
    numeric_int_t x24870 = x24869+(1);
    x24859 = x24870;
  };
  numeric_int_t x24873 = x24860;
  char* x23383 = x13103->CUST_NATION;
  numeric_int_t x27873 = strlen(x23383);
  /* VAR */ numeric_int_t x24876 = 0;
  /* VAR */ numeric_int_t x24877 = 0;
  while(1) {
    
    numeric_int_t x24878 = x24876;
    boolean_t x24879 = x24878<(x27873);
    if (!(x24879)) break; 
    
    numeric_int_t x24880 = x24877;
    numeric_int_t x24881 = x24876;
    char* x27881 = pointer_add(x23383, x24881);
    char x27882 = *(x27881);
    numeric_int_t x24884 = x24880+(x27882);
    x24877 = x24884;
    numeric_int_t x24886 = x24876;
    numeric_int_t x24887 = x24886+(1);
    x24876 = x24887;
  };
  numeric_int_t x24890 = x24877;
  numeric_int_t x23385 = x13103->L_YEAR;
  numeric_int_t x23387 = x24873+(x24890);
  numeric_int_t x23388 = x23387+(x23385);
  return x23388; 
}

boolean_t x46650(struct Q7GRPRecord* x13108, struct Q7GRPRecord* x13109) {
  char* x23392 = x13108->SUPP_NATION;
  char* x23393 = x13109->SUPP_NATION;
  boolean_t x24899 = strcmp(x23392, x23393);
  boolean_t x24900 = !(x24899);
  char* x23395 = x13108->CUST_NATION;
  char* x23396 = x13109->CUST_NATION;
  boolean_t x24903 = strcmp(x23395, x23396);
  boolean_t x24904 = !(x24903);
  numeric_int_t x23398 = x13108->L_YEAR;
  numeric_int_t x23399 = x13109->L_YEAR;
  boolean_t x23400 = x23398==(x23399);
  /* VAR */ boolean_t ite38343 = 0;
  if(x24900) {
    ite38343 = x24904;
  } else {
    
    ite38343 = 0;
  };
  boolean_t x35649 = ite38343;
  /* VAR */ boolean_t ite38350 = 0;
  if(x35649) {
    ite38350 = x23400;
  } else {
    
    ite38350 = 0;
  };
  boolean_t x35651 = ite38350;
  return x35651; 
}

numeric_int_t x46677(void* x10892) {
  numeric_int_t x10893 = g_direct_hash(x10892);
  return x10893; 
}

numeric_int_t x46680(void* x10895, void* x10896) {
  numeric_int_t x10897 = g_direct_equal(x10895, x10896);
  return x10897; 
}

numeric_int_t x46687(void* x10902) {
  numeric_int_t x10903 = g_direct_hash(x10902);
  return x10903; 
}

numeric_int_t x46690(void* x10905, void* x10906) {
  numeric_int_t x10907 = g_direct_equal(x10905, x10906);
  return x10907; 
}

numeric_int_t x46697(void* x10912) {
  numeric_int_t x10913 = g_direct_hash(x10912);
  return x10913; 
}

numeric_int_t x46700(void* x10915, void* x10916) {
  numeric_int_t x10917 = g_direct_equal(x10915, x10916);
  return x10917; 
}

numeric_int_t x46707(void* x10922) {
  numeric_int_t x10923 = g_direct_hash(x10922);
  return x10923; 
}

numeric_int_t x46710(void* x10925, void* x10926) {
  numeric_int_t x10927 = g_direct_equal(x10925, x10926);
  return x10927; 
}

numeric_int_t x46774(struct AGGRecord_Q7GRPRecord* x231, struct AGGRecord_Q7GRPRecord* x232) {
  struct Q7GRPRecord* x233 = x231->key;
  struct Q7GRPRecord* x234 = x232->key;
  char* x235 = x233->SUPP_NATION;
  char* x236 = x234->SUPP_NATION;
  numeric_int_t x27994 = strcmp(x235, x236);
  boolean_t x238 = x27994!=(0);
  /* VAR */ numeric_int_t ite35760 = 0;
  if(x238) {
    ite35760 = x27994;
  } else {
    
    char* x35762 = x233->CUST_NATION;
    char* x35763 = x234->CUST_NATION;
    numeric_int_t x35764 = strcmp(x35762, x35763);
    boolean_t x35765 = x35764!=(0);
    /* VAR */ numeric_int_t ite35767 = 0;
    if(x35765) {
      ite35767 = x35764;
    } else {
      
      numeric_int_t x35769 = x233->L_YEAR;
      numeric_int_t x35770 = x234->L_YEAR;
      boolean_t x35771 = x35769<(x35770);
      /* VAR */ numeric_int_t ite35773 = 0;
      if(x35771) {
        ite35773 = -1;
      } else {
        
        boolean_t x35775 = x35769>(x35770);
        /* VAR */ numeric_int_t ite35777 = 0;
        if(x35775) {
          ite35777 = 1;
        } else {
          
          ite35777 = 0;
        };
        numeric_int_t x35776 = ite35777;
        ite35773 = x35776;
      };
      numeric_int_t x35772 = ite35773;
      ite35767 = x35772;
    };
    numeric_int_t x35766 = ite35767;
    ite35760 = x35766;
  };
  numeric_int_t x250 = ite35760;
  return x250; 
}

numeric_int_t x13887(void* x13881, void* x13882, void* x13883) {
  struct AGGRecord_Q7GRPRecord** x13884 = (struct AGGRecord_Q7GRPRecord**){x13883};
  struct AGGRecord_Q7GRPRecord* x13885 = (struct AGGRecord_Q7GRPRecord*){x13882};
  pointer_assign(x13884, x13885);
  return 1; 
}
