#include "storage.h"

void loadLineitem(numeric_int_t* count, struct LINEITEMRecord** array) {
  FILE* x2212 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x2213 = 0;
  numeric_int_t x2214 = x2213;
  numeric_int_t* x2215 = &x2214;
  numeric_int_t x2216 = fscanf(x2212, "%d", x2215);
  pclose(x2212);
  struct LINEITEMRecord* x2872 = (struct LINEITEMRecord*)malloc(x2214 * sizeof(struct LINEITEMRecord));
  memset(x2872, 0, x2214 * sizeof(struct LINEITEMRecord));
  numeric_int_t x2220 = O_RDONLY;
  numeric_int_t x2221 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x2220);
  struct stat x2222 = (struct stat){0};
  /* VAR */ struct stat x2223 = x2222;
  struct stat x2224 = x2223;
  struct stat* x2225 = &x2224;
  numeric_int_t x2226 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x2225);
  size_t x2227 = x2225->st_size;
  numeric_int_t x2228 = PROT_READ;
  numeric_int_t x2229 = MAP_PRIVATE;
  char* x2230 = mmap(NULL, x2227, x2228, x2229, x2221, 0);
  /* VAR */ char* x2231 = x2230;
  char* x3 = x2231;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x2214);
    /* VAR */ boolean_t ite10090 = 0;
    if(x6) {
      char x11511 = *x3;
      boolean_t x11512 = x11511!=('\0');
      ite10090 = x11512;
    } else {
      
      ite10090 = 0;
    };
    boolean_t x9436 = ite10090;
    if (!(x9436)) break; 
    
    /* VAR */ numeric_int_t x2239 = 0;
    numeric_int_t x2240 = x2239;
    numeric_int_t* x2241 = &x2240;
    char* x2242 = strntoi_unchecked(x3, x2241);
    x3 = x2242;
    /* VAR */ numeric_int_t x2244 = 0;
    numeric_int_t x2245 = x2244;
    numeric_int_t* x2246 = &x2245;
    char* x2247 = strntoi_unchecked(x3, x2246);
    x3 = x2247;
    /* VAR */ numeric_int_t x2249 = 0;
    numeric_int_t x2250 = x2249;
    numeric_int_t* x2251 = &x2250;
    char* x2252 = strntoi_unchecked(x3, x2251);
    x3 = x2252;
    /* VAR */ numeric_int_t x2254 = 0;
    numeric_int_t x2255 = x2254;
    numeric_int_t* x2256 = &x2255;
    char* x2257 = strntoi_unchecked(x3, x2256);
    x3 = x2257;
    /* VAR */ double x2259 = 0.0;
    double x2260 = x2259;
    double* x2261 = &x2260;
    char* x2262 = strntod_unchecked(x3, x2261);
    x3 = x2262;
    /* VAR */ double x2264 = 0.0;
    double x2265 = x2264;
    double* x2266 = &x2265;
    char* x2267 = strntod_unchecked(x3, x2266);
    x3 = x2267;
    /* VAR */ double x2269 = 0.0;
    double x2270 = x2269;
    double* x2271 = &x2270;
    char* x2272 = strntod_unchecked(x3, x2271);
    x3 = x2272;
    /* VAR */ double x2274 = 0.0;
    double x2275 = x2274;
    double* x2276 = &x2275;
    char* x2277 = strntod_unchecked(x3, x2276);
    x3 = x2277;
    char x2279 = *x3;
    /* VAR */ char x2280 = x2279;
    x3 += 1;
    x3 += 1;
    char x2283 = x2280;
    char x2284 = *x3;
    /* VAR */ char x2285 = x2284;
    x3 += 1;
    x3 += 1;
    char x2288 = x2285;
    /* VAR */ numeric_int_t x2289 = 0;
    numeric_int_t x2290 = x2289;
    numeric_int_t* x2291 = &x2290;
    char* x2292 = strntoi_unchecked(x3, x2291);
    x3 = x2292;
    /* VAR */ numeric_int_t x2294 = 0;
    numeric_int_t x2295 = x2294;
    numeric_int_t* x2296 = &x2295;
    char* x2297 = strntoi_unchecked(x3, x2296);
    x3 = x2297;
    /* VAR */ numeric_int_t x2299 = 0;
    numeric_int_t x2300 = x2299;
    numeric_int_t* x2301 = &x2300;
    char* x2302 = strntoi_unchecked(x3, x2301);
    x3 = x2302;
    numeric_int_t x2304 = x2290*(10000);
    numeric_int_t x2305 = x2295*(100);
    numeric_int_t x2306 = x2304+(x2305);
    numeric_int_t x2307 = x2306+(x2300);
    /* VAR */ numeric_int_t x2308 = 0;
    numeric_int_t x2309 = x2308;
    numeric_int_t* x2310 = &x2309;
    char* x2311 = strntoi_unchecked(x3, x2310);
    x3 = x2311;
    /* VAR */ numeric_int_t x2313 = 0;
    numeric_int_t x2314 = x2313;
    numeric_int_t* x2315 = &x2314;
    char* x2316 = strntoi_unchecked(x3, x2315);
    x3 = x2316;
    /* VAR */ numeric_int_t x2318 = 0;
    numeric_int_t x2319 = x2318;
    numeric_int_t* x2320 = &x2319;
    char* x2321 = strntoi_unchecked(x3, x2320);
    x3 = x2321;
    numeric_int_t x2323 = x2309*(10000);
    numeric_int_t x2324 = x2314*(100);
    numeric_int_t x2325 = x2323+(x2324);
    numeric_int_t x2326 = x2325+(x2319);
    /* VAR */ numeric_int_t x2327 = 0;
    numeric_int_t x2328 = x2327;
    numeric_int_t* x2329 = &x2328;
    char* x2330 = strntoi_unchecked(x3, x2329);
    x3 = x2330;
    /* VAR */ numeric_int_t x2332 = 0;
    numeric_int_t x2333 = x2332;
    numeric_int_t* x2334 = &x2333;
    char* x2335 = strntoi_unchecked(x3, x2334);
    x3 = x2335;
    /* VAR */ numeric_int_t x2337 = 0;
    numeric_int_t x2338 = x2337;
    numeric_int_t* x2339 = &x2338;
    char* x2340 = strntoi_unchecked(x3, x2339);
    x3 = x2340;
    numeric_int_t x2342 = x2328*(10000);
    numeric_int_t x2343 = x2333*(100);
    numeric_int_t x2344 = x2342+(x2343);
    numeric_int_t x2345 = x2344+(x2338);
    /* VAR */ char* x2346 = x3;
    while(1) {
      
      char x2347 = *x3;
      boolean_t x2348 = x2347!=('|');
      /* VAR */ boolean_t ite10210 = 0;
      if(x2348) {
        char x11630 = *x3;
        boolean_t x11631 = x11630!=('\n');
        ite10210 = x11631;
      } else {
        
        ite10210 = 0;
      };
      boolean_t x9549 = ite10210;
      if (!(x9549)) break; 
      
      x3 += 1;
    };
    char* x2354 = x2346;
    numeric_int_t x2355 = x3 - x2354;
    numeric_int_t x2356 = x2355+(1);
    char* x3011 = (char*)malloc(x2356 * sizeof(char));
    memset(x3011, 0, x2356 * sizeof(char));
    char* x2359 = x2346;
    char* x2360 = strncpy(x3011, x2359, x2355);
    x3 += 1;
    /* VAR */ char* x2362 = x3;
    while(1) {
      
      char x2363 = *x3;
      boolean_t x2364 = x2363!=('|');
      /* VAR */ boolean_t ite10231 = 0;
      if(x2364) {
        char x11650 = *x3;
        boolean_t x11651 = x11650!=('\n');
        ite10231 = x11651;
      } else {
        
        ite10231 = 0;
      };
      boolean_t x9563 = ite10231;
      if (!(x9563)) break; 
      
      x3 += 1;
    };
    char* x2370 = x2362;
    numeric_int_t x2371 = x3 - x2370;
    numeric_int_t x2372 = x2371+(1);
    char* x3027 = (char*)malloc(x2372 * sizeof(char));
    memset(x3027, 0, x2372 * sizeof(char));
    char* x2375 = x2362;
    char* x2376 = strncpy(x3027, x2375, x2371);
    x3 += 1;
    /* VAR */ char* x2378 = x3;
    while(1) {
      
      char x2379 = *x3;
      boolean_t x2380 = x2379!=('|');
      /* VAR */ boolean_t ite10252 = 0;
      if(x2380) {
        char x11670 = *x3;
        boolean_t x11671 = x11670!=('\n');
        ite10252 = x11671;
      } else {
        
        ite10252 = 0;
      };
      boolean_t x9577 = ite10252;
      if (!(x9577)) break; 
      
      x3 += 1;
    };
    char* x2386 = x2378;
    numeric_int_t x2387 = x3 - x2386;
    numeric_int_t x2388 = x2387+(1);
    char* x3043 = (char*)malloc(x2388 * sizeof(char));
    memset(x3043, 0, x2388 * sizeof(char));
    char* x2391 = x2378;
    char* x2392 = strncpy(x3043, x2391, x2387);
    x3 += 1;
    struct LINEITEMRecord* x3378 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x3378, 0, 1 * sizeof(struct LINEITEMRecord));
    x3378->L_ORDERKEY = x2240; x3378->L_PARTKEY = x2245; x3378->L_SUPPKEY = x2250; x3378->L_LINENUMBER = x2255; x3378->L_QUANTITY = x2260; x3378->L_EXTENDEDPRICE = x2265; x3378->L_DISCOUNT = x2270; x3378->L_TAX = x2275; x3378->L_RETURNFLAG = x2283; x3378->L_LINESTATUS = x2288; x3378->L_SHIPDATE = x2307; x3378->L_COMMITDATE = x2326; x3378->L_RECEIPTDATE = x2345; x3378->L_SHIPINSTRUCT = x3011; x3378->L_SHIPMODE = x3027; x3378->L_COMMENT = x3043;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x3050 = *x3378;
    *(x2872 + x26) = x3050;
    struct LINEITEMRecord* x3052 = &(x2872[x26]);
    x3378 = x3052;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x2401 = x2231;
  munmap(x2401, x2227);
  *count = x2214;
  *array = x2872;
}

