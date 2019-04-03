#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h" 


struct AGGRecord_String;
struct LINEITEMRecord;
struct LINEITEMRecord_PARTRecord;
struct PARTRecord;
struct AGGRecord_String {
  char* key;
  double* aggs;
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

numeric_int_t x26053(void* x7297);

numeric_int_t x26056(void* x7300, void* x7301);

int main(int argc, char** argv) {
  numeric_int_t* li_count; 
  struct LINEITEMRecord** li_array;
  loadLineitem(li_count, li_array);
  numeric_int_t x4607 = *li_count;
  struct LINEITEMRecord* x5771 = *li_array;
  numeric_int_t* pa_count; 
  struct PARTRecord** pa_array;
  loadPart(pa_count, pa_array);
  numeric_int_t x4797 = *pa_count;
  struct PARTRecord* x5964 = *pa_array;
  numeric_int_t x59 = 0;
  for(; x59 < 1 ; x59 += 1) {
    
    double* x26049 = (double*)malloc(1 * sizeof(double));
    memset(x26049, 0, 1 * sizeof(double));
    struct AGGRecord_String* x26050 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x26050, 0, 1 * sizeof(struct AGGRecord_String));
    x26050->key = "Total"; x26050->aggs = x26049;
    void*** x26060 = (void***){x26053};
    numeric_int_t* x26061 = (numeric_int_t*){x26056};
    GHashTable* x26062 = g_hash_table_new(x26060, x26061);
    struct timeval x26063 = (struct timeval){0};
    /* VAR */ struct timeval x26064 = x26063;
    struct timeval x26065 = x26064;
    /* VAR */ struct timeval x26066 = x26063;
    struct timeval x26067 = x26066;
    /* VAR */ struct timeval x26068 = x26063;
    struct timeval x26069 = x26068;
    struct timeval* x26070 = &x26067;
    gettimeofday(x26070, NULL);
    /* VAR */ numeric_int_t x26072 = 0;
    /* VAR */ numeric_int_t x26073 = 0;
    /* VAR */ boolean_t x26074 = 0;
    /* VAR */ numeric_int_t x26075 = 0;
    while(1) {
      
      numeric_int_t x26077 = x26073;
      boolean_t x26078 = x26077<(x4607);
      if (!(x26078)) break; 
      
      numeric_int_t x2197 = x26073;
      struct LINEITEMRecord* x262 = &(x5771[x2197]);
      double x264 = x262->L_QUANTITY;
      boolean_t x266 = x264<=(36.0);
      /* VAR */ boolean_t ite18423 = 0;
      if(x266) {
        boolean_t x26085 = x264>=(26.0);
        ite18423 = x26085;
      } else {
        
        ite18423 = 0;
      };
      boolean_t x17339 = ite18423;
      /* VAR */ boolean_t ite18431 = 0;
      if(x17339) {
        ite18431 = 1;
      } else {
        
        boolean_t x26093 = x264<=(25.0);
        /* VAR */ boolean_t x26094 = 0;
        if(x26093) {
          boolean_t x26096 = x264>=(15.0);
          x26094 = x26096;
        } else {
          
          x26094 = 0;
        };
        boolean_t x26100 = x26094;
        ite18431 = x26100;
      };
      boolean_t x17341 = ite18431;
      /* VAR */ boolean_t ite18441 = 0;
      if(x17341) {
        ite18441 = 1;
      } else {
        
        boolean_t x26107 = x264<=(14.0);
        /* VAR */ boolean_t x26108 = 0;
        if(x26107) {
          boolean_t x26110 = x264>=(4.0);
          x26108 = x26110;
        } else {
          
          x26108 = 0;
        };
        boolean_t x26114 = x26108;
        ite18441 = x26114;
      };
      boolean_t x17343 = ite18441;
      /* VAR */ boolean_t ite18451 = 0;
      if(x17343) {
        char* x26120 = x262->L_SHIPINSTRUCT;
        boolean_t x26121 = strcmp(x26120, "DELIVER IN PERSON");
        boolean_t x26122 = x26121==(0);
        ite18451 = x26122;
      } else {
        
        ite18451 = 0;
      };
      boolean_t x17345 = ite18451;
      /* VAR */ boolean_t ite18461 = 0;
      if(x17345) {
        char* x26129 = x262->L_SHIPMODE;
        boolean_t x26130 = strcmp(x26129, "AIR");
        boolean_t x26131 = x26130==(0);
        /* VAR */ boolean_t x26132 = 0;
        if(x26131) {
          x26132 = 1;
        } else {
          
          boolean_t x26135 = strcmp(x26129, "AIRREG");
          boolean_t x26136 = x26135==(0);
          x26132 = x26136;
        };
        boolean_t x26139 = x26132;
        ite18461 = x26139;
      } else {
        
        ite18461 = 0;
      };
      boolean_t x17347 = ite18461;
      if(x17347) {
        numeric_int_t x290 = x262->L_PARTKEY;
        void* x7348 = (void*){x290};
        void* x7349 = (void*){x262};
        void* x7350 = g_hash_table_lookup(x26062, x7348);
        GList** x7351 = (GList**){x7350};
        GList** x7352 = NULL;
        boolean_t x7353 = x7351==(x7352);
        /* VAR */ GList** ite17357 = 0;
        if(x7353) {
          GList** x17358 = malloc(8);
          GList* x17359 = NULL;
          pointer_assign(x17358, x17359);
          ite17357 = x17358;
        } else {
          
          ite17357 = x7351;
        };
        GList** x7357 = ite17357;
        GList* x7358 = *(x7357);
        GList* x7359 = g_list_prepend(x7358, x7349);
        pointer_assign(x7357, x7359);
        void* x7361 = (void*){x7357};
        g_hash_table_insert(x26062, x7348, x7361);
      };
      numeric_int_t x2229 = x26073;
      numeric_int_t x295 = x2229+(1);
      x26073 = x295;
    };
    while(1) {
      
      numeric_int_t x26170 = x26072;
      boolean_t x26171 = x26170<(x4797);
      if (!(x26171)) break; 
      
      numeric_int_t x2238 = x26072;
      struct PARTRecord* x304 = &(x5964[x2238]);
      numeric_int_t x306 = x304->P_SIZE;
      boolean_t x307 = x306>=(1);
      /* VAR */ boolean_t ite18506 = 0;
      if(x307) {
        boolean_t x26178 = x306<=(5);
        /* VAR */ boolean_t x26179 = 0;
        if(x26178) {
          char* x26181 = x304->P_BRAND;
          boolean_t x26182 = strcmp(x26181, "Brand#31");
          boolean_t x26183 = x26182==(0);
          x26179 = x26183;
        } else {
          
          x26179 = 0;
        };
        boolean_t x26187 = x26179;
        /* VAR */ boolean_t x26188 = 0;
        if(x26187) {
          char* x26190 = x304->P_CONTAINER;
          boolean_t x26191 = strcmp(x26190, "SM BOX");
          boolean_t x26192 = x26191==(0);
          /* VAR */ boolean_t x26193 = 0;
          if(x26192) {
            x26193 = 1;
          } else {
            
            boolean_t x26196 = strcmp(x26190, "SM CASE");
            boolean_t x26197 = x26196==(0);
            x26193 = x26197;
          };
          boolean_t x26200 = x26193;
          /* VAR */ boolean_t x26201 = 0;
          if(x26200) {
            x26201 = 1;
          } else {
            
            boolean_t x26204 = strcmp(x26190, "SM PACK");
            boolean_t x26205 = x26204==(0);
            x26201 = x26205;
          };
          boolean_t x26208 = x26201;
          /* VAR */ boolean_t x26209 = 0;
          if(x26208) {
            x26209 = 1;
          } else {
            
            boolean_t x26212 = strcmp(x26190, "SM PKG");
            boolean_t x26213 = x26212==(0);
            x26209 = x26213;
          };
          boolean_t x26216 = x26209;
          x26188 = x26216;
        } else {
          
          x26188 = 0;
        };
        boolean_t x26220 = x26188;
        ite18506 = x26220;
      } else {
        
        ite18506 = 0;
      };
      boolean_t x17380 = ite18506;
      /* VAR */ boolean_t ite18518 = 0;
      if(x17380) {
        ite18518 = 1;
      } else {
        
        boolean_t x26228 = x306<=(10);
        /* VAR */ boolean_t x26229 = 0;
        if(x26228) {
          char* x26231 = x304->P_BRAND;
          boolean_t x26232 = strcmp(x26231, "Brand#43");
          boolean_t x26233 = x26232==(0);
          x26229 = x26233;
        } else {
          
          x26229 = 0;
        };
        boolean_t x26237 = x26229;
        /* VAR */ boolean_t x26238 = 0;
        if(x26237) {
          char* x26240 = x304->P_CONTAINER;
          boolean_t x26241 = strcmp(x26240, "MED BAG");
          boolean_t x26242 = x26241==(0);
          /* VAR */ boolean_t x26243 = 0;
          if(x26242) {
            x26243 = 1;
          } else {
            
            boolean_t x26246 = strcmp(x26240, "MED BOX");
            boolean_t x26247 = x26246==(0);
            x26243 = x26247;
          };
          boolean_t x26250 = x26243;
          /* VAR */ boolean_t x26251 = 0;
          if(x26250) {
            x26251 = 1;
          } else {
            
            boolean_t x26254 = strcmp(x26240, "MED PACK");
            boolean_t x26255 = x26254==(0);
            x26251 = x26255;
          };
          boolean_t x26258 = x26251;
          /* VAR */ boolean_t x26259 = 0;
          if(x26258) {
            x26259 = 1;
          } else {
            
            boolean_t x26262 = strcmp(x26240, "MED PKG");
            boolean_t x26263 = x26262==(0);
            x26259 = x26263;
          };
          boolean_t x26266 = x26259;
          x26238 = x26266;
        } else {
          
          x26238 = 0;
        };
        boolean_t x26270 = x26238;
        ite18518 = x26270;
      };
      boolean_t x17382 = ite18518;
      /* VAR */ boolean_t ite18530 = 0;
      if(x17382) {
        ite18530 = 1;
      } else {
        
        boolean_t x26277 = x306<=(15);
        /* VAR */ boolean_t x26278 = 0;
        if(x26277) {
          char* x26280 = x304->P_BRAND;
          boolean_t x26281 = strcmp(x26280, "Brand#43");
          boolean_t x26282 = x26281==(0);
          x26278 = x26282;
        } else {
          
          x26278 = 0;
        };
        boolean_t x26286 = x26278;
        /* VAR */ boolean_t x26287 = 0;
        if(x26286) {
          char* x26289 = x304->P_CONTAINER;
          boolean_t x26290 = strcmp(x26289, "LG BOX");
          boolean_t x26291 = x26290==(0);
          /* VAR */ boolean_t x26292 = 0;
          if(x26291) {
            x26292 = 1;
          } else {
            
            boolean_t x26295 = strcmp(x26289, "LG CASE");
            boolean_t x26296 = x26295==(0);
            x26292 = x26296;
          };
          boolean_t x26299 = x26292;
          /* VAR */ boolean_t x26300 = 0;
          if(x26299) {
            x26300 = 1;
          } else {
            
            boolean_t x26303 = strcmp(x26289, "LG PACK");
            boolean_t x26304 = x26303==(0);
            x26300 = x26304;
          };
          boolean_t x26307 = x26300;
          /* VAR */ boolean_t x26308 = 0;
          if(x26307) {
            x26308 = 1;
          } else {
            
            boolean_t x26311 = strcmp(x26289, "LG PKG");
            boolean_t x26312 = x26311==(0);
            x26308 = x26312;
          };
          boolean_t x26315 = x26308;
          x26287 = x26315;
        } else {
          
          x26287 = 0;
        };
        boolean_t x26319 = x26287;
        ite18530 = x26319;
      };
      boolean_t x17384 = ite18530;
      if(x17384) {
        numeric_int_t x350 = x304->P_PARTKEY;
        void* x7418 = (void*){x350};
        void* x7419 = g_hash_table_lookup(x26062, x7418);
        GList** x7420 = (GList**){x7419};
        boolean_t x11569 = x7420!=(NULL);
        if(x11569) {
          GList* x8764 = *(x7420);
          /* VAR */ GList* x8765 = x8764;
          while(1) {
            
            GList* x8766 = x8765;
            GList* x8767 = NULL;
            boolean_t x8768 = x8766!=(x8767);
            if (!(x8768)) break; 
            
            GList* x8769 = x8765;
            void* x8770 = g_list_nth_data(x8769, 0);
            struct LINEITEMRecord* x8771 = (struct LINEITEMRecord*){x8770};
            GList* x8772 = x8765;
            GList* x8773 = g_list_next(x8772);
            x8765 = x8773;
            numeric_int_t x8775 = x8771->L_PARTKEY;
            boolean_t x8776 = x350==(x8775);
            if(x8776) {
              numeric_int_t x1108 = x8771->L_ORDERKEY;
              numeric_int_t x1109 = x8771->L_SUPPKEY;
              numeric_int_t x1110 = x8771->L_LINENUMBER;
              double x1111 = x8771->L_QUANTITY;
              double x1112 = x8771->L_EXTENDEDPRICE;
              double x1113 = x8771->L_DISCOUNT;
              double x1114 = x8771->L_TAX;
              char x1115 = x8771->L_RETURNFLAG;
              char x1116 = x8771->L_LINESTATUS;
              numeric_int_t x1117 = x8771->L_SHIPDATE;
              numeric_int_t x1118 = x8771->L_COMMITDATE;
              numeric_int_t x1119 = x8771->L_RECEIPTDATE;
              char* x1120 = x8771->L_SHIPINSTRUCT;
              char* x1121 = x8771->L_SHIPMODE;
              char* x1122 = x8771->L_COMMENT;
              char* x1123 = x304->P_NAME;
              char* x1124 = x304->P_MFGR;
              char* x1125 = x304->P_BRAND;
              char* x1126 = x304->P_TYPE;
              char* x1127 = x304->P_CONTAINER;
              double x1128 = x304->P_RETAILPRICE;
              char* x1129 = x304->P_COMMENT;
              struct LINEITEMRecord_PARTRecord* x6832 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
              memset(x6832, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
              x6832->L_ORDERKEY = x1108; x6832->L_PARTKEY = x8775; x6832->L_SUPPKEY = x1109; x6832->L_LINENUMBER = x1110; x6832->L_QUANTITY = x1111; x6832->L_EXTENDEDPRICE = x1112; x6832->L_DISCOUNT = x1113; x6832->L_TAX = x1114; x6832->L_RETURNFLAG = x1115; x6832->L_LINESTATUS = x1116; x6832->L_SHIPDATE = x1117; x6832->L_COMMITDATE = x1118; x6832->L_RECEIPTDATE = x1119; x6832->L_SHIPINSTRUCT = x1120; x6832->L_SHIPMODE = x1121; x6832->L_COMMENT = x1122; x6832->P_PARTKEY = x350; x6832->P_NAME = x1123; x6832->P_MFGR = x1124; x6832->P_BRAND = x1125; x6832->P_TYPE = x1126; x6832->P_SIZE = x306; x6832->P_CONTAINER = x1127; x6832->P_RETAILPRICE = x1128; x6832->P_COMMENT = x1129;
              char* x464 = x6832->P_BRAND;
              boolean_t x13907 = strcmp(x464, "Brand#31");
              boolean_t x13908 = x13907==(0);
              /* VAR */ boolean_t ite18711 = 0;
              if(x13908) {
                char* x26604 = x6832->P_CONTAINER;
                boolean_t x26605 = strcmp(x26604, "SM BOX");
                boolean_t x26606 = x26605==(0);
                /* VAR */ boolean_t x26607 = 0;
                if(x26606) {
                  x26607 = 1;
                } else {
                  
                  boolean_t x26610 = strcmp(x26604, "SM CASE");
                  boolean_t x26611 = x26610==(0);
                  x26607 = x26611;
                };
                boolean_t x26614 = x26607;
                /* VAR */ boolean_t x26615 = 0;
                if(x26614) {
                  x26615 = 1;
                } else {
                  
                  boolean_t x26618 = strcmp(x26604, "SM PACK");
                  boolean_t x26619 = x26618==(0);
                  x26615 = x26619;
                };
                boolean_t x26622 = x26615;
                /* VAR */ boolean_t x26623 = 0;
                if(x26622) {
                  x26623 = 1;
                } else {
                  
                  boolean_t x26626 = strcmp(x26604, "SM PKG");
                  boolean_t x26627 = x26626==(0);
                  x26623 = x26627;
                };
                boolean_t x26630 = x26623;
                ite18711 = x26630;
              } else {
                
                ite18711 = 0;
              };
              boolean_t x17490 = ite18711;
              /* VAR */ boolean_t ite18727 = 0;
              if(x17490) {
                double x26637 = x6832->L_QUANTITY;
                boolean_t x26638 = x26637>=(4.0);
                ite18727 = x26638;
              } else {
                
                ite18727 = 0;
              };
              boolean_t x17492 = ite18727;
              /* VAR */ boolean_t ite18736 = 0;
              if(x17492) {
                double x26645 = x6832->L_QUANTITY;
                boolean_t x26646 = x26645<=(14.0);
                ite18736 = x26646;
              } else {
                
                ite18736 = 0;
              };
              boolean_t x17494 = ite18736;
              /* VAR */ boolean_t ite18745 = 0;
              if(x17494) {
                numeric_int_t x26653 = x6832->P_SIZE;
                boolean_t x26654 = x26653<=(5);
                ite18745 = x26654;
              } else {
                
                ite18745 = 0;
              };
              boolean_t x17496 = ite18745;
              /* VAR */ boolean_t ite18754 = 0;
              if(x17496) {
                ite18754 = 1;
              } else {
                
                boolean_t x26662 = strcmp(x464, "Brand#43");
                boolean_t x26663 = x26662==(0);
                /* VAR */ boolean_t x26664 = 0;
                if(x26663) {
                  char* x26666 = x6832->P_CONTAINER;
                  boolean_t x26667 = strcmp(x26666, "MED BAG");
                  boolean_t x26668 = x26667==(0);
                  /* VAR */ boolean_t x26669 = 0;
                  if(x26668) {
                    x26669 = 1;
                  } else {
                    
                    boolean_t x26672 = strcmp(x26666, "MED BOX");
                    boolean_t x26673 = x26672==(0);
                    x26669 = x26673;
                  };
                  boolean_t x26676 = x26669;
                  /* VAR */ boolean_t x26677 = 0;
                  if(x26676) {
                    x26677 = 1;
                  } else {
                    
                    boolean_t x26680 = strcmp(x26666, "MED PACK");
                    boolean_t x26681 = x26680==(0);
                    x26677 = x26681;
                  };
                  boolean_t x26684 = x26677;
                  /* VAR */ boolean_t x26685 = 0;
                  if(x26684) {
                    x26685 = 1;
                  } else {
                    
                    boolean_t x26688 = strcmp(x26666, "MED PKG");
                    boolean_t x26689 = x26688==(0);
                    x26685 = x26689;
                  };
                  boolean_t x26692 = x26685;
                  x26664 = x26692;
                } else {
                  
                  x26664 = 0;
                };
                boolean_t x26696 = x26664;
                /* VAR */ boolean_t x26697 = 0;
                if(x26696) {
                  double x26699 = x6832->L_QUANTITY;
                  boolean_t x26700 = x26699>=(15.0);
                  x26697 = x26700;
                } else {
                  
                  x26697 = 0;
                };
                boolean_t x26704 = x26697;
                /* VAR */ boolean_t x26705 = 0;
                if(x26704) {
                  double x26707 = x6832->L_QUANTITY;
                  boolean_t x26708 = x26707<=(25.0);
                  x26705 = x26708;
                } else {
                  
                  x26705 = 0;
                };
                boolean_t x26712 = x26705;
                /* VAR */ boolean_t x26713 = 0;
                if(x26712) {
                  numeric_int_t x26715 = x6832->P_SIZE;
                  boolean_t x26716 = x26715<=(10);
                  x26713 = x26716;
                } else {
                  
                  x26713 = 0;
                };
                boolean_t x26720 = x26713;
                ite18754 = x26720;
              };
              boolean_t x17498 = ite18754;
              /* VAR */ boolean_t ite18771 = 0;
              if(x17498) {
                ite18771 = 1;
              } else {
                
                boolean_t x26727 = strcmp(x464, "Brand#43");
                boolean_t x26728 = x26727==(0);
                /* VAR */ boolean_t x26729 = 0;
                if(x26728) {
                  char* x26731 = x6832->P_CONTAINER;
                  boolean_t x26732 = strcmp(x26731, "LG BOX");
                  boolean_t x26733 = x26732==(0);
                  /* VAR */ boolean_t x26734 = 0;
                  if(x26733) {
                    x26734 = 1;
                  } else {
                    
                    boolean_t x26737 = strcmp(x26731, "LG CASE");
                    boolean_t x26738 = x26737==(0);
                    x26734 = x26738;
                  };
                  boolean_t x26741 = x26734;
                  /* VAR */ boolean_t x26742 = 0;
                  if(x26741) {
                    x26742 = 1;
                  } else {
                    
                    boolean_t x26745 = strcmp(x26731, "LG PACK");
                    boolean_t x26746 = x26745==(0);
                    x26742 = x26746;
                  };
                  boolean_t x26749 = x26742;
                  /* VAR */ boolean_t x26750 = 0;
                  if(x26749) {
                    x26750 = 1;
                  } else {
                    
                    boolean_t x26753 = strcmp(x26731, "LG PKG");
                    boolean_t x26754 = x26753==(0);
                    x26750 = x26754;
                  };
                  boolean_t x26757 = x26750;
                  x26729 = x26757;
                } else {
                  
                  x26729 = 0;
                };
                boolean_t x26761 = x26729;
                /* VAR */ boolean_t x26762 = 0;
                if(x26761) {
                  double x26764 = x6832->L_QUANTITY;
                  boolean_t x26765 = x26764>=(26.0);
                  x26762 = x26765;
                } else {
                  
                  x26762 = 0;
                };
                boolean_t x26769 = x26762;
                /* VAR */ boolean_t x26770 = 0;
                if(x26769) {
                  double x26772 = x6832->L_QUANTITY;
                  boolean_t x26773 = x26772<=(36.0);
                  x26770 = x26773;
                } else {
                  
                  x26770 = 0;
                };
                boolean_t x26777 = x26770;
                /* VAR */ boolean_t x26778 = 0;
                if(x26777) {
                  numeric_int_t x26780 = x6832->P_SIZE;
                  boolean_t x26781 = x26780<=(15);
                  x26778 = x26781;
                } else {
                  
                  x26778 = 0;
                };
                boolean_t x26785 = x26778;
                ite18771 = x26785;
              };
              boolean_t x17500 = ite18771;
              if(x17500) {
                double* x534 = x26050->aggs;
                double x548 = x534[0];
                double x549 = x6832->L_EXTENDEDPRICE;
                double x550 = x6832->L_DISCOUNT;
                double x551 = 1.0-(x550);
                double x552 = x549*(x551);
                double x553 = x548+(x552);
                *x534 = x553;
              };
            };
          };
        };
      };
      numeric_int_t x2541 = x26072;
      numeric_int_t x566 = x2541+(1);
      x26072 = x566;
    };
    if(0) {
      x26074 = 1;
    } else {
      
      double* x578 = x26050->aggs;
      double x579 = x578[0];
      printf("%.4f\n", x579);
      numeric_int_t x2557 = x26075;
      numeric_int_t x582 = x2557+(1);
      x26075 = x582;
    };
    numeric_int_t x26820 = x26075;
    printf("(%d rows)\n", x26820);
    struct timeval* x26822 = &x26069;
    gettimeofday(x26822, NULL);
    struct timeval* x26824 = &x26065;
    struct timeval* x26825 = &x26069;
    struct timeval* x26826 = &x26067;
    long x26827 = timeval_subtract(x26824, x26825, x26826);
    printf("Generated code run in %ld milliseconds.\n", x26827);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x26053(void* x7297) {
  numeric_int_t x7298 = g_direct_hash(x7297);
  return x7298; 
}

numeric_int_t x26056(void* x7300, void* x7301) {
  numeric_int_t x7302 = g_direct_equal(x7300, x7301);
  return x7302; 
}
