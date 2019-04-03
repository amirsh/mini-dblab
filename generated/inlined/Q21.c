#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct NATIONRecord_SUPPLIERRecord;
struct LINEITEMRecord;
struct AGGRecord_OptimalString;
struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
struct NATIONRecord;
struct ORDERSRecord;
struct SUPPLIERRecord;
struct NATIONRecord_SUPPLIERRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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

struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
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

struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  numeric_int_t O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  numeric_int_t O_SHIPPRIORITY;
  char* O_COMMENT;
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
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

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
};


numeric_int_t x47693(char* x11077);

boolean_t x47711(char* x11082, char* x11083);

numeric_int_t x47717(void* x8992);

numeric_int_t x47720(void* x8995, void* x8996);

numeric_int_t x47727(void* x9002);

numeric_int_t x47730(void* x9005, void* x9006);

numeric_int_t x47737(void* x9012);

numeric_int_t x47740(void* x9015, void* x9016);

numeric_int_t x47747(void* x9022);

numeric_int_t x47750(void* x9025, void* x9026);

numeric_int_t x47757(void* x9032);

numeric_int_t x47760(void* x9035, void* x9036);

numeric_int_t x47806(struct AGGRecord_OptimalString* x215, struct AGGRecord_OptimalString* x216);

numeric_int_t x12202(void* x12196, void* x12197, void* x12198);