void loadPart(numeric_int_t* count, struct PARTRecord** array) {
  FILE* x6498 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", "r");
  /* VAR */ numeric_int_t x6499 = 0;
  numeric_int_t x6500 = x6499;
  numeric_int_t* x6501 = &x6500;
  numeric_int_t x6502 = fscanf(x6498, "%d", x6501);
  pclose(x6498);
  struct PARTRecord* x7932 = (struct PARTRecord*)malloc(x6500 * sizeof(struct PARTRecord));
  memset(x7932, 0, x6500 * sizeof(struct PARTRecord));
  numeric_int_t x6506 = O_RDONLY;
  numeric_int_t x6507 = open("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x6506);
  struct stat x6508 = (struct stat){0};
  /* VAR */ struct stat x6509 = x6508;
  struct stat x6510 = x6509;
  struct stat* x6511 = &x6510;
  numeric_int_t x6512 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x6511);
  size_t x6513 = x6511->st_size;
  numeric_int_t x6514 = PROT_READ;
  numeric_int_t x6515 = MAP_PRIVATE;
  char* x6516 = mmap(NULL, x6513, x6514, x6515, x6507, 0);
  /* VAR */ char* x6517 = x6516;
  char* x3 = x6517;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x6500);
    /* VAR */ boolean_t ite34501 = 0;
    if(x6) {
      char x41218 = *x3;
      boolean_t x41219 = x41218!=('\0');
      ite34501 = x41219;
    } else {
      
      ite34501 = 0;
    };
    boolean_t x31341 = ite34501;
    if (!(x31341)) break; 
    
    /* VAR */ numeric_int_t x6525 = 0;
    numeric_int_t x6526 = x6525;
    numeric_int_t* x6527 = &x6526;
    char* x6528 = strntoi_unchecked(x3, x6527);
    x3 = x6528;
    /* VAR */ char* x6530 = x3;
    while(1) {
      
      char x6531 = *x3;
      boolean_t x6532 = x6531!=('|');
      /* VAR */ boolean_t ite34519 = 0;
      if(x6532) {
        char x41235 = *x3;
        boolean_t x41236 = x41235!=('\n');
        ite34519 = x41236;
      } else {
        
        ite34519 = 0;
      };
      boolean_t x31352 = ite34519;
      if (!(x31352)) break; 
      
      x3 += 1;
    };
    char* x6538 = x6530;
    numeric_int_t x6539 = x3 - x6538;
    numeric_int_t x6540 = x6539+(1);
    char* x7969 = (char*)malloc(x6540 * sizeof(char));
    memset(x7969, 0, x6540 * sizeof(char));
    char* x6543 = x6530;
    char* x6544 = strncpy(x7969, x6543, x6539);
    x3 += 1;
    /* VAR */ char* x6546 = x3;
    while(1) {
      
      char x6547 = *x3;
      boolean_t x6548 = x6547!=('|');
      /* VAR */ boolean_t ite34540 = 0;
      if(x6548) {
        char x41255 = *x3;
        boolean_t x41256 = x41255!=('\n');
        ite34540 = x41256;
      } else {
        
        ite34540 = 0;
      };
      boolean_t x31366 = ite34540;
      if (!(x31366)) break; 
      
      x3 += 1;
    };
    char* x6554 = x6546;
    numeric_int_t x6555 = x3 - x6554;
    numeric_int_t x6556 = x6555+(1);
    char* x7985 = (char*)malloc(x6556 * sizeof(char));
    memset(x7985, 0, x6556 * sizeof(char));
    char* x6559 = x6546;
    char* x6560 = strncpy(x7985, x6559, x6555);
    x3 += 1;
    /* VAR */ char* x6562 = x3;
    while(1) {
      
      char x6563 = *x3;
      boolean_t x6564 = x6563!=('|');
      /* VAR */ boolean_t ite34561 = 0;
      if(x6564) {
        char x41275 = *x3;
        boolean_t x41276 = x41275!=('\n');
        ite34561 = x41276;
      } else {
        
        ite34561 = 0;
      };
      boolean_t x31380 = ite34561;
      if (!(x31380)) break; 
      
      x3 += 1;
    };
    char* x6570 = x6562;
    numeric_int_t x6571 = x3 - x6570;
    numeric_int_t x6572 = x6571+(1);
    char* x8001 = (char*)malloc(x6572 * sizeof(char));
    memset(x8001, 0, x6572 * sizeof(char));
    char* x6575 = x6562;
    char* x6576 = strncpy(x8001, x6575, x6571);
    x3 += 1;
    /* VAR */ char* x6578 = x3;
    while(1) {
      
      char x6579 = *x3;
      boolean_t x6580 = x6579!=('|');
      /* VAR */ boolean_t ite34582 = 0;
      if(x6580) {
        char x41295 = *x3;
        boolean_t x41296 = x41295!=('\n');
        ite34582 = x41296;
      } else {
        
        ite34582 = 0;
      };
      boolean_t x31394 = ite34582;
      if (!(x31394)) break; 
      
      x3 += 1;
    };
    char* x6586 = x6578;
    numeric_int_t x6587 = x3 - x6586;
    numeric_int_t x6588 = x6587+(1);
    char* x8017 = (char*)malloc(x6588 * sizeof(char));
    memset(x8017, 0, x6588 * sizeof(char));
    char* x6591 = x6578;
    char* x6592 = strncpy(x8017, x6591, x6587);
    x3 += 1;
    /* VAR */ numeric_int_t x6594 = 0;
    numeric_int_t x6595 = x6594;
    numeric_int_t* x6596 = &x6595;
    char* x6597 = strntoi_unchecked(x3, x6596);
    x3 = x6597;
    /* VAR */ char* x6599 = x3;
    while(1) {
      
      char x6600 = *x3;
      boolean_t x6601 = x6600!=('|');
      /* VAR */ boolean_t ite34608 = 0;
      if(x6601) {
        char x41320 = *x3;
        boolean_t x41321 = x41320!=('\n');
        ite34608 = x41321;
      } else {
        
        ite34608 = 0;
      };
      boolean_t x31413 = ite34608;
      if (!(x31413)) break; 
      
      x3 += 1;
    };
    char* x6607 = x6599;
    numeric_int_t x6608 = x3 - x6607;
    numeric_int_t x6609 = x6608+(1);
    char* x8038 = (char*)malloc(x6609 * sizeof(char));
    memset(x8038, 0, x6609 * sizeof(char));
    char* x6612 = x6599;
    char* x6613 = strncpy(x8038, x6612, x6608);
    x3 += 1;
    /* VAR */ double x6615 = 0.0;
    double x6616 = x6615;
    double* x6617 = &x6616;
    char* x6618 = strntod_unchecked(x3, x6617);
    x3 = x6618;
    /* VAR */ char* x6620 = x3;
    while(1) {
      
      char x6621 = *x3;
      boolean_t x6622 = x6621!=('|');
      /* VAR */ boolean_t ite34634 = 0;
      if(x6622) {
        char x41345 = *x3;
        boolean_t x41346 = x41345!=('\n');
        ite34634 = x41346;
      } else {
        
        ite34634 = 0;
      };
      boolean_t x31432 = ite34634;
      if (!(x31432)) break; 
      
      x3 += 1;
    };
    char* x6628 = x6620;
    numeric_int_t x6629 = x3 - x6628;
    numeric_int_t x6630 = x6629+(1);
    char* x8059 = (char*)malloc(x6630 * sizeof(char));
    memset(x8059, 0, x6630 * sizeof(char));
    char* x6633 = x6620;
    char* x6634 = strncpy(x8059, x6633, x6629);
    x3 += 1;
    struct PARTRecord* x8793 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x8793, 0, 1 * sizeof(struct PARTRecord));
    x8793->P_PARTKEY = x6526; x8793->P_NAME = x7969; x8793->P_MFGR = x7985; x8793->P_BRAND = x8001; x8793->P_TYPE = x8017; x8793->P_SIZE = x6595; x8793->P_CONTAINER = x8038; x8793->P_RETAILPRICE = x6616; x8793->P_COMMENT = x8059;
    numeric_int_t x19 = x4;
    struct PARTRecord x8066 = *x8793;
    *(x7932 + x19) = x8066;
    struct PARTRecord* x8068 = &(x7932[x19]);
    x8793 = x8068;
    numeric_int_t x21 = x4;
    numeric_int_t x22 = x21+(1);
    x4 = x22;
  };
  char* x6643 = x6517;
  munmap(x6643, x6513);
  *count = x6500;
  *array = x7932;
}

