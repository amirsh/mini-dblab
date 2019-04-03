#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


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
  FILE* x6195 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x6196 = 0;
  numeric_int_t x6197 = x6196;
  numeric_int_t* x6198 = &x6197;
  numeric_int_t x6199 = fscanf(x6195, "%d", x6198);
  pclose(x6195);
  struct NATIONRecord* x8221 = (struct NATIONRecord*)malloc(x6197 * sizeof(struct NATIONRecord));
  memset(x8221, 0, x6197 * sizeof(struct NATIONRecord));
  numeric_int_t x6203 = O_RDONLY;
  numeric_int_t x6204 = open("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x6203);
  struct stat x6205 = (struct stat){0};
  /* VAR */ struct stat x6206 = x6205;
  struct stat x6207 = x6206;
  struct stat* x6208 = &x6207;
  numeric_int_t x6209 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x6208);
  size_t x6210 = x6208->st_size;
  numeric_int_t x6211 = PROT_READ;
  numeric_int_t x6212 = MAP_PRIVATE;
  char* x6213 = mmap(NULL, x6210, x6211, x6212, x6204, 0);
  /* VAR */ char* x6214 = x6213;
  char* x3 = x6214;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x6197);
    /* VAR */ boolean_t ite35986 = 0;
    if(x6) {
      char x41447 = *x3;
      boolean_t x41448 = x41447!=('\0');
      ite35986 = x41448;
    } else {
      
      ite35986 = 0;
    };
    boolean_t x33537 = ite35986;
    if (!(x33537)) break; 
    
    /* VAR */ numeric_int_t x6222 = 0;
    numeric_int_t x6223 = x6222;
    numeric_int_t* x6224 = &x6223;
    char* x6225 = strntoi_unchecked(x3, x6224);
    x3 = x6225;
    /* VAR */ char* x6227 = x3;
    while(1) {
      
      char x6228 = *x3;
      boolean_t x6229 = x6228!=('|');
      /* VAR */ boolean_t ite36004 = 0;
      if(x6229) {
        char x41464 = *x3;
        boolean_t x41465 = x41464!=('\n');
        ite36004 = x41465;
      } else {
        
        ite36004 = 0;
      };
      boolean_t x33548 = ite36004;
      if (!(x33548)) break; 
      
      x3 += 1;
    };
    char* x6235 = x6227;
    numeric_int_t x6236 = x3 - x6235;
    numeric_int_t x6237 = x6236+(1);
    char* x8258 = (char*)malloc(x6237 * sizeof(char));
    memset(x8258, 0, x6237 * sizeof(char));
    char* x6240 = x6227;
    char* x6241 = strncpy(x8258, x6240, x6236);
    x3 += 1;
    /* VAR */ numeric_int_t x6243 = 0;
    numeric_int_t x6244 = x6243;
    numeric_int_t* x6245 = &x6244;
    char* x6246 = strntoi_unchecked(x3, x6245);
    x3 = x6246;
    /* VAR */ char* x6248 = x3;
    while(1) {
      
      char x6249 = *x3;
      boolean_t x6250 = x6249!=('|');
      /* VAR */ boolean_t ite36030 = 0;
      if(x6250) {
        char x41489 = *x3;
        boolean_t x41490 = x41489!=('\n');
        ite36030 = x41490;
      } else {
        
        ite36030 = 0;
      };
      boolean_t x33567 = ite36030;
      if (!(x33567)) break; 
      
      x3 += 1;
    };
    char* x6256 = x6248;
    numeric_int_t x6257 = x3 - x6256;
    numeric_int_t x6258 = x6257+(1);
    char* x8279 = (char*)malloc(x6258 * sizeof(char));
    memset(x8279, 0, x6258 * sizeof(char));
    char* x6261 = x6248;
    char* x6262 = strncpy(x8279, x6261, x6257);
    x3 += 1;
    struct NATIONRecord* x9312 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x9312, 0, 1 * sizeof(struct NATIONRecord));
    x9312->N_NATIONKEY = x6223; x9312->N_NAME = x8258; x9312->N_REGIONKEY = x6244; x9312->N_COMMENT = x8279;
    numeric_int_t x14 = x4;
    struct NATIONRecord x8286 = *x9312;
    *(x8221 + x14) = x8286;
    struct NATIONRecord* x8288 = &(x8221[x14]);
    x9312 = x8288;
    numeric_int_t x16 = x4;
    numeric_int_t x17 = x16+(1);
    x4 = x17;
  };
  char* x6271 = x6214;
  munmap(x6271, x6210);
  FILE* x6272 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/region.tbl", "r");
  /* VAR */ numeric_int_t x6273 = 0;
  numeric_int_t x6274 = x6273;
  numeric_int_t* x6275 = &x6274;
  numeric_int_t x6276 = fscanf(x6272, "%d", x6275);
  pclose(x6272);
  struct REGIONRecord* x8301 = (struct REGIONRecord*)malloc(x6274 * sizeof(struct REGIONRecord));
  memset(x8301, 0, x6274 * sizeof(struct REGIONRecord));
  numeric_int_t x6280 = O_RDONLY;
  numeric_int_t x6281 = open("/Users/amirsh/Dropbox/sf0.1/sf1/region.tbl", x6280);
  /* VAR */ struct stat x6282 = x6205;
  struct stat x6283 = x6282;
  struct stat* x6284 = &x6283;
  numeric_int_t x6285 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/region.tbl", x6284);
  size_t x6286 = x6284->st_size;
  numeric_int_t x6287 = PROT_READ;
  numeric_int_t x6288 = MAP_PRIVATE;
  char* x6289 = mmap(NULL, x6286, x6287, x6288, x6281, 0);
  /* VAR */ char* x6290 = x6289;
  char* x23 = x6290;
  /* VAR */ numeric_int_t x24 = 0;
  while(1) {
    
    numeric_int_t x25 = x24;
    boolean_t x26 = x25<(x6274);
    /* VAR */ boolean_t ite36083 = 0;
    if(x26) {
      char x41541 = *x23;
      boolean_t x41542 = x41541!=('\0');
      ite36083 = x41542;
    } else {
      
      ite36083 = 0;
    };
    boolean_t x33613 = ite36083;
    if (!(x33613)) break; 
    
    /* VAR */ numeric_int_t x6298 = 0;
    numeric_int_t x6299 = x6298;
    numeric_int_t* x6300 = &x6299;
    char* x6301 = strntoi_unchecked(x23, x6300);
    x23 = x6301;
    /* VAR */ char* x6303 = x23;
    while(1) {
      
      char x6304 = *x23;
      boolean_t x6305 = x6304!=('|');
      /* VAR */ boolean_t ite36101 = 0;
      if(x6305) {
        char x41558 = *x23;
        boolean_t x41559 = x41558!=('\n');
        ite36101 = x41559;
      } else {
        
        ite36101 = 0;
      };
      boolean_t x33624 = ite36101;
      if (!(x33624)) break; 
      
      x23 += 1;
    };
    char* x6311 = x6303;
    numeric_int_t x6312 = x23 - x6311;
    numeric_int_t x6313 = x6312+(1);
    char* x8337 = (char*)malloc(x6313 * sizeof(char));
    memset(x8337, 0, x6313 * sizeof(char));
    char* x6316 = x6303;
    char* x6317 = strncpy(x8337, x6316, x6312);
    x23 += 1;
    /* VAR */ char* x6319 = x23;
    while(1) {
      
      char x6320 = *x23;
      boolean_t x6321 = x6320!=('|');
      /* VAR */ boolean_t ite36122 = 0;
      if(x6321) {
        char x41578 = *x23;
        boolean_t x41579 = x41578!=('\n');
        ite36122 = x41579;
      } else {
        
        ite36122 = 0;
      };
      boolean_t x33638 = ite36122;
      if (!(x33638)) break; 
      
      x23 += 1;
    };
    char* x6327 = x6319;
    numeric_int_t x6328 = x23 - x6327;
    numeric_int_t x6329 = x6328+(1);
    char* x8353 = (char*)malloc(x6329 * sizeof(char));
    memset(x8353, 0, x6329 * sizeof(char));
    char* x6332 = x6319;
    char* x6333 = strncpy(x8353, x6332, x6328);
    x23 += 1;
    struct REGIONRecord* x9388 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x9388, 0, 1 * sizeof(struct REGIONRecord));
    x9388->R_REGIONKEY = x6299; x9388->R_NAME = x8337; x9388->R_COMMENT = x8353;
    numeric_int_t x33 = x24;
    struct REGIONRecord x8360 = *x9388;
    *(x8301 + x33) = x8360;
    struct REGIONRecord* x8362 = &(x8301[x33]);
    x9388 = x8362;
    numeric_int_t x35 = x24;
    numeric_int_t x36 = x35+(1);
    x24 = x36;
  };
  char* x6342 = x6290;
  munmap(x6342, x6286);
  FILE* x6343 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x6344 = 0;
  numeric_int_t x6345 = x6344;
  numeric_int_t* x6346 = &x6345;
  numeric_int_t x6347 = fscanf(x6343, "%d", x6346);
  pclose(x6343);
  struct SUPPLIERRecord* x8375 = (struct SUPPLIERRecord*)malloc(x6345 * sizeof(struct SUPPLIERRecord));
  memset(x8375, 0, x6345 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x6351 = O_RDONLY;
  numeric_int_t x6352 = open("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x6351);
  /* VAR */ struct stat x6353 = x6205;
  struct stat x6354 = x6353;
  struct stat* x6355 = &x6354;
  numeric_int_t x6356 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x6355);
  size_t x6357 = x6355->st_size;
  numeric_int_t x6358 = PROT_READ;
  numeric_int_t x6359 = MAP_PRIVATE;
  char* x6360 = mmap(NULL, x6357, x6358, x6359, x6352, 0);
  /* VAR */ char* x6361 = x6360;
  char* x42 = x6361;
  /* VAR */ numeric_int_t x43 = 0;
  while(1) {
    
    numeric_int_t x44 = x43;
    boolean_t x45 = x44<(x6345);
    /* VAR */ boolean_t ite36175 = 0;
    if(x45) {
      char x41630 = *x42;
      boolean_t x41631 = x41630!=('\0');
      ite36175 = x41631;
    } else {
      
      ite36175 = 0;
    };
    boolean_t x33684 = ite36175;
    if (!(x33684)) break; 
    
    /* VAR */ numeric_int_t x6369 = 0;
    numeric_int_t x6370 = x6369;
    numeric_int_t* x6371 = &x6370;
    char* x6372 = strntoi_unchecked(x42, x6371);
    x42 = x6372;
    /* VAR */ char* x6374 = x42;
    while(1) {
      
      char x6375 = *x42;
      boolean_t x6376 = x6375!=('|');
      /* VAR */ boolean_t ite36193 = 0;
      if(x6376) {
        char x41647 = *x42;
        boolean_t x41648 = x41647!=('\n');
        ite36193 = x41648;
      } else {
        
        ite36193 = 0;
      };
      boolean_t x33695 = ite36193;
      if (!(x33695)) break; 
      
      x42 += 1;
    };
    char* x6382 = x6374;
    numeric_int_t x6383 = x42 - x6382;
    numeric_int_t x6384 = x6383+(1);
    char* x8411 = (char*)malloc(x6384 * sizeof(char));
    memset(x8411, 0, x6384 * sizeof(char));
    char* x6387 = x6374;
    char* x6388 = strncpy(x8411, x6387, x6383);
    x42 += 1;
    /* VAR */ char* x6390 = x42;
    while(1) {
      
      char x6391 = *x42;
      boolean_t x6392 = x6391!=('|');
      /* VAR */ boolean_t ite36214 = 0;
      if(x6392) {
        char x41667 = *x42;
        boolean_t x41668 = x41667!=('\n');
        ite36214 = x41668;
      } else {
        
        ite36214 = 0;
      };
      boolean_t x33709 = ite36214;
      if (!(x33709)) break; 
      
      x42 += 1;
    };
    char* x6398 = x6390;
    numeric_int_t x6399 = x42 - x6398;
    numeric_int_t x6400 = x6399+(1);
    char* x8427 = (char*)malloc(x6400 * sizeof(char));
    memset(x8427, 0, x6400 * sizeof(char));
    char* x6403 = x6390;
    char* x6404 = strncpy(x8427, x6403, x6399);
    x42 += 1;
    /* VAR */ numeric_int_t x6406 = 0;
    numeric_int_t x6407 = x6406;
    numeric_int_t* x6408 = &x6407;
    char* x6409 = strntoi_unchecked(x42, x6408);
    x42 = x6409;
    /* VAR */ char* x6411 = x42;
    while(1) {
      
      char x6412 = *x42;
      boolean_t x6413 = x6412!=('|');
      /* VAR */ boolean_t ite36240 = 0;
      if(x6413) {
        char x41692 = *x42;
        boolean_t x41693 = x41692!=('\n');
        ite36240 = x41693;
      } else {
        
        ite36240 = 0;
      };
      boolean_t x33728 = ite36240;
      if (!(x33728)) break; 
      
      x42 += 1;
    };
    char* x6419 = x6411;
    numeric_int_t x6420 = x42 - x6419;
    numeric_int_t x6421 = x6420+(1);
    char* x8448 = (char*)malloc(x6421 * sizeof(char));
    memset(x8448, 0, x6421 * sizeof(char));
    char* x6424 = x6411;
    char* x6425 = strncpy(x8448, x6424, x6420);
    x42 += 1;
    /* VAR */ double x6427 = 0.0;
    double x6428 = x6427;
    double* x6429 = &x6428;
    char* x6430 = strntod_unchecked(x42, x6429);
    x42 = x6430;
    /* VAR */ char* x6432 = x42;
    while(1) {
      
      char x6433 = *x42;
      boolean_t x6434 = x6433!=('|');
      /* VAR */ boolean_t ite36266 = 0;
      if(x6434) {
        char x41717 = *x42;
        boolean_t x41718 = x41717!=('\n');
        ite36266 = x41718;
      } else {
        
        ite36266 = 0;
      };
      boolean_t x33747 = ite36266;
      if (!(x33747)) break; 
      
      x42 += 1;
    };
    char* x6440 = x6432;
    numeric_int_t x6441 = x42 - x6440;
    numeric_int_t x6442 = x6441+(1);
    char* x8469 = (char*)malloc(x6442 * sizeof(char));
    memset(x8469, 0, x6442 * sizeof(char));
    char* x6445 = x6432;
    char* x6446 = strncpy(x8469, x6445, x6441);
    x42 += 1;
    struct SUPPLIERRecord* x9506 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x9506, 0, 1 * sizeof(struct SUPPLIERRecord));
    x9506->S_SUPPKEY = x6370; x9506->S_NAME = x8411; x9506->S_ADDRESS = x8427; x9506->S_NATIONKEY = x6407; x9506->S_PHONE = x8448; x9506->S_ACCTBAL = x6428; x9506->S_COMMENT = x8469;
    numeric_int_t x56 = x43;
    struct SUPPLIERRecord x8476 = *x9506;
    *(x8375 + x56) = x8476;
    struct SUPPLIERRecord* x8478 = &(x8375[x56]);
    x9506 = x8478;
    numeric_int_t x58 = x43;
    numeric_int_t x59 = x58+(1);
    x43 = x59;
  };
  char* x6455 = x6361;
  munmap(x6455, x6357);
  FILE* x6456 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x6457 = 0;
  numeric_int_t x6458 = x6457;
  numeric_int_t* x6459 = &x6458;
  numeric_int_t x6460 = fscanf(x6456, "%d", x6459);
  pclose(x6456);
  struct LINEITEMRecord* x8491 = (struct LINEITEMRecord*)malloc(x6458 * sizeof(struct LINEITEMRecord));
  memset(x8491, 0, x6458 * sizeof(struct LINEITEMRecord));
  numeric_int_t x6464 = O_RDONLY;
  numeric_int_t x6465 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x6464);
  /* VAR */ struct stat x6466 = x6205;
  struct stat x6467 = x6466;
  struct stat* x6468 = &x6467;
  numeric_int_t x6469 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x6468);
  size_t x6470 = x6468->st_size;
  numeric_int_t x6471 = PROT_READ;
  numeric_int_t x6472 = MAP_PRIVATE;
  char* x6473 = mmap(NULL, x6470, x6471, x6472, x6465, 0);
  /* VAR */ char* x6474 = x6473;
  char* x65 = x6474;
  /* VAR */ numeric_int_t x66 = 0;
  while(1) {
    
    numeric_int_t x67 = x66;
    boolean_t x68 = x67<(x6458);
    /* VAR */ boolean_t ite36319 = 0;
    if(x68) {
      char x41769 = *x65;
      boolean_t x41770 = x41769!=('\0');
      ite36319 = x41770;
    } else {
      
      ite36319 = 0;
    };
    boolean_t x33793 = ite36319;
    if (!(x33793)) break; 
    
    /* VAR */ numeric_int_t x6482 = 0;
    numeric_int_t x6483 = x6482;
    numeric_int_t* x6484 = &x6483;
    char* x6485 = strntoi_unchecked(x65, x6484);
    x65 = x6485;
    /* VAR */ numeric_int_t x6487 = 0;
    numeric_int_t x6488 = x6487;
    numeric_int_t* x6489 = &x6488;
    char* x6490 = strntoi_unchecked(x65, x6489);
    x65 = x6490;
    /* VAR */ numeric_int_t x6492 = 0;
    numeric_int_t x6493 = x6492;
    numeric_int_t* x6494 = &x6493;
    char* x6495 = strntoi_unchecked(x65, x6494);
    x65 = x6495;
    /* VAR */ numeric_int_t x6497 = 0;
    numeric_int_t x6498 = x6497;
    numeric_int_t* x6499 = &x6498;
    char* x6500 = strntoi_unchecked(x65, x6499);
    x65 = x6500;
    /* VAR */ double x6502 = 0.0;
    double x6503 = x6502;
    double* x6504 = &x6503;
    char* x6505 = strntod_unchecked(x65, x6504);
    x65 = x6505;
    /* VAR */ double x6507 = 0.0;
    double x6508 = x6507;
    double* x6509 = &x6508;
    char* x6510 = strntod_unchecked(x65, x6509);
    x65 = x6510;
    /* VAR */ double x6512 = 0.0;
    double x6513 = x6512;
    double* x6514 = &x6513;
    char* x6515 = strntod_unchecked(x65, x6514);
    x65 = x6515;
    /* VAR */ double x6517 = 0.0;
    double x6518 = x6517;
    double* x6519 = &x6518;
    char* x6520 = strntod_unchecked(x65, x6519);
    x65 = x6520;
    char x6522 = *x65;
    /* VAR */ char x6523 = x6522;
    x65 += 1;
    x65 += 1;
    char x6526 = x6523;
    char x6527 = *x65;
    /* VAR */ char x6528 = x6527;
    x65 += 1;
    x65 += 1;
    char x6531 = x6528;
    /* VAR */ numeric_int_t x6532 = 0;
    numeric_int_t x6533 = x6532;
    numeric_int_t* x6534 = &x6533;
    char* x6535 = strntoi_unchecked(x65, x6534);
    x65 = x6535;
    /* VAR */ numeric_int_t x6537 = 0;
    numeric_int_t x6538 = x6537;
    numeric_int_t* x6539 = &x6538;
    char* x6540 = strntoi_unchecked(x65, x6539);
    x65 = x6540;
    /* VAR */ numeric_int_t x6542 = 0;
    numeric_int_t x6543 = x6542;
    numeric_int_t* x6544 = &x6543;
    char* x6545 = strntoi_unchecked(x65, x6544);
    x65 = x6545;
    numeric_int_t x6547 = x6533*(10000);
    numeric_int_t x6548 = x6538*(100);
    numeric_int_t x6549 = x6547+(x6548);
    numeric_int_t x6550 = x6549+(x6543);
    /* VAR */ numeric_int_t x6551 = 0;
    numeric_int_t x6552 = x6551;
    numeric_int_t* x6553 = &x6552;
    char* x6554 = strntoi_unchecked(x65, x6553);
    x65 = x6554;
    /* VAR */ numeric_int_t x6556 = 0;
    numeric_int_t x6557 = x6556;
    numeric_int_t* x6558 = &x6557;
    char* x6559 = strntoi_unchecked(x65, x6558);
    x65 = x6559;
    /* VAR */ numeric_int_t x6561 = 0;
    numeric_int_t x6562 = x6561;
    numeric_int_t* x6563 = &x6562;
    char* x6564 = strntoi_unchecked(x65, x6563);
    x65 = x6564;
    numeric_int_t x6566 = x6552*(10000);
    numeric_int_t x6567 = x6557*(100);
    numeric_int_t x6568 = x6566+(x6567);
    numeric_int_t x6569 = x6568+(x6562);
    /* VAR */ numeric_int_t x6570 = 0;
    numeric_int_t x6571 = x6570;
    numeric_int_t* x6572 = &x6571;
    char* x6573 = strntoi_unchecked(x65, x6572);
    x65 = x6573;
    /* VAR */ numeric_int_t x6575 = 0;
    numeric_int_t x6576 = x6575;
    numeric_int_t* x6577 = &x6576;
    char* x6578 = strntoi_unchecked(x65, x6577);
    x65 = x6578;
    /* VAR */ numeric_int_t x6580 = 0;
    numeric_int_t x6581 = x6580;
    numeric_int_t* x6582 = &x6581;
    char* x6583 = strntoi_unchecked(x65, x6582);
    x65 = x6583;
    numeric_int_t x6585 = x6571*(10000);
    numeric_int_t x6586 = x6576*(100);
    numeric_int_t x6587 = x6585+(x6586);
    numeric_int_t x6588 = x6587+(x6581);
    /* VAR */ char* x6589 = x65;
    while(1) {
      
      char x6590 = *x65;
      boolean_t x6591 = x6590!=('|');
      /* VAR */ boolean_t ite36439 = 0;
      if(x6591) {
        char x41888 = *x65;
        boolean_t x41889 = x41888!=('\n');
        ite36439 = x41889;
      } else {
        
        ite36439 = 0;
      };
      boolean_t x33906 = ite36439;
      if (!(x33906)) break; 
      
      x65 += 1;
    };
    char* x6597 = x6589;
    numeric_int_t x6598 = x65 - x6597;
    numeric_int_t x6599 = x6598+(1);
    char* x8629 = (char*)malloc(x6599 * sizeof(char));
    memset(x8629, 0, x6599 * sizeof(char));
    char* x6602 = x6589;
    char* x6603 = strncpy(x8629, x6602, x6598);
    x65 += 1;
    /* VAR */ char* x6605 = x65;
    while(1) {
      
      char x6606 = *x65;
      boolean_t x6607 = x6606!=('|');
      /* VAR */ boolean_t ite36460 = 0;
      if(x6607) {
        char x41908 = *x65;
        boolean_t x41909 = x41908!=('\n');
        ite36460 = x41909;
      } else {
        
        ite36460 = 0;
      };
      boolean_t x33920 = ite36460;
      if (!(x33920)) break; 
      
      x65 += 1;
    };
    char* x6613 = x6605;
    numeric_int_t x6614 = x65 - x6613;
    numeric_int_t x6615 = x6614+(1);
    char* x8645 = (char*)malloc(x6615 * sizeof(char));
    memset(x8645, 0, x6615 * sizeof(char));
    char* x6618 = x6605;
    char* x6619 = strncpy(x8645, x6618, x6614);
    x65 += 1;
    /* VAR */ char* x6621 = x65;
    while(1) {
      
      char x6622 = *x65;
      boolean_t x6623 = x6622!=('|');
      /* VAR */ boolean_t ite36481 = 0;
      if(x6623) {
        char x41928 = *x65;
        boolean_t x41929 = x41928!=('\n');
        ite36481 = x41929;
      } else {
        
        ite36481 = 0;
      };
      boolean_t x33934 = ite36481;
      if (!(x33934)) break; 
      
      x65 += 1;
    };
    char* x6629 = x6621;
    numeric_int_t x6630 = x65 - x6629;
    numeric_int_t x6631 = x6630+(1);
    char* x8661 = (char*)malloc(x6631 * sizeof(char));
    memset(x8661, 0, x6631 * sizeof(char));
    char* x6634 = x6621;
    char* x6635 = strncpy(x8661, x6634, x6630);
    x65 += 1;
    struct LINEITEMRecord* x9700 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x9700, 0, 1 * sizeof(struct LINEITEMRecord));
    x9700->L_ORDERKEY = x6483; x9700->L_PARTKEY = x6488; x9700->L_SUPPKEY = x6493; x9700->L_LINENUMBER = x6498; x9700->L_QUANTITY = x6503; x9700->L_EXTENDEDPRICE = x6508; x9700->L_DISCOUNT = x6513; x9700->L_TAX = x6518; x9700->L_RETURNFLAG = x6526; x9700->L_LINESTATUS = x6531; x9700->L_SHIPDATE = x6550; x9700->L_COMMITDATE = x6569; x9700->L_RECEIPTDATE = x6588; x9700->L_SHIPINSTRUCT = x8629; x9700->L_SHIPMODE = x8645; x9700->L_COMMENT = x8661;
    numeric_int_t x88 = x66;
    struct LINEITEMRecord x8668 = *x9700;
    *(x8491 + x88) = x8668;
    struct LINEITEMRecord* x8670 = &(x8491[x88]);
    x9700 = x8670;
    numeric_int_t x90 = x66;
    numeric_int_t x91 = x90+(1);
    x66 = x91;
  };
  char* x6644 = x6474;
  munmap(x6644, x6470);
  FILE* x6645 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x6646 = 0;
  numeric_int_t x6647 = x6646;
  numeric_int_t* x6648 = &x6647;
  numeric_int_t x6649 = fscanf(x6645, "%d", x6648);
  pclose(x6645);
  struct ORDERSRecord* x8683 = (struct ORDERSRecord*)malloc(x6647 * sizeof(struct ORDERSRecord));
  memset(x8683, 0, x6647 * sizeof(struct ORDERSRecord));
  numeric_int_t x6653 = O_RDONLY;
  numeric_int_t x6654 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x6653);
  /* VAR */ struct stat x6655 = x6205;
  struct stat x6656 = x6655;
  struct stat* x6657 = &x6656;
  numeric_int_t x6658 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x6657);
  size_t x6659 = x6657->st_size;
  numeric_int_t x6660 = PROT_READ;
  numeric_int_t x6661 = MAP_PRIVATE;
  char* x6662 = mmap(NULL, x6659, x6660, x6661, x6654, 0);
  /* VAR */ char* x6663 = x6662;
  char* x97 = x6663;
  /* VAR */ numeric_int_t x98 = 0;
  while(1) {
    
    numeric_int_t x99 = x98;
    boolean_t x100 = x99<(x6647);
    /* VAR */ boolean_t ite36534 = 0;
    if(x100) {
      char x41980 = *x97;
      boolean_t x41981 = x41980!=('\0');
      ite36534 = x41981;
    } else {
      
      ite36534 = 0;
    };
    boolean_t x33980 = ite36534;
    if (!(x33980)) break; 
    
    /* VAR */ numeric_int_t x6671 = 0;
    numeric_int_t x6672 = x6671;
    numeric_int_t* x6673 = &x6672;
    char* x6674 = strntoi_unchecked(x97, x6673);
    x97 = x6674;
    /* VAR */ numeric_int_t x6676 = 0;
    numeric_int_t x6677 = x6676;
    numeric_int_t* x6678 = &x6677;
    char* x6679 = strntoi_unchecked(x97, x6678);
    x97 = x6679;
    char x6681 = *x97;
    /* VAR */ char x6682 = x6681;
    x97 += 1;
    x97 += 1;
    char x6685 = x6682;
    /* VAR */ double x6686 = 0.0;
    double x6687 = x6686;
    double* x6688 = &x6687;
    char* x6689 = strntod_unchecked(x97, x6688);
    x97 = x6689;
    /* VAR */ numeric_int_t x6691 = 0;
    numeric_int_t x6692 = x6691;
    numeric_int_t* x6693 = &x6692;
    char* x6694 = strntoi_unchecked(x97, x6693);
    x97 = x6694;
    /* VAR */ numeric_int_t x6696 = 0;
    numeric_int_t x6697 = x6696;
    numeric_int_t* x6698 = &x6697;
    char* x6699 = strntoi_unchecked(x97, x6698);
    x97 = x6699;
    /* VAR */ numeric_int_t x6701 = 0;
    numeric_int_t x6702 = x6701;
    numeric_int_t* x6703 = &x6702;
    char* x6704 = strntoi_unchecked(x97, x6703);
    x97 = x6704;
    numeric_int_t x6706 = x6692*(10000);
    numeric_int_t x6707 = x6697*(100);
    numeric_int_t x6708 = x6706+(x6707);
    numeric_int_t x6709 = x6708+(x6702);
    /* VAR */ char* x6710 = x97;
    while(1) {
      
      char x6711 = *x97;
      boolean_t x6712 = x6711!=('|');
      /* VAR */ boolean_t ite36586 = 0;
      if(x6712) {
        char x42031 = *x97;
        boolean_t x42032 = x42031!=('\n');
        ite36586 = x42032;
      } else {
        
        ite36586 = 0;
      };
      boolean_t x34025 = ite36586;
      if (!(x34025)) break; 
      
      x97 += 1;
    };
    char* x6718 = x6710;
    numeric_int_t x6719 = x97 - x6718;
    numeric_int_t x6720 = x6719+(1);
    char* x8753 = (char*)malloc(x6720 * sizeof(char));
    memset(x8753, 0, x6720 * sizeof(char));
    char* x6723 = x6710;
    char* x6724 = strncpy(x8753, x6723, x6719);
    x97 += 1;
    /* VAR */ char* x6726 = x97;
    while(1) {
      
      char x6727 = *x97;
      boolean_t x6728 = x6727!=('|');
      /* VAR */ boolean_t ite36607 = 0;
      if(x6728) {
        char x42051 = *x97;
        boolean_t x42052 = x42051!=('\n');
        ite36607 = x42052;
      } else {
        
        ite36607 = 0;
      };
      boolean_t x34039 = ite36607;
      if (!(x34039)) break; 
      
      x97 += 1;
    };
    char* x6734 = x6726;
    numeric_int_t x6735 = x97 - x6734;
    numeric_int_t x6736 = x6735+(1);
    char* x8769 = (char*)malloc(x6736 * sizeof(char));
    memset(x8769, 0, x6736 * sizeof(char));
    char* x6739 = x6726;
    char* x6740 = strncpy(x8769, x6739, x6735);
    x97 += 1;
    /* VAR */ numeric_int_t x6742 = 0;
    numeric_int_t x6743 = x6742;
    numeric_int_t* x6744 = &x6743;
    char* x6745 = strntoi_unchecked(x97, x6744);
    x97 = x6745;
    /* VAR */ char* x6747 = x97;
    while(1) {
      
      char x6748 = *x97;
      boolean_t x6749 = x6748!=('|');
      /* VAR */ boolean_t ite36633 = 0;
      if(x6749) {
        char x42076 = *x97;
        boolean_t x42077 = x42076!=('\n');
        ite36633 = x42077;
      } else {
        
        ite36633 = 0;
      };
      boolean_t x34058 = ite36633;
      if (!(x34058)) break; 
      
      x97 += 1;
    };
    char* x6755 = x6747;
    numeric_int_t x6756 = x97 - x6755;
    numeric_int_t x6757 = x6756+(1);
    char* x8790 = (char*)malloc(x6757 * sizeof(char));
    memset(x8790, 0, x6757 * sizeof(char));
    char* x6760 = x6747;
    char* x6761 = strncpy(x8790, x6760, x6756);
    x97 += 1;
    struct ORDERSRecord* x9831 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x9831, 0, 1 * sizeof(struct ORDERSRecord));
    x9831->O_ORDERKEY = x6672; x9831->O_CUSTKEY = x6677; x9831->O_ORDERSTATUS = x6685; x9831->O_TOTALPRICE = x6687; x9831->O_ORDERDATE = x6709; x9831->O_ORDERPRIORITY = x8753; x9831->O_CLERK = x8769; x9831->O_SHIPPRIORITY = x6743; x9831->O_COMMENT = x8790;
    numeric_int_t x113 = x98;
    struct ORDERSRecord x8797 = *x9831;
    *(x8683 + x113) = x8797;
    struct ORDERSRecord* x8799 = &(x8683[x113]);
    x9831 = x8799;
    numeric_int_t x115 = x98;
    numeric_int_t x116 = x115+(1);
    x98 = x116;
  };
  char* x6770 = x6663;
  munmap(x6770, x6659);
  FILE* x6771 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", "r");
  /* VAR */ numeric_int_t x6772 = 0;
  numeric_int_t x6773 = x6772;
  numeric_int_t* x6774 = &x6773;
  numeric_int_t x6775 = fscanf(x6771, "%d", x6774);
  pclose(x6771);
  struct CUSTOMERRecord* x8812 = (struct CUSTOMERRecord*)malloc(x6773 * sizeof(struct CUSTOMERRecord));
  memset(x8812, 0, x6773 * sizeof(struct CUSTOMERRecord));
  numeric_int_t x6779 = O_RDONLY;
  numeric_int_t x6780 = open("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x6779);
  /* VAR */ struct stat x6781 = x6205;
  struct stat x6782 = x6781;
  struct stat* x6783 = &x6782;
  numeric_int_t x6784 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x6783);
  size_t x6785 = x6783->st_size;
  numeric_int_t x6786 = PROT_READ;
  numeric_int_t x6787 = MAP_PRIVATE;
  char* x6788 = mmap(NULL, x6785, x6786, x6787, x6780, 0);
  /* VAR */ char* x6789 = x6788;
  char* x122 = x6789;
  /* VAR */ numeric_int_t x123 = 0;
  while(1) {
    
    numeric_int_t x124 = x123;
    boolean_t x125 = x124<(x6773);
    /* VAR */ boolean_t ite36686 = 0;
    if(x125) {
      char x42128 = *x122;
      boolean_t x42129 = x42128!=('\0');
      ite36686 = x42129;
    } else {
      
      ite36686 = 0;
    };
    boolean_t x34104 = ite36686;
    if (!(x34104)) break; 
    
    /* VAR */ numeric_int_t x6797 = 0;
    numeric_int_t x6798 = x6797;
    numeric_int_t* x6799 = &x6798;
    char* x6800 = strntoi_unchecked(x122, x6799);
    x122 = x6800;
    /* VAR */ char* x6802 = x122;
    while(1) {
      
      char x6803 = *x122;
      boolean_t x6804 = x6803!=('|');
      /* VAR */ boolean_t ite36704 = 0;
      if(x6804) {
        char x42145 = *x122;
        boolean_t x42146 = x42145!=('\n');
        ite36704 = x42146;
      } else {
        
        ite36704 = 0;
      };
      boolean_t x34115 = ite36704;
      if (!(x34115)) break; 
      
      x122 += 1;
    };
    char* x6810 = x6802;
    numeric_int_t x6811 = x122 - x6810;
    numeric_int_t x6812 = x6811+(1);
    char* x8848 = (char*)malloc(x6812 * sizeof(char));
    memset(x8848, 0, x6812 * sizeof(char));
    char* x6815 = x6802;
    char* x6816 = strncpy(x8848, x6815, x6811);
    x122 += 1;
    /* VAR */ char* x6818 = x122;
    while(1) {
      
      char x6819 = *x122;
      boolean_t x6820 = x6819!=('|');
      /* VAR */ boolean_t ite36725 = 0;
      if(x6820) {
        char x42165 = *x122;
        boolean_t x42166 = x42165!=('\n');
        ite36725 = x42166;
      } else {
        
        ite36725 = 0;
      };
      boolean_t x34129 = ite36725;
      if (!(x34129)) break; 
      
      x122 += 1;
    };
    char* x6826 = x6818;
    numeric_int_t x6827 = x122 - x6826;
    numeric_int_t x6828 = x6827+(1);
    char* x8864 = (char*)malloc(x6828 * sizeof(char));
    memset(x8864, 0, x6828 * sizeof(char));
    char* x6831 = x6818;
    char* x6832 = strncpy(x8864, x6831, x6827);
    x122 += 1;
    /* VAR */ numeric_int_t x6834 = 0;
    numeric_int_t x6835 = x6834;
    numeric_int_t* x6836 = &x6835;
    char* x6837 = strntoi_unchecked(x122, x6836);
    x122 = x6837;
    /* VAR */ char* x6839 = x122;
    while(1) {
      
      char x6840 = *x122;
      boolean_t x6841 = x6840!=('|');
      /* VAR */ boolean_t ite36751 = 0;
      if(x6841) {
        char x42190 = *x122;
        boolean_t x42191 = x42190!=('\n');
        ite36751 = x42191;
      } else {
        
        ite36751 = 0;
      };
      boolean_t x34148 = ite36751;
      if (!(x34148)) break; 
      
      x122 += 1;
    };
    char* x6847 = x6839;
    numeric_int_t x6848 = x122 - x6847;
    numeric_int_t x6849 = x6848+(1);
    char* x8885 = (char*)malloc(x6849 * sizeof(char));
    memset(x8885, 0, x6849 * sizeof(char));
    char* x6852 = x6839;
    char* x6853 = strncpy(x8885, x6852, x6848);
    x122 += 1;
    /* VAR */ double x6855 = 0.0;
    double x6856 = x6855;
    double* x6857 = &x6856;
    char* x6858 = strntod_unchecked(x122, x6857);
    x122 = x6858;
    /* VAR */ char* x6860 = x122;
    while(1) {
      
      char x6861 = *x122;
      boolean_t x6862 = x6861!=('|');
      /* VAR */ boolean_t ite36777 = 0;
      if(x6862) {
        char x42215 = *x122;
        boolean_t x42216 = x42215!=('\n');
        ite36777 = x42216;
      } else {
        
        ite36777 = 0;
      };
      boolean_t x34167 = ite36777;
      if (!(x34167)) break; 
      
      x122 += 1;
    };
    char* x6868 = x6860;
    numeric_int_t x6869 = x122 - x6868;
    numeric_int_t x6870 = x6869+(1);
    char* x8906 = (char*)malloc(x6870 * sizeof(char));
    memset(x8906, 0, x6870 * sizeof(char));
    char* x6873 = x6860;
    char* x6874 = strncpy(x8906, x6873, x6869);
    x122 += 1;
    /* VAR */ char* x6876 = x122;
    while(1) {
      
      char x6877 = *x122;
      boolean_t x6878 = x6877!=('|');
      /* VAR */ boolean_t ite36798 = 0;
      if(x6878) {
        char x42235 = *x122;
        boolean_t x42236 = x42235!=('\n');
        ite36798 = x42236;
      } else {
        
        ite36798 = 0;
      };
      boolean_t x34181 = ite36798;
      if (!(x34181)) break; 
      
      x122 += 1;
    };
    char* x6884 = x6876;
    numeric_int_t x6885 = x122 - x6884;
    numeric_int_t x6886 = x6885+(1);
    char* x8922 = (char*)malloc(x6886 * sizeof(char));
    memset(x8922, 0, x6886 * sizeof(char));
    char* x6889 = x6876;
    char* x6890 = strncpy(x8922, x6889, x6885);
    x122 += 1;
    struct CUSTOMERRecord* x9965 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x9965, 0, 1 * sizeof(struct CUSTOMERRecord));
    x9965->C_CUSTKEY = x6798; x9965->C_NAME = x8848; x9965->C_ADDRESS = x8864; x9965->C_NATIONKEY = x6835; x9965->C_PHONE = x8885; x9965->C_ACCTBAL = x6856; x9965->C_MKTSEGMENT = x8906; x9965->C_COMMENT = x8922;
    numeric_int_t x137 = x123;
    struct CUSTOMERRecord x8929 = *x9965;
    *(x8812 + x137) = x8929;
    struct CUSTOMERRecord* x8931 = &(x8812[x137]);
    x9965 = x8931;
    numeric_int_t x139 = x123;
    numeric_int_t x140 = x139+(1);
    x123 = x140;
  };
  char* x6899 = x6789;
  munmap(x6899, x6785);
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
