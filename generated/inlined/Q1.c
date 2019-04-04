#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct LINEITEMRecord;
struct AGGRecord_Q1GRPRecord;
struct Q1GRPRecord;
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

struct AGGRecord_Q1GRPRecord {
  struct Q1GRPRecord* key;
  double* aggs;
};

struct Q1GRPRecord {
  char L_RETURNFLAG;
  char L_LINESTATUS;
};


numeric_int_t x11942(struct Q1GRPRecord* x4066);

boolean_t x11949(struct Q1GRPRecord* x4071, struct Q1GRPRecord* x4072);

numeric_int_t x11992(struct AGGRecord_Q1GRPRecord* x111, struct AGGRecord_Q1GRPRecord* x112);

numeric_int_t x4241(void* x4235, void* x4236, void* x4237);

int main(int argc, char** argv) {
  FILE* x2212 = popen("wc -l ../../data/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x2213 = 0;
  numeric_int_t x2214 = x2213;
  numeric_int_t* x2215 = &x2214;
  numeric_int_t x2216 = fscanf(x2212, "%d", x2215);
  pclose(x2212);
  struct LINEITEMRecord* x2872 = (struct LINEITEMRecord*)malloc(x2214 * sizeof(struct LINEITEMRecord));
  memset(x2872, 0, x2214 * sizeof(struct LINEITEMRecord));
  numeric_int_t x2220 = O_RDONLY;
  numeric_int_t x2221 = open("../../data/sf1/lineitem.tbl", x2220);
  struct stat x2222 = (struct stat){0};
  /* VAR */ struct stat x2223 = x2222;
  struct stat x2224 = x2223;
  struct stat* x2225 = &x2224;
  numeric_int_t x2226 = stat("../../data/sf1/lineitem.tbl", x2225);
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
  numeric_int_t x34 = 0;
  for(; x34 < 1 ; x34 += 1) {
    
    GHashTable* x11964 = g_hash_table_new(x11942, x11949);
    struct timeval x11965 = (struct timeval){0};
    /* VAR */ struct timeval x11966 = x11965;
    struct timeval x11967 = x11966;
    /* VAR */ struct timeval x11968 = x11965;
    struct timeval x11969 = x11968;
    /* VAR */ struct timeval x11970 = x11965;
    struct timeval x11971 = x11970;
    struct timeval* x11972 = &x11969;
    gettimeofday(x11972, NULL);
    /* VAR */ numeric_int_t x11974 = 0;
    numeric_int_t* x12009 = &(x11992);
    GTree* x12010 = g_tree_new(x12009);
    /* VAR */ boolean_t x12011 = 0;
    /* VAR */ numeric_int_t x12012 = 0;
    while(1) {
      
      numeric_int_t x12014 = x11974;
      boolean_t x12015 = x12014<(x2214);
      if (!(x12015)) break; 
      
      numeric_int_t x1122 = x11974;
      struct LINEITEMRecord* x151 = &(x2872[x1122]);
      numeric_int_t x153 = x151->L_SHIPDATE;
      boolean_t x154 = x153<=(19980902);
      if(x154) {
        char x155 = x151->L_RETURNFLAG;
        char x156 = x151->L_LINESTATUS;
        struct Q1GRPRecord* x3437 = (struct Q1GRPRecord*)malloc(1 * sizeof(struct Q1GRPRecord));
        memset(x3437, 0, 1 * sizeof(struct Q1GRPRecord));
        x3437->L_RETURNFLAG = x155; x3437->L_LINESTATUS = x156;
        void* x4545 = g_hash_table_lookup(x11964, x3437);
        boolean_t x4140 = x4545==(NULL);
        /* VAR */ struct AGGRecord_Q1GRPRecord* ite9916 = 0;
        if(x4140) {
          double* x9917 = (double*)malloc(9 * sizeof(double));
          memset(x9917, 0, 9 * sizeof(double));
          struct AGGRecord_Q1GRPRecord* x9918 = (struct AGGRecord_Q1GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q1GRPRecord));
          memset(x9918, 0, 1 * sizeof(struct AGGRecord_Q1GRPRecord));
          x9918->key = x3437; x9918->aggs = x9917;
          g_hash_table_insert(x11964, x3437, x9918);
          ite9916 = x9918;
        } else {
          
          ite9916 = x4545;
        };
        struct AGGRecord_Q1GRPRecord* x4150 = ite9916;
        double* x162 = x4150->aggs;
        double x176 = x162[0];
        double x177 = x151->L_DISCOUNT;
        double x178 = x177+(x176);
        *x162 = x178;
        double x186 = x162[1];
        double x187 = x151->L_QUANTITY;
        double x188 = x187+(x186);
        *(x162 + 1) = x188;
        double x196 = x162[2];
        double x197 = x151->L_EXTENDEDPRICE;
        double x198 = x197+(x196);
        *(x162 + 2) = x198;
        double x206 = x162[3];
        double x207 = 1.0-(x177);
        double x208 = x197*(x207);
        double x209 = x208+(x206);
        *(x162 + 3) = x209;
        double x217 = x162[4];
        double x218 = x151->L_TAX;
        double x219 = 1.0+(x218);
        double x220 = x208*(x219);
        double x221 = x220+(x217);
        *(x162 + 4) = x221;
        double x229 = x162[5];
        double x231 = x229+(1.0);
        *(x162 + 5) = x231;
      };
      numeric_int_t x1209 = x11974;
      numeric_int_t x239 = x1209+(1);
      x11974 = x239;
    };
    GList* x12086 = g_hash_table_get_keys(x11964);
    /* VAR */ GList* x12087 = x12086;
    numeric_int_t x12088 = g_hash_table_size(x11964);
    numeric_int_t x8681 = 0;
    for(; x8681 < x12088 ; x8681 += 1) {
      
      GList* x8682 = x12087;
      void* x8683 = g_list_nth_data(x8682, 0);
      GList* x8684 = g_list_next(x8682);
      x12087 = x8684;
      void* x8686 = g_hash_table_lookup(x11964, x8683);
      struct AGGRecord_Q1GRPRecord* x8688 = (struct AGGRecord_Q1GRPRecord*){x8686};
      double* x8689 = x8688->aggs;
      double x8690 = x8689[1];
      double x8691 = x8689[5];
      double x8692 = x8690/(x8691);
      *(x8689 + 6) = x8692;
      double x8694 = x8689[2];
      double x8695 = x8689[5];
      double x8696 = x8694/(x8695);
      *(x8689 + 7) = x8696;
      double x8698 = x8689[0];
      double x8699 = x8689[5];
      double x8700 = x8698/(x8699);
      *(x8689 + 8) = x8700;
      g_tree_insert(x12010, x8688, x8688);
    };
    while(1) {
      
      boolean_t x1237 = x12011;
      boolean_t x269 = !(x1237);
      /* VAR */ boolean_t ite10728 = 0;
      if(x269) {
        numeric_int_t x12139 = g_tree_nnodes(x12010);
        boolean_t x12140 = x12139!=(0);
        ite10728 = x12140;
      } else {
        
        ite10728 = 0;
      };
      boolean_t x10025 = ite10728;
      if (!(x10025)) break; 
      
      void* x4234 = NULL;
      void** x4242 = &(x4234);
      g_tree_foreach(x12010, x4241, x4242);
      struct AGGRecord_Q1GRPRecord* x4244 = (struct AGGRecord_Q1GRPRecord*){x4234};
      numeric_int_t x4245 = g_tree_remove(x12010, x4244);
      if(0) {
        x12011 = 1;
      } else {
        
        struct Q1GRPRecord* x282 = x4244->key;
        char x283 = x282->L_RETURNFLAG;
        char x284 = x282->L_LINESTATUS;
        double* x285 = x4244->aggs;
        double x286 = x285[1];
        double x287 = x285[2];
        double x288 = x285[3];
        double x289 = x285[4];
        double x290 = x285[6];
        double x291 = x285[7];
        double x292 = x285[8];
        double x293 = x285[5];
        printf("%c|%c|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.0f\n", x283, x284, x286, x287, x288, x289, x290, x291, x292, x293);
        numeric_int_t x1263 = x12012;
        numeric_int_t x296 = x1263+(1);
        x12012 = x296;
      };
    };
    numeric_int_t x12175 = x12012;
    printf("(%d rows)\n", x12175);
    struct timeval* x12177 = &x11971;
    gettimeofday(x12177, NULL);
    struct timeval* x12179 = &x11967;
    struct timeval* x12180 = &x11971;
    struct timeval* x12181 = &x11969;
    long x12182 = timeval_subtract(x12179, x12180, x12181);
    printf("Generated code run in %ld milliseconds.\n", x12182);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x11942(struct Q1GRPRecord* x4066) {
  char x6481 = x4066->L_RETURNFLAG;
  numeric_int_t x6892 = (numeric_int_t){x6481};
  char x6483 = x4066->L_LINESTATUS;
  numeric_int_t x6894 = (numeric_int_t){x6483};
  numeric_int_t x6485 = x6892+(x6894);
  return x6485; 
}

boolean_t x11949(struct Q1GRPRecord* x4071, struct Q1GRPRecord* x4072) {
  char x6489 = x4071->L_RETURNFLAG;
  char x6490 = x4072->L_RETURNFLAG;
  boolean_t x6491 = x6489==(x6490);
  char x6492 = x4071->L_LINESTATUS;
  char x6493 = x4072->L_LINESTATUS;
  boolean_t x6494 = x6492==(x6493);
  /* VAR */ boolean_t ite10547 = 0;
  if(x6491) {
    ite10547 = x6494;
  } else {
    
    ite10547 = 0;
  };
  boolean_t x9851 = ite10547;
  return x9851; 
}

numeric_int_t x11992(struct AGGRecord_Q1GRPRecord* x111, struct AGGRecord_Q1GRPRecord* x112) {
  struct Q1GRPRecord* x113 = x111->key;
  char x114 = x113->L_RETURNFLAG;
  struct Q1GRPRecord* x115 = x112->key;
  char x116 = x115->L_RETURNFLAG;
  numeric_int_t x117 = x114-(x116);
  /* VAR */ numeric_int_t res118 = x117;
  numeric_int_t x119 = res118;
  boolean_t x120 = x119==(0);
  if(x120) {
    char x121 = x113->L_LINESTATUS;
    char x122 = x115->L_LINESTATUS;
    numeric_int_t x123 = x121-(x122);
    res118 = x123;
  };
  numeric_int_t x126 = res118;
  return x126; 
}

numeric_int_t x4241(void* x4235, void* x4236, void* x4237) {
  struct AGGRecord_Q1GRPRecord** x4238 = (struct AGGRecord_Q1GRPRecord**){x4237};
  struct AGGRecord_Q1GRPRecord* x4239 = (struct AGGRecord_Q1GRPRecord*){x4236};
  pointer_assign(x4238, x4239);
  return 1; 
}
