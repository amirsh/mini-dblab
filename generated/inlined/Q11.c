#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


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

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
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

struct PARTSUPPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
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
  FILE* x5494 = popen("wc -l ../../data/sf1/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x5495 = 0;
  numeric_int_t x5496 = x5495;
  numeric_int_t* x5497 = &x5496;
  numeric_int_t x5498 = fscanf(x5494, "%d", x5497);
  pclose(x5494);
  struct PARTSUPPRecord* x6446 = (struct PARTSUPPRecord*)malloc(x5496 * sizeof(struct PARTSUPPRecord));
  memset(x6446, 0, x5496 * sizeof(struct PARTSUPPRecord));
  numeric_int_t x5502 = O_RDONLY;
  numeric_int_t x5503 = open("../../data/sf1/partsupp.tbl", x5502);
  struct stat x5504 = (struct stat){0};
  /* VAR */ struct stat x5505 = x5504;
  struct stat x5506 = x5505;
  struct stat* x5507 = &x5506;
  numeric_int_t x5508 = stat("../../data/sf1/partsupp.tbl", x5507);
  size_t x5509 = x5507->st_size;
  numeric_int_t x5510 = PROT_READ;
  numeric_int_t x5511 = MAP_PRIVATE;
  char* x5512 = mmap(NULL, x5509, x5510, x5511, x5503, 0);
  /* VAR */ char* x5513 = x5512;
  char* x3 = x5513;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x5496);
    /* VAR */ boolean_t ite18980 = 0;
    if(x6) {
      char x21925 = *x3;
      boolean_t x21926 = x21925!=('\0');
      ite18980 = x21926;
    } else {
      
      ite18980 = 0;
    };
    boolean_t x17616 = ite18980;
    if (!(x17616)) break; 
    
    /* VAR */ numeric_int_t x5521 = 0;
    numeric_int_t x5522 = x5521;
    numeric_int_t* x5523 = &x5522;
    char* x5524 = strntoi_unchecked(x3, x5523);
    x3 = x5524;
    /* VAR */ numeric_int_t x5526 = 0;
    numeric_int_t x5527 = x5526;
    numeric_int_t* x5528 = &x5527;
    char* x5529 = strntoi_unchecked(x3, x5528);
    x3 = x5529;
    /* VAR */ numeric_int_t x5531 = 0;
    numeric_int_t x5532 = x5531;
    numeric_int_t* x5533 = &x5532;
    char* x5534 = strntoi_unchecked(x3, x5533);
    x3 = x5534;
    /* VAR */ double x5536 = 0.0;
    double x5537 = x5536;
    double* x5538 = &x5537;
    char* x5539 = strntod_unchecked(x3, x5538);
    x3 = x5539;
    /* VAR */ char* x5541 = x3;
    while(1) {
      
      char x5542 = *x3;
      boolean_t x5543 = x5542!=('|');
      /* VAR */ boolean_t ite19013 = 0;
      if(x5543) {
        char x21957 = *x3;
        boolean_t x21958 = x21957!=('\n');
        ite19013 = x21958;
      } else {
        
        ite19013 = 0;
      };
      boolean_t x17642 = ite19013;
      if (!(x17642)) break; 
      
      x3 += 1;
    };
    char* x5549 = x5541;
    numeric_int_t x5550 = x3 - x5549;
    numeric_int_t x5551 = x5550+(1);
    char* x6498 = (char*)malloc(x5551 * sizeof(char));
    memset(x6498, 0, x5551 * sizeof(char));
    char* x5554 = x5541;
    char* x5555 = strncpy(x6498, x5554, x5550);
    x3 += 1;
    struct PARTSUPPRecord* x6988 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x6988, 0, 1 * sizeof(struct PARTSUPPRecord));
    x6988->PS_PARTKEY = x5522; x6988->PS_SUPPKEY = x5527; x6988->PS_AVAILQTY = x5532; x6988->PS_SUPPLYCOST = x5537; x6988->PS_COMMENT = x6498;
    numeric_int_t x15 = x4;
    struct PARTSUPPRecord x6505 = *x6988;
    *(x6446 + x15) = x6505;
    struct PARTSUPPRecord* x6507 = &(x6446[x15]);
    x6988 = x6507;
    numeric_int_t x17 = x4;
    numeric_int_t x18 = x17+(1);
    x4 = x18;
  };
  char* x5564 = x5513;
  munmap(x5564, x5509);
  FILE* x5565 = popen("wc -l ../../data/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x5566 = 0;
  numeric_int_t x5567 = x5566;
  numeric_int_t* x5568 = &x5567;
  numeric_int_t x5569 = fscanf(x5565, "%d", x5568);
  pclose(x5565);
  struct SUPPLIERRecord* x6520 = (struct SUPPLIERRecord*)malloc(x5567 * sizeof(struct SUPPLIERRecord));
  memset(x6520, 0, x5567 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x5573 = O_RDONLY;
  numeric_int_t x5574 = open("../../data/sf1/supplier.tbl", x5573);
  /* VAR */ struct stat x5575 = x5504;
  struct stat x5576 = x5575;
  struct stat* x5577 = &x5576;
  numeric_int_t x5578 = stat("../../data/sf1/supplier.tbl", x5577);
  size_t x5579 = x5577->st_size;
  numeric_int_t x5580 = PROT_READ;
  numeric_int_t x5581 = MAP_PRIVATE;
  char* x5582 = mmap(NULL, x5579, x5580, x5581, x5574, 0);
  /* VAR */ char* x5583 = x5582;
  char* x24 = x5583;
  /* VAR */ numeric_int_t x25 = 0;
  while(1) {
    
    numeric_int_t x26 = x25;
    boolean_t x27 = x26<(x5567);
    /* VAR */ boolean_t ite19066 = 0;
    if(x27) {
      char x22009 = *x24;
      boolean_t x22010 = x22009!=('\0');
      ite19066 = x22010;
    } else {
      
      ite19066 = 0;
    };
    boolean_t x17688 = ite19066;
    if (!(x17688)) break; 
    
    /* VAR */ numeric_int_t x5591 = 0;
    numeric_int_t x5592 = x5591;
    numeric_int_t* x5593 = &x5592;
    char* x5594 = strntoi_unchecked(x24, x5593);
    x24 = x5594;
    /* VAR */ char* x5596 = x24;
    while(1) {
      
      char x5597 = *x24;
      boolean_t x5598 = x5597!=('|');
      /* VAR */ boolean_t ite19084 = 0;
      if(x5598) {
        char x22026 = *x24;
        boolean_t x22027 = x22026!=('\n');
        ite19084 = x22027;
      } else {
        
        ite19084 = 0;
      };
      boolean_t x17699 = ite19084;
      if (!(x17699)) break; 
      
      x24 += 1;
    };
    char* x5604 = x5596;
    numeric_int_t x5605 = x24 - x5604;
    numeric_int_t x5606 = x5605+(1);
    char* x6556 = (char*)malloc(x5606 * sizeof(char));
    memset(x6556, 0, x5606 * sizeof(char));
    char* x5609 = x5596;
    char* x5610 = strncpy(x6556, x5609, x5605);
    x24 += 1;
    /* VAR */ char* x5612 = x24;
    while(1) {
      
      char x5613 = *x24;
      boolean_t x5614 = x5613!=('|');
      /* VAR */ boolean_t ite19105 = 0;
      if(x5614) {
        char x22046 = *x24;
        boolean_t x22047 = x22046!=('\n');
        ite19105 = x22047;
      } else {
        
        ite19105 = 0;
      };
      boolean_t x17713 = ite19105;
      if (!(x17713)) break; 
      
      x24 += 1;
    };
    char* x5620 = x5612;
    numeric_int_t x5621 = x24 - x5620;
    numeric_int_t x5622 = x5621+(1);
    char* x6572 = (char*)malloc(x5622 * sizeof(char));
    memset(x6572, 0, x5622 * sizeof(char));
    char* x5625 = x5612;
    char* x5626 = strncpy(x6572, x5625, x5621);
    x24 += 1;
    /* VAR */ numeric_int_t x5628 = 0;
    numeric_int_t x5629 = x5628;
    numeric_int_t* x5630 = &x5629;
    char* x5631 = strntoi_unchecked(x24, x5630);
    x24 = x5631;
    /* VAR */ char* x5633 = x24;
    while(1) {
      
      char x5634 = *x24;
      boolean_t x5635 = x5634!=('|');
      /* VAR */ boolean_t ite19131 = 0;
      if(x5635) {
        char x22071 = *x24;
        boolean_t x22072 = x22071!=('\n');
        ite19131 = x22072;
      } else {
        
        ite19131 = 0;
      };
      boolean_t x17732 = ite19131;
      if (!(x17732)) break; 
      
      x24 += 1;
    };
    char* x5641 = x5633;
    numeric_int_t x5642 = x24 - x5641;
    numeric_int_t x5643 = x5642+(1);
    char* x6593 = (char*)malloc(x5643 * sizeof(char));
    memset(x6593, 0, x5643 * sizeof(char));
    char* x5646 = x5633;
    char* x5647 = strncpy(x6593, x5646, x5642);
    x24 += 1;
    /* VAR */ double x5649 = 0.0;
    double x5650 = x5649;
    double* x5651 = &x5650;
    char* x5652 = strntod_unchecked(x24, x5651);
    x24 = x5652;
    /* VAR */ char* x5654 = x24;
    while(1) {
      
      char x5655 = *x24;
      boolean_t x5656 = x5655!=('|');
      /* VAR */ boolean_t ite19157 = 0;
      if(x5656) {
        char x22096 = *x24;
        boolean_t x22097 = x22096!=('\n');
        ite19157 = x22097;
      } else {
        
        ite19157 = 0;
      };
      boolean_t x17751 = ite19157;
      if (!(x17751)) break; 
      
      x24 += 1;
    };
    char* x5662 = x5654;
    numeric_int_t x5663 = x24 - x5662;
    numeric_int_t x5664 = x5663+(1);
    char* x6614 = (char*)malloc(x5664 * sizeof(char));
    memset(x6614, 0, x5664 * sizeof(char));
    char* x5667 = x5654;
    char* x5668 = strncpy(x6614, x5667, x5663);
    x24 += 1;
    struct SUPPLIERRecord* x7106 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x7106, 0, 1 * sizeof(struct SUPPLIERRecord));
    x7106->S_SUPPKEY = x5592; x7106->S_NAME = x6556; x7106->S_ADDRESS = x6572; x7106->S_NATIONKEY = x5629; x7106->S_PHONE = x6593; x7106->S_ACCTBAL = x5650; x7106->S_COMMENT = x6614;
    numeric_int_t x38 = x25;
    struct SUPPLIERRecord x6621 = *x7106;
    *(x6520 + x38) = x6621;
    struct SUPPLIERRecord* x6623 = &(x6520[x38]);
    x7106 = x6623;
    numeric_int_t x40 = x25;
    numeric_int_t x41 = x40+(1);
    x25 = x41;
  };
  char* x5677 = x5583;
  munmap(x5677, x5579);
  FILE* x5678 = popen("wc -l ../../data/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x5679 = 0;
  numeric_int_t x5680 = x5679;
  numeric_int_t* x5681 = &x5680;
  numeric_int_t x5682 = fscanf(x5678, "%d", x5681);
  pclose(x5678);
  struct NATIONRecord* x6636 = (struct NATIONRecord*)malloc(x5680 * sizeof(struct NATIONRecord));
  memset(x6636, 0, x5680 * sizeof(struct NATIONRecord));
  numeric_int_t x5686 = O_RDONLY;
  numeric_int_t x5687 = open("../../data/sf1/nation.tbl", x5686);
  /* VAR */ struct stat x5688 = x5504;
  struct stat x5689 = x5688;
  struct stat* x5690 = &x5689;
  numeric_int_t x5691 = stat("../../data/sf1/nation.tbl", x5690);
  size_t x5692 = x5690->st_size;
  numeric_int_t x5693 = PROT_READ;
  numeric_int_t x5694 = MAP_PRIVATE;
  char* x5695 = mmap(NULL, x5692, x5693, x5694, x5687, 0);
  /* VAR */ char* x5696 = x5695;
  char* x47 = x5696;
  /* VAR */ numeric_int_t x48 = 0;
  while(1) {
    
    numeric_int_t x49 = x48;
    boolean_t x50 = x49<(x5680);
    /* VAR */ boolean_t ite19210 = 0;
    if(x50) {
      char x22148 = *x47;
      boolean_t x22149 = x22148!=('\0');
      ite19210 = x22149;
    } else {
      
      ite19210 = 0;
    };
    boolean_t x17797 = ite19210;
    if (!(x17797)) break; 
    
    /* VAR */ numeric_int_t x5704 = 0;
    numeric_int_t x5705 = x5704;
    numeric_int_t* x5706 = &x5705;
    char* x5707 = strntoi_unchecked(x47, x5706);
    x47 = x5707;
    /* VAR */ char* x5709 = x47;
    while(1) {
      
      char x5710 = *x47;
      boolean_t x5711 = x5710!=('|');
      /* VAR */ boolean_t ite19228 = 0;
      if(x5711) {
        char x22165 = *x47;
        boolean_t x22166 = x22165!=('\n');
        ite19228 = x22166;
      } else {
        
        ite19228 = 0;
      };
      boolean_t x17808 = ite19228;
      if (!(x17808)) break; 
      
      x47 += 1;
    };
    char* x5717 = x5709;
    numeric_int_t x5718 = x47 - x5717;
    numeric_int_t x5719 = x5718+(1);
    char* x6672 = (char*)malloc(x5719 * sizeof(char));
    memset(x6672, 0, x5719 * sizeof(char));
    char* x5722 = x5709;
    char* x5723 = strncpy(x6672, x5722, x5718);
    x47 += 1;
    /* VAR */ numeric_int_t x5725 = 0;
    numeric_int_t x5726 = x5725;
    numeric_int_t* x5727 = &x5726;
    char* x5728 = strntoi_unchecked(x47, x5727);
    x47 = x5728;
    /* VAR */ char* x5730 = x47;
    while(1) {
      
      char x5731 = *x47;
      boolean_t x5732 = x5731!=('|');
      /* VAR */ boolean_t ite19254 = 0;
      if(x5732) {
        char x22190 = *x47;
        boolean_t x22191 = x22190!=('\n');
        ite19254 = x22191;
      } else {
        
        ite19254 = 0;
      };
      boolean_t x17827 = ite19254;
      if (!(x17827)) break; 
      
      x47 += 1;
    };
    char* x5738 = x5730;
    numeric_int_t x5739 = x47 - x5738;
    numeric_int_t x5740 = x5739+(1);
    char* x6693 = (char*)malloc(x5740 * sizeof(char));
    memset(x6693, 0, x5740 * sizeof(char));
    char* x5743 = x5730;
    char* x5744 = strncpy(x6693, x5743, x5739);
    x47 += 1;
    struct NATIONRecord* x7187 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x7187, 0, 1 * sizeof(struct NATIONRecord));
    x7187->N_NATIONKEY = x5705; x7187->N_NAME = x6672; x7187->N_REGIONKEY = x5726; x7187->N_COMMENT = x6693;
    numeric_int_t x58 = x48;
    struct NATIONRecord x6700 = *x7187;
    *(x6636 + x58) = x6700;
    struct NATIONRecord* x6702 = &(x6636[x58]);
    x7187 = x6702;
    numeric_int_t x60 = x48;
    numeric_int_t x61 = x60+(1);
    x48 = x61;
  };
  char* x5753 = x5696;
  munmap(x5753, x5692);
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
