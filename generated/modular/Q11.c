#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "storage.h" 


struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
struct NATIONRecord_SUPPLIERRecord;
struct AGGRecord_String;
struct WindowRecord_Int_Double;
struct NATIONRecord;
struct SUPPLIERRecord;
struct PARTSUPPRecord;
struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
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

struct AGGRecord_String {
  char* key;
  double* aggs;
};

struct WindowRecord_Int_Double {
  numeric_int_t key;
  double wnd;
};


numeric_int_t x22787(void* x7707);

numeric_int_t x22790(void* x7710, void* x7711);

numeric_int_t x22797(void* x7717);

numeric_int_t x22800(void* x7720, void* x7721);

numeric_int_t x22807(void* x7727);

numeric_int_t x22810(void* x7730, void* x7731);

numeric_int_t x23264(struct WindowRecord_Int_Double* x309, struct WindowRecord_Int_Double* x310);

numeric_int_t x9384(void* x9378, void* x9379, void* x9380);

int main(int argc, char** argv) {
  numeric_int_t x5496;
  struct PARTSUPPRecord* x6446;
  numeric_int_t* ps_count = &x5496; 
  struct PARTSUPPRecord** ps_array = &x6446;
  loadPartsupp(ps_count, ps_array);
  numeric_int_t x5567;
  struct SUPPLIERRecord* x6520;
  numeric_int_t* su_count = &x5567;
  struct SUPPLIERRecord** su_array = &x6520;
  loadSupplier(su_count, su_array);
  numeric_int_t x5680;
  struct NATIONRecord* x6636;
  numeric_int_t* na_count = &x5680; 
  struct NATIONRecord** na_array = &x6636;
  loadNation(na_count, na_array);
  numeric_int_t x66 = 0;
  for(; x66 < 1 ; x66 += 1) {
    
    double* x22782 = (double*)malloc(1 * sizeof(double));
    memset(x22782, 0, 1 * sizeof(double));
    struct AGGRecord_String* x22783 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x22783, 0, 1 * sizeof(struct AGGRecord_String));
    x22783->key = "Total"; x22783->aggs = x22782;
    struct WindowRecord_Int_Double* x22786 = (struct WindowRecord_Int_Double*)malloc(48000000 * sizeof(struct WindowRecord_Int_Double));
    memset(x22786, 0, 48000000 * sizeof(struct WindowRecord_Int_Double));
    void*** x22794 = (void***){x22787};
    numeric_int_t* x22795 = (numeric_int_t*){x22790};
    GHashTable* x22796 = g_hash_table_new(x22794, x22795);
    void*** x22804 = (void***){x22797};
    numeric_int_t* x22805 = (numeric_int_t*){x22800};
    GHashTable* x22806 = g_hash_table_new(x22804, x22805);
    void*** x22814 = (void***){x22807};
    numeric_int_t* x22815 = (numeric_int_t*){x22810};
    GHashTable* x22816 = g_hash_table_new(x22814, x22815);
    struct timeval x22817 = (struct timeval){0};
    /* VAR */ struct timeval x22818 = x22817;
    struct timeval x22819 = x22818;
    /* VAR */ struct timeval x22820 = x22817;
    struct timeval x22821 = x22820;
    /* VAR */ struct timeval x22822 = x22817;
    struct timeval x22823 = x22822;
    struct timeval* x22824 = &x22821;
    gettimeofday(x22824, NULL);
    /* VAR */ numeric_int_t x22826 = 0;
    /* VAR */ numeric_int_t x22827 = 0;
    /* VAR */ numeric_int_t x22828 = 0;
    /* VAR */ numeric_int_t x22829 = 0;
    /* VAR */ struct AGGRecord_String* x22830 = NULL;
    while(1) {
      
      numeric_int_t x22832 = x22827;
      boolean_t x22833 = x22832<(x5680);
      if (!(x22833)) break; 
      
      numeric_int_t x2741 = x22827;
      struct NATIONRecord* x135 = &(x6636[x2741]);
      char* x137 = x135->N_NAME;
      boolean_t x14290 = strcmp(x137, "UNITED KINGDOM");
      boolean_t x14291 = x14290==(0);
      if(x14291) {
        numeric_int_t x139 = x135->N_NATIONKEY;
        void* x7762 = (void*){x139};
        void* x7763 = (void*){x135};
        void* x7764 = g_hash_table_lookup(x22816, x7762);
        GList** x7765 = (GList**){x7764};
        GList** x7766 = NULL;
        boolean_t x7767 = x7765==(x7766);
        /* VAR */ GList** ite18470 = 0;
        if(x7767) {
          GList** x18471 = malloc(8);
          GList* x18472 = NULL;
          pointer_assign(x18471, x18472);
          ite18470 = x18471;
        } else {
          
          ite18470 = x7765;
        };
        GList** x7771 = ite18470;
        GList* x7772 = *(x7771);
        GList* x7773 = g_list_prepend(x7772, x7763);
        pointer_assign(x7771, x7773);
        void* x7775 = (void*){x7771};
        g_hash_table_insert(x22816, x7762, x7775);
      };
      numeric_int_t x2749 = x22827;
      numeric_int_t x144 = x2749+(1);
      x22827 = x144;
    };
    while(1) {
      
      numeric_int_t x22865 = x22826;
      boolean_t x22866 = x22865<(x5567);
      if (!(x22866)) break; 
      
      numeric_int_t x2758 = x22826;
      struct SUPPLIERRecord* x153 = &(x6520[x2758]);
      numeric_int_t x155 = x153->S_NATIONKEY;
      void* x7787 = (void*){x155};
      void* x7788 = g_hash_table_lookup(x22816, x7787);
      GList** x7789 = (GList**){x7788};
      boolean_t x12060 = x7789!=(NULL);
      if(x12060) {
        GList* x9051 = *(x7789);
        /* VAR */ GList* x9052 = x9051;
        while(1) {
          
          GList* x9053 = x9052;
          GList* x9054 = NULL;
          boolean_t x9055 = x9053!=(x9054);
          if (!(x9055)) break; 
          
          GList* x9056 = x9052;
          void* x9057 = g_list_nth_data(x9056, 0);
          struct NATIONRecord* x9058 = (struct NATIONRecord*){x9057};
          GList* x9059 = x9052;
          GList* x9060 = g_list_next(x9059);
          x9052 = x9060;
          numeric_int_t x9062 = x9058->N_NATIONKEY;
          boolean_t x9063 = x9062==(x155);
          if(x9063) {
            char* x905 = x9058->N_NAME;
            numeric_int_t x906 = x9058->N_REGIONKEY;
            char* x907 = x9058->N_COMMENT;
            numeric_int_t x908 = x153->S_SUPPKEY;
            char* x909 = x153->S_NAME;
            char* x910 = x153->S_ADDRESS;
            char* x911 = x153->S_PHONE;
            double x912 = x153->S_ACCTBAL;
            char* x913 = x153->S_COMMENT;
            struct NATIONRecord_SUPPLIERRecord* x7265 = (struct NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            memset(x7265, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            x7265->N_NATIONKEY = x9062; x7265->N_NAME = x905; x7265->N_REGIONKEY = x906; x7265->N_COMMENT = x907; x7265->S_SUPPKEY = x908; x7265->S_NAME = x909; x7265->S_ADDRESS = x910; x7265->S_NATIONKEY = x155; x7265->S_PHONE = x911; x7265->S_ACCTBAL = x912; x7265->S_COMMENT = x913;
            numeric_int_t x176 = x7265->S_SUPPKEY;
            void* x7812 = (void*){x176};
            void* x7813 = (void*){x7265};
            void* x7814 = g_hash_table_lookup(x22806, x7812);
            GList** x7815 = (GList**){x7814};
            GList** x7816 = NULL;
            boolean_t x7817 = x7815==(x7816);
            /* VAR */ GList** ite18569 = 0;
            if(x7817) {
              GList** x18570 = malloc(8);
              GList* x18571 = NULL;
              pointer_assign(x18570, x18571);
              ite18569 = x18570;
            } else {
              
              ite18569 = x7815;
            };
            GList** x7821 = ite18569;
            GList* x7822 = *(x7821);
            GList* x7823 = g_list_prepend(x7822, x7813);
            pointer_assign(x7821, x7823);
            void* x7825 = (void*){x7821};
            g_hash_table_insert(x22806, x7812, x7825);
          };
        };
      };
      numeric_int_t x2804 = x22826;
      numeric_int_t x184 = x2804+(1);
      x22826 = x184;
    };
    while(1) {
      
      numeric_int_t x22965 = x22828;
      boolean_t x22966 = x22965<(x5496);
      if (!(x22966)) break; 
      
      numeric_int_t x2814 = x22828;
      struct PARTSUPPRecord* x194 = &(x6446[x2814]);
      numeric_int_t x196 = x194->PS_SUPPKEY;
      void* x7838 = (void*){x196};
      void* x7839 = g_hash_table_lookup(x22806, x7838);
      GList** x7840 = (GList**){x7839};
      boolean_t x12151 = x7840!=(NULL);
      if(x12151) {
        GList* x9149 = *(x7840);
        /* VAR */ GList* x9150 = x9149;
        while(1) {
          
          GList* x9151 = x9150;
          GList* x9152 = NULL;
          boolean_t x9153 = x9151!=(x9152);
          if (!(x9153)) break; 
          
          GList* x9154 = x9150;
          void* x9155 = g_list_nth_data(x9154, 0);
          struct NATIONRecord_SUPPLIERRecord* x9156 = (struct NATIONRecord_SUPPLIERRecord*){x9155};
          GList* x9157 = x9150;
          GList* x9158 = g_list_next(x9157);
          x9150 = x9158;
          numeric_int_t x9160 = x9156->S_SUPPKEY;
          boolean_t x9161 = x9160==(x196);
          if(x9161) {
            numeric_int_t x969 = x9156->N_NATIONKEY;
            char* x970 = x9156->N_NAME;
            numeric_int_t x971 = x9156->N_REGIONKEY;
            char* x972 = x9156->N_COMMENT;
            char* x973 = x9156->S_NAME;
            char* x974 = x9156->S_ADDRESS;
            numeric_int_t x975 = x9156->S_NATIONKEY;
            char* x976 = x9156->S_PHONE;
            double x977 = x9156->S_ACCTBAL;
            char* x978 = x9156->S_COMMENT;
            numeric_int_t x979 = x194->PS_PARTKEY;
            numeric_int_t x980 = x194->PS_AVAILQTY;
            double x981 = x194->PS_SUPPLYCOST;
            char* x982 = x194->PS_COMMENT;
            struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7304 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
            memset(x7304, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
            x7304->N_NATIONKEY = x969; x7304->N_NAME = x970; x7304->N_REGIONKEY = x971; x7304->N_COMMENT = x972; x7304->S_SUPPKEY = x9160; x7304->S_NAME = x973; x7304->S_ADDRESS = x974; x7304->S_NATIONKEY = x975; x7304->S_PHONE = x976; x7304->S_ACCTBAL = x977; x7304->S_COMMENT = x978; x7304->PS_PARTKEY = x979; x7304->PS_SUPPKEY = x196; x7304->PS_AVAILQTY = x980; x7304->PS_SUPPLYCOST = x981; x7304->PS_COMMENT = x982;
            numeric_int_t x217 = x7304->PS_PARTKEY;
            void* x7868 = (void*){x217};
            void* x7869 = (void*){x7304};
            void* x7870 = g_hash_table_lookup(x22796, x7868);
            GList** x7871 = (GList**){x7870};
            GList** x7872 = NULL;
            boolean_t x7873 = x7871==(x7872);
            /* VAR */ GList** ite18678 = 0;
            if(x7873) {
              GList** x18679 = malloc(8);
              GList* x18680 = NULL;
              pointer_assign(x18679, x18680);
              ite18678 = x18679;
            } else {
              
              ite18678 = x7871;
            };
            GList** x7877 = ite18678;
            GList* x7878 = *(x7877);
            GList* x7879 = g_list_prepend(x7878, x7869);
            pointer_assign(x7877, x7879);
            void* x7881 = (void*){x7877};
            g_hash_table_insert(x22796, x7868, x7881);
          };
        };
      };
      numeric_int_t x2870 = x22828;
      numeric_int_t x225 = x2870+(1);
      x22828 = x225;
    };
    GList* x23120 = g_hash_table_get_keys(x22796);
    /* VAR */ GList* x23121 = x23120;
    numeric_int_t x23122 = g_hash_table_size(x22796);
    numeric_int_t x16108 = 0;
    for(; x16108 < x23122 ; x16108 += 1) {
      
      GList* x16109 = x23121;
      void* x16110 = g_list_nth_data(x16109, 0);
      GList* x16111 = x23121;
      GList* x16112 = g_list_next(x16111);
      x23121 = x16112;
      void* x16114 = g_hash_table_lookup(x22796, x16110);
      GList** x16115 = (GList**){x16114};
      /* VAR */ double x16124 = 0.0;
      GList* x16125 = *(x16115);
      /* VAR */ GList* x16126 = x16125;
      while(1) {
        
        GList* x9274 = x16126;
        GList* x9275 = NULL;
        boolean_t x9276 = x9274!=(x9275);
        if (!(x9276)) break; 
        
        GList* x9277 = x16126;
        void* x9278 = g_list_nth_data(x9277, 0);
        struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9279 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x9278};
        double x9280 = x16124;
        double x9281 = x9279->PS_SUPPLYCOST;
        numeric_int_t x9282 = x9279->PS_AVAILQTY;
        double x9284 = x9281*(x9282);
        double x9285 = x9280+(x9284);
        x16124 = x9285;
        GList* x9287 = x16126;
        GList* x9288 = g_list_next(x9287);
        x16126 = x9288;
      };
      double x16144 = x16124;
      GList* x16145 = *(x16115);
      void* x16146 = g_list_nth_data(x16145, 0);
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x16147 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x16146};
      numeric_int_t x16148 = x16147->PS_PARTKEY;
      struct WindowRecord_Int_Double* x16149 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x16149, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      x16149->key = x16148; x16149->wnd = x16144;
      numeric_int_t x16152 = x22829;
      struct WindowRecord_Int_Double x16153 = *x16149;
      *(x22786 + x16152) = x16153;
      struct WindowRecord_Int_Double* x16155 = &(x22786[x16152]);
      x16149 = x16155;
      numeric_int_t x16157 = x22829;
      numeric_int_t x16158 = x16157+(1);
      x22829 = x16158;
    };
    /* VAR */ numeric_int_t x23224 = 0;
    while(1) {
      
      numeric_int_t x23226 = x23224;
      numeric_int_t x23227 = x22829;
      boolean_t x23228 = x23226<(x23227);
      if (!(x23228)) break; 
      
      numeric_int_t x260 = x23224;
      struct WindowRecord_Int_Double* x261 = &(x22786[x260]);
      numeric_int_t x262 = x23224;
      numeric_int_t x263 = x262+(1);
      x23224 = x263;
      double* x270 = x22783->aggs;
      double x284 = x270[0];
      double x285 = x261->wnd;
      double x286 = x284+(x285);
      *x270 = x286;
    };
    x22830 = x22783;
    struct AGGRecord_String* x23244 = x22830;
    numeric_int_t* x23283 = &(x23264);
    GTree* x23284 = g_tree_new(x23283);
    /* VAR */ boolean_t x23285 = 0;
    /* VAR */ numeric_int_t x23286 = 0;
    /* VAR */ numeric_int_t x23287 = 0;
    while(1) {
      
      numeric_int_t x23289 = x23287;
      numeric_int_t x23290 = x22829;
      boolean_t x23291 = x23289<(x23290);
      if (!(x23291)) break; 
      
      numeric_int_t x635 = x23287;
      struct WindowRecord_Int_Double* x636 = &(x22786[x635]);
      numeric_int_t x637 = x23287;
      numeric_int_t x638 = x637+(1);
      x23287 = x638;
      double x642 = x636->wnd;
      double* x643 = x23244->aggs;
      double x644 = x643[0];
      double x645 = x644*(1.0E-4);
      boolean_t x646 = x642>(x645);
      if(x646) {
        g_tree_insert(x23284, x636, x636);
      };
    };
    while(1) {
      
      boolean_t x3449 = x23285;
      boolean_t x652 = !(x3449);
      /* VAR */ boolean_t ite20390 = 0;
      if(x652) {
        numeric_int_t x23309 = g_tree_nnodes(x23284);
        boolean_t x23310 = x23309!=(0);
        ite20390 = x23310;
      } else {
        
        ite20390 = 0;
      };
      boolean_t x18925 = ite20390;
      if (!(x18925)) break; 
      
      void* x9377 = NULL;
      void** x9385 = &(x9377);
      g_tree_foreach(x23284, x9384, x9385);
      struct WindowRecord_Int_Double* x9387 = (struct WindowRecord_Int_Double*){x9377};
      numeric_int_t x9388 = g_tree_remove(x23284, x9387);
      if(0) {
        x23285 = 1;
      } else {
        
        numeric_int_t x665 = x9387->key;
        double x666 = x9387->wnd;
        printf("%d|%.2f\n", x665, x666);
        numeric_int_t x3465 = x23286;
        numeric_int_t x669 = x3465+(1);
        x23286 = x669;
      };
    };
    numeric_int_t x23335 = x23286;
    printf("(%d rows)\n", x23335);
    struct timeval* x23337 = &x22823;
    gettimeofday(x23337, NULL);
    struct timeval* x23339 = &x22819;
    struct timeval* x23340 = &x22823;
    struct timeval* x23341 = &x22821;
    long x23342 = timeval_subtract(x23339, x23340, x23341);
    printf("Generated code run in %ld milliseconds.\n", x23342);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x22787(void* x7707) {
  numeric_int_t x7708 = g_direct_hash(x7707);
  return x7708; 
}

numeric_int_t x22790(void* x7710, void* x7711) {
  numeric_int_t x7712 = g_direct_equal(x7710, x7711);
  return x7712; 
}

numeric_int_t x22797(void* x7717) {
  numeric_int_t x7718 = g_direct_hash(x7717);
  return x7718; 
}

numeric_int_t x22800(void* x7720, void* x7721) {
  numeric_int_t x7722 = g_direct_equal(x7720, x7721);
  return x7722; 
}

numeric_int_t x22807(void* x7727) {
  numeric_int_t x7728 = g_direct_hash(x7727);
  return x7728; 
}

numeric_int_t x22810(void* x7730, void* x7731) {
  numeric_int_t x7732 = g_direct_equal(x7730, x7731);
  return x7732; 
}

numeric_int_t x23264(struct WindowRecord_Int_Double* x309, struct WindowRecord_Int_Double* x310) {
  double x311 = x309->wnd;
  double x312 = x310->wnd;
  boolean_t x313 = x311>(x312);
  /* VAR */ numeric_int_t ite18889 = 0;
  if(x313) {
    ite18889 = -1;
  } else {
    
    boolean_t x18891 = x311<(x312);
    /* VAR */ numeric_int_t ite18893 = 0;
    if(x18891) {
      ite18893 = 1;
    } else {
      
      ite18893 = 0;
    };
    numeric_int_t x18892 = ite18893;
    ite18889 = x18892;
  };
  numeric_int_t x316 = ite18889;
  return x316; 
}

numeric_int_t x9384(void* x9378, void* x9379, void* x9380) {
  struct WindowRecord_Int_Double** x9381 = (struct WindowRecord_Int_Double**){x9380};
  struct WindowRecord_Int_Double* x9382 = (struct WindowRecord_Int_Double*){x9379};
  pointer_assign(x9381, x9382);
  return 1; 
}