void loadPartsupp(numeric_int_t* count, struct PARTSUPPRecord** array) {
  FILE* x6644 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x6645 = 0;
  numeric_int_t x6646 = x6645;
  numeric_int_t* x6647 = &x6646;
  numeric_int_t x6648 = fscanf(x6644, "%d", x6647);
  pclose(x6644);
  struct PARTSUPPRecord* x8081 = (struct PARTSUPPRecord*)malloc(x6646 * sizeof(struct PARTSUPPRecord));
  memset(x8081, 0, x6646 * sizeof(struct PARTSUPPRecord));
  numeric_int_t x6652 = O_RDONLY;
  numeric_int_t x6653 = open("/Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", x6652);
  struct stat x6508 = (struct stat){0};
  /* VAR */ struct stat x6654 = x6508;
  struct stat x6655 = x6654;
  struct stat* x6656 = &x6655;
  numeric_int_t x6657 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", x6656);
  size_t x6658 = x6656->st_size;
  numeric_int_t x6659 = PROT_READ;
  numeric_int_t x6660 = MAP_PRIVATE;
  char* x6661 = mmap(NULL, x6658, x6659, x6660, x6653, 0);
  /* VAR */ char* x6662 = x6661;
  char* x28 = x6662;
  /* VAR */ numeric_int_t x29 = 0;
  while(1) {
    
    numeric_int_t x30 = x29;
    boolean_t x31 = x30<(x6646);
    /* VAR */ boolean_t ite34687 = 0;
    if(x31) {
      char x41397 = *x28;
      boolean_t x41398 = x41397!=('\0');
      ite34687 = x41398;
    } else {
      
      ite34687 = 0;
    };
    boolean_t x31478 = ite34687;
    if (!(x31478)) break; 
    
    /* VAR */ numeric_int_t x6670 = 0;
    numeric_int_t x6671 = x6670;
    numeric_int_t* x6672 = &x6671;
    char* x6673 = strntoi_unchecked(x28, x6672);
    x28 = x6673;
    /* VAR */ numeric_int_t x6675 = 0;
    numeric_int_t x6676 = x6675;
    numeric_int_t* x6677 = &x6676;
    char* x6678 = strntoi_unchecked(x28, x6677);
    x28 = x6678;
    /* VAR */ numeric_int_t x6680 = 0;
    numeric_int_t x6681 = x6680;
    numeric_int_t* x6682 = &x6681;
    char* x6683 = strntoi_unchecked(x28, x6682);
    x28 = x6683;
    /* VAR */ double x6685 = 0.0;
    double x6686 = x6685;
    double* x6687 = &x6686;
    char* x6688 = strntod_unchecked(x28, x6687);
    x28 = x6688;
    /* VAR */ char* x6690 = x28;
    while(1) {
      
      char x6691 = *x28;
      boolean_t x6692 = x6691!=('|');
      /* VAR */ boolean_t ite34720 = 0;
      if(x6692) {
        char x41429 = *x28;
        boolean_t x41430 = x41429!=('\n');
        ite34720 = x41430;
      } else {
        
        ite34720 = 0;
      };
      boolean_t x31504 = ite34720;
      if (!(x31504)) break; 
      
      x28 += 1;
    };
    char* x6698 = x6690;
    numeric_int_t x6699 = x28 - x6698;
    numeric_int_t x6700 = x6699+(1);
    char* x8132 = (char*)malloc(x6700 * sizeof(char));
    memset(x8132, 0, x6700 * sizeof(char));
    char* x6703 = x6690;
    char* x6704 = strncpy(x8132, x6703, x6699);
    x28 += 1;
    struct PARTSUPPRecord* x8868 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x8868, 0, 1 * sizeof(struct PARTSUPPRecord));
    x8868->PS_PARTKEY = x6671; x8868->PS_SUPPKEY = x6676; x8868->PS_AVAILQTY = x6681; x8868->PS_SUPPLYCOST = x6686; x8868->PS_COMMENT = x8132;
    numeric_int_t x40 = x29;
    struct PARTSUPPRecord x8139 = *x8868;
    *(x8081 + x40) = x8139;
    struct PARTSUPPRecord* x8141 = &(x8081[x40]);
    x8868 = x8141;
    numeric_int_t x42 = x29;
    numeric_int_t x43 = x42+(1);
    x29 = x43;
  };
  char* x6713 = x6662;
  munmap(x6713, x6658);
  *count = x6646;
  *array = x8081;
}