int main(int argc, char** argv) {
  FILE* x5199 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x5200 = 0;
  numeric_int_t x5201 = x5200;
  numeric_int_t* x5202 = &x5201;
  numeric_int_t x5203 = fscanf(x5199, "%d", x5202);
  pclose(x5199);
  struct LINEITEMRecord* x6817 = (struct LINEITEMRecord*)malloc(x5201 * sizeof(struct LINEITEMRecord));
  memset(x6817, 0, x5201 * sizeof(struct LINEITEMRecord));
  numeric_int_t x5207 = O_RDONLY;
  numeric_int_t x5208 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x5207);
  struct stat x5209 = (struct stat){0};
  /* VAR */ struct stat x5210 = x5209;
  struct stat x5211 = x5210;
  struct stat* x5212 = &x5211;
  numeric_int_t x5213 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x5212);
  size_t x5214 = x5212->st_size;
  numeric_int_t x5215 = PROT_READ;
  numeric_int_t x5216 = MAP_PRIVATE;
  char* x5217 = mmap(NULL, x5214, x5215, x5216, x5208, 0);
  /* VAR */ char* x5218 = x5217;
  char* x3 = x5218;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x5201);
    /* VAR */ boolean_t ite37954 = 0;
    if(x6) {
      char x45545 = *x3;
      boolean_t x45546 = x45545!=('\0');
      ite37954 = x45546;
    } else {
      
      ite37954 = 0;
    };
    boolean_t x34405 = ite37954;
    if (!(x34405)) break; 
    
    /* VAR */ numeric_int_t x5226 = 0;
    numeric_int_t x5227 = x5226;
    numeric_int_t* x5228 = &x5227;
    char* x5229 = strntoi_unchecked(x3, x5228);
    x3 = x5229;
    /* VAR */ numeric_int_t x5231 = 0;
    numeric_int_t x5232 = x5231;
    numeric_int_t* x5233 = &x5232;
    char* x5234 = strntoi_unchecked(x3, x5233);
    x3 = x5234;
    /* VAR */ numeric_int_t x5236 = 0;
    numeric_int_t x5237 = x5236;
    numeric_int_t* x5238 = &x5237;
    char* x5239 = strntoi_unchecked(x3, x5238);
    x3 = x5239;
    /* VAR */ numeric_int_t x5241 = 0;
    numeric_int_t x5242 = x5241;
    numeric_int_t* x5243 = &x5242;
    char* x5244 = strntoi_unchecked(x3, x5243);
    x3 = x5244;
    /* VAR */ double x5246 = 0.0;
    double x5247 = x5246;
    double* x5248 = &x5247;
    char* x5249 = strntod_unchecked(x3, x5248);
    x3 = x5249;
    /* VAR */ double x5251 = 0.0;
    double x5252 = x5251;
    double* x5253 = &x5252;
    char* x5254 = strntod_unchecked(x3, x5253);
    x3 = x5254;
    /* VAR */ double x5256 = 0.0;
    double x5257 = x5256;
    double* x5258 = &x5257;
    char* x5259 = strntod_unchecked(x3, x5258);
    x3 = x5259;
    /* VAR */ double x5261 = 0.0;
    double x5262 = x5261;
    double* x5263 = &x5262;
    char* x5264 = strntod_unchecked(x3, x5263);
    x3 = x5264;
    char x5266 = *x3;
    /* VAR */ char x5267 = x5266;
    x3 += 1;
    x3 += 1;
    char x5270 = x5267;
    char x5271 = *x3;
    /* VAR */ char x5272 = x5271;
    x3 += 1;
    x3 += 1;
    char x5275 = x5272;
    /* VAR */ numeric_int_t x5276 = 0;
    numeric_int_t x5277 = x5276;
    numeric_int_t* x5278 = &x5277;
    char* x5279 = strntoi_unchecked(x3, x5278);
    x3 = x5279;
    /* VAR */ numeric_int_t x5281 = 0;
    numeric_int_t x5282 = x5281;
    numeric_int_t* x5283 = &x5282;
    char* x5284 = strntoi_unchecked(x3, x5283);
    x3 = x5284;
    /* VAR */ numeric_int_t x5286 = 0;
    numeric_int_t x5287 = x5286;
    numeric_int_t* x5288 = &x5287;
    char* x5289 = strntoi_unchecked(x3, x5288);
    x3 = x5289;
    numeric_int_t x5291 = x5277*(10000);
    numeric_int_t x5292 = x5282*(100);
    numeric_int_t x5293 = x5291+(x5292);
    numeric_int_t x5294 = x5293+(x5287);
    /* VAR */ numeric_int_t x5295 = 0;
    numeric_int_t x5296 = x5295;
    numeric_int_t* x5297 = &x5296;
    char* x5298 = strntoi_unchecked(x3, x5297);
    x3 = x5298;
    /* VAR */ numeric_int_t x5300 = 0;
    numeric_int_t x5301 = x5300;
    numeric_int_t* x5302 = &x5301;
    char* x5303 = strntoi_unchecked(x3, x5302);
    x3 = x5303;
    /* VAR */ numeric_int_t x5305 = 0;
    numeric_int_t x5306 = x5305;
    numeric_int_t* x5307 = &x5306;
    char* x5308 = strntoi_unchecked(x3, x5307);
    x3 = x5308;
    numeric_int_t x5310 = x5296*(10000);
    numeric_int_t x5311 = x5301*(100);
    numeric_int_t x5312 = x5310+(x5311);
    numeric_int_t x5313 = x5312+(x5306);
    /* VAR */ numeric_int_t x5314 = 0;
    numeric_int_t x5315 = x5314;
    numeric_int_t* x5316 = &x5315;
    char* x5317 = strntoi_unchecked(x3, x5316);
    x3 = x5317;
    /* VAR */ numeric_int_t x5319 = 0;
    numeric_int_t x5320 = x5319;
    numeric_int_t* x5321 = &x5320;
    char* x5322 = strntoi_unchecked(x3, x5321);
    x3 = x5322;
    /* VAR */ numeric_int_t x5324 = 0;
    numeric_int_t x5325 = x5324;
    numeric_int_t* x5326 = &x5325;
    char* x5327 = strntoi_unchecked(x3, x5326);
    x3 = x5327;
    numeric_int_t x5329 = x5315*(10000);
    numeric_int_t x5330 = x5320*(100);
    numeric_int_t x5331 = x5329+(x5330);
    numeric_int_t x5332 = x5331+(x5325);
    /* VAR */ char* x5333 = x3;
    while(1) {
      
      char x5334 = *x3;
      boolean_t x5335 = x5334!=('|');
      /* VAR */ boolean_t ite38074 = 0;
      if(x5335) {
        char x45664 = *x3;
        boolean_t x45665 = x45664!=('\n');
        ite38074 = x45665;
      } else {
        
        ite38074 = 0;
      };
      boolean_t x34518 = ite38074;
      if (!(x34518)) break; 
      
      x3 += 1;
    };
    char* x5341 = x5333;
    numeric_int_t x5342 = x3 - x5341;
    numeric_int_t x5343 = x5342+(1);
    char* x6956 = (char*)malloc(x5343 * sizeof(char));
    memset(x6956, 0, x5343 * sizeof(char));
    char* x5346 = x5333;
    char* x5347 = strncpy(x6956, x5346, x5342);
    x3 += 1;
    /* VAR */ char* x5349 = x3;
    while(1) {
      
      char x5350 = *x3;
      boolean_t x5351 = x5350!=('|');
      /* VAR */ boolean_t ite38095 = 0;
      if(x5351) {
        char x45684 = *x3;
        boolean_t x45685 = x45684!=('\n');
        ite38095 = x45685;
      } else {
        
        ite38095 = 0;
      };
      boolean_t x34532 = ite38095;
      if (!(x34532)) break; 
      
      x3 += 1;
    };
    char* x5357 = x5349;
    numeric_int_t x5358 = x3 - x5357;
    numeric_int_t x5359 = x5358+(1);
    char* x6972 = (char*)malloc(x5359 * sizeof(char));
    memset(x6972, 0, x5359 * sizeof(char));
    char* x5362 = x5349;
    char* x5363 = strncpy(x6972, x5362, x5358);
    x3 += 1;
    /* VAR */ char* x5365 = x3;
    while(1) {
      
      char x5366 = *x3;
      boolean_t x5367 = x5366!=('|');
      /* VAR */ boolean_t ite38116 = 0;
      if(x5367) {
        char x45704 = *x3;
        boolean_t x45705 = x45704!=('\n');
        ite38116 = x45705;
      } else {
        
        ite38116 = 0;
      };
      boolean_t x34546 = ite38116;
      if (!(x34546)) break; 
      
      x3 += 1;
    };
    char* x5373 = x5365;
    numeric_int_t x5374 = x3 - x5373;
    numeric_int_t x5375 = x5374+(1);
    char* x6988 = (char*)malloc(x5375 * sizeof(char));
    memset(x6988, 0, x5375 * sizeof(char));
    char* x5378 = x5365;
    char* x5379 = strncpy(x6988, x5378, x5374);
    x3 += 1;
    struct LINEITEMRecord* x7811 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x7811, 0, 1 * sizeof(struct LINEITEMRecord));
    x7811->L_ORDERKEY = x5227; x7811->L_PARTKEY = x5232; x7811->L_SUPPKEY = x5237; x7811->L_LINENUMBER = x5242; x7811->L_QUANTITY = x5247; x7811->L_EXTENDEDPRICE = x5252; x7811->L_DISCOUNT = x5257; x7811->L_TAX = x5262; x7811->L_RETURNFLAG = x5270; x7811->L_LINESTATUS = x5275; x7811->L_SHIPDATE = x5294; x7811->L_COMMITDATE = x5313; x7811->L_RECEIPTDATE = x5332; x7811->L_SHIPINSTRUCT = x6956; x7811->L_SHIPMODE = x6972; x7811->L_COMMENT = x6988;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x6995 = *x7811;
    *(x6817 + x26) = x6995;
    struct LINEITEMRecord* x6997 = &(x6817[x26]);
    x7811 = x6997;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x5388 = x5218;
  munmap(x5388, x5214);
  FILE* x5389 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x5390 = 0;
  numeric_int_t x5391 = x5390;
  numeric_int_t* x5392 = &x5391;
  numeric_int_t x5393 = fscanf(x5389, "%d", x5392);
  pclose(x5389);
  struct SUPPLIERRecord* x7010 = (struct SUPPLIERRecord*)malloc(x5391 * sizeof(struct SUPPLIERRecord));
  memset(x7010, 0, x5391 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x5397 = O_RDONLY;
  numeric_int_t x5398 = open("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x5397);
  /* VAR */ struct stat x5399 = x5209;
  struct stat x5400 = x5399;
  struct stat* x5401 = &x5400;
  numeric_int_t x5402 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x5401);
  size_t x5403 = x5401->st_size;
  numeric_int_t x5404 = PROT_READ;
  numeric_int_t x5405 = MAP_PRIVATE;
  char* x5406 = mmap(NULL, x5403, x5404, x5405, x5398, 0);
  /* VAR */ char* x5407 = x5406;
  char* x35 = x5407;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x5391);
    /* VAR */ boolean_t ite38169 = 0;
    if(x38) {
      char x45756 = *x35;
      boolean_t x45757 = x45756!=('\0');
      ite38169 = x45757;
    } else {
      
      ite38169 = 0;
    };
    boolean_t x34592 = ite38169;
    if (!(x34592)) break; 
    
    /* VAR */ numeric_int_t x5415 = 0;
    numeric_int_t x5416 = x5415;
    numeric_int_t* x5417 = &x5416;
    char* x5418 = strntoi_unchecked(x35, x5417);
    x35 = x5418;
    /* VAR */ char* x5420 = x35;
    while(1) {
      
      char x5421 = *x35;
      boolean_t x5422 = x5421!=('|');
      /* VAR */ boolean_t ite38187 = 0;
      if(x5422) {
        char x45773 = *x35;
        boolean_t x45774 = x45773!=('\n');
        ite38187 = x45774;
      } else {
        
        ite38187 = 0;
      };
      boolean_t x34603 = ite38187;
      if (!(x34603)) break; 
      
      x35 += 1;
    };
    char* x5428 = x5420;
    numeric_int_t x5429 = x35 - x5428;
    numeric_int_t x5430 = x5429+(1);
    char* x7046 = (char*)malloc(x5430 * sizeof(char));
    memset(x7046, 0, x5430 * sizeof(char));
    char* x5433 = x5420;
    char* x5434 = strncpy(x7046, x5433, x5429);
    x35 += 1;
    /* VAR */ char* x5436 = x35;
    while(1) {
      
      char x5437 = *x35;
      boolean_t x5438 = x5437!=('|');
      /* VAR */ boolean_t ite38208 = 0;
      if(x5438) {
        char x45793 = *x35;
        boolean_t x45794 = x45793!=('\n');
        ite38208 = x45794;
      } else {
        
        ite38208 = 0;
      };
      boolean_t x34617 = ite38208;
      if (!(x34617)) break; 
      
      x35 += 1;
    };
    char* x5444 = x5436;
    numeric_int_t x5445 = x35 - x5444;
    numeric_int_t x5446 = x5445+(1);
    char* x7062 = (char*)malloc(x5446 * sizeof(char));
    memset(x7062, 0, x5446 * sizeof(char));
    char* x5449 = x5436;
    char* x5450 = strncpy(x7062, x5449, x5445);
    x35 += 1;
    /* VAR */ numeric_int_t x5452 = 0;
    numeric_int_t x5453 = x5452;
    numeric_int_t* x5454 = &x5453;
    char* x5455 = strntoi_unchecked(x35, x5454);
    x35 = x5455;
    /* VAR */ char* x5457 = x35;
    while(1) {
      
      char x5458 = *x35;
      boolean_t x5459 = x5458!=('|');
      /* VAR */ boolean_t ite38234 = 0;
      if(x5459) {
        char x45818 = *x35;
        boolean_t x45819 = x45818!=('\n');
        ite38234 = x45819;
      } else {
        
        ite38234 = 0;
      };
      boolean_t x34636 = ite38234;
      if (!(x34636)) break; 
      
      x35 += 1;
    };
    char* x5465 = x5457;
    numeric_int_t x5466 = x35 - x5465;
    numeric_int_t x5467 = x5466+(1);
    char* x7083 = (char*)malloc(x5467 * sizeof(char));
    memset(x7083, 0, x5467 * sizeof(char));
    char* x5470 = x5457;
    char* x5471 = strncpy(x7083, x5470, x5466);
    x35 += 1;
    /* VAR */ double x5473 = 0.0;
    double x5474 = x5473;
    double* x5475 = &x5474;
    char* x5476 = strntod_unchecked(x35, x5475);
    x35 = x5476;
    /* VAR */ char* x5478 = x35;
    while(1) {
      
      char x5479 = *x35;
      boolean_t x5480 = x5479!=('|');
      /* VAR */ boolean_t ite38260 = 0;
      if(x5480) {
        char x45843 = *x35;
        boolean_t x45844 = x45843!=('\n');
        ite38260 = x45844;
      } else {
        
        ite38260 = 0;
      };
      boolean_t x34655 = ite38260;
      if (!(x34655)) break; 
      
      x35 += 1;
    };
    char* x5486 = x5478;
    numeric_int_t x5487 = x35 - x5486;
    numeric_int_t x5488 = x5487+(1);
    char* x7104 = (char*)malloc(x5488 * sizeof(char));
    memset(x7104, 0, x5488 * sizeof(char));
    char* x5491 = x5478;
    char* x5492 = strncpy(x7104, x5491, x5487);
    x35 += 1;
    struct SUPPLIERRecord* x7929 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x7929, 0, 1 * sizeof(struct SUPPLIERRecord));
    x7929->S_SUPPKEY = x5416; x7929->S_NAME = x7046; x7929->S_ADDRESS = x7062; x7929->S_NATIONKEY = x5453; x7929->S_PHONE = x7083; x7929->S_ACCTBAL = x5474; x7929->S_COMMENT = x7104;
    numeric_int_t x49 = x36;
    struct SUPPLIERRecord x7111 = *x7929;
    *(x7010 + x49) = x7111;
    struct SUPPLIERRecord* x7113 = &(x7010[x49]);
    x7929 = x7113;
    numeric_int_t x51 = x36;
    numeric_int_t x52 = x51+(1);
    x36 = x52;
  };
  char* x5501 = x5407;
  munmap(x5501, x5403);
  FILE* x5502 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x5503 = 0;
  numeric_int_t x5504 = x5503;
  numeric_int_t* x5505 = &x5504;
  numeric_int_t x5506 = fscanf(x5502, "%d", x5505);
  pclose(x5502);
  struct ORDERSRecord* x7126 = (struct ORDERSRecord*)malloc(x5504 * sizeof(struct ORDERSRecord));
  memset(x7126, 0, x5504 * sizeof(struct ORDERSRecord));
  numeric_int_t x5510 = O_RDONLY;
  numeric_int_t x5511 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x5510);
  /* VAR */ struct stat x5512 = x5209;
  struct stat x5513 = x5512;
  struct stat* x5514 = &x5513;
  numeric_int_t x5515 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x5514);
  size_t x5516 = x5514->st_size;
  numeric_int_t x5517 = PROT_READ;
  numeric_int_t x5518 = MAP_PRIVATE;
  char* x5519 = mmap(NULL, x5516, x5517, x5518, x5511, 0);
  /* VAR */ char* x5520 = x5519;
  char* x58 = x5520;
  /* VAR */ numeric_int_t x59 = 0;
  while(1) {
    
    numeric_int_t x60 = x59;
    boolean_t x61 = x60<(x5504);
    /* VAR */ boolean_t ite38313 = 0;
    if(x61) {
      char x45895 = *x58;
      boolean_t x45896 = x45895!=('\0');
      ite38313 = x45896;
    } else {
      
      ite38313 = 0;
    };
    boolean_t x34701 = ite38313;
    if (!(x34701)) break; 
    
    /* VAR */ numeric_int_t x5528 = 0;
    numeric_int_t x5529 = x5528;
    numeric_int_t* x5530 = &x5529;
    char* x5531 = strntoi_unchecked(x58, x5530);
    x58 = x5531;
    /* VAR */ numeric_int_t x5533 = 0;
    numeric_int_t x5534 = x5533;
    numeric_int_t* x5535 = &x5534;
    char* x5536 = strntoi_unchecked(x58, x5535);
    x58 = x5536;
    char x5538 = *x58;
    /* VAR */ char x5539 = x5538;
    x58 += 1;
    x58 += 1;
    char x5542 = x5539;
    /* VAR */ double x5543 = 0.0;
    double x5544 = x5543;
    double* x5545 = &x5544;
    char* x5546 = strntod_unchecked(x58, x5545);
    x58 = x5546;
    /* VAR */ numeric_int_t x5548 = 0;
    numeric_int_t x5549 = x5548;
    numeric_int_t* x5550 = &x5549;
    char* x5551 = strntoi_unchecked(x58, x5550);
    x58 = x5551;
    /* VAR */ numeric_int_t x5553 = 0;
    numeric_int_t x5554 = x5553;
    numeric_int_t* x5555 = &x5554;
    char* x5556 = strntoi_unchecked(x58, x5555);
    x58 = x5556;
    /* VAR */ numeric_int_t x5558 = 0;
    numeric_int_t x5559 = x5558;
    numeric_int_t* x5560 = &x5559;
    char* x5561 = strntoi_unchecked(x58, x5560);
    x58 = x5561;
    numeric_int_t x5563 = x5549*(10000);
    numeric_int_t x5564 = x5554*(100);
    numeric_int_t x5565 = x5563+(x5564);
    numeric_int_t x5566 = x5565+(x5559);
    /* VAR */ char* x5567 = x58;
    while(1) {
      
      char x5568 = *x58;
      boolean_t x5569 = x5568!=('|');
      /* VAR */ boolean_t ite38365 = 0;
      if(x5569) {
        char x45946 = *x58;
        boolean_t x45947 = x45946!=('\n');
        ite38365 = x45947;
      } else {
        
        ite38365 = 0;
      };
      boolean_t x34746 = ite38365;
      if (!(x34746)) break; 
      
      x58 += 1;
    };
    char* x5575 = x5567;
    numeric_int_t x5576 = x58 - x5575;
    numeric_int_t x5577 = x5576+(1);
    char* x7196 = (char*)malloc(x5577 * sizeof(char));
    memset(x7196, 0, x5577 * sizeof(char));
    char* x5580 = x5567;
    char* x5581 = strncpy(x7196, x5580, x5576);
    x58 += 1;
    /* VAR */ char* x5583 = x58;
    while(1) {
      
      char x5584 = *x58;
      boolean_t x5585 = x5584!=('|');
      /* VAR */ boolean_t ite38386 = 0;
      if(x5585) {
        char x45966 = *x58;
        boolean_t x45967 = x45966!=('\n');
        ite38386 = x45967;
      } else {
        
        ite38386 = 0;
      };
      boolean_t x34760 = ite38386;
      if (!(x34760)) break; 
      
      x58 += 1;
    };
    char* x5591 = x5583;
    numeric_int_t x5592 = x58 - x5591;
    numeric_int_t x5593 = x5592+(1);
    char* x7212 = (char*)malloc(x5593 * sizeof(char));
    memset(x7212, 0, x5593 * sizeof(char));
    char* x5596 = x5583;
    char* x5597 = strncpy(x7212, x5596, x5592);
    x58 += 1;
    /* VAR */ numeric_int_t x5599 = 0;
    numeric_int_t x5600 = x5599;
    numeric_int_t* x5601 = &x5600;
    char* x5602 = strntoi_unchecked(x58, x5601);
    x58 = x5602;
    /* VAR */ char* x5604 = x58;
    while(1) {
      
      char x5605 = *x58;
      boolean_t x5606 = x5605!=('|');
      /* VAR */ boolean_t ite38412 = 0;
      if(x5606) {
        char x45991 = *x58;
        boolean_t x45992 = x45991!=('\n');
        ite38412 = x45992;
      } else {
        
        ite38412 = 0;
      };
      boolean_t x34779 = ite38412;
      if (!(x34779)) break; 
      
      x58 += 1;
    };
    char* x5612 = x5604;
    numeric_int_t x5613 = x58 - x5612;
    numeric_int_t x5614 = x5613+(1);
    char* x7233 = (char*)malloc(x5614 * sizeof(char));
    memset(x7233, 0, x5614 * sizeof(char));
    char* x5617 = x5604;
    char* x5618 = strncpy(x7233, x5617, x5613);
    x58 += 1;
    struct ORDERSRecord* x8060 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x8060, 0, 1 * sizeof(struct ORDERSRecord));
    x8060->O_ORDERKEY = x5529; x8060->O_CUSTKEY = x5534; x8060->O_ORDERSTATUS = x5542; x8060->O_TOTALPRICE = x5544; x8060->O_ORDERDATE = x5566; x8060->O_ORDERPRIORITY = x7196; x8060->O_CLERK = x7212; x8060->O_SHIPPRIORITY = x5600; x8060->O_COMMENT = x7233;
    numeric_int_t x74 = x59;
    struct ORDERSRecord x7240 = *x8060;
    *(x7126 + x74) = x7240;
    struct ORDERSRecord* x7242 = &(x7126[x74]);
    x8060 = x7242;
    numeric_int_t x76 = x59;
    numeric_int_t x77 = x76+(1);
    x59 = x77;
  };
  char* x5627 = x5520;
  munmap(x5627, x5516);
  FILE* x5628 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x5629 = 0;
  numeric_int_t x5630 = x5629;
  numeric_int_t* x5631 = &x5630;
  numeric_int_t x5632 = fscanf(x5628, "%d", x5631);
  pclose(x5628);
  struct NATIONRecord* x7255 = (struct NATIONRecord*)malloc(x5630 * sizeof(struct NATIONRecord));
  memset(x7255, 0, x5630 * sizeof(struct NATIONRecord));
  numeric_int_t x5636 = O_RDONLY;
  numeric_int_t x5637 = open("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x5636);
  /* VAR */ struct stat x5638 = x5209;
  struct stat x5639 = x5638;
  struct stat* x5640 = &x5639;
  numeric_int_t x5641 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x5640);
  size_t x5642 = x5640->st_size;
  numeric_int_t x5643 = PROT_READ;
  numeric_int_t x5644 = MAP_PRIVATE;
  char* x5645 = mmap(NULL, x5642, x5643, x5644, x5637, 0);
  /* VAR */ char* x5646 = x5645;
  char* x83 = x5646;
  /* VAR */ numeric_int_t x84 = 0;
  while(1) {
    
    numeric_int_t x85 = x84;
    boolean_t x86 = x85<(x5630);
    /* VAR */ boolean_t ite38465 = 0;
    if(x86) {
      char x46043 = *x83;
      boolean_t x46044 = x46043!=('\0');
      ite38465 = x46044;
    } else {
      
      ite38465 = 0;
    };
    boolean_t x34825 = ite38465;
    if (!(x34825)) break; 
    
    /* VAR */ numeric_int_t x5654 = 0;
    numeric_int_t x5655 = x5654;
    numeric_int_t* x5656 = &x5655;
    char* x5657 = strntoi_unchecked(x83, x5656);
    x83 = x5657;
    /* VAR */ char* x5659 = x83;
    while(1) {
      
      char x5660 = *x83;
      boolean_t x5661 = x5660!=('|');
      /* VAR */ boolean_t ite38483 = 0;
      if(x5661) {
        char x46060 = *x83;
        boolean_t x46061 = x46060!=('\n');
        ite38483 = x46061;
      } else {
        
        ite38483 = 0;
      };
      boolean_t x34836 = ite38483;
      if (!(x34836)) break; 
      
      x83 += 1;
    };
    char* x5667 = x5659;
    numeric_int_t x5668 = x83 - x5667;
    numeric_int_t x5669 = x5668+(1);
    char* x7291 = (char*)malloc(x5669 * sizeof(char));
    memset(x7291, 0, x5669 * sizeof(char));
    char* x5672 = x5659;
    char* x5673 = strncpy(x7291, x5672, x5668);
    x83 += 1;
    /* VAR */ numeric_int_t x5675 = 0;
    numeric_int_t x5676 = x5675;
    numeric_int_t* x5677 = &x5676;
    char* x5678 = strntoi_unchecked(x83, x5677);
    x83 = x5678;
    /* VAR */ char* x5680 = x83;
    while(1) {
      
      char x5681 = *x83;
      boolean_t x5682 = x5681!=('|');
      /* VAR */ boolean_t ite38509 = 0;
      if(x5682) {
        char x46085 = *x83;
        boolean_t x46086 = x46085!=('\n');
        ite38509 = x46086;
      } else {
        
        ite38509 = 0;
      };
      boolean_t x34855 = ite38509;
      if (!(x34855)) break; 
      
      x83 += 1;
    };
    char* x5688 = x5680;
    numeric_int_t x5689 = x83 - x5688;
    numeric_int_t x5690 = x5689+(1);
    char* x7312 = (char*)malloc(x5690 * sizeof(char));
    memset(x7312, 0, x5690 * sizeof(char));
    char* x5693 = x5680;
    char* x5694 = strncpy(x7312, x5693, x5689);
    x83 += 1;
    struct NATIONRecord* x8141 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x8141, 0, 1 * sizeof(struct NATIONRecord));
    x8141->N_NATIONKEY = x5655; x8141->N_NAME = x7291; x8141->N_REGIONKEY = x5676; x8141->N_COMMENT = x7312;
    numeric_int_t x94 = x84;
    struct NATIONRecord x7319 = *x8141;
    *(x7255 + x94) = x7319;
    struct NATIONRecord* x7321 = &(x7255[x94]);
    x8141 = x7321;
    numeric_int_t x96 = x84;
    numeric_int_t x97 = x96+(1);
    x84 = x97;
  };
  char* x5703 = x5646;
  munmap(x5703, x5642);
  numeric_int_t x102 = 0;
  for(; x102 < 1 ; x102 += 1) {
    
    GHashTable* x47716 = g_hash_table_new(x47693, x47711);
    void*** x47724 = (void***){x47717};
    numeric_int_t* x47725 = (numeric_int_t*){x47720};
    GHashTable* x47726 = g_hash_table_new(x47724, x47725);
    void*** x47734 = (void***){x47727};
    numeric_int_t* x47735 = (numeric_int_t*){x47730};
    GHashTable* x47736 = g_hash_table_new(x47734, x47735);
    void*** x47744 = (void***){x47737};
    numeric_int_t* x47745 = (numeric_int_t*){x47740};
    GHashTable* x47746 = g_hash_table_new(x47744, x47745);
    void*** x47754 = (void***){x47747};
    numeric_int_t* x47755 = (numeric_int_t*){x47750};
    GHashTable* x47756 = g_hash_table_new(x47754, x47755);
    void*** x47764 = (void***){x47757};
    numeric_int_t* x47765 = (numeric_int_t*){x47760};
    GHashTable* x47766 = g_hash_table_new(x47764, x47765);
    struct timeval x47767 = (struct timeval){0};
    /* VAR */ struct timeval x47768 = x47767;
    struct timeval x47769 = x47768;
    /* VAR */ struct timeval x47770 = x47767;
    struct timeval x47771 = x47770;
    /* VAR */ struct timeval x47772 = x47767;
    struct timeval x47773 = x47772;
    struct timeval* x47774 = &x47771;
    gettimeofday(x47774, NULL);
    /* VAR */ numeric_int_t x47776 = 0;
    /* VAR */ numeric_int_t x47777 = 0;
    /* VAR */ numeric_int_t x47778 = 0;
    /* VAR */ numeric_int_t x47779 = 0;
    /* VAR */ numeric_int_t x47780 = 0;
    /* VAR */ numeric_int_t x47781 = 0;
    numeric_int_t* x47830 = &(x47806);
    GTree* x47831 = g_tree_new(x47830);
    /* VAR */ boolean_t x47832 = 0;
    /* VAR */ numeric_int_t x47833 = 0;
    while(1) {
      
      numeric_int_t x47835 = x47781;
      boolean_t x47836 = x47835<(x5504);
      if (!(x47836)) break; 
      
      numeric_int_t x2481 = x47781;
      struct ORDERSRecord* x244 = &(x7126[x2481]);
      char x246 = x244->O_ORDERSTATUS;
      boolean_t x247 = x246==('F');
      if(x247) {
        numeric_int_t x248 = x244->O_ORDERKEY;
        void* x9085 = (void*){x248};
        void* x9086 = (void*){x244};
        void* x9087 = g_hash_table_lookup(x47726, x9085);
        GList** x9088 = (GList**){x9087};
        GList** x9089 = NULL;
        boolean_t x9090 = x9088==(x9089);
        /* VAR */ GList** ite36561 = 0;
        if(x9090) {
          GList** x36562 = malloc(8);
          GList* x36563 = NULL;
          pointer_assign(x36562, x36563);
          ite36561 = x36562;
        } else {
          
          ite36561 = x9088;
        };
        GList** x9094 = ite36561;
        GList* x9095 = *(x9094);
        GList* x9096 = g_list_prepend(x9095, x9086);
        pointer_assign(x9094, x9096);
        void* x9098 = (void*){x9094};
        g_hash_table_insert(x47726, x9085, x9098);
      };
      numeric_int_t x2489 = x47781;
      numeric_int_t x253 = x2489+(1);
      x47781 = x253;
    };
    while(1) {
      
      numeric_int_t x47867 = x47777;
      boolean_t x47868 = x47867<(x5201);
      if (!(x47868)) break; 
      
      numeric_int_t x2498 = x47777;
      struct LINEITEMRecord* x262 = &(x6817[x2498]);
      numeric_int_t x264 = x262->L_ORDERKEY;
      void* x9110 = (void*){x264};
      void* x9111 = (void*){x262};
      void* x9112 = g_hash_table_lookup(x47746, x9110);
      GList** x9113 = (GList**){x9112};
      GList** x9114 = NULL;
      boolean_t x9115 = x9113==(x9114);
      /* VAR */ GList** ite36589 = 0;
      if(x9115) {
        GList** x36590 = malloc(8);
        GList* x36591 = NULL;
        pointer_assign(x36590, x36591);
        ite36589 = x36590;
      } else {
        
        ite36589 = x9113;
      };
      GList** x9119 = ite36589;
      GList* x9120 = *(x9119);
      GList* x9121 = g_list_prepend(x9120, x9111);
      pointer_assign(x9119, x9121);
      void* x9123 = (void*){x9119};
      g_hash_table_insert(x47746, x9110, x9123);
      numeric_int_t x2503 = x47777;
      numeric_int_t x268 = x2503+(1);
      x47777 = x268;
    };
    while(1) {
      
      numeric_int_t x47896 = x47780;
      boolean_t x47897 = x47896<(x5630);
      if (!(x47897)) break; 
      
      numeric_int_t x2512 = x47780;
      struct NATIONRecord* x277 = &(x7255[x2512]);
      char* x279 = x277->N_NAME;
      boolean_t x26391 = strcmp(x279, "MOROCCO");
      boolean_t x26392 = x26391==(0);
      if(x26392) {
        numeric_int_t x281 = x277->N_NATIONKEY;
        void* x9138 = (void*){x281};
        void* x9139 = (void*){x277};
        void* x9140 = g_hash_table_lookup(x47766, x9138);
        GList** x9141 = (GList**){x9140};
        GList** x9142 = NULL;
        boolean_t x9143 = x9141==(x9142);
        /* VAR */ GList** ite36621 = 0;
        if(x9143) {
          GList** x36622 = malloc(8);
          GList* x36623 = NULL;
          pointer_assign(x36622, x36623);
          ite36621 = x36622;
        } else {
          
          ite36621 = x9141;
        };
        GList** x9147 = ite36621;
        GList* x9148 = *(x9147);
        GList* x9149 = g_list_prepend(x9148, x9139);
        pointer_assign(x9147, x9149);
        void* x9151 = (void*){x9147};
        g_hash_table_insert(x47766, x9138, x9151);
      };
      numeric_int_t x2520 = x47780;
      numeric_int_t x286 = x2520+(1);
      x47780 = x286;
    };
    while(1) {
      
      numeric_int_t x47929 = x47779;
      boolean_t x47930 = x47929<(x5391);
      if (!(x47930)) break; 
      
      numeric_int_t x2529 = x47779;
      struct SUPPLIERRecord* x295 = &(x7010[x2529]);
      numeric_int_t x297 = x295->S_NATIONKEY;
      void* x9163 = (void*){x297};
      void* x9164 = g_hash_table_lookup(x47766, x9163);
      GList** x9165 = (GList**){x9164};
      boolean_t x19713 = x9165!=(NULL);
      if(x19713) {
        GList* x11313 = *(x9165);
        /* VAR */ GList* x11314 = x11313;
        while(1) {
          
          GList* x11315 = x11314;
          GList* x11316 = NULL;
          boolean_t x11317 = x11315!=(x11316);
          if (!(x11317)) break; 
          
          GList* x11318 = x11314;
          void* x11319 = g_list_nth_data(x11318, 0);
          struct NATIONRecord* x11320 = (struct NATIONRecord*){x11319};
          GList* x11321 = x11314;
          GList* x11322 = g_list_next(x11321);
          x11314 = x11322;
          numeric_int_t x11324 = x11320->N_NATIONKEY;
          boolean_t x11325 = x11324==(x297);
          if(x11325) {
            char* x990 = x11320->N_NAME;
            numeric_int_t x991 = x11320->N_REGIONKEY;
            char* x992 = x11320->N_COMMENT;
            numeric_int_t x993 = x295->S_SUPPKEY;
            char* x994 = x295->S_NAME;
            char* x995 = x295->S_ADDRESS;
            char* x996 = x295->S_PHONE;
            double x997 = x295->S_ACCTBAL;
            char* x998 = x295->S_COMMENT;
            struct NATIONRecord_SUPPLIERRecord* x8260 = (struct NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            memset(x8260, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            x8260->N_NATIONKEY = x11324; x8260->N_NAME = x990; x8260->N_REGIONKEY = x991; x8260->N_COMMENT = x992; x8260->S_SUPPKEY = x993; x8260->S_NAME = x994; x8260->S_ADDRESS = x995; x8260->S_NATIONKEY = x297; x8260->S_PHONE = x996; x8260->S_ACCTBAL = x997; x8260->S_COMMENT = x998;
            numeric_int_t x318 = x8260->S_SUPPKEY;
            void* x9188 = (void*){x318};
            void* x9189 = (void*){x8260};
            void* x9190 = g_hash_table_lookup(x47756, x9188);
            GList** x9191 = (GList**){x9190};
            GList** x9192 = NULL;
            boolean_t x9193 = x9191==(x9192);
            /* VAR */ GList** ite36720 = 0;
            if(x9193) {
              GList** x36721 = malloc(8);
              GList* x36722 = NULL;
              pointer_assign(x36721, x36722);
              ite36720 = x36721;
            } else {
              
              ite36720 = x9191;
            };
            GList** x9197 = ite36720;
            GList* x9198 = *(x9197);
            GList* x9199 = g_list_prepend(x9198, x9189);
            pointer_assign(x9197, x9199);
            void* x9201 = (void*){x9197};
            g_hash_table_insert(x47756, x9188, x9201);
          };
        };
      };
      numeric_int_t x2575 = x47779;
      numeric_int_t x326 = x2575+(1);
      x47779 = x326;
    };
    while(1) {
      
      numeric_int_t x48029 = x47776;
      boolean_t x48030 = x48029<(x5201);
      if (!(x48030)) break; 
      
      numeric_int_t x2585 = x47776;
      struct LINEITEMRecord* x336 = &(x6817[x2585]);
      numeric_int_t x338 = x336->L_RECEIPTDATE;
      numeric_int_t x339 = x336->L_COMMITDATE;
      boolean_t x340 = x338>(x339);
      if(x340) {
        numeric_int_t x341 = x336->L_SUPPKEY;
        void* x9218 = (void*){x341};
        void* x9219 = g_hash_table_lookup(x47756, x9218);
        GList** x9220 = (GList**){x9219};
        boolean_t x19808 = x9220!=(NULL);
        if(x19808) {
          GList* x11441 = *(x9220);
          /* VAR */ GList* x11442 = x11441;
          while(1) {
            
            GList* x11443 = x11442;
            GList* x11444 = NULL;
            boolean_t x11445 = x11443!=(x11444);
            if (!(x11445)) break; 
            
            GList* x11446 = x11442;
            void* x11447 = g_list_nth_data(x11446, 0);
            struct NATIONRecord_SUPPLIERRecord* x11448 = (struct NATIONRecord_SUPPLIERRecord*){x11447};
            GList* x11449 = x11442;
            GList* x11450 = g_list_next(x11449);
            x11442 = x11450;
            numeric_int_t x11452 = x11448->S_SUPPKEY;
            boolean_t x11453 = x11452==(x341);
            if(x11453) {
              numeric_int_t x1098 = x11448->N_NATIONKEY;
              char* x1099 = x11448->N_NAME;
              numeric_int_t x1100 = x11448->N_REGIONKEY;
              char* x1101 = x11448->N_COMMENT;
              char* x1102 = x11448->S_NAME;
              char* x1103 = x11448->S_ADDRESS;
              numeric_int_t x1104 = x11448->S_NATIONKEY;
              char* x1105 = x11448->S_PHONE;
              double x1106 = x11448->S_ACCTBAL;
              char* x1107 = x11448->S_COMMENT;
              numeric_int_t x1108 = x336->L_ORDERKEY;
              numeric_int_t x1109 = x336->L_PARTKEY;
              numeric_int_t x1110 = x336->L_LINENUMBER;
              double x1111 = x336->L_QUANTITY;
              double x1112 = x336->L_EXTENDEDPRICE;
              double x1113 = x336->L_DISCOUNT;
              double x1114 = x336->L_TAX;
              char x1115 = x336->L_RETURNFLAG;
              char x1116 = x336->L_LINESTATUS;
              numeric_int_t x1117 = x336->L_SHIPDATE;
              char* x1118 = x336->L_SHIPINSTRUCT;
              char* x1119 = x336->L_SHIPMODE;
              char* x1120 = x336->L_COMMENT;
              struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x8312 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              memset(x8312, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              x8312->N_NATIONKEY = x1098; x8312->N_NAME = x1099; x8312->N_REGIONKEY = x1100; x8312->N_COMMENT = x1101; x8312->S_SUPPKEY = x11452; x8312->S_NAME = x1102; x8312->S_ADDRESS = x1103; x8312->S_NATIONKEY = x1104; x8312->S_PHONE = x1105; x8312->S_ACCTBAL = x1106; x8312->S_COMMENT = x1107; x8312->L_ORDERKEY = x1108; x8312->L_PARTKEY = x1109; x8312->L_SUPPKEY = x341; x8312->L_LINENUMBER = x1110; x8312->L_QUANTITY = x1111; x8312->L_EXTENDEDPRICE = x1112; x8312->L_DISCOUNT = x1113; x8312->L_TAX = x1114; x8312->L_RETURNFLAG = x1115; x8312->L_LINESTATUS = x1116; x8312->L_SHIPDATE = x1117; x8312->L_COMMITDATE = x339; x8312->L_RECEIPTDATE = x338; x8312->L_SHIPINSTRUCT = x1118; x8312->L_SHIPMODE = x1119; x8312->L_COMMENT = x1120;
              numeric_int_t x393 = x8312->L_ORDERKEY;
              void* x9257 = (void*){x393};
              void* x9258 = g_hash_table_lookup(x47746, x9257);
              GList** x9259 = (GList**){x9258};
              boolean_t x19939 = x9259!=(NULL);
              if(x19939) {
                /* VAR */ struct LINEITEMRecord* x11497 = NULL;
                GList* x11498 = *(x9259);
                /* VAR */ GList* x11499 = x11498;
                while(1) {
                  
                  GList* x11500 = x11499;
                  GList* x11501 = NULL;
                  boolean_t x11502 = x11500!=(x11501);
                  if (!(x11502)) break; 
                  
                  GList* x11503 = x11499;
                  void* x11504 = g_list_nth_data(x11503, 0);
                  struct LINEITEMRecord* x11505 = (struct LINEITEMRecord*){x11504};
                  GList* x11506 = x11499;
                  GList* x11507 = g_list_next(x11506);
                  x11499 = x11507;
                  numeric_int_t x11509 = x11505->L_ORDERKEY;
                  boolean_t x11510 = x393==(x11509);
                  /* VAR */ boolean_t ite40666 = 0;
                  if(x11510) {
                    numeric_int_t x48219 = x8312->L_SUPPKEY;
                    numeric_int_t x48220 = x11505->L_SUPPKEY;
                    boolean_t x48221 = x48219!=(x48220);
                    ite40666 = x48221;
                  } else {
                    
                    ite40666 = 0;
                  };
                  boolean_t x36904 = ite40666;
                  if(x36904) {
                    x11497 = x11505;
                    break;
                  };
                };
                struct LINEITEMRecord* x11519 = x11497;
                boolean_t x19972 = x11519!=(NULL);
                if(x19972) {
                  void* x9274 = (void*){x8312};
                  void* x9275 = g_hash_table_lookup(x47736, x9257);
                  GList** x9276 = (GList**){x9275};
                  GList** x9277 = NULL;
                  boolean_t x9278 = x9276==(x9277);
                  /* VAR */ GList** ite36917 = 0;
                  if(x9278) {
                    GList** x36918 = malloc(8);
                    GList* x36919 = NULL;
                    pointer_assign(x36918, x36919);
                    ite36917 = x36918;
                  } else {
                    
                    ite36917 = x9276;
                  };
                  GList** x9282 = ite36917;
                  GList* x9283 = *(x9282);
                  GList* x9284 = g_list_prepend(x9283, x9274);
                  pointer_assign(x9282, x9284);
                  void* x9286 = (void*){x9282};
                  g_hash_table_insert(x47736, x9257, x9286);
                };
              };
            };
          };
        };
      };
      numeric_int_t x2721 = x47776;
      numeric_int_t x433 = x2721+(1);
      x47776 = x433;
    };
    while(1) {
      
      numeric_int_t x48255 = x47778;
      boolean_t x48256 = x48255<(x5201);
      if (!(x48256)) break; 
      
      numeric_int_t x2730 = x47778;
      struct LINEITEMRecord* x442 = &(x6817[x2730]);
      numeric_int_t x444 = x442->L_RECEIPTDATE;
      numeric_int_t x445 = x442->L_COMMITDATE;
      boolean_t x446 = x444>(x445);
      if(x446) {
        numeric_int_t x447 = x442->L_ORDERKEY;
        void* x9303 = (void*){x447};
        void* x9304 = g_hash_table_lookup(x47736, x9303);
        GList** x9305 = (GList**){x9304};
        boolean_t x20005 = x9305!=(NULL);
        if(x20005) {
          GList* x11568 = *(x9305);
          /* VAR */ GList* x11569 = x11568;
          /* VAR */ GList** x11570 = x9305;
          while(1) {
            
            GList* x11571 = x11569;
            GList* x11572 = NULL;
            boolean_t x11573 = x11571!=(x11572);
            if (!(x11573)) break; 
            
            GList* x11574 = x11569;
            void* x11575 = g_list_nth_data(x11574, 0);
            struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x11576 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x11575};
            numeric_int_t x11577 = x11576->L_ORDERKEY;
            boolean_t x11578 = x11577==(x447);
            /* VAR */ boolean_t ite40747 = 0;
            if(x11578) {
              numeric_int_t x48297 = x11576->L_SUPPKEY;
              numeric_int_t x48298 = x442->L_SUPPKEY;
              boolean_t x48299 = x48297!=(x48298);
              ite40747 = x48299;
            } else {
              
              ite40747 = 0;
            };
            boolean_t x36967 = ite40747;
            boolean_t x11583 = !(x36967);
            if(x11583) {
              GList* x11584 = x11569;
              GList* x11585 = x11584->next;
              GList** x11586 = &(x11585);
              x11570 = x11586;
            } else {
              
              GList** x11588 = x11570;
              GList* x11589 = x11569;
              GList* x11590 = g_list_next(x11589);
              pointer_assign(x11588, x11590);
            };
            GList* x11593 = x11569;
            GList* x11594 = g_list_next(x11593);
            x11569 = x11594;
          };
        };
      };
      numeric_int_t x2764 = x47778;
      numeric_int_t x477 = x2764+(1);
      x47778 = x477;
    };
    GList* x48610 = g_hash_table_get_keys(x47736);
    /* VAR */ GList* x48611 = x48610;
    numeric_int_t x48612 = g_hash_table_size(x47736);
    numeric_int_t x30652 = 0;
    for(; x30652 < x48612 ; x30652 += 1) {
      
      GList* x30653 = x48611;
      void* x30654 = g_list_nth_data(x30653, 0);
      GList* x30655 = x48611;
      GList* x30656 = g_list_next(x30655);
      x48611 = x30656;
      void* x30658 = g_hash_table_lookup(x47736, x30654);
      GList** x30659 = (GList**){x30658};
      GList* x30788 = *(x30659);
      /* VAR */ GList* x30789 = x30788;
      while(1) {
        
        GList* x12029 = x30789;
        GList* x12030 = NULL;
        boolean_t x12031 = x12029!=(x12030);
        if (!(x12031)) break; 
        
        GList* x12032 = x30789;
        void* x12033 = g_list_nth_data(x12032, 0);
        struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x12034 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x12033};
        GList* x12035 = x30789;
        GList* x12036 = g_list_next(x12035);
        x30789 = x12036;
        numeric_int_t x12038 = x12034->L_ORDERKEY;
        void* x12039 = (void*){x12038};
        void* x12040 = g_hash_table_lookup(x47726, x12039);
        GList** x12041 = (GList**){x12040};
        boolean_t x20475 = x12041!=(NULL);
        if(x20475) {
          GList* x11962 = *(x12041);
          /* VAR */ GList* x11963 = x11962;
          while(1) {
            
            GList* x11964 = x11963;
            GList* x11965 = NULL;
            boolean_t x11966 = x11964!=(x11965);
            if (!(x11966)) break; 
            
            GList* x11967 = x11963;
            void* x11968 = g_list_nth_data(x11967, 0);
            struct ORDERSRecord* x11969 = (struct ORDERSRecord*){x11968};
            GList* x11970 = x11963;
            GList* x11971 = g_list_next(x11970);
            x11963 = x11971;
            numeric_int_t x11973 = x11969->O_ORDERKEY;
            boolean_t x11974 = x11973==(x12038);
            if(x11974) {
              numeric_int_t x1292 = x11969->O_CUSTKEY;
              char x1293 = x11969->O_ORDERSTATUS;
              double x1294 = x11969->O_TOTALPRICE;
              numeric_int_t x1295 = x11969->O_ORDERDATE;
              char* x1296 = x11969->O_ORDERPRIORITY;
              char* x1297 = x11969->O_CLERK;
              numeric_int_t x1298 = x11969->O_SHIPPRIORITY;
              char* x1299 = x11969->O_COMMENT;
              numeric_int_t x1300 = x12034->N_NATIONKEY;
              char* x1301 = x12034->N_NAME;
              numeric_int_t x1302 = x12034->N_REGIONKEY;
              char* x1303 = x12034->N_COMMENT;
              numeric_int_t x1304 = x12034->S_SUPPKEY;
              char* x1305 = x12034->S_NAME;
              char* x1306 = x12034->S_ADDRESS;
              numeric_int_t x1307 = x12034->S_NATIONKEY;
              char* x1308 = x12034->S_PHONE;
              double x1309 = x12034->S_ACCTBAL;
              char* x1310 = x12034->S_COMMENT;
              numeric_int_t x1311 = x12034->L_PARTKEY;
              numeric_int_t x1312 = x12034->L_SUPPKEY;
              numeric_int_t x1313 = x12034->L_LINENUMBER;
              double x1314 = x12034->L_QUANTITY;
              double x1315 = x12034->L_EXTENDEDPRICE;
              double x1316 = x12034->L_DISCOUNT;
              double x1317 = x12034->L_TAX;
              char x1318 = x12034->L_RETURNFLAG;
              char x1319 = x12034->L_LINESTATUS;
              numeric_int_t x1320 = x12034->L_SHIPDATE;
              numeric_int_t x1321 = x12034->L_COMMITDATE;
              numeric_int_t x1322 = x12034->L_RECEIPTDATE;
              char* x1323 = x12034->L_SHIPINSTRUCT;
              char* x1324 = x12034->L_SHIPMODE;
              char* x1325 = x12034->L_COMMENT;
              struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x8412 = (struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              memset(x8412, 0, 1 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              x8412->O_ORDERKEY = x11973; x8412->O_CUSTKEY = x1292; x8412->O_ORDERSTATUS = x1293; x8412->O_TOTALPRICE = x1294; x8412->O_ORDERDATE = x1295; x8412->O_ORDERPRIORITY = x1296; x8412->O_CLERK = x1297; x8412->O_SHIPPRIORITY = x1298; x8412->O_COMMENT = x1299; x8412->N_NATIONKEY = x1300; x8412->N_NAME = x1301; x8412->N_REGIONKEY = x1302; x8412->N_COMMENT = x1303; x8412->S_SUPPKEY = x1304; x8412->S_NAME = x1305; x8412->S_ADDRESS = x1306; x8412->S_NATIONKEY = x1307; x8412->S_PHONE = x1308; x8412->S_ACCTBAL = x1309; x8412->S_COMMENT = x1310; x8412->L_ORDERKEY = x12038; x8412->L_PARTKEY = x1311; x8412->L_SUPPKEY = x1312; x8412->L_LINENUMBER = x1313; x8412->L_QUANTITY = x1314; x8412->L_EXTENDEDPRICE = x1315; x8412->L_DISCOUNT = x1316; x8412->L_TAX = x1317; x8412->L_RETURNFLAG = x1318; x8412->L_LINESTATUS = x1319; x8412->L_SHIPDATE = x1320; x8412->L_COMMITDATE = x1321; x8412->L_RECEIPTDATE = x1322; x8412->L_SHIPINSTRUCT = x1323; x8412->L_SHIPMODE = x1324; x8412->L_COMMENT = x1325;
              char* x530 = x8412->S_NAME;
              void* x12014 = g_hash_table_lookup(x47716, x530);
              boolean_t x11947 = x12014==(NULL);
              /* VAR */ struct AGGRecord_OptimalString* ite37852 = 0;
              if(x11947) {
                double* x37853 = (double*)malloc(1 * sizeof(double));
                memset(x37853, 0, 1 * sizeof(double));
                struct AGGRecord_OptimalString* x37854 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
                memset(x37854, 0, 1 * sizeof(struct AGGRecord_OptimalString));
                x37854->key = x530; x37854->aggs = x37853;
                g_hash_table_insert(x47716, x530, x37854);
                ite37852 = x37854;
              } else {
                
                ite37852 = x12014;
              };
              struct AGGRecord_OptimalString* x11957 = ite37852;
              double* x535 = x11957->aggs;
              double x549 = x535[0];
              double x551 = x549+(1.0);
              *x535 = x551;
            };
          };
        };
      };
    };
    GList* x49206 = g_hash_table_get_keys(x47716);
    /* VAR */ GList* x49207 = x49206;
    numeric_int_t x49208 = g_hash_table_size(x47716);
    numeric_int_t x30944 = 0;
    for(; x30944 < x49208 ; x30944 += 1) {
      
      GList* x30945 = x49207;
      void* x30946 = g_list_nth_data(x30945, 0);
      GList* x30947 = g_list_next(x30945);
      x49207 = x30947;
      void* x30949 = g_hash_table_lookup(x47716, x30946);
      struct AGGRecord_OptimalString* x30951 = (struct AGGRecord_OptimalString*){x30949};
      g_tree_insert(x47831, x30951, x30951);
    };
    while(1) {
      
      boolean_t x2922 = x47832;
      boolean_t x573 = !(x2922);
      /* VAR */ boolean_t ite41684 = 0;
      if(x573) {
        numeric_int_t x49233 = g_tree_nnodes(x47831);
        boolean_t x49234 = x49233!=(0);
        ite41684 = x49234;
      } else {
        
        ite41684 = 0;
      };
      boolean_t x37896 = ite41684;
      if (!(x37896)) break; 
      
      void* x12195 = NULL;
      void** x12203 = &(x12195);
      g_tree_foreach(x47831, x12202, x12203);
      struct AGGRecord_OptimalString* x12205 = (struct AGGRecord_OptimalString*){x12195};
      numeric_int_t x12206 = g_tree_remove(x47831, x12205);
      numeric_int_t x2930 = x47833;
      boolean_t x583 = x2930>=(100);
      if(x583) {
        x47832 = 1;
      } else {
        
        char* x585 = x12205->key;
        double* x587 = x12205->aggs;
        double x588 = x587[0];
        printf("%s|%.0f\n", x585, x588);
        numeric_int_t x2939 = x47833;
        numeric_int_t x591 = x2939+(1);
        x47833 = x591;
      };
    };
    numeric_int_t x49262 = x47833;
    printf("(%d rows)\n", x49262);
    struct timeval* x49264 = &x47773;
    gettimeofday(x49264, NULL);
    struct timeval* x49266 = &x47769;
    struct timeval* x49267 = &x47773;
    struct timeval* x49268 = &x47771;
    long x49269 = timeval_subtract(x49266, x49267, x49268);
    printf("Generated code run in %ld milliseconds.\n", x49269);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x47693(char* x11077) {
  numeric_int_t x26211 = strlen(x11077);
  /* VAR */ numeric_int_t x22856 = 0;
  /* VAR */ numeric_int_t x22857 = 0;
  while(1) {
    
    numeric_int_t x22858 = x22856;
    boolean_t x22859 = x22858<(x26211);
    if (!(x22859)) break; 
    
    numeric_int_t x22860 = x22857;
    numeric_int_t x22861 = x22856;
    char* x26219 = pointer_add(x11077, x22861);
    char x26220 = *(x26219);
    numeric_int_t x22864 = x22860+(x26220);
    x22857 = x22864;
    numeric_int_t x22866 = x22856;
    numeric_int_t x22867 = x22866+(1);
    x22856 = x22867;
  };
  numeric_int_t x22870 = x22857;
  return x22870; 
}

boolean_t x47711(char* x11082, char* x11083) {
  boolean_t x22874 = strcmp(x11082, x11083);
  boolean_t x22875 = !(x22874);
  return x22875; 
}

numeric_int_t x47717(void* x8992) {
  numeric_int_t x8993 = g_direct_hash(x8992);
  return x8993; 
}

numeric_int_t x47720(void* x8995, void* x8996) {
  numeric_int_t x8997 = g_direct_equal(x8995, x8996);
  return x8997; 
}

numeric_int_t x47727(void* x9002) {
  numeric_int_t x9003 = g_direct_hash(x9002);
  return x9003; 
}

numeric_int_t x47730(void* x9005, void* x9006) {
  numeric_int_t x9007 = g_direct_equal(x9005, x9006);
  return x9007; 
}

numeric_int_t x47737(void* x9012) {
  numeric_int_t x9013 = g_direct_hash(x9012);
  return x9013; 
}

numeric_int_t x47740(void* x9015, void* x9016) {
  numeric_int_t x9017 = g_direct_equal(x9015, x9016);
  return x9017; 
}

numeric_int_t x47747(void* x9022) {
  numeric_int_t x9023 = g_direct_hash(x9022);
  return x9023; 
}

numeric_int_t x47750(void* x9025, void* x9026) {
  numeric_int_t x9027 = g_direct_equal(x9025, x9026);
  return x9027; 
}

numeric_int_t x47757(void* x9032) {
  numeric_int_t x9033 = g_direct_hash(x9032);
  return x9033; 
}

numeric_int_t x47760(void* x9035, void* x9036) {
  numeric_int_t x9037 = g_direct_equal(x9035, x9036);
  return x9037; 
}

numeric_int_t x47806(struct AGGRecord_OptimalString* x215, struct AGGRecord_OptimalString* x216) {
  double* x217 = x215->aggs;
  double x218 = x217[0];
  double* x219 = x216->aggs;
  double x220 = x219[0];
  boolean_t x221 = x218<(x220);
  /* VAR */ numeric_int_t ite36527 = 0;
  if(x221) {
    ite36527 = 1;
  } else {
    
    boolean_t x36529 = x218>(x220);
    /* VAR */ numeric_int_t ite36531 = 0;
    if(x36529) {
      ite36531 = -1;
    } else {
      
      char* x36533 = x215->key;
      char* x36534 = x216->key;
      numeric_int_t x36535 = strcmp(x36533, x36534);
      ite36531 = x36535;
    };
    numeric_int_t x36530 = ite36531;
    ite36527 = x36530;
  };
  numeric_int_t x227 = ite36527;
  return x227; 
}

numeric_int_t x12202(void* x12196, void* x12197, void* x12198) {
  struct AGGRecord_OptimalString** x12199 = (struct AGGRecord_OptimalString**){x12198};
  struct AGGRecord_OptimalString* x12200 = (struct AGGRecord_OptimalString*){x12197};
  pointer_assign(x12199, x12200);
  return 1; 
}
