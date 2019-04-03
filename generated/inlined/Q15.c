#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct AGGRecord_String;
struct LINEITEMRecord;
struct AGGRecord_Int;
struct SUPPLIERRecord;
struct AGGRecord_String {
  char* key;
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


numeric_int_t x16821(void* x5303);

numeric_int_t x16824(void* x5306, void* x5307);

numeric_int_t x16836(numeric_int_t x6316);

boolean_t x16838(numeric_int_t x6321, numeric_int_t x6322);

int main(int argc, char** argv) {
  FILE* x3137 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x3138 = 0;
  numeric_int_t x3139 = x3138;
  numeric_int_t* x3140 = &x3139;
  numeric_int_t x3141 = fscanf(x3137, "%d", x3140);
  pclose(x3137);
  struct LINEITEMRecord* x4055 = (struct LINEITEMRecord*)malloc(x3139 * sizeof(struct LINEITEMRecord));
  memset(x4055, 0, x3139 * sizeof(struct LINEITEMRecord));
  numeric_int_t x3145 = O_RDONLY;
  numeric_int_t x3146 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x3145);
  struct stat x3147 = (struct stat){0};
  /* VAR */ struct stat x3148 = x3147;
  struct stat x3149 = x3148;
  struct stat* x3150 = &x3149;
  numeric_int_t x3151 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x3150);
  size_t x3152 = x3150->st_size;
  numeric_int_t x3153 = PROT_READ;
  numeric_int_t x3154 = MAP_PRIVATE;
  char* x3155 = mmap(NULL, x3152, x3153, x3154, x3146, 0);
  /* VAR */ char* x3156 = x3155;
  char* x3 = x3156;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x3139);
    /* VAR */ boolean_t ite14373 = 0;
    if(x6) {
      char x16222 = *x3;
      boolean_t x16223 = x16222!=('\0');
      ite14373 = x16223;
    } else {
      
      ite14373 = 0;
    };
    boolean_t x13584 = ite14373;
    if (!(x13584)) break; 
    
    /* VAR */ numeric_int_t x3164 = 0;
    numeric_int_t x3165 = x3164;
    numeric_int_t* x3166 = &x3165;
    char* x3167 = strntoi_unchecked(x3, x3166);
    x3 = x3167;
    /* VAR */ numeric_int_t x3169 = 0;
    numeric_int_t x3170 = x3169;
    numeric_int_t* x3171 = &x3170;
    char* x3172 = strntoi_unchecked(x3, x3171);
    x3 = x3172;
    /* VAR */ numeric_int_t x3174 = 0;
    numeric_int_t x3175 = x3174;
    numeric_int_t* x3176 = &x3175;
    char* x3177 = strntoi_unchecked(x3, x3176);
    x3 = x3177;
    /* VAR */ numeric_int_t x3179 = 0;
    numeric_int_t x3180 = x3179;
    numeric_int_t* x3181 = &x3180;
    char* x3182 = strntoi_unchecked(x3, x3181);
    x3 = x3182;
    /* VAR */ double x3184 = 0.0;
    double x3185 = x3184;
    double* x3186 = &x3185;
    char* x3187 = strntod_unchecked(x3, x3186);
    x3 = x3187;
    /* VAR */ double x3189 = 0.0;
    double x3190 = x3189;
    double* x3191 = &x3190;
    char* x3192 = strntod_unchecked(x3, x3191);
    x3 = x3192;
    /* VAR */ double x3194 = 0.0;
    double x3195 = x3194;
    double* x3196 = &x3195;
    char* x3197 = strntod_unchecked(x3, x3196);
    x3 = x3197;
    /* VAR */ double x3199 = 0.0;
    double x3200 = x3199;
    double* x3201 = &x3200;
    char* x3202 = strntod_unchecked(x3, x3201);
    x3 = x3202;
    char x3204 = *x3;
    /* VAR */ char x3205 = x3204;
    x3 += 1;
    x3 += 1;
    char x3208 = x3205;
    char x3209 = *x3;
    /* VAR */ char x3210 = x3209;
    x3 += 1;
    x3 += 1;
    char x3213 = x3210;
    /* VAR */ numeric_int_t x3214 = 0;
    numeric_int_t x3215 = x3214;
    numeric_int_t* x3216 = &x3215;
    char* x3217 = strntoi_unchecked(x3, x3216);
    x3 = x3217;
    /* VAR */ numeric_int_t x3219 = 0;
    numeric_int_t x3220 = x3219;
    numeric_int_t* x3221 = &x3220;
    char* x3222 = strntoi_unchecked(x3, x3221);
    x3 = x3222;
    /* VAR */ numeric_int_t x3224 = 0;
    numeric_int_t x3225 = x3224;
    numeric_int_t* x3226 = &x3225;
    char* x3227 = strntoi_unchecked(x3, x3226);
    x3 = x3227;
    numeric_int_t x3229 = x3215*(10000);
    numeric_int_t x3230 = x3220*(100);
    numeric_int_t x3231 = x3229+(x3230);
    numeric_int_t x3232 = x3231+(x3225);
    /* VAR */ numeric_int_t x3233 = 0;
    numeric_int_t x3234 = x3233;
    numeric_int_t* x3235 = &x3234;
    char* x3236 = strntoi_unchecked(x3, x3235);
    x3 = x3236;
    /* VAR */ numeric_int_t x3238 = 0;
    numeric_int_t x3239 = x3238;
    numeric_int_t* x3240 = &x3239;
    char* x3241 = strntoi_unchecked(x3, x3240);
    x3 = x3241;
    /* VAR */ numeric_int_t x3243 = 0;
    numeric_int_t x3244 = x3243;
    numeric_int_t* x3245 = &x3244;
    char* x3246 = strntoi_unchecked(x3, x3245);
    x3 = x3246;
    numeric_int_t x3248 = x3234*(10000);
    numeric_int_t x3249 = x3239*(100);
    numeric_int_t x3250 = x3248+(x3249);
    numeric_int_t x3251 = x3250+(x3244);
    /* VAR */ numeric_int_t x3252 = 0;
    numeric_int_t x3253 = x3252;
    numeric_int_t* x3254 = &x3253;
    char* x3255 = strntoi_unchecked(x3, x3254);
    x3 = x3255;
    /* VAR */ numeric_int_t x3257 = 0;
    numeric_int_t x3258 = x3257;
    numeric_int_t* x3259 = &x3258;
    char* x3260 = strntoi_unchecked(x3, x3259);
    x3 = x3260;
    /* VAR */ numeric_int_t x3262 = 0;
    numeric_int_t x3263 = x3262;
    numeric_int_t* x3264 = &x3263;
    char* x3265 = strntoi_unchecked(x3, x3264);
    x3 = x3265;
    numeric_int_t x3267 = x3253*(10000);
    numeric_int_t x3268 = x3258*(100);
    numeric_int_t x3269 = x3267+(x3268);
    numeric_int_t x3270 = x3269+(x3263);
    /* VAR */ char* x3271 = x3;
    while(1) {
      
      char x3272 = *x3;
      boolean_t x3273 = x3272!=('|');
      /* VAR */ boolean_t ite14493 = 0;
      if(x3273) {
        char x16341 = *x3;
        boolean_t x16342 = x16341!=('\n');
        ite14493 = x16342;
      } else {
        
        ite14493 = 0;
      };
      boolean_t x13697 = ite14493;
      if (!(x13697)) break; 
      
      x3 += 1;
    };
    char* x3279 = x3271;
    numeric_int_t x3280 = x3 - x3279;
    numeric_int_t x3281 = x3280+(1);
    char* x4194 = (char*)malloc(x3281 * sizeof(char));
    memset(x4194, 0, x3281 * sizeof(char));
    char* x3284 = x3271;
    char* x3285 = strncpy(x4194, x3284, x3280);
    x3 += 1;
    /* VAR */ char* x3287 = x3;
    while(1) {
      
      char x3288 = *x3;
      boolean_t x3289 = x3288!=('|');
      /* VAR */ boolean_t ite14514 = 0;
      if(x3289) {
        char x16361 = *x3;
        boolean_t x16362 = x16361!=('\n');
        ite14514 = x16362;
      } else {
        
        ite14514 = 0;
      };
      boolean_t x13711 = ite14514;
      if (!(x13711)) break; 
      
      x3 += 1;
    };
    char* x3295 = x3287;
    numeric_int_t x3296 = x3 - x3295;
    numeric_int_t x3297 = x3296+(1);
    char* x4210 = (char*)malloc(x3297 * sizeof(char));
    memset(x4210, 0, x3297 * sizeof(char));
    char* x3300 = x3287;
    char* x3301 = strncpy(x4210, x3300, x3296);
    x3 += 1;
    /* VAR */ char* x3303 = x3;
    while(1) {
      
      char x3304 = *x3;
      boolean_t x3305 = x3304!=('|');
      /* VAR */ boolean_t ite14535 = 0;
      if(x3305) {
        char x16381 = *x3;
        boolean_t x16382 = x16381!=('\n');
        ite14535 = x16382;
      } else {
        
        ite14535 = 0;
      };
      boolean_t x13725 = ite14535;
      if (!(x13725)) break; 
      
      x3 += 1;
    };
    char* x3311 = x3303;
    numeric_int_t x3312 = x3 - x3311;
    numeric_int_t x3313 = x3312+(1);
    char* x4226 = (char*)malloc(x3313 * sizeof(char));
    memset(x4226, 0, x3313 * sizeof(char));
    char* x3316 = x3303;
    char* x3317 = strncpy(x4226, x3316, x3312);
    x3 += 1;
    struct LINEITEMRecord* x4696 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4696, 0, 1 * sizeof(struct LINEITEMRecord));
    x4696->L_ORDERKEY = x3165; x4696->L_PARTKEY = x3170; x4696->L_SUPPKEY = x3175; x4696->L_LINENUMBER = x3180; x4696->L_QUANTITY = x3185; x4696->L_EXTENDEDPRICE = x3190; x4696->L_DISCOUNT = x3195; x4696->L_TAX = x3200; x4696->L_RETURNFLAG = x3208; x4696->L_LINESTATUS = x3213; x4696->L_SHIPDATE = x3232; x4696->L_COMMITDATE = x3251; x4696->L_RECEIPTDATE = x3270; x4696->L_SHIPINSTRUCT = x4194; x4696->L_SHIPMODE = x4210; x4696->L_COMMENT = x4226;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x4233 = *x4696;
    *(x4055 + x26) = x4233;
    struct LINEITEMRecord* x4235 = &(x4055[x26]);
    x4696 = x4235;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x3326 = x3156;
  munmap(x3326, x3152);
  FILE* x3327 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x3328 = 0;
  numeric_int_t x3329 = x3328;
  numeric_int_t* x3330 = &x3329;
  numeric_int_t x3331 = fscanf(x3327, "%d", x3330);
  pclose(x3327);
  struct SUPPLIERRecord* x4248 = (struct SUPPLIERRecord*)malloc(x3329 * sizeof(struct SUPPLIERRecord));
  memset(x4248, 0, x3329 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x3335 = O_RDONLY;
  numeric_int_t x3336 = open("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x3335);
  /* VAR */ struct stat x3337 = x3147;
  struct stat x3338 = x3337;
  struct stat* x3339 = &x3338;
  numeric_int_t x3340 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x3339);
  size_t x3341 = x3339->st_size;
  numeric_int_t x3342 = PROT_READ;
  numeric_int_t x3343 = MAP_PRIVATE;
  char* x3344 = mmap(NULL, x3341, x3342, x3343, x3336, 0);
  /* VAR */ char* x3345 = x3344;
  char* x35 = x3345;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x3329);
    /* VAR */ boolean_t ite14588 = 0;
    if(x38) {
      char x16433 = *x35;
      boolean_t x16434 = x16433!=('\0');
      ite14588 = x16434;
    } else {
      
      ite14588 = 0;
    };
    boolean_t x13771 = ite14588;
    if (!(x13771)) break; 
    
    /* VAR */ numeric_int_t x3353 = 0;
    numeric_int_t x3354 = x3353;
    numeric_int_t* x3355 = &x3354;
    char* x3356 = strntoi_unchecked(x35, x3355);
    x35 = x3356;
    /* VAR */ char* x3358 = x35;
    while(1) {
      
      char x3359 = *x35;
      boolean_t x3360 = x3359!=('|');
      /* VAR */ boolean_t ite14606 = 0;
      if(x3360) {
        char x16450 = *x35;
        boolean_t x16451 = x16450!=('\n');
        ite14606 = x16451;
      } else {
        
        ite14606 = 0;
      };
      boolean_t x13782 = ite14606;
      if (!(x13782)) break; 
      
      x35 += 1;
    };
    char* x3366 = x3358;
    numeric_int_t x3367 = x35 - x3366;
    numeric_int_t x3368 = x3367+(1);
    char* x4284 = (char*)malloc(x3368 * sizeof(char));
    memset(x4284, 0, x3368 * sizeof(char));
    char* x3371 = x3358;
    char* x3372 = strncpy(x4284, x3371, x3367);
    x35 += 1;
    /* VAR */ char* x3374 = x35;
    while(1) {
      
      char x3375 = *x35;
      boolean_t x3376 = x3375!=('|');
      /* VAR */ boolean_t ite14627 = 0;
      if(x3376) {
        char x16470 = *x35;
        boolean_t x16471 = x16470!=('\n');
        ite14627 = x16471;
      } else {
        
        ite14627 = 0;
      };
      boolean_t x13796 = ite14627;
      if (!(x13796)) break; 
      
      x35 += 1;
    };
    char* x3382 = x3374;
    numeric_int_t x3383 = x35 - x3382;
    numeric_int_t x3384 = x3383+(1);
    char* x4300 = (char*)malloc(x3384 * sizeof(char));
    memset(x4300, 0, x3384 * sizeof(char));
    char* x3387 = x3374;
    char* x3388 = strncpy(x4300, x3387, x3383);
    x35 += 1;
    /* VAR */ numeric_int_t x3390 = 0;
    numeric_int_t x3391 = x3390;
    numeric_int_t* x3392 = &x3391;
    char* x3393 = strntoi_unchecked(x35, x3392);
    x35 = x3393;
    /* VAR */ char* x3395 = x35;
    while(1) {
      
      char x3396 = *x35;
      boolean_t x3397 = x3396!=('|');
      /* VAR */ boolean_t ite14653 = 0;
      if(x3397) {
        char x16495 = *x35;
        boolean_t x16496 = x16495!=('\n');
        ite14653 = x16496;
      } else {
        
        ite14653 = 0;
      };
      boolean_t x13815 = ite14653;
      if (!(x13815)) break; 
      
      x35 += 1;
    };
    char* x3403 = x3395;
    numeric_int_t x3404 = x35 - x3403;
    numeric_int_t x3405 = x3404+(1);
    char* x4321 = (char*)malloc(x3405 * sizeof(char));
    memset(x4321, 0, x3405 * sizeof(char));
    char* x3408 = x3395;
    char* x3409 = strncpy(x4321, x3408, x3404);
    x35 += 1;
    /* VAR */ double x3411 = 0.0;
    double x3412 = x3411;
    double* x3413 = &x3412;
    char* x3414 = strntod_unchecked(x35, x3413);
    x35 = x3414;
    /* VAR */ char* x3416 = x35;
    while(1) {
      
      char x3417 = *x35;
      boolean_t x3418 = x3417!=('|');
      /* VAR */ boolean_t ite14679 = 0;
      if(x3418) {
        char x16520 = *x35;
        boolean_t x16521 = x16520!=('\n');
        ite14679 = x16521;
      } else {
        
        ite14679 = 0;
      };
      boolean_t x13834 = ite14679;
      if (!(x13834)) break; 
      
      x35 += 1;
    };
    char* x3424 = x3416;
    numeric_int_t x3425 = x35 - x3424;
    numeric_int_t x3426 = x3425+(1);
    char* x4342 = (char*)malloc(x3426 * sizeof(char));
    memset(x4342, 0, x3426 * sizeof(char));
    char* x3429 = x3416;
    char* x3430 = strncpy(x4342, x3429, x3425);
    x35 += 1;
    struct SUPPLIERRecord* x4814 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x4814, 0, 1 * sizeof(struct SUPPLIERRecord));
    x4814->S_SUPPKEY = x3354; x4814->S_NAME = x4284; x4814->S_ADDRESS = x4300; x4814->S_NATIONKEY = x3391; x4814->S_PHONE = x4321; x4814->S_ACCTBAL = x3412; x4814->S_COMMENT = x4342;
    numeric_int_t x49 = x36;
    struct SUPPLIERRecord x4349 = *x4814;
    *(x4248 + x49) = x4349;
    struct SUPPLIERRecord* x4351 = &(x4248[x49]);
    x4814 = x4351;
    numeric_int_t x51 = x36;
    numeric_int_t x52 = x51+(1);
    x36 = x52;
  };
  char* x3439 = x3345;
  munmap(x3439, x3341);
  numeric_int_t x57 = 0;
  for(; x57 < 1 ; x57 += 1) {
    
    void*** x16828 = (void***){x16821};
    numeric_int_t* x16829 = (numeric_int_t*){x16824};
    GHashTable* x16830 = g_hash_table_new(x16828, x16829);
    double* x16831 = (double*)malloc(1 * sizeof(double));
    memset(x16831, 0, 1 * sizeof(double));
    struct AGGRecord_String* x16832 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x16832, 0, 1 * sizeof(struct AGGRecord_String));
    x16832->key = "MAXREVENUE"; x16832->aggs = x16831;
    struct AGGRecord_Int* x16835 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x16835, 0, 48000000 * sizeof(struct AGGRecord_Int));
    GHashTable* x16842 = g_hash_table_new(x16836, x16838);
    struct timeval x16843 = (struct timeval){0};
    /* VAR */ struct timeval x16844 = x16843;
    struct timeval x16845 = x16844;
    /* VAR */ struct timeval x16846 = x16843;
    struct timeval x16847 = x16846;
    /* VAR */ struct timeval x16848 = x16843;
    struct timeval x16849 = x16848;
    struct timeval* x16850 = &x16847;
    gettimeofday(x16850, NULL);
    /* VAR */ numeric_int_t x16852 = 0;
    /* VAR */ numeric_int_t x16853 = 0;
    /* VAR */ struct AGGRecord_String* x16854 = NULL;
    while(1) {
      
      numeric_int_t x16856 = x16852;
      boolean_t x16857 = x16856<(x3139);
      if (!(x16857)) break; 
      
      numeric_int_t x1449 = x16852;
      struct LINEITEMRecord* x103 = &(x4055[x1449]);
      numeric_int_t x105 = x103->L_SHIPDATE;
      boolean_t x106 = x105>=(19930901);
      /* VAR */ boolean_t ite15036 = 0;
      if(x106) {
        boolean_t x16864 = x105<(19931201);
        ite15036 = x16864;
      } else {
        
        ite15036 = 0;
      };
      boolean_t x14146 = ite15036;
      if(x14146) {
        numeric_int_t x109 = x103->L_SUPPKEY;
        void* x6927 = g_hash_table_lookup(x16842, x109);
        boolean_t x6355 = x6927==(NULL);
        /* VAR */ struct AGGRecord_Int* ite14152 = 0;
        if(x6355) {
          double* x14153 = (double*)malloc(1 * sizeof(double));
          memset(x14153, 0, 1 * sizeof(double));
          struct AGGRecord_Int* x14154 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
          memset(x14154, 0, 1 * sizeof(struct AGGRecord_Int));
          x14154->key = x109; x14154->aggs = x14153;
          g_hash_table_insert(x16842, x109, x14154);
          ite14152 = x14154;
        } else {
          
          ite14152 = x6927;
        };
        struct AGGRecord_Int* x6365 = ite14152;
        double* x114 = x6365->aggs;
        double x128 = x114[0];
        double x129 = x103->L_EXTENDEDPRICE;
        double x130 = x103->L_DISCOUNT;
        double x131 = 1.0-(x130);
        double x132 = x129*(x131);
        double x133 = x128+(x132);
        *x114 = x133;
      };
      numeric_int_t x1486 = x16852;
      numeric_int_t x141 = x1486+(1);
      x16852 = x141;
    };
    GList* x16906 = g_hash_table_get_keys(x16842);
    /* VAR */ GList* x16907 = x16906;
    numeric_int_t x16908 = g_hash_table_size(x16842);
    numeric_int_t x12585 = 0;
    for(; x12585 < x16908 ; x12585 += 1) {
      
      GList* x12586 = x16907;
      void* x12587 = g_list_nth_data(x12586, 0);
      GList* x12588 = g_list_next(x12586);
      x16907 = x12588;
      void* x12590 = g_hash_table_lookup(x16842, x12587);
      struct AGGRecord_Int* x12592 = (struct AGGRecord_Int*){x12590};
      numeric_int_t x12593 = x16853;
      struct AGGRecord_Int x12594 = *x12592;
      *(x16835 + x12593) = x12594;
      struct AGGRecord_Int* x12596 = &(x16835[x12593]);
      x12592 = x12596;
      numeric_int_t x12598 = x16853;
      numeric_int_t x12599 = x12598+(1);
      x16853 = x12599;
    };
    /* VAR */ numeric_int_t x16942 = 0;
    while(1) {
      
      numeric_int_t x16944 = x16942;
      numeric_int_t x16945 = x16853;
      boolean_t x16946 = x16944<(x16945);
      if (!(x16946)) break; 
      
      numeric_int_t x164 = x16942;
      struct AGGRecord_Int* x165 = &(x16835[x164]);
      numeric_int_t x166 = x16942;
      numeric_int_t x167 = x166+(1);
      x16942 = x167;
      double* x174 = x16832->aggs;
      double x188 = x174[0];
      double* x190 = x165->aggs;
      double x191 = x190[0];
      boolean_t x192 = x188<(x191);
      /* VAR */ double ite14234 = 0;
      if(x192) {
        double x14235 = x190[0];
        ite14234 = x14235;
      } else {
        
        ite14234 = x188;
      };
      double x194 = ite14234;
      *x174 = x194;
    };
    x16854 = x16832;
    struct AGGRecord_String* x16970 = x16854;
    /* VAR */ numeric_int_t x16971 = 0;
    /* VAR */ boolean_t x16972 = 0;
    /* VAR */ numeric_int_t x16973 = 0;
    while(1) {
      
      numeric_int_t x16975 = x16971;
      boolean_t x16976 = x16975<(x3329);
      if (!(x16976)) break; 
      
      numeric_int_t x1598 = x16971;
      struct SUPPLIERRecord* x248 = &(x4248[x1598]);
      numeric_int_t x250 = x248->S_SUPPKEY;
      void* x5409 = (void*){x250};
      void* x5410 = (void*){x248};
      void* x5411 = g_hash_table_lookup(x16830, x5409);
      GList** x5412 = (GList**){x5411};
      GList** x5413 = NULL;
      boolean_t x5414 = x5412==(x5413);
      /* VAR */ GList** ite14262 = 0;
      if(x5414) {
        GList** x14263 = malloc(8);
        GList* x14264 = NULL;
        pointer_assign(x14263, x14264);
        ite14262 = x14263;
      } else {
        
        ite14262 = x5412;
      };
      GList** x5418 = ite14262;
      GList* x5419 = *(x5418);
      GList* x5420 = g_list_prepend(x5419, x5410);
      pointer_assign(x5418, x5420);
      void* x5422 = (void*){x5418};
      g_hash_table_insert(x16830, x5409, x5422);
      numeric_int_t x1603 = x16971;
      numeric_int_t x254 = x1603+(1);
      x16971 = x254;
    };
    /* VAR */ numeric_int_t x17003 = 0;
    while(1) {
      
      numeric_int_t x17005 = x17003;
      numeric_int_t x17006 = x16853;
      boolean_t x17007 = x17005<(x17006);
      if (!(x17007)) break; 
      
      numeric_int_t x325 = x17003;
      struct AGGRecord_Int* x326 = &(x16835[x325]);
      numeric_int_t x327 = x17003;
      numeric_int_t x328 = x327+(1);
      x17003 = x328;
      numeric_int_t x331 = x326->key;
      void* x5440 = (void*){x331};
      void* x5441 = g_hash_table_lookup(x16830, x5440);
      GList** x5442 = (GList**){x5441};
      boolean_t x9316 = x5442!=(NULL);
      if(x9316) {
        GList* x6515 = *(x5442);
        /* VAR */ GList* x6516 = x6515;
        while(1) {
          
          GList* x6517 = x6516;
          GList* x6518 = NULL;
          boolean_t x6519 = x6517!=(x6518);
          if (!(x6519)) break; 
          
          GList* x6520 = x6516;
          void* x6521 = g_list_nth_data(x6520, 0);
          struct SUPPLIERRecord* x6522 = (struct SUPPLIERRecord*){x6521};
          GList* x6523 = x6516;
          GList* x6524 = g_list_next(x6523);
          x6516 = x6524;
          numeric_int_t x6526 = x6522->S_SUPPKEY;
          boolean_t x6527 = x6526==(x331);
          /* VAR */ boolean_t ite15240 = 0;
          if(x6527) {
            double* x17062 = x326->aggs;
            double x17063 = x17062[0];
            double* x17064 = x16970->aggs;
            double x17065 = x17064[0];
            boolean_t x17066 = x17063==(x17065);
            ite15240 = x17066;
          } else {
            
            ite15240 = 0;
          };
          boolean_t x14326 = ite15240;
          if(x14326) {
            char* x836 = x6522->S_NAME;
            char* x837 = x6522->S_ADDRESS;
            char* x839 = x6522->S_PHONE;
            double* x842 = x326->aggs;
            if(0) {
              x16972 = 1;
            } else {
              
              double x393 = x842[0];
              printf("%d|%s|%s|%s|%.4f\n", x6526, x836, x837, x839, x393);
              numeric_int_t x1748 = x16973;
              numeric_int_t x396 = x1748+(1);
              x16973 = x396;
            };
          };
        };
      };
    };
    numeric_int_t x17083 = x16973;
    printf("(%d rows)\n", x17083);
    struct timeval* x17085 = &x16849;
    gettimeofday(x17085, NULL);
    struct timeval* x17087 = &x16845;
    struct timeval* x17088 = &x16849;
    struct timeval* x17089 = &x16847;
    long x17090 = timeval_subtract(x17087, x17088, x17089);
    printf("Generated code run in %ld milliseconds.\n", x17090);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x16821(void* x5303) {
  numeric_int_t x5304 = g_direct_hash(x5303);
  return x5304; 
}

numeric_int_t x16824(void* x5306, void* x5307) {
  numeric_int_t x5308 = g_direct_equal(x5306, x5307);
  return x5308; 
}

numeric_int_t x16836(numeric_int_t x6316) {
  return x6316; 
}

boolean_t x16838(numeric_int_t x6321, numeric_int_t x6322) {
  boolean_t x6323 = x6321==(x6322);
  return x6323; 
}