void loadNation(numeric_int_t* count, struct NATIONRecord** array) {
  FILE* x6714 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x6715 = 0;
  numeric_int_t x6716 = x6715;
  numeric_int_t* x6717 = &x6716;
  numeric_int_t x6718 = fscanf(x6714, "%d", x6717);
  pclose(x6714);
  struct NATIONRecord* x8154 = (struct NATIONRecord*)malloc(x6716 * sizeof(struct NATIONRecord));
  memset(x8154, 0, x6716 * sizeof(struct NATIONRecord));
  numeric_int_t x6722 = O_RDONLY;
  numeric_int_t x6723 = open("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x6722);
  struct stat x6508 = (struct stat){0};
  /* VAR */ struct stat x6724 = x6508;
  struct stat x6725 = x6724;
  struct stat* x6726 = &x6725;
  numeric_int_t x6727 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/nation.tbl", x6726);
  size_t x6728 = x6726->st_size;
  numeric_int_t x6729 = PROT_READ;
  numeric_int_t x6730 = MAP_PRIVATE;
  char* x6731 = mmap(NULL, x6728, x6729, x6730, x6723, 0);
  /* VAR */ char* x6732 = x6731;
  char* x49 = x6732;
  /* VAR */ numeric_int_t x50 = 0;
  while(1) {
    
    numeric_int_t x51 = x50;
    boolean_t x52 = x51<(x6716);
    /* VAR */ boolean_t ite34773 = 0;
    if(x52) {
      char x41481 = *x49;
      boolean_t x41482 = x41481!=('\0');
      ite34773 = x41482;
    } else {
      
      ite34773 = 0;
    };
    boolean_t x31550 = ite34773;
    if (!(x31550)) break; 
    
    /* VAR */ numeric_int_t x6740 = 0;
    numeric_int_t x6741 = x6740;
    numeric_int_t* x6742 = &x6741;
    char* x6743 = strntoi_unchecked(x49, x6742);
    x49 = x6743;
    /* VAR */ char* x6745 = x49;
    while(1) {
      
      char x6746 = *x49;
      boolean_t x6747 = x6746!=('|');
      /* VAR */ boolean_t ite34791 = 0;
      if(x6747) {
        char x41498 = *x49;
        boolean_t x41499 = x41498!=('\n');
        ite34791 = x41499;
      } else {
        
        ite34791 = 0;
      };
      boolean_t x31561 = ite34791;
      if (!(x31561)) break; 
      
      x49 += 1;
    };
    char* x6753 = x6745;
    numeric_int_t x6754 = x49 - x6753;
    numeric_int_t x6755 = x6754+(1);
    char* x8190 = (char*)malloc(x6755 * sizeof(char));
    memset(x8190, 0, x6755 * sizeof(char));
    char* x6758 = x6745;
    char* x6759 = strncpy(x8190, x6758, x6754);
    x49 += 1;
    /* VAR */ numeric_int_t x6761 = 0;
    numeric_int_t x6762 = x6761;
    numeric_int_t* x6763 = &x6762;
    char* x6764 = strntoi_unchecked(x49, x6763);
    x49 = x6764;
    /* VAR */ char* x6766 = x49;
    while(1) {
      
      char x6767 = *x49;
      boolean_t x6768 = x6767!=('|');
      /* VAR */ boolean_t ite34817 = 0;
      if(x6768) {
        char x41523 = *x49;
        boolean_t x41524 = x41523!=('\n');
        ite34817 = x41524;
      } else {
        
        ite34817 = 0;
      };
      boolean_t x31580 = ite34817;
      if (!(x31580)) break; 
      
      x49 += 1;
    };
    char* x6774 = x6766;
    numeric_int_t x6775 = x49 - x6774;
    numeric_int_t x6776 = x6775+(1);
    char* x8211 = (char*)malloc(x6776 * sizeof(char));
    memset(x8211, 0, x6776 * sizeof(char));
    char* x6779 = x6766;
    char* x6780 = strncpy(x8211, x6779, x6775);
    x49 += 1;
    struct NATIONRecord* x8949 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x8949, 0, 1 * sizeof(struct NATIONRecord));
    x8949->N_NATIONKEY = x6741; x8949->N_NAME = x8190; x8949->N_REGIONKEY = x6762; x8949->N_COMMENT = x8211;
    numeric_int_t x60 = x50;
    struct NATIONRecord x8218 = *x8949;
    *(x8154 + x60) = x8218;
    struct NATIONRecord* x8220 = &(x8154[x60]);
    x8949 = x8220;
    numeric_int_t x62 = x50;
    numeric_int_t x63 = x62+(1);
    x50 = x63;
  };
  char* x6789 = x6732;
  munmap(x6789, x6728);
  *count = x6716;
  *array = x8154;
}

