#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h" 


struct LINEITEMRecord;
struct AGGRecord_OptimalString;
struct ORDERSRecord;

struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
};


numeric_int_t x14740(char* x4977);

boolean_t x14758(char* x4982, char* x4983);

numeric_int_t x14764(void* x4050);

numeric_int_t x14767(void* x4053, void* x4054);

numeric_int_t x14791(struct AGGRecord_OptimalString* x100, struct AGGRecord_OptimalString* x101);

numeric_int_t x5134(void* x5128, void* x5129, void* x5130);

int main(int argc, char** argv) {
  numeric_int_t* li_count; 
  struct LINEITEMRecord** li_array;
  loadLineitem(li_count, li_array);
  numeric_int_t x2000 = *li_count;
  struct LINEITEMRecord* x2856 = *li_array;
  numeric_int_t* or_count; 
  struct ORDERSRecord** or_array;
  loadOrders(or_count, or_array);
  numeric_int_t x2190 = *or_count;
  struct ORDERSRecord* x3049 = *or_array;
  numeric_int_t x59 = 0;
  for(; x59 < 1 ; x59 += 1) {
    
    GHashTable* x14763 = g_hash_table_new(x14740, x14758);
    void*** x14771 = (void***){x14764};
    numeric_int_t* x14772 = (numeric_int_t*){x14767};
    GHashTable* x14773 = g_hash_table_new(x14771, x14772);
    struct timeval x14774 = (struct timeval){0};
    /* VAR */ struct timeval x14775 = x14774;
    struct timeval x14776 = x14775;
    /* VAR */ struct timeval x14777 = x14774;
    struct timeval x14778 = x14777;
    /* VAR */ struct timeval x14779 = x14774;
    struct timeval x14780 = x14779;
    struct timeval* x14781 = &x14778;
    gettimeofday(x14781, NULL);
    /* VAR */ numeric_int_t x14783 = 0;
    /* VAR */ numeric_int_t x14784 = 0;
    numeric_int_t* x14797 = &(x14791);
    GTree* x14798 = g_tree_new(x14797);
    /* VAR */ boolean_t x14799 = 0;
    /* VAR */ numeric_int_t x14800 = 0;
    while(1) {
      
      numeric_int_t x14802 = x14784;
      boolean_t x14803 = x14802<(x2000);
      if (!(x14803)) break; 
      
      numeric_int_t x981 = x14784;
      struct LINEITEMRecord* x121 = &(x2856[x981]);
      numeric_int_t x123 = x121->L_COMMITDATE;
      numeric_int_t x124 = x121->L_RECEIPTDATE;
      boolean_t x125 = x123<(x124);
      if(x125) {
        numeric_int_t x126 = x121->L_ORDERKEY;
        void* x4092 = (void*){x126};
        void* x4093 = (void*){x121};
        void* x4094 = g_hash_table_lookup(x14773, x4092);
        GList** x4095 = (GList**){x4094};
        GList** x4096 = NULL;
        boolean_t x4097 = x4095==(x4096);
        /* VAR */ GList** ite12339 = 0;
        if(x4097) {
          GList** x12340 = malloc(8);
          GList* x12341 = NULL;
          pointer_assign(x12340, x12341);
          ite12339 = x12340;
        } else {
          
          ite12339 = x4095;
        };
        GList** x4101 = ite12339;
        GList* x4102 = *(x4101);
        GList* x4103 = g_list_prepend(x4102, x4093);
        pointer_assign(x4101, x4103);
        void* x4105 = (void*){x4101};
        g_hash_table_insert(x14773, x4092, x4105);
      };
      numeric_int_t x990 = x14784;
      numeric_int_t x131 = x990+(1);
      x14784 = x131;
    };
    while(1) {
      
      numeric_int_t x14835 = x14783;
      boolean_t x14836 = x14835<(x2190);
      if (!(x14836)) break; 
      
      numeric_int_t x999 = x14783;
      struct ORDERSRecord* x140 = &(x3049[x999]);
      numeric_int_t x142 = x140->O_ORDERDATE;
      boolean_t x143 = x142<(19931101);
      /* VAR */ boolean_t ite13185 = 0;
      if(x143) {
        boolean_t x14843 = x142>=(19930801);
        ite13185 = x14843;
      } else {
        
        ite13185 = 0;
      };
      boolean_t x12362 = ite13185;
      if(x12362) {
        numeric_int_t x146 = x140->O_ORDERKEY;
        void* x4122 = (void*){x146};
        void* x4123 = g_hash_table_lookup(x14773, x4122);
        GList** x4124 = (GList**){x4123};
        boolean_t x7680 = x4124!=(NULL);
        if(x7680) {
          /* VAR */ struct LINEITEMRecord* x5588 = NULL;
          GList* x5589 = *(x4124);
          /* VAR */ GList* x5590 = x5589;
          while(1) {
            
            GList* x5591 = x5590;
            GList* x5592 = NULL;
            boolean_t x5593 = x5591!=(x5592);
            if (!(x5593)) break; 
            
            GList* x5594 = x5590;
            void* x5595 = g_list_nth_data(x5594, 0);
            struct LINEITEMRecord* x5596 = (struct LINEITEMRecord*){x5595};
            GList* x5597 = x5590;
            GList* x5598 = g_list_next(x5597);
            x5590 = x5598;
            numeric_int_t x5600 = x5596->L_ORDERKEY;
            boolean_t x5601 = x146==(x5600);
            if(x5601) {
              x5588 = x5596;
              break;
            };
          };
          struct LINEITEMRecord* x5606 = x5588;
          boolean_t x7705 = x5606!=(NULL);
          if(x7705) {
            char* x191 = x140->O_ORDERPRIORITY;
            void* x5611 = g_hash_table_lookup(x14763, x191);
            boolean_t x5082 = x5611==(NULL);
            /* VAR */ struct AGGRecord_OptimalString* ite12399 = 0;
            if(x5082) {
              double* x12400 = (double*)malloc(1 * sizeof(double));
              memset(x12400, 0, 1 * sizeof(double));
              struct AGGRecord_OptimalString* x12401 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
              memset(x12401, 0, 1 * sizeof(struct AGGRecord_OptimalString));
              x12401->key = x191; x12401->aggs = x12400;
              g_hash_table_insert(x14763, x191, x12401);
              ite12399 = x12401;
            } else {
              
              ite12399 = x5611;
            };
            struct AGGRecord_OptimalString* x5092 = ite12399;
            double* x196 = x5092->aggs;
            double x210 = x196[0];
            double x212 = x210+(1.0);
            *x196 = x212;
          };
        };
      };
      numeric_int_t x1078 = x14783;
      numeric_int_t x222 = x1078+(1);
      x14783 = x222;
    };
    GList* x14905 = g_hash_table_get_keys(x14763);
    /* VAR */ GList* x14906 = x14905;
    numeric_int_t x14907 = g_hash_table_size(x14763);
    numeric_int_t x10929 = 0;
    for(; x10929 < x14907 ; x10929 += 1) {
      
      GList* x10930 = x14906;
      void* x10931 = g_list_nth_data(x10930, 0);
      GList* x10932 = g_list_next(x10930);
      x14906 = x10932;
      void* x10934 = g_hash_table_lookup(x14763, x10931);
      struct AGGRecord_OptimalString* x10936 = (struct AGGRecord_OptimalString*){x10934};
      g_tree_insert(x14798, x10936, x10936);
    };
    while(1) {
      
      boolean_t x1087 = x14799;
      boolean_t x233 = !(x1087);
      /* VAR */ boolean_t ite13275 = 0;
      if(x233) {
        numeric_int_t x14932 = g_tree_nnodes(x14798);
        boolean_t x14933 = x14932!=(0);
        ite13275 = x14933;
      } else {
        
        ite13275 = 0;
      };
      boolean_t x12446 = ite13275;
      if (!(x12446)) break; 
      
      void* x5127 = NULL;
      void** x5135 = &(x5127);
      g_tree_foreach(x14798, x5134, x5135);
      struct AGGRecord_OptimalString* x5137 = (struct AGGRecord_OptimalString*){x5127};
      numeric_int_t x5138 = g_tree_remove(x14798, x5137);
      if(0) {
        x14799 = 1;
      } else {
        
        char* x246 = x5137->key;
        double* x248 = x5137->aggs;
        double x249 = x248[0];
        printf("%s|%.0f\n", x246, x249);
        numeric_int_t x1105 = x14800;
        numeric_int_t x252 = x1105+(1);
        x14800 = x252;
      };
    };
    numeric_int_t x14959 = x14800;
    printf("(%d rows)\n", x14959);
    struct timeval* x14961 = &x14780;
    gettimeofday(x14961, NULL);
    struct timeval* x14963 = &x14776;
    struct timeval* x14964 = &x14780;
    struct timeval* x14965 = &x14778;
    long x14966 = timeval_subtract(x14963, x14964, x14965);
    printf("Generated code run in %ld milliseconds.\n", x14966);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x14740(char* x4977) {
  numeric_int_t x9703 = strlen(x4977);
  /* VAR */ numeric_int_t x8636 = 0;
  /* VAR */ numeric_int_t x8637 = 0;
  while(1) {
    
    numeric_int_t x8638 = x8636;
    boolean_t x8639 = x8638<(x9703);
    if (!(x8639)) break; 
    
    numeric_int_t x8640 = x8637;
    numeric_int_t x8641 = x8636;
    char* x9711 = pointer_add(x4977, x8641);
    char x9712 = *(x9711);
    numeric_int_t x8644 = x8640+(x9712);
    x8637 = x8644;
    numeric_int_t x8646 = x8636;
    numeric_int_t x8647 = x8646+(1);
    x8636 = x8647;
  };
  numeric_int_t x8650 = x8637;
  return x8650; 
}

boolean_t x14758(char* x4982, char* x4983) {
  boolean_t x8654 = strcmp(x4982, x4983);
  boolean_t x8655 = !(x8654);
  return x8655; 
}

numeric_int_t x14764(void* x4050) {
  numeric_int_t x4051 = g_direct_hash(x4050);
  return x4051; 
}

numeric_int_t x14767(void* x4053, void* x4054) {
  numeric_int_t x4055 = g_direct_equal(x4053, x4054);
  return x4055; 
}

numeric_int_t x14791(struct AGGRecord_OptimalString* x100, struct AGGRecord_OptimalString* x101) {
  char* x102 = x100->key;
  char* x103 = x101->key;
  numeric_int_t x9758 = strcmp(x102, x103);
  return x9758; 
}

numeric_int_t x5134(void* x5128, void* x5129, void* x5130) {
  struct AGGRecord_OptimalString** x5131 = (struct AGGRecord_OptimalString**){x5130};
  struct AGGRecord_OptimalString* x5132 = (struct AGGRecord_OptimalString*){x5129};
  pointer_assign(x5131, x5132);
  return 1; 
}
