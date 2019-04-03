#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 
#include "storage.h"

struct REGIONRecord;
struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord;
struct NATIONRecord;
struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
struct PARTRecord;
struct SUPPLIERRecord;
struct PARTSUPPRecord;

struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord {
  numeric_int_t key;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* wnd;
};

struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
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
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
};

numeric_int_t x43148(void* x9902);

numeric_int_t x43151(void* x9905, void* x9906);

numeric_int_t x43158(void* x9912);

numeric_int_t x43161(void* x9915, void* x9916);

numeric_int_t x43168(void* x9922);

numeric_int_t x43171(void* x9925, void* x9926);

numeric_int_t x43178(void* x9932);

numeric_int_t x43181(void* x9935, void* x9936);

numeric_int_t x43188(void* x9942);

numeric_int_t x43191(void* x9945, void* x9946);

numeric_int_t x43252(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x193, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x194);

numeric_int_t x12885(void* x12879, void* x12880, void* x12881);

int main(int argc, char** argv) {
  numeric_int_t* pa_count; 
  struct PARTRecord** pa_array;
  loadPart(pa_count, pa_array);
  numeric_int_t x6500 = *pa_count;
  struct PARTRecord* x7932 = *pa_array;
  numeric_int_t* ps_count; 
  struct PARTSUPPRecord** ps_array;
  loadPartsupp(ps_count, ps_array);
  numeric_int_t x6646 = *ps_count;
  struct PARTSUPPRecord* x8081 = *ps_array;
  numeric_int_t* na_count; 
  struct NATIONRecord** na_array;
  loadNation(na_count, na_array);
  numeric_int_t x6716 = *na_count;
  struct NATIONRecord* x8154 = *na_array;
  numeric_int_t* re_count;
  struct REGIONRecord** re_array;
  loadRegion(re_count, re_array);
  numeric_int_t x6792 = *re_count;
  struct REGIONRecord* x8233 = *re_array;
  numeric_int_t* su_count;
  struct SUPPLIERRecord** su_array;
  loadSupplier(su_count, su_array);
  numeric_int_t x6863 = *su_count;
  struct SUPPLIERRecord* x8307 = *su_array;
  numeric_int_t x110 = 0;
  for(; x110 < 1 ; x110 += 1) {
    
    void*** x43155 = (void***){x43148};
    numeric_int_t* x43156 = (numeric_int_t*){x43151};
    GHashTable* x43157 = g_hash_table_new(x43155, x43156);
    void*** x43165 = (void***){x43158};
    numeric_int_t* x43166 = (numeric_int_t*){x43161};
    GHashTable* x43167 = g_hash_table_new(x43165, x43166);
    void*** x43175 = (void***){x43168};
    numeric_int_t* x43176 = (numeric_int_t*){x43171};
    GHashTable* x43177 = g_hash_table_new(x43175, x43176);
    void*** x43185 = (void***){x43178};
    numeric_int_t* x43186 = (numeric_int_t*){x43181};
    GHashTable* x43187 = g_hash_table_new(x43185, x43186);
    void*** x43195 = (void***){x43188};
    numeric_int_t* x43196 = (numeric_int_t*){x43191};
    GHashTable* x43197 = g_hash_table_new(x43195, x43196);
    struct timeval x43198 = (struct timeval){0};
    /* VAR */ struct timeval x43199 = x43198;
    struct timeval x43200 = x43199;
    /* VAR */ struct timeval x43201 = x43198;
    struct timeval x43202 = x43201;
    /* VAR */ struct timeval x43203 = x43198;
    struct timeval x43204 = x43203;
    struct timeval* x43205 = &x43202;
    gettimeofday(x43205, NULL);
    /* VAR */ numeric_int_t x43207 = 0;
    /* VAR */ numeric_int_t x43208 = 0;
    /* VAR */ numeric_int_t x43209 = 0;
    /* VAR */ numeric_int_t x43210 = 0;
    /* VAR */ numeric_int_t x43211 = 0;
    numeric_int_t* x43292 = &(x43252);
    GTree* x43293 = g_tree_new(x43292);
    /* VAR */ boolean_t x43294 = 0;
    /* VAR */ numeric_int_t x43295 = 0;
    while(1) {
      
      numeric_int_t x43297 = x43211;
      boolean_t x43298 = x43297<(x6792);
      if (!(x43298)) break; 
      
      numeric_int_t x4009 = x43211;
      struct REGIONRecord* x249 = &(x8233[x4009]);
      char* x251 = x249->R_NAME;
      boolean_t x23857 = strcmp(x251, "AFRICA");
      boolean_t x23858 = x23857==(0);
      if(x23858) {
        numeric_int_t x253 = x249->R_REGIONKEY;
        void* x10010 = (void*){x253};
        void* x10011 = (void*){x249};
        void* x10012 = g_hash_table_lookup(x43167, x10010);
        GList** x10013 = (GList**){x10012};
        GList** x10014 = NULL;
        boolean_t x10015 = x10013==(x10014);
        /* VAR */ GList** ite33295 = 0;
        if(x10015) {
          GList** x33296 = malloc(8);
          GList* x33297 = NULL;
          pointer_assign(x33296, x33297);
          ite33295 = x33296;
        } else {
          
          ite33295 = x10013;
        };
        GList** x10019 = ite33295;
        GList* x10020 = *(x10019);
        GList* x10021 = g_list_prepend(x10020, x10011);
        pointer_assign(x10019, x10021);
        void* x10023 = (void*){x10019};
        g_hash_table_insert(x43167, x10010, x10023);
      };
      numeric_int_t x4017 = x43211;
      numeric_int_t x258 = x4017+(1);
      x43211 = x258;
    };
    while(1) {
      
      numeric_int_t x43330 = x43210;
      boolean_t x43331 = x43330<(x6500);
      if (!(x43331)) break; 
      
      numeric_int_t x4026 = x43210;
      struct PARTRecord* x267 = &(x7932[x4026]);
      numeric_int_t x269 = x267->P_SIZE;
      boolean_t x270 = x269==(43);
      /* VAR */ boolean_t ite36651 = 0;
      if(x270) {
        char* x43338 = x267->P_TYPE;
        numeric_int_t x43339 = strlen(x43338);
        numeric_int_t x43340 = strlen("TIN");
        numeric_int_t x43341 = x43339-(x43340);
        char* x43342 = pointer_add(x43338, x43341);
        numeric_int_t x43343 = strncmp(x43342, "TIN", x43341);
        boolean_t x43344 = x43343==(0);
        ite36651 = x43344;
      } else {
        
        ite36651 = 0;
      };
      boolean_t x33318 = ite36651;
      if(x33318) {
        numeric_int_t x274 = x267->P_PARTKEY;
        void* x10041 = (void*){x274};
        void* x10042 = (void*){x267};
        void* x10043 = g_hash_table_lookup(x43177, x10041);
        GList** x10044 = (GList**){x10043};
        GList** x10045 = NULL;
        boolean_t x10046 = x10044==(x10045);
        /* VAR */ GList** ite33328 = 0;
        if(x10046) {
          GList** x33329 = malloc(8);
          GList* x33330 = NULL;
          pointer_assign(x33329, x33330);
          ite33328 = x33329;
        } else {
          
          ite33328 = x10044;
        };
        GList** x10050 = ite33328;
        GList* x10051 = *(x10050);
        GList* x10052 = g_list_prepend(x10051, x10042);
        pointer_assign(x10050, x10052);
        void* x10054 = (void*){x10050};
        g_hash_table_insert(x43177, x10041, x10054);
      };
      numeric_int_t x4037 = x43210;
      numeric_int_t x279 = x4037+(1);
      x43210 = x279;
    };
    while(1) {
      
      numeric_int_t x43375 = x43209;
      boolean_t x43376 = x43375<(x6716);
      if (!(x43376)) break; 
      
      numeric_int_t x4046 = x43209;
      struct NATIONRecord* x288 = &(x8154[x4046]);
      numeric_int_t x290 = x288->N_NATIONKEY;
      void* x10066 = (void*){x290};
      void* x10067 = (void*){x288};
      void* x10068 = g_hash_table_lookup(x43187, x10066);
      GList** x10069 = (GList**){x10068};
      GList** x10070 = NULL;
      boolean_t x10071 = x10069==(x10070);
      /* VAR */ GList** ite33356 = 0;
      if(x10071) {
        GList** x33357 = malloc(8);
        GList* x33358 = NULL;
        pointer_assign(x33357, x33358);
        ite33356 = x33357;
      } else {
        
        ite33356 = x10069;
      };
      GList** x10075 = ite33356;
      GList* x10076 = *(x10075);
      GList* x10077 = g_list_prepend(x10076, x10067);
      pointer_assign(x10075, x10077);
      void* x10079 = (void*){x10075};
      g_hash_table_insert(x43187, x10066, x10079);
      numeric_int_t x4051 = x43209;
      numeric_int_t x294 = x4051+(1);
      x43209 = x294;
    };
    while(1) {
      
      numeric_int_t x43404 = x43208;
      boolean_t x43405 = x43404<(x6863);
      if (!(x43405)) break; 
      
      numeric_int_t x4060 = x43208;
      struct SUPPLIERRecord* x303 = &(x8307[x4060]);
      numeric_int_t x305 = x303->S_SUPPKEY;
      void* x10091 = (void*){x305};
      void* x10092 = (void*){x303};
      void* x10093 = g_hash_table_lookup(x43197, x10091);
      GList** x10094 = (GList**){x10093};
      GList** x10095 = NULL;
      boolean_t x10096 = x10094==(x10095);
      /* VAR */ GList** ite33384 = 0;
      if(x10096) {
        GList** x33385 = malloc(8);
        GList* x33386 = NULL;
        pointer_assign(x33385, x33386);
        ite33384 = x33385;
      } else {
        
        ite33384 = x10094;
      };
      GList** x10100 = ite33384;
      GList* x10101 = *(x10100);
      GList* x10102 = g_list_prepend(x10101, x10092);
      pointer_assign(x10100, x10102);
      void* x10104 = (void*){x10100};
      g_hash_table_insert(x43197, x10091, x10104);
      numeric_int_t x4065 = x43208;
      numeric_int_t x309 = x4065+(1);
      x43208 = x309;
    };
    while(1) {
      
      numeric_int_t x43433 = x43207;
      boolean_t x43434 = x43433<(x6646);
      if (!(x43434)) break; 
      
      numeric_int_t x4074 = x43207;
      struct PARTSUPPRecord* x318 = &(x8081[x4074]);
      numeric_int_t x320 = x318->PS_SUPPKEY;
      void* x10116 = (void*){x320};
      void* x10117 = g_hash_table_lookup(x43197, x10116);
      GList** x10118 = (GList**){x10117};
      boolean_t x18875 = x10118!=(NULL);
      if(x18875) {
        GList* x12353 = *(x10118);
        /* VAR */ GList* x12354 = x12353;
        while(1) {
          
          GList* x12355 = x12354;
          GList* x12356 = NULL;
          boolean_t x12357 = x12355!=(x12356);
          if (!(x12357)) break; 
          
          GList* x12358 = x12354;
          void* x12359 = g_list_nth_data(x12358, 0);
          struct SUPPLIERRecord* x12360 = (struct SUPPLIERRecord*){x12359};
          GList* x12361 = x12354;
          GList* x12362 = g_list_next(x12361);
          x12354 = x12362;
          numeric_int_t x12364 = x12360->S_SUPPKEY;
          boolean_t x12365 = x12364==(x320);
          if(x12365) {
            char* x1662 = x12360->S_NAME;
            char* x1663 = x12360->S_ADDRESS;
            numeric_int_t x1664 = x12360->S_NATIONKEY;
            char* x1665 = x12360->S_PHONE;
            double x1666 = x12360->S_ACCTBAL;
            char* x1667 = x12360->S_COMMENT;
            numeric_int_t x1668 = x318->PS_PARTKEY;
            numeric_int_t x1669 = x318->PS_AVAILQTY;
            double x1670 = x318->PS_SUPPLYCOST;
            char* x1671 = x318->PS_COMMENT;
            void* x10138 = (void*){x1664};
            void* x10139 = g_hash_table_lookup(x43187, x10138);
            GList** x10140 = (GList**){x10139};
            boolean_t x19301 = x10140!=(NULL);
            if(x19301) {
              GList* x12154 = *(x10140);
              /* VAR */ GList* x12155 = x12154;
              while(1) {
                
                GList* x12156 = x12155;
                GList* x12157 = NULL;
                boolean_t x12158 = x12156!=(x12157);
                if (!(x12158)) break; 
                
                GList* x12159 = x12155;
                void* x12160 = g_list_nth_data(x12159, 0);
                struct NATIONRecord* x12161 = (struct NATIONRecord*){x12160};
                GList* x12162 = x12155;
                GList* x12163 = g_list_next(x12162);
                x12155 = x12163;
                numeric_int_t x12165 = x12161->N_NATIONKEY;
                boolean_t x12166 = x12165==(x1664);
                if(x12166) {
                  char* x1935 = x12161->N_NAME;
                  numeric_int_t x1936 = x12161->N_REGIONKEY;
                  char* x1937 = x12161->N_COMMENT;
                  void* x10153 = (void*){x1668};
                  void* x10154 = g_hash_table_lookup(x43177, x10153);
                  GList** x10155 = (GList**){x10154};
                  boolean_t x19507 = x10155!=(NULL);
                  if(x19507) {
                    GList* x12062 = *(x10155);
                    /* VAR */ GList* x12063 = x12062;
                    while(1) {
                      
                      GList* x12064 = x12063;
                      GList* x12065 = NULL;
                      boolean_t x12066 = x12064!=(x12065);
                      if (!(x12066)) break; 
                      
                      GList* x12067 = x12063;
                      void* x12068 = g_list_nth_data(x12067, 0);
                      struct PARTRecord* x12069 = (struct PARTRecord*){x12068};
                      GList* x12070 = x12063;
                      GList* x12071 = g_list_next(x12070);
                      x12063 = x12071;
                      numeric_int_t x12073 = x12069->P_PARTKEY;
                      boolean_t x12074 = x12073==(x1668);
                      if(x12074) {
                        char* x2073 = x12069->P_NAME;
                        char* x2074 = x12069->P_MFGR;
                        char* x2075 = x12069->P_BRAND;
                        char* x2076 = x12069->P_TYPE;
                        numeric_int_t x2077 = x12069->P_SIZE;
                        char* x2078 = x12069->P_CONTAINER;
                        double x2079 = x12069->P_RETAILPRICE;
                        char* x2080 = x12069->P_COMMENT;
                        void* x10173 = (void*){x1936};
                        void* x10174 = g_hash_table_lookup(x43167, x10173);
                        GList** x10175 = (GList**){x10174};
                        boolean_t x19615 = x10175!=(NULL);
                        if(x19615) {
                          GList* x12026 = *(x10175);
                          /* VAR */ GList* x12027 = x12026;
                          while(1) {
                            
                            GList* x12028 = x12027;
                            GList* x12029 = NULL;
                            boolean_t x12030 = x12028!=(x12029);
                            if (!(x12030)) break; 
                            
                            GList* x12031 = x12027;
                            void* x12032 = g_list_nth_data(x12031, 0);
                            struct REGIONRecord* x12033 = (struct REGIONRecord*){x12032};
                            GList* x12034 = x12027;
                            GList* x12035 = g_list_next(x12034);
                            x12027 = x12035;
                            numeric_int_t x12037 = x12033->R_REGIONKEY;
                            boolean_t x12038 = x12037==(x1936);
                            if(x12038) {
                              char* x2146 = x12033->R_NAME;
                              char* x2147 = x12033->R_COMMENT;
                              struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9331 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
                              memset(x9331, 0, 1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
                              x9331->R_REGIONKEY = x12037; x9331->R_NAME = x2146; x9331->R_COMMENT = x2147; x9331->P_PARTKEY = x12073; x9331->P_NAME = x2073; x9331->P_MFGR = x2074; x9331->P_BRAND = x2075; x9331->P_TYPE = x2076; x9331->P_SIZE = x2077; x9331->P_CONTAINER = x2078; x9331->P_RETAILPRICE = x2079; x9331->P_COMMENT = x2080; x9331->N_NATIONKEY = x12165; x9331->N_NAME = x1935; x9331->N_REGIONKEY = x1936; x9331->N_COMMENT = x1937; x9331->S_SUPPKEY = x12364; x9331->S_NAME = x1662; x9331->S_ADDRESS = x1663; x9331->S_NATIONKEY = x1664; x9331->S_PHONE = x1665; x9331->S_ACCTBAL = x1666; x9331->S_COMMENT = x1667; x9331->PS_PARTKEY = x1668; x9331->PS_SUPPKEY = x320; x9331->PS_AVAILQTY = x1669; x9331->PS_SUPPLYCOST = x1670; x9331->PS_COMMENT = x1671;
                              numeric_int_t x679 = x9331->P_PARTKEY;
                              void* x10191 = (void*){x679};
                              void* x10192 = (void*){x9331};
                              void* x10193 = g_hash_table_lookup(x43157, x10191);
                              GList** x10194 = (GList**){x10193};
                              GList** x10195 = NULL;
                              boolean_t x10196 = x10194==(x10195);
                              /* VAR */ GList** ite34279 = 0;
                              if(x10196) {
                                GList** x34280 = malloc(8);
                                GList* x34281 = NULL;
                                pointer_assign(x34280, x34281);
                                ite34279 = x34280;
                              } else {
                                
                                ite34279 = x10194;
                              };
                              GList** x10200 = ite34279;
                              GList* x10201 = *(x10200);
                              GList* x10202 = g_list_prepend(x10201, x10192);
                              pointer_assign(x10200, x10202);
                              void* x10204 = (void*){x10200};
                              g_hash_table_insert(x43157, x10191, x10204);
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
      numeric_int_t x4538 = x43207;
      numeric_int_t x699 = x4538+(1);
      x43207 = x699;
    };
    GList* x44370 = g_hash_table_get_keys(x43157);
    /* VAR */ GList* x44371 = x44370;
    numeric_int_t x44372 = g_hash_table_size(x43157);
    numeric_int_t x28250 = 0;
    for(; x28250 < x44372 ; x28250 += 1) {
      
      GList* x28251 = x44371;
      void* x28252 = g_list_nth_data(x28251, 0);
      GList* x28253 = x44371;
      GList* x28254 = g_list_next(x28253);
      x44371 = x28254;
      void* x28256 = g_hash_table_lookup(x43157, x28252);
      GList** x28257 = (GList**){x28256};
      GList* x28261 = *(x28257);
      /* VAR */ GList* x28262 = x28261;
      GList* x28263 = x28262;
      void* x28264 = g_list_nth_data(x28263, 0);
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28265 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x28264};
      /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28266 = x28265;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28267 = x28266;
      double x28268 = x28267->PS_SUPPLYCOST;
      /* VAR */ double x28269 = x28268;
      while(1) {
        
        GList* x12846 = x28262;
        GList* x12847 = NULL;
        boolean_t x12848 = x12846!=(x12847);
        if (!(x12848)) break; 
        
        GList* x12849 = x28262;
        void* x12850 = g_list_nth_data(x12849, 0);
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x12851 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x12850};
        GList* x12852 = x28262;
        GList* x12853 = g_list_next(x12852);
        x28262 = x12853;
        double x12855 = x12851->PS_SUPPLYCOST;
        double x12856 = x28269;
        boolean_t x12857 = x12855<(x12856);
        if(x12857) {
          x28269 = x12855;
          x28266 = x12851;
        };
      };
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28287 = x28266;
      GList* x28288 = *(x28257);
      void* x28289 = g_list_nth_data(x28288, 0);
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28290 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x28289};
      numeric_int_t x28291 = x28290->P_PARTKEY;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x28292 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x28292, 0, 1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      x28292->key = x28291; x28292->wnd = x28287;
      g_tree_insert(x43293, x28292, x28292);
    };
    while(1) {
      
      boolean_t x4555 = x43294;
      boolean_t x718 = !(x4555);
      /* VAR */ boolean_t ite37788 = 0;
      if(x718) {
        numeric_int_t x44471 = g_tree_nnodes(x43293);
        boolean_t x44472 = x44471!=(0);
        ite37788 = x44472;
      } else {
        
        ite37788 = 0;
      };
      boolean_t x34437 = ite37788;
      if (!(x34437)) break; 
      
      void* x12878 = NULL;
      void** x12886 = &(x12878);
      g_tree_foreach(x43293, x12885, x12886);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x12888 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x12878};
      numeric_int_t x12889 = g_tree_remove(x43293, x12888);
      numeric_int_t x4563 = x43295;
      boolean_t x728 = x4563>=(100);
      if(x728) {
        x43294 = 1;
      } else {
        
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x730 = x12888->wnd;
        double x731 = x730->S_ACCTBAL;
        char* x732 = x730->S_NAME;
        char* x734 = x730->N_NAME;
        numeric_int_t x736 = x730->P_PARTKEY;
        char* x737 = x730->P_MFGR;
        char* x739 = x730->S_ADDRESS;
        char* x741 = x730->S_PHONE;
        char* x743 = x730->S_COMMENT;
        printf("%.2f|%s|%s|%d|%s|%s|%s|%s\n", x731, x732, x734, x736, x737, x739, x741, x743);
        numeric_int_t x4583 = x43295;
        numeric_int_t x747 = x4583+(1);
        x43295 = x747;
      };
    };
    numeric_int_t x44506 = x43295;
    printf("(%d rows)\n", x44506);
    struct timeval* x44508 = &x43204;
    gettimeofday(x44508, NULL);
    struct timeval* x44510 = &x43200;
    struct timeval* x44511 = &x43204;
    struct timeval* x44512 = &x43202;
    long x44513 = timeval_subtract(x44510, x44511, x44512);
    printf("Generated code run in %ld milliseconds.\n", x44513);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x43148(void* x9902) {
  numeric_int_t x9903 = g_direct_hash(x9902);
  return x9903; 
}

numeric_int_t x43151(void* x9905, void* x9906) {
  numeric_int_t x9907 = g_direct_equal(x9905, x9906);
  return x9907; 
}

numeric_int_t x43158(void* x9912) {
  numeric_int_t x9913 = g_direct_hash(x9912);
  return x9913; 
}

numeric_int_t x43161(void* x9915, void* x9916) {
  numeric_int_t x9917 = g_direct_equal(x9915, x9916);
  return x9917; 
}

numeric_int_t x43168(void* x9922) {
  numeric_int_t x9923 = g_direct_hash(x9922);
  return x9923; 
}

numeric_int_t x43171(void* x9925, void* x9926) {
  numeric_int_t x9927 = g_direct_equal(x9925, x9926);
  return x9927; 
}

numeric_int_t x43178(void* x9932) {
  numeric_int_t x9933 = g_direct_hash(x9932);
  return x9933; 
}

numeric_int_t x43181(void* x9935, void* x9936) {
  numeric_int_t x9937 = g_direct_equal(x9935, x9936);
  return x9937; 
}

numeric_int_t x43188(void* x9942) {
  numeric_int_t x9943 = g_direct_hash(x9942);
  return x9943; 
}

numeric_int_t x43191(void* x9945, void* x9946) {
  numeric_int_t x9947 = g_direct_equal(x9945, x9946);
  return x9947; 
}

numeric_int_t x43252(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x193, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x194) {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x195 = x193->wnd;
  double x196 = x195->S_ACCTBAL;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x197 = x194->wnd;
  double x198 = x197->S_ACCTBAL;
  boolean_t x199 = x196<(x198);
  /* VAR */ numeric_int_t ite33244 = 0;
  if(x199) {
    ite33244 = 1;
  } else {
    
    boolean_t x33246 = x196>(x198);
    /* VAR */ numeric_int_t ite33248 = 0;
    if(x33246) {
      ite33248 = -1;
    } else {
      
      char* x33250 = x195->N_NAME;
      char* x33251 = x197->N_NAME;
      numeric_int_t x33252 = strcmp(x33250, x33251);
      /* VAR */ numeric_int_t x33253 = x33252;
      numeric_int_t x33254 = x33253;
      boolean_t x33255 = x33254==(0);
      if(x33255) {
        char* x207 = x195->S_NAME;
        char* x208 = x197->S_NAME;
        numeric_int_t x23836 = strcmp(x207, x208);
        x33253 = x23836;
        numeric_int_t x211 = x33253;
        boolean_t x212 = x211==(0);
        if(x212) {
          numeric_int_t x213 = x195->P_PARTKEY;
          numeric_int_t x214 = x197->P_PARTKEY;
          numeric_int_t x215 = x213-(x214);
          x33253 = x215;
        };
      };
      numeric_int_t x33268 = x33253;
      ite33248 = x33268;
    };
    numeric_int_t x33247 = ite33248;
    ite33244 = x33247;
  };
  numeric_int_t x221 = ite33244;
  return x221; 
}

numeric_int_t x12885(void* x12879, void* x12880, void* x12881) {
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord** x12882 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord**){x12881};
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x12883 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x12880};
  pointer_assign(x12882, x12883);
  return 1; 
}