void loadRegion(numeric_int_t* count, struct REGIONRecord** array) {
  FILE* x6790 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/region.tbl", "r");
  /* VAR */ numeric_int_t x6791 = 0;
  numeric_int_t x6792 = x6791;
  numeric_int_t* x6793 = &x6792;
  numeric_int_t x6794 = fscanf(x6790, "%d", x6793);
  pclose(x6790);
  struct REGIONRecord* x8233 = (struct REGIONRecord*)malloc(x6792 * sizeof(struct REGIONRecord));
  memset(x8233, 0, x6792 * sizeof(struct REGIONRecord));
  numeric_int_t x6798 = O_RDONLY;
  numeric_int_t x6799 = open("/Users/amirsh/Dropbox/sf0.1/sf1/region.tbl", x6798);
  struct stat x6508 = (struct stat){0};
  /* VAR */ struct stat x6800 = x6508;
  struct stat x6801 = x6800;
  struct stat* x6802 = &x6801;
  numeric_int_t x6803 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/region.tbl", x6802);
  size_t x6804 = x6802->st_size;
  numeric_int_t x6805 = PROT_READ;
  numeric_int_t x6806 = MAP_PRIVATE;
  char* x6807 = mmap(NULL, x6804, x6805, x6806, x6799, 0);
  /* VAR */ char* x6808 = x6807;
  char* x69 = x6808;
  /* VAR */ numeric_int_t x70 = 0;
  while(1) {
    
    numeric_int_t x71 = x70;
    boolean_t x72 = x71<(x6792);
    /* VAR */ boolean_t ite34870 = 0;
    if(x72) {
      char x41575 = *x69;
      boolean_t x41576 = x41575!=('\0');
      ite34870 = x41576;
    } else {
      
      ite34870 = 0;
    };
    boolean_t x31626 = ite34870;
    if (!(x31626)) break; 
    
    /* VAR */ numeric_int_t x6816 = 0;
    numeric_int_t x6817 = x6816;
    numeric_int_t* x6818 = &x6817;
    char* x6819 = strntoi_unchecked(x69, x6818);
    x69 = x6819;
    /* VAR */ char* x6821 = x69;
    while(1) {
      
      char x6822 = *x69;
      boolean_t x6823 = x6822!=('|');
      /* VAR */ boolean_t ite34888 = 0;
      if(x6823) {
        char x41592 = *x69;
        boolean_t x41593 = x41592!=('\n');
        ite34888 = x41593;
      } else {
        
        ite34888 = 0;
      };
      boolean_t x31637 = ite34888;
      if (!(x31637)) break; 
      
      x69 += 1;
    };
    char* x6829 = x6821;
    numeric_int_t x6830 = x69 - x6829;
    numeric_int_t x6831 = x6830+(1);
    char* x8269 = (char*)malloc(x6831 * sizeof(char));
    memset(x8269, 0, x6831 * sizeof(char));
    char* x6834 = x6821;
    char* x6835 = strncpy(x8269, x6834, x6830);
    x69 += 1;
    /* VAR */ char* x6837 = x69;
    while(1) {
      
      char x6838 = *x69;
      boolean_t x6839 = x6838!=('|');
      /* VAR */ boolean_t ite34909 = 0;
      if(x6839) {
        char x41612 = *x69;
        boolean_t x41613 = x41612!=('\n');
        ite34909 = x41613;
      } else {
        
        ite34909 = 0;
      };
      boolean_t x31651 = ite34909;
      if (!(x31651)) break; 
      
      x69 += 1;
    };
    char* x6845 = x6837;
    numeric_int_t x6846 = x69 - x6845;
    numeric_int_t x6847 = x6846+(1);
    char* x8285 = (char*)malloc(x6847 * sizeof(char));
    memset(x8285, 0, x6847 * sizeof(char));
    char* x6850 = x6837;
    char* x6851 = strncpy(x8285, x6850, x6846);
    x69 += 1;
    struct REGIONRecord* x9025 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x9025, 0, 1 * sizeof(struct REGIONRecord));
    x9025->R_REGIONKEY = x6817; x9025->R_NAME = x8269; x9025->R_COMMENT = x8285;
    numeric_int_t x79 = x70;
    struct REGIONRecord x8292 = *x9025;
    *(x8233 + x79) = x8292;
    struct REGIONRecord* x8294 = &(x8233[x79]);
    x9025 = x8294;
    numeric_int_t x81 = x70;
    numeric_int_t x82 = x81+(1);
    x70 = x82;
  };
  char* x6860 = x6808;
  munmap(x6860, x6804);
  *count = x6792;
  *array = x8233;
}

void loadSupplier(numeric_int_t* count, struct SUPPLIERRecord** array) {
  FILE* x6861 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x6862 = 0;
  numeric_int_t x6863 = x6862;
  numeric_int_t* x6864 = &x6863;
  numeric_int_t x6865 = fscanf(x6861, "%d", x6864);
  pclose(x6861);
  struct SUPPLIERRecord* x8307 = (struct SUPPLIERRecord*)malloc(x6863 * sizeof(struct SUPPLIERRecord));
  memset(x8307, 0, x6863 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x6869 = O_RDONLY;
  numeric_int_t x6870 = open("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x6869);
  struct stat x6508 = (struct stat){0};
  /* VAR */ struct stat x6871 = x6508;
  struct stat x6872 = x6871;
  struct stat* x6873 = &x6872;
  numeric_int_t x6874 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x6873);
  size_t x6875 = x6873->st_size;
  numeric_int_t x6876 = PROT_READ;
  numeric_int_t x6877 = MAP_PRIVATE;
  char* x6878 = mmap(NULL, x6875, x6876, x6877, x6870, 0);
  /* VAR */ char* x6879 = x6878;
  char* x88 = x6879;
  /* VAR */ numeric_int_t x89 = 0;
  while(1) {
    
    numeric_int_t x90 = x89;
    boolean_t x91 = x90<(x6863);
    /* VAR */ boolean_t ite34962 = 0;
    if(x91) {
      char x41664 = *x88;
      boolean_t x41665 = x41664!=('\0');
      ite34962 = x41665;
    } else {
      
      ite34962 = 0;
    };
    boolean_t x31697 = ite34962;
    if (!(x31697)) break; 
    
    /* VAR */ numeric_int_t x6887 = 0;
    numeric_int_t x6888 = x6887;
    numeric_int_t* x6889 = &x6888;
    char* x6890 = strntoi_unchecked(x88, x6889);
    x88 = x6890;
    /* VAR */ char* x6892 = x88;
    while(1) {
      
      char x6893 = *x88;
      boolean_t x6894 = x6893!=('|');
      /* VAR */ boolean_t ite34980 = 0;
      if(x6894) {
        char x41681 = *x88;
        boolean_t x41682 = x41681!=('\n');
        ite34980 = x41682;
      } else {
        
        ite34980 = 0;
      };
      boolean_t x31708 = ite34980;
      if (!(x31708)) break; 
      
      x88 += 1;
    };
    char* x6900 = x6892;
    numeric_int_t x6901 = x88 - x6900;
    numeric_int_t x6902 = x6901+(1);
    char* x8343 = (char*)malloc(x6902 * sizeof(char));
    memset(x8343, 0, x6902 * sizeof(char));
    char* x6905 = x6892;
    char* x6906 = strncpy(x8343, x6905, x6901);
    x88 += 1;
    /* VAR */ char* x6908 = x88;
    while(1) {
      
      char x6909 = *x88;
      boolean_t x6910 = x6909!=('|');
      /* VAR */ boolean_t ite35001 = 0;
      if(x6910) {
        char x41701 = *x88;
        boolean_t x41702 = x41701!=('\n');
        ite35001 = x41702;
      } else {
        
        ite35001 = 0;
      };
      boolean_t x31722 = ite35001;
      if (!(x31722)) break; 
      
      x88 += 1;
    };
    char* x6916 = x6908;
    numeric_int_t x6917 = x88 - x6916;
    numeric_int_t x6918 = x6917+(1);
    char* x8359 = (char*)malloc(x6918 * sizeof(char));
    memset(x8359, 0, x6918 * sizeof(char));
    char* x6921 = x6908;
    char* x6922 = strncpy(x8359, x6921, x6917);
    x88 += 1;
    /* VAR */ numeric_int_t x6924 = 0;
    numeric_int_t x6925 = x6924;
    numeric_int_t* x6926 = &x6925;
    char* x6927 = strntoi_unchecked(x88, x6926);
    x88 = x6927;
    /* VAR */ char* x6929 = x88;
    while(1) {
      
      char x6930 = *x88;
      boolean_t x6931 = x6930!=('|');
      /* VAR */ boolean_t ite35027 = 0;
      if(x6931) {
        char x41726 = *x88;
        boolean_t x41727 = x41726!=('\n');
        ite35027 = x41727;
      } else {
        
        ite35027 = 0;
      };
      boolean_t x31741 = ite35027;
      if (!(x31741)) break; 
      
      x88 += 1;
    };
    char* x6937 = x6929;
    numeric_int_t x6938 = x88 - x6937;
    numeric_int_t x6939 = x6938+(1);
    char* x8380 = (char*)malloc(x6939 * sizeof(char));
    memset(x8380, 0, x6939 * sizeof(char));
    char* x6942 = x6929;
    char* x6943 = strncpy(x8380, x6942, x6938);
    x88 += 1;
    /* VAR */ double x6945 = 0.0;
    double x6946 = x6945;
    double* x6947 = &x6946;
    char* x6948 = strntod_unchecked(x88, x6947);
    x88 = x6948;
    /* VAR */ char* x6950 = x88;
    while(1) {
      
      char x6951 = *x88;
      boolean_t x6952 = x6951!=('|');
      /* VAR */ boolean_t ite35053 = 0;
      if(x6952) {
        char x41751 = *x88;
        boolean_t x41752 = x41751!=('\n');
        ite35053 = x41752;
      } else {
        
        ite35053 = 0;
      };
      boolean_t x31760 = ite35053;
      if (!(x31760)) break; 
      
      x88 += 1;
    };
    char* x6958 = x6950;
    numeric_int_t x6959 = x88 - x6958;
    numeric_int_t x6960 = x6959+(1);
    char* x8401 = (char*)malloc(x6960 * sizeof(char));
    memset(x8401, 0, x6960 * sizeof(char));
    char* x6963 = x6950;
    char* x6964 = strncpy(x8401, x6963, x6959);
    x88 += 1;
    struct SUPPLIERRecord* x9143 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x9143, 0, 1 * sizeof(struct SUPPLIERRecord));
    x9143->S_SUPPKEY = x6888; x9143->S_NAME = x8343; x9143->S_ADDRESS = x8359; x9143->S_NATIONKEY = x6925; x9143->S_PHONE = x8380; x9143->S_ACCTBAL = x6946; x9143->S_COMMENT = x8401;
    numeric_int_t x102 = x89;
    struct SUPPLIERRecord x8408 = *x9143;
    *(x8307 + x102) = x8408;
    struct SUPPLIERRecord* x8410 = &(x8307[x102]);
    x9143 = x8410;
    numeric_int_t x104 = x89;
    numeric_int_t x105 = x104+(1);
    x89 = x105;
  };
  char* x6973 = x6879;
  munmap(x6973, x6875);
  *count = x6863;
  *array = x8307;
}

void loadOrders(numeric_int_t* count, struct ORDERSRecord** array) {
  FILE* x3626 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x3627 = 0;
  numeric_int_t x3628 = x3627;
  numeric_int_t* x3629 = &x3628;
  numeric_int_t x3630 = fscanf(x3626, "%d", x3629);
  pclose(x3626);
  struct ORDERSRecord* x4929 = (struct ORDERSRecord*)malloc(x3628 * sizeof(struct ORDERSRecord));
  memset(x4929, 0, x3628 * sizeof(struct ORDERSRecord));
  numeric_int_t x3634 = O_RDONLY;
  numeric_int_t x3635 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x3634);
  struct stat x3446 = (struct stat){0};
  /* VAR */ struct stat x3636 = x3446;
  struct stat x3637 = x3636;
  struct stat* x3638 = &x3637;
  numeric_int_t x3639 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x3638);
  size_t x3640 = x3638->st_size;
  numeric_int_t x3641 = PROT_READ;
  numeric_int_t x3642 = MAP_PRIVATE;
  char* x3643 = mmap(NULL, x3640, x3641, x3642, x3635, 0);
  /* VAR */ char* x3644 = x3643;
  char* x35 = x3644;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x3628);
    /* VAR */ boolean_t ite22161 = 0;
    if(x38) {
      char x25344 = *x35;
      boolean_t x25345 = x25344!=('\0');
      ite22161 = x25345;
    } else {
      
      ite22161 = 0;
    };
    boolean_t x20684 = ite22161;
    if (!(x20684)) break; 
    
    /* VAR */ numeric_int_t x3652 = 0;
    numeric_int_t x3653 = x3652;
    numeric_int_t* x3654 = &x3653;
    char* x3655 = strntoi_unchecked(x35, x3654);
    x35 = x3655;
    /* VAR */ numeric_int_t x3657 = 0;
    numeric_int_t x3658 = x3657;
    numeric_int_t* x3659 = &x3658;
    char* x3660 = strntoi_unchecked(x35, x3659);
    x35 = x3660;
    char x3662 = *x35;
    /* VAR */ char x3663 = x3662;
    x35 += 1;
    x35 += 1;
    char x3666 = x3663;
    /* VAR */ double x3667 = 0.0;
    double x3668 = x3667;
    double* x3669 = &x3668;
    char* x3670 = strntod_unchecked(x35, x3669);
    x35 = x3670;
    /* VAR */ numeric_int_t x3672 = 0;
    numeric_int_t x3673 = x3672;
    numeric_int_t* x3674 = &x3673;
    char* x3675 = strntoi_unchecked(x35, x3674);
    x35 = x3675;
    /* VAR */ numeric_int_t x3677 = 0;
    numeric_int_t x3678 = x3677;
    numeric_int_t* x3679 = &x3678;
    char* x3680 = strntoi_unchecked(x35, x3679);
    x35 = x3680;
    /* VAR */ numeric_int_t x3682 = 0;
    numeric_int_t x3683 = x3682;
    numeric_int_t* x3684 = &x3683;
    char* x3685 = strntoi_unchecked(x35, x3684);
    x35 = x3685;
    numeric_int_t x3687 = x3673*(10000);
    numeric_int_t x3688 = x3678*(100);
    numeric_int_t x3689 = x3687+(x3688);
    numeric_int_t x3690 = x3689+(x3683);
    /* VAR */ char* x3691 = x35;
    while(1) {
      
      char x3692 = *x35;
      boolean_t x3693 = x3692!=('|');
      /* VAR */ boolean_t ite22213 = 0;
      if(x3693) {
        char x25395 = *x35;
        boolean_t x25396 = x25395!=('\n');
        ite22213 = x25396;
      } else {
        
        ite22213 = 0;
      };
      boolean_t x20729 = ite22213;
      if (!(x20729)) break; 
      
      x35 += 1;
    };
    char* x3699 = x3691;
    numeric_int_t x3700 = x35 - x3699;
    numeric_int_t x3701 = x3700+(1);
    char* x4999 = (char*)malloc(x3701 * sizeof(char));
    memset(x4999, 0, x3701 * sizeof(char));
    char* x3704 = x3691;
    char* x3705 = strncpy(x4999, x3704, x3700);
    x35 += 1;
    /* VAR */ char* x3707 = x35;
    while(1) {
      
      char x3708 = *x35;
      boolean_t x3709 = x3708!=('|');
      /* VAR */ boolean_t ite22234 = 0;
      if(x3709) {
        char x25415 = *x35;
        boolean_t x25416 = x25415!=('\n');
        ite22234 = x25416;
      } else {
        
        ite22234 = 0;
      };
      boolean_t x20743 = ite22234;
      if (!(x20743)) break; 
      
      x35 += 1;
    };
    char* x3715 = x3707;
    numeric_int_t x3716 = x35 - x3715;
    numeric_int_t x3717 = x3716+(1);
    char* x5015 = (char*)malloc(x3717 * sizeof(char));
    memset(x5015, 0, x3717 * sizeof(char));
    char* x3720 = x3707;
    char* x3721 = strncpy(x5015, x3720, x3716);
    x35 += 1;
    /* VAR */ numeric_int_t x3723 = 0;
    numeric_int_t x3724 = x3723;
    numeric_int_t* x3725 = &x3724;
    char* x3726 = strntoi_unchecked(x35, x3725);
    x35 = x3726;
    /* VAR */ char* x3728 = x35;
    while(1) {
      
      char x3729 = *x35;
      boolean_t x3730 = x3729!=('|');
      /* VAR */ boolean_t ite22260 = 0;
      if(x3730) {
        char x25440 = *x35;
        boolean_t x25441 = x25440!=('\n');
        ite22260 = x25441;
      } else {
        
        ite22260 = 0;
      };
      boolean_t x20762 = ite22260;
      if (!(x20762)) break; 
      
      x35 += 1;
    };
    char* x3736 = x3728;
    numeric_int_t x3737 = x35 - x3736;
    numeric_int_t x3738 = x3737+(1);
    char* x5036 = (char*)malloc(x3738 * sizeof(char));
    memset(x5036, 0, x3738 * sizeof(char));
    char* x3741 = x3728;
    char* x3742 = strncpy(x5036, x3741, x3737);
    x35 += 1;
    struct ORDERSRecord* x5699 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x5699, 0, 1 * sizeof(struct ORDERSRecord));
    x5699->O_ORDERKEY = x3653; x5699->O_CUSTKEY = x3658; x5699->O_ORDERSTATUS = x3666; x5699->O_TOTALPRICE = x3668; x5699->O_ORDERDATE = x3690; x5699->O_ORDERPRIORITY = x4999; x5699->O_CLERK = x5015; x5699->O_SHIPPRIORITY = x3724; x5699->O_COMMENT = x5036;
    numeric_int_t x51 = x36;
    struct ORDERSRecord x5043 = *x5699;
    *(x4929 + x51) = x5043;
    struct ORDERSRecord* x5045 = &(x4929[x51]);
    x5699 = x5045;
    numeric_int_t x53 = x36;
    numeric_int_t x54 = x53+(1);
    x36 = x54;
  };
  char* x3751 = x3644;
  munmap(x3751, x3640);
  *count = x3628;
  *array = x4929;
}

void loadCustomer(numeric_int_t* count, struct CUSTOMERRecord** array) {
  FILE* x3752 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", "r");
  /* VAR */ numeric_int_t x3753 = 0;
  numeric_int_t x3754 = x3753;
  numeric_int_t* x3755 = &x3754;
  numeric_int_t x3756 = fscanf(x3752, "%d", x3755);
  pclose(x3752);
  struct CUSTOMERRecord* x5058 = (struct CUSTOMERRecord*)malloc(x3754 * sizeof(struct CUSTOMERRecord));
  memset(x5058, 0, x3754 * sizeof(struct CUSTOMERRecord));
  numeric_int_t x3760 = O_RDONLY;
  numeric_int_t x3761 = open("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x3760);
  struct stat x3446 = (struct stat){0};
  /* VAR */ struct stat x3762 = x3446;
  struct stat x3763 = x3762;
  struct stat* x3764 = &x3763;
  numeric_int_t x3765 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x3764);
  size_t x3766 = x3764->st_size;
  numeric_int_t x3767 = PROT_READ;
  numeric_int_t x3768 = MAP_PRIVATE;
  char* x3769 = mmap(NULL, x3766, x3767, x3768, x3761, 0);
  /* VAR */ char* x3770 = x3769;
  char* x60 = x3770;
  /* VAR */ numeric_int_t x61 = 0;
  while(1) {
    
    numeric_int_t x62 = x61;
    boolean_t x63 = x62<(x3754);
    /* VAR */ boolean_t ite22313 = 0;
    if(x63) {
      char x25492 = *x60;
      boolean_t x25493 = x25492!=('\0');
      ite22313 = x25493;
    } else {
      
      ite22313 = 0;
    };
    boolean_t x20808 = ite22313;
    if (!(x20808)) break; 
    
    /* VAR */ numeric_int_t x3778 = 0;
    numeric_int_t x3779 = x3778;
    numeric_int_t* x3780 = &x3779;
    char* x3781 = strntoi_unchecked(x60, x3780);
    x60 = x3781;
    /* VAR */ char* x3783 = x60;
    while(1) {
      
      char x3784 = *x60;
      boolean_t x3785 = x3784!=('|');
      /* VAR */ boolean_t ite22331 = 0;
      if(x3785) {
        char x25509 = *x60;
        boolean_t x25510 = x25509!=('\n');
        ite22331 = x25510;
      } else {
        
        ite22331 = 0;
      };
      boolean_t x20819 = ite22331;
      if (!(x20819)) break; 
      
      x60 += 1;
    };
    char* x3791 = x3783;
    numeric_int_t x3792 = x60 - x3791;
    numeric_int_t x3793 = x3792+(1);
    char* x5094 = (char*)malloc(x3793 * sizeof(char));
    memset(x5094, 0, x3793 * sizeof(char));
    char* x3796 = x3783;
    char* x3797 = strncpy(x5094, x3796, x3792);
    x60 += 1;
    /* VAR */ char* x3799 = x60;
    while(1) {
      
      char x3800 = *x60;
      boolean_t x3801 = x3800!=('|');
      /* VAR */ boolean_t ite22352 = 0;
      if(x3801) {
        char x25529 = *x60;
        boolean_t x25530 = x25529!=('\n');
        ite22352 = x25530;
      } else {
        
        ite22352 = 0;
      };
      boolean_t x20833 = ite22352;
      if (!(x20833)) break; 
      
      x60 += 1;
    };
    char* x3807 = x3799;
    numeric_int_t x3808 = x60 - x3807;
    numeric_int_t x3809 = x3808+(1);
    char* x5110 = (char*)malloc(x3809 * sizeof(char));
    memset(x5110, 0, x3809 * sizeof(char));
    char* x3812 = x3799;
    char* x3813 = strncpy(x5110, x3812, x3808);
    x60 += 1;
    /* VAR */ numeric_int_t x3815 = 0;
    numeric_int_t x3816 = x3815;
    numeric_int_t* x3817 = &x3816;
    char* x3818 = strntoi_unchecked(x60, x3817);
    x60 = x3818;
    /* VAR */ char* x3820 = x60;
    while(1) {
      
      char x3821 = *x60;
      boolean_t x3822 = x3821!=('|');
      /* VAR */ boolean_t ite22378 = 0;
      if(x3822) {
        char x25554 = *x60;
        boolean_t x25555 = x25554!=('\n');
        ite22378 = x25555;
      } else {
        
        ite22378 = 0;
      };
      boolean_t x20852 = ite22378;
      if (!(x20852)) break; 
      
      x60 += 1;
    };
    char* x3828 = x3820;
    numeric_int_t x3829 = x60 - x3828;
    numeric_int_t x3830 = x3829+(1);
    char* x5131 = (char*)malloc(x3830 * sizeof(char));
    memset(x5131, 0, x3830 * sizeof(char));
    char* x3833 = x3820;
    char* x3834 = strncpy(x5131, x3833, x3829);
    x60 += 1;
    /* VAR */ double x3836 = 0.0;
    double x3837 = x3836;
    double* x3838 = &x3837;
    char* x3839 = strntod_unchecked(x60, x3838);
    x60 = x3839;
    /* VAR */ char* x3841 = x60;
    while(1) {
      
      char x3842 = *x60;
      boolean_t x3843 = x3842!=('|');
      /* VAR */ boolean_t ite22404 = 0;
      if(x3843) {
        char x25579 = *x60;
        boolean_t x25580 = x25579!=('\n');
        ite22404 = x25580;
      } else {
        
        ite22404 = 0;
      };
      boolean_t x20871 = ite22404;
      if (!(x20871)) break; 
      
      x60 += 1;
    };
    char* x3849 = x3841;
    numeric_int_t x3850 = x60 - x3849;
    numeric_int_t x3851 = x3850+(1);
    char* x5152 = (char*)malloc(x3851 * sizeof(char));
    memset(x5152, 0, x3851 * sizeof(char));
    char* x3854 = x3841;
    char* x3855 = strncpy(x5152, x3854, x3850);
    x60 += 1;
    /* VAR */ char* x3857 = x60;
    while(1) {
      
      char x3858 = *x60;
      boolean_t x3859 = x3858!=('|');
      /* VAR */ boolean_t ite22425 = 0;
      if(x3859) {
        char x25599 = *x60;
        boolean_t x25600 = x25599!=('\n');
        ite22425 = x25600;
      } else {
        
        ite22425 = 0;
      };
      boolean_t x20885 = ite22425;
      if (!(x20885)) break; 
      
      x60 += 1;
    };
    char* x3865 = x3857;
    numeric_int_t x3866 = x60 - x3865;
    numeric_int_t x3867 = x3866+(1);
    char* x5168 = (char*)malloc(x3867 * sizeof(char));
    memset(x5168, 0, x3867 * sizeof(char));
    char* x3870 = x3857;
    char* x3871 = strncpy(x5168, x3870, x3866);
    x60 += 1;
    struct CUSTOMERRecord* x5833 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x5833, 0, 1 * sizeof(struct CUSTOMERRecord));
    x5833->C_CUSTKEY = x3779; x5833->C_NAME = x5094; x5833->C_ADDRESS = x5110; x5833->C_NATIONKEY = x3816; x5833->C_PHONE = x5131; x5833->C_ACCTBAL = x3837; x5833->C_MKTSEGMENT = x5152; x5833->C_COMMENT = x5168;
    numeric_int_t x75 = x61;
    struct CUSTOMERRecord x5175 = *x5833;
    *(x5058 + x75) = x5175;
    struct CUSTOMERRecord* x5177 = &(x5058[x75]);
    x5833 = x5177;
    numeric_int_t x77 = x61;
    numeric_int_t x78 = x77+(1);
    x61 = x78;
  };
  char* x3880 = x3770;
  munmap(x3880, x3766);
  *count = x3754;
  *array = x5058;
}
