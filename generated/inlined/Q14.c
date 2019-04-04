#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct PARTRecord_LINEITEMRecord;
struct AGGRecord_String;
struct LINEITEMRecord;
struct PARTRecord;
struct PARTRecord_LINEITEMRecord {
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
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

struct PARTRecord {
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


numeric_int_t x15307(void* x4921);

numeric_int_t x15310(void* x4924, void* x4925);

int main(int argc, char** argv) {
  FILE* x2637 = popen("wc -l ../../data/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x2638 = 0;
  numeric_int_t x2639 = x2638;
  numeric_int_t* x2640 = &x2639;
  numeric_int_t x2641 = fscanf(x2637, "%d", x2640);
  pclose(x2637);
  struct LINEITEMRecord* x3599 = (struct LINEITEMRecord*)malloc(x2639 * sizeof(struct LINEITEMRecord));
  memset(x3599, 0, x2639 * sizeof(struct LINEITEMRecord));
  numeric_int_t x2645 = O_RDONLY;
  numeric_int_t x2646 = open("../../data/sf1/lineitem.tbl", x2645);
  struct stat x2647 = (struct stat){0};
  /* VAR */ struct stat x2648 = x2647;
  struct stat x2649 = x2648;
  struct stat* x2650 = &x2649;
  numeric_int_t x2651 = stat("../../data/sf1/lineitem.tbl", x2650);
  size_t x2652 = x2650->st_size;
  numeric_int_t x2653 = PROT_READ;
  numeric_int_t x2654 = MAP_PRIVATE;
  char* x2655 = mmap(NULL, x2652, x2653, x2654, x2646, 0);
  /* VAR */ char* x2656 = x2655;
  char* x3 = x2656;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x2639);
    /* VAR */ boolean_t ite12920 = 0;
    if(x6) {
      char x14697 = *x3;
      boolean_t x14698 = x14697!=('\0');
      ite12920 = x14698;
    } else {
      
      ite12920 = 0;
    };
    boolean_t x12129 = ite12920;
    if (!(x12129)) break; 
    
    /* VAR */ numeric_int_t x2664 = 0;
    numeric_int_t x2665 = x2664;
    numeric_int_t* x2666 = &x2665;
    char* x2667 = strntoi_unchecked(x3, x2666);
    x3 = x2667;
    /* VAR */ numeric_int_t x2669 = 0;
    numeric_int_t x2670 = x2669;
    numeric_int_t* x2671 = &x2670;
    char* x2672 = strntoi_unchecked(x3, x2671);
    x3 = x2672;
    /* VAR */ numeric_int_t x2674 = 0;
    numeric_int_t x2675 = x2674;
    numeric_int_t* x2676 = &x2675;
    char* x2677 = strntoi_unchecked(x3, x2676);
    x3 = x2677;
    /* VAR */ numeric_int_t x2679 = 0;
    numeric_int_t x2680 = x2679;
    numeric_int_t* x2681 = &x2680;
    char* x2682 = strntoi_unchecked(x3, x2681);
    x3 = x2682;
    /* VAR */ double x2684 = 0.0;
    double x2685 = x2684;
    double* x2686 = &x2685;
    char* x2687 = strntod_unchecked(x3, x2686);
    x3 = x2687;
    /* VAR */ double x2689 = 0.0;
    double x2690 = x2689;
    double* x2691 = &x2690;
    char* x2692 = strntod_unchecked(x3, x2691);
    x3 = x2692;
    /* VAR */ double x2694 = 0.0;
    double x2695 = x2694;
    double* x2696 = &x2695;
    char* x2697 = strntod_unchecked(x3, x2696);
    x3 = x2697;
    /* VAR */ double x2699 = 0.0;
    double x2700 = x2699;
    double* x2701 = &x2700;
    char* x2702 = strntod_unchecked(x3, x2701);
    x3 = x2702;
    char x2704 = *x3;
    /* VAR */ char x2705 = x2704;
    x3 += 1;
    x3 += 1;
    char x2708 = x2705;
    char x2709 = *x3;
    /* VAR */ char x2710 = x2709;
    x3 += 1;
    x3 += 1;
    char x2713 = x2710;
    /* VAR */ numeric_int_t x2714 = 0;
    numeric_int_t x2715 = x2714;
    numeric_int_t* x2716 = &x2715;
    char* x2717 = strntoi_unchecked(x3, x2716);
    x3 = x2717;
    /* VAR */ numeric_int_t x2719 = 0;
    numeric_int_t x2720 = x2719;
    numeric_int_t* x2721 = &x2720;
    char* x2722 = strntoi_unchecked(x3, x2721);
    x3 = x2722;
    /* VAR */ numeric_int_t x2724 = 0;
    numeric_int_t x2725 = x2724;
    numeric_int_t* x2726 = &x2725;
    char* x2727 = strntoi_unchecked(x3, x2726);
    x3 = x2727;
    numeric_int_t x2729 = x2715*(10000);
    numeric_int_t x2730 = x2720*(100);
    numeric_int_t x2731 = x2729+(x2730);
    numeric_int_t x2732 = x2731+(x2725);
    /* VAR */ numeric_int_t x2733 = 0;
    numeric_int_t x2734 = x2733;
    numeric_int_t* x2735 = &x2734;
    char* x2736 = strntoi_unchecked(x3, x2735);
    x3 = x2736;
    /* VAR */ numeric_int_t x2738 = 0;
    numeric_int_t x2739 = x2738;
    numeric_int_t* x2740 = &x2739;
    char* x2741 = strntoi_unchecked(x3, x2740);
    x3 = x2741;
    /* VAR */ numeric_int_t x2743 = 0;
    numeric_int_t x2744 = x2743;
    numeric_int_t* x2745 = &x2744;
    char* x2746 = strntoi_unchecked(x3, x2745);
    x3 = x2746;
    numeric_int_t x2748 = x2734*(10000);
    numeric_int_t x2749 = x2739*(100);
    numeric_int_t x2750 = x2748+(x2749);
    numeric_int_t x2751 = x2750+(x2744);
    /* VAR */ numeric_int_t x2752 = 0;
    numeric_int_t x2753 = x2752;
    numeric_int_t* x2754 = &x2753;
    char* x2755 = strntoi_unchecked(x3, x2754);
    x3 = x2755;
    /* VAR */ numeric_int_t x2757 = 0;
    numeric_int_t x2758 = x2757;
    numeric_int_t* x2759 = &x2758;
    char* x2760 = strntoi_unchecked(x3, x2759);
    x3 = x2760;
    /* VAR */ numeric_int_t x2762 = 0;
    numeric_int_t x2763 = x2762;
    numeric_int_t* x2764 = &x2763;
    char* x2765 = strntoi_unchecked(x3, x2764);
    x3 = x2765;
    numeric_int_t x2767 = x2753*(10000);
    numeric_int_t x2768 = x2758*(100);
    numeric_int_t x2769 = x2767+(x2768);
    numeric_int_t x2770 = x2769+(x2763);
    /* VAR */ char* x2771 = x3;
    while(1) {
      
      char x2772 = *x3;
      boolean_t x2773 = x2772!=('|');
      /* VAR */ boolean_t ite13040 = 0;
      if(x2773) {
        char x14816 = *x3;
        boolean_t x14817 = x14816!=('\n');
        ite13040 = x14817;
      } else {
        
        ite13040 = 0;
      };
      boolean_t x12242 = ite13040;
      if (!(x12242)) break; 
      
      x3 += 1;
    };
    char* x2779 = x2771;
    numeric_int_t x2780 = x3 - x2779;
    numeric_int_t x2781 = x2780+(1);
    char* x3738 = (char*)malloc(x2781 * sizeof(char));
    memset(x3738, 0, x2781 * sizeof(char));
    char* x2784 = x2771;
    char* x2785 = strncpy(x3738, x2784, x2780);
    x3 += 1;
    /* VAR */ char* x2787 = x3;
    while(1) {
      
      char x2788 = *x3;
      boolean_t x2789 = x2788!=('|');
      /* VAR */ boolean_t ite13061 = 0;
      if(x2789) {
        char x14836 = *x3;
        boolean_t x14837 = x14836!=('\n');
        ite13061 = x14837;
      } else {
        
        ite13061 = 0;
      };
      boolean_t x12256 = ite13061;
      if (!(x12256)) break; 
      
      x3 += 1;
    };
    char* x2795 = x2787;
    numeric_int_t x2796 = x3 - x2795;
    numeric_int_t x2797 = x2796+(1);
    char* x3754 = (char*)malloc(x2797 * sizeof(char));
    memset(x3754, 0, x2797 * sizeof(char));
    char* x2800 = x2787;
    char* x2801 = strncpy(x3754, x2800, x2796);
    x3 += 1;
    /* VAR */ char* x2803 = x3;
    while(1) {
      
      char x2804 = *x3;
      boolean_t x2805 = x2804!=('|');
      /* VAR */ boolean_t ite13082 = 0;
      if(x2805) {
        char x14856 = *x3;
        boolean_t x14857 = x14856!=('\n');
        ite13082 = x14857;
      } else {
        
        ite13082 = 0;
      };
      boolean_t x12270 = ite13082;
      if (!(x12270)) break; 
      
      x3 += 1;
    };
    char* x2811 = x2803;
    numeric_int_t x2812 = x3 - x2811;
    numeric_int_t x2813 = x2812+(1);
    char* x3770 = (char*)malloc(x2813 * sizeof(char));
    memset(x3770, 0, x2813 * sizeof(char));
    char* x2816 = x2803;
    char* x2817 = strncpy(x3770, x2816, x2812);
    x3 += 1;
    struct LINEITEMRecord* x4259 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4259, 0, 1 * sizeof(struct LINEITEMRecord));
    x4259->L_ORDERKEY = x2665; x4259->L_PARTKEY = x2670; x4259->L_SUPPKEY = x2675; x4259->L_LINENUMBER = x2680; x4259->L_QUANTITY = x2685; x4259->L_EXTENDEDPRICE = x2690; x4259->L_DISCOUNT = x2695; x4259->L_TAX = x2700; x4259->L_RETURNFLAG = x2708; x4259->L_LINESTATUS = x2713; x4259->L_SHIPDATE = x2732; x4259->L_COMMITDATE = x2751; x4259->L_RECEIPTDATE = x2770; x4259->L_SHIPINSTRUCT = x3738; x4259->L_SHIPMODE = x3754; x4259->L_COMMENT = x3770;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x3777 = *x4259;
    *(x3599 + x26) = x3777;
    struct LINEITEMRecord* x3779 = &(x3599[x26]);
    x4259 = x3779;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x2826 = x2656;
  munmap(x2826, x2652);
  FILE* x2827 = popen("wc -l ../../data/sf1/part.tbl", "r");
  /* VAR */ numeric_int_t x2828 = 0;
  numeric_int_t x2829 = x2828;
  numeric_int_t* x2830 = &x2829;
  numeric_int_t x2831 = fscanf(x2827, "%d", x2830);
  pclose(x2827);
  struct PARTRecord* x3792 = (struct PARTRecord*)malloc(x2829 * sizeof(struct PARTRecord));
  memset(x3792, 0, x2829 * sizeof(struct PARTRecord));
  numeric_int_t x2835 = O_RDONLY;
  numeric_int_t x2836 = open("../../data/sf1/part.tbl", x2835);
  /* VAR */ struct stat x2837 = x2647;
  struct stat x2838 = x2837;
  struct stat* x2839 = &x2838;
  numeric_int_t x2840 = stat("../../data/sf1/part.tbl", x2839);
  size_t x2841 = x2839->st_size;
  numeric_int_t x2842 = PROT_READ;
  numeric_int_t x2843 = MAP_PRIVATE;
  char* x2844 = mmap(NULL, x2841, x2842, x2843, x2836, 0);
  /* VAR */ char* x2845 = x2844;
  char* x35 = x2845;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x2829);
    /* VAR */ boolean_t ite13135 = 0;
    if(x38) {
      char x14908 = *x35;
      boolean_t x14909 = x14908!=('\0');
      ite13135 = x14909;
    } else {
      
      ite13135 = 0;
    };
    boolean_t x12316 = ite13135;
    if (!(x12316)) break; 
    
    /* VAR */ numeric_int_t x2853 = 0;
    numeric_int_t x2854 = x2853;
    numeric_int_t* x2855 = &x2854;
    char* x2856 = strntoi_unchecked(x35, x2855);
    x35 = x2856;
    /* VAR */ char* x2858 = x35;
    while(1) {
      
      char x2859 = *x35;
      boolean_t x2860 = x2859!=('|');
      /* VAR */ boolean_t ite13153 = 0;
      if(x2860) {
        char x14925 = *x35;
        boolean_t x14926 = x14925!=('\n');
        ite13153 = x14926;
      } else {
        
        ite13153 = 0;
      };
      boolean_t x12327 = ite13153;
      if (!(x12327)) break; 
      
      x35 += 1;
    };
    char* x2866 = x2858;
    numeric_int_t x2867 = x35 - x2866;
    numeric_int_t x2868 = x2867+(1);
    char* x3828 = (char*)malloc(x2868 * sizeof(char));
    memset(x3828, 0, x2868 * sizeof(char));
    char* x2871 = x2858;
    char* x2872 = strncpy(x3828, x2871, x2867);
    x35 += 1;
    /* VAR */ char* x2874 = x35;
    while(1) {
      
      char x2875 = *x35;
      boolean_t x2876 = x2875!=('|');
      /* VAR */ boolean_t ite13174 = 0;
      if(x2876) {
        char x14945 = *x35;
        boolean_t x14946 = x14945!=('\n');
        ite13174 = x14946;
      } else {
        
        ite13174 = 0;
      };
      boolean_t x12341 = ite13174;
      if (!(x12341)) break; 
      
      x35 += 1;
    };
    char* x2882 = x2874;
    numeric_int_t x2883 = x35 - x2882;
    numeric_int_t x2884 = x2883+(1);
    char* x3844 = (char*)malloc(x2884 * sizeof(char));
    memset(x3844, 0, x2884 * sizeof(char));
    char* x2887 = x2874;
    char* x2888 = strncpy(x3844, x2887, x2883);
    x35 += 1;
    /* VAR */ char* x2890 = x35;
    while(1) {
      
      char x2891 = *x35;
      boolean_t x2892 = x2891!=('|');
      /* VAR */ boolean_t ite13195 = 0;
      if(x2892) {
        char x14965 = *x35;
        boolean_t x14966 = x14965!=('\n');
        ite13195 = x14966;
      } else {
        
        ite13195 = 0;
      };
      boolean_t x12355 = ite13195;
      if (!(x12355)) break; 
      
      x35 += 1;
    };
    char* x2898 = x2890;
    numeric_int_t x2899 = x35 - x2898;
    numeric_int_t x2900 = x2899+(1);
    char* x3860 = (char*)malloc(x2900 * sizeof(char));
    memset(x3860, 0, x2900 * sizeof(char));
    char* x2903 = x2890;
    char* x2904 = strncpy(x3860, x2903, x2899);
    x35 += 1;
    /* VAR */ char* x2906 = x35;
    while(1) {
      
      char x2907 = *x35;
      boolean_t x2908 = x2907!=('|');
      /* VAR */ boolean_t ite13216 = 0;
      if(x2908) {
        char x14985 = *x35;
        boolean_t x14986 = x14985!=('\n');
        ite13216 = x14986;
      } else {
        
        ite13216 = 0;
      };
      boolean_t x12369 = ite13216;
      if (!(x12369)) break; 
      
      x35 += 1;
    };
    char* x2914 = x2906;
    numeric_int_t x2915 = x35 - x2914;
    numeric_int_t x2916 = x2915+(1);
    char* x3876 = (char*)malloc(x2916 * sizeof(char));
    memset(x3876, 0, x2916 * sizeof(char));
    char* x2919 = x2906;
    char* x2920 = strncpy(x3876, x2919, x2915);
    x35 += 1;
    /* VAR */ numeric_int_t x2922 = 0;
    numeric_int_t x2923 = x2922;
    numeric_int_t* x2924 = &x2923;
    char* x2925 = strntoi_unchecked(x35, x2924);
    x35 = x2925;
    /* VAR */ char* x2927 = x35;
    while(1) {
      
      char x2928 = *x35;
      boolean_t x2929 = x2928!=('|');
      /* VAR */ boolean_t ite13242 = 0;
      if(x2929) {
        char x15010 = *x35;
        boolean_t x15011 = x15010!=('\n');
        ite13242 = x15011;
      } else {
        
        ite13242 = 0;
      };
      boolean_t x12388 = ite13242;
      if (!(x12388)) break; 
      
      x35 += 1;
    };
    char* x2935 = x2927;
    numeric_int_t x2936 = x35 - x2935;
    numeric_int_t x2937 = x2936+(1);
    char* x3897 = (char*)malloc(x2937 * sizeof(char));
    memset(x3897, 0, x2937 * sizeof(char));
    char* x2940 = x2927;
    char* x2941 = strncpy(x3897, x2940, x2936);
    x35 += 1;
    /* VAR */ double x2943 = 0.0;
    double x2944 = x2943;
    double* x2945 = &x2944;
    char* x2946 = strntod_unchecked(x35, x2945);
    x35 = x2946;
    /* VAR */ char* x2948 = x35;
    while(1) {
      
      char x2949 = *x35;
      boolean_t x2950 = x2949!=('|');
      /* VAR */ boolean_t ite13268 = 0;
      if(x2950) {
        char x15035 = *x35;
        boolean_t x15036 = x15035!=('\n');
        ite13268 = x15036;
      } else {
        
        ite13268 = 0;
      };
      boolean_t x12407 = ite13268;
      if (!(x12407)) break; 
      
      x35 += 1;
    };
    char* x2956 = x2948;
    numeric_int_t x2957 = x35 - x2956;
    numeric_int_t x2958 = x2957+(1);
    char* x3918 = (char*)malloc(x2958 * sizeof(char));
    memset(x3918, 0, x2958 * sizeof(char));
    char* x2961 = x2948;
    char* x2962 = strncpy(x3918, x2961, x2957);
    x35 += 1;
    struct PARTRecord* x4409 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x4409, 0, 1 * sizeof(struct PARTRecord));
    x4409->P_PARTKEY = x2854; x4409->P_NAME = x3828; x4409->P_MFGR = x3844; x4409->P_BRAND = x3860; x4409->P_TYPE = x3876; x4409->P_SIZE = x2923; x4409->P_CONTAINER = x3897; x4409->P_RETAILPRICE = x2944; x4409->P_COMMENT = x3918;
    numeric_int_t x51 = x36;
    struct PARTRecord x3925 = *x4409;
    *(x3792 + x51) = x3925;
    struct PARTRecord* x3927 = &(x3792[x51]);
    x4409 = x3927;
    numeric_int_t x53 = x36;
    numeric_int_t x54 = x53+(1);
    x36 = x54;
  };
  char* x2971 = x2845;
  munmap(x2971, x2841);
  numeric_int_t x59 = 0;
  for(; x59 < 1 ; x59 += 1) {
    
    double* x15303 = (double*)malloc(3 * sizeof(double));
    memset(x15303, 0, 3 * sizeof(double));
    struct AGGRecord_String* x15304 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x15304, 0, 1 * sizeof(struct AGGRecord_String));
    x15304->key = "Total"; x15304->aggs = x15303;
    void*** x15314 = (void***){x15307};
    numeric_int_t* x15315 = (numeric_int_t*){x15310};
    GHashTable* x15316 = g_hash_table_new(x15314, x15315);
    struct timeval x15317 = (struct timeval){0};
    /* VAR */ struct timeval x15318 = x15317;
    struct timeval x15319 = x15318;
    /* VAR */ struct timeval x15320 = x15317;
    struct timeval x15321 = x15320;
    /* VAR */ struct timeval x15322 = x15317;
    struct timeval x15323 = x15322;
    struct timeval* x15324 = &x15321;
    gettimeofday(x15324, NULL);
    /* VAR */ numeric_int_t x15326 = 0;
    /* VAR */ numeric_int_t x15327 = 0;
    /* VAR */ boolean_t x15328 = 0;
    /* VAR */ numeric_int_t x15329 = 0;
    while(1) {
      
      numeric_int_t x15331 = x15326;
      boolean_t x15332 = x15331<(x2829);
      if (!(x15332)) break; 
      
      numeric_int_t x1194 = x15326;
      struct PARTRecord* x132 = &(x3792[x1194]);
      numeric_int_t x134 = x132->P_PARTKEY;
      void* x4951 = (void*){x134};
      void* x4952 = (void*){x132};
      void* x4953 = g_hash_table_lookup(x15316, x4951);
      GList** x4954 = (GList**){x4953};
      GList** x4955 = NULL;
      boolean_t x4956 = x4954==(x4955);
      /* VAR */ GList** ite12703 = 0;
      if(x4956) {
        GList** x12704 = malloc(8);
        GList* x12705 = NULL;
        pointer_assign(x12704, x12705);
        ite12703 = x12704;
      } else {
        
        ite12703 = x4954;
      };
      GList** x4960 = ite12703;
      GList* x4961 = *(x4960);
      GList* x4962 = g_list_prepend(x4961, x4952);
      pointer_assign(x4960, x4962);
      void* x4964 = (void*){x4960};
      g_hash_table_insert(x15316, x4951, x4964);
      numeric_int_t x1199 = x15326;
      numeric_int_t x138 = x1199+(1);
      x15326 = x138;
    };
    while(1) {
      
      numeric_int_t x15360 = x15327;
      boolean_t x15361 = x15360<(x2639);
      if (!(x15361)) break; 
      
      numeric_int_t x1208 = x15327;
      struct LINEITEMRecord* x147 = &(x3599[x1208]);
      numeric_int_t x149 = x147->L_SHIPDATE;
      boolean_t x150 = x149>=(19940301);
      /* VAR */ boolean_t ite13608 = 0;
      if(x150) {
        boolean_t x15368 = x149<(19940401);
        ite13608 = x15368;
      } else {
        
        ite13608 = 0;
      };
      boolean_t x12726 = ite13608;
      if(x12726) {
        numeric_int_t x153 = x147->L_PARTKEY;
        void* x4981 = (void*){x153};
        void* x4982 = g_hash_table_lookup(x15316, x4981);
        GList** x4983 = (GList**){x4982};
        boolean_t x8316 = x4983!=(NULL);
        if(x8316) {
          GList* x6072 = *(x4983);
          /* VAR */ GList* x6073 = x6072;
          while(1) {
            
            GList* x6074 = x6073;
            GList* x6075 = NULL;
            boolean_t x6076 = x6074!=(x6075);
            if (!(x6076)) break; 
            
            GList* x6077 = x6073;
            void* x6078 = g_list_nth_data(x6077, 0);
            struct PARTRecord* x6079 = (struct PARTRecord*){x6078};
            GList* x6080 = x6073;
            GList* x6081 = g_list_next(x6080);
            x6073 = x6081;
            numeric_int_t x6083 = x6079->P_PARTKEY;
            boolean_t x6084 = x6083==(x153);
            if(x6084) {
              char* x569 = x6079->P_NAME;
              char* x570 = x6079->P_MFGR;
              char* x571 = x6079->P_BRAND;
              char* x572 = x6079->P_TYPE;
              numeric_int_t x573 = x6079->P_SIZE;
              char* x574 = x6079->P_CONTAINER;
              double x575 = x6079->P_RETAILPRICE;
              char* x576 = x6079->P_COMMENT;
              numeric_int_t x577 = x147->L_ORDERKEY;
              numeric_int_t x578 = x147->L_SUPPKEY;
              numeric_int_t x579 = x147->L_LINENUMBER;
              double x580 = x147->L_QUANTITY;
              double x581 = x147->L_EXTENDEDPRICE;
              double x582 = x147->L_DISCOUNT;
              double x583 = x147->L_TAX;
              char x584 = x147->L_RETURNFLAG;
              char x585 = x147->L_LINESTATUS;
              numeric_int_t x586 = x147->L_COMMITDATE;
              numeric_int_t x587 = x147->L_RECEIPTDATE;
              char* x588 = x147->L_SHIPINSTRUCT;
              char* x589 = x147->L_SHIPMODE;
              char* x590 = x147->L_COMMENT;
              struct PARTRecord_LINEITEMRecord* x4497 = (struct PARTRecord_LINEITEMRecord*)malloc(1 * sizeof(struct PARTRecord_LINEITEMRecord));
              memset(x4497, 0, 1 * sizeof(struct PARTRecord_LINEITEMRecord));
              x4497->P_PARTKEY = x6083; x4497->P_NAME = x569; x4497->P_MFGR = x570; x4497->P_BRAND = x571; x4497->P_TYPE = x572; x4497->P_SIZE = x573; x4497->P_CONTAINER = x574; x4497->P_RETAILPRICE = x575; x4497->P_COMMENT = x576; x4497->L_ORDERKEY = x577; x4497->L_PARTKEY = x153; x4497->L_SUPPKEY = x578; x4497->L_LINENUMBER = x579; x4497->L_QUANTITY = x580; x4497->L_EXTENDEDPRICE = x581; x4497->L_DISCOUNT = x582; x4497->L_TAX = x583; x4497->L_RETURNFLAG = x584; x4497->L_LINESTATUS = x585; x4497->L_SHIPDATE = x149; x4497->L_COMMITDATE = x586; x4497->L_RECEIPTDATE = x587; x4497->L_SHIPINSTRUCT = x588; x4497->L_SHIPMODE = x589; x4497->L_COMMENT = x590;
              double* x220 = x15304->aggs;
              double x234 = x220[0];
              char* x235 = x4497->P_TYPE;
              numeric_int_t x10115 = strlen("PROMO");
              numeric_int_t x10116 = strncmp(x235, "PROMO", x10115);
              boolean_t x10117 = x10116==(0);
              /* VAR */ double ite12836 = 0;
              if(x10117) {
                double x12837 = x4497->L_EXTENDEDPRICE;
                double x12838 = x4497->L_DISCOUNT;
                double x12839 = 1.0-(x12838);
                double x12840 = x12837*(x12839);
                double x12841 = x234+(x12840);
                ite12836 = x12841;
              } else {
                
                ite12836 = x234;
              };
              double x242 = ite12836;
              *x220 = x242;
              double x250 = x220[1];
              double x251 = x4497->L_EXTENDEDPRICE;
              double x252 = x4497->L_DISCOUNT;
              double x253 = 1.0-(x252);
              double x254 = x251*(x253);
              double x255 = x250+(x254);
              *(x220 + 1) = x255;
            };
          };
        };
      };
      numeric_int_t x1369 = x15327;
      numeric_int_t x267 = x1369+(1);
      x15327 = x267;
    };
    double* x15519 = x15304->aggs;
    double x15520 = x15519[0];
    double x15521 = x15520*(100.0);
    double x15522 = x15519[1];
    double x15523 = x15521/(x15522);
    *(x15519 + 2) = x15523;
    if(0) {
      x15328 = 1;
    } else {
      
      double x290 = x15519[2];
      printf("%.4f\n", x290);
      numeric_int_t x1395 = x15329;
      numeric_int_t x293 = x1395+(1);
      x15329 = x293;
    };
    numeric_int_t x15532 = x15329;
    printf("(%d rows)\n", x15532);
    struct timeval* x15534 = &x15323;
    gettimeofday(x15534, NULL);
    struct timeval* x15536 = &x15319;
    struct timeval* x15537 = &x15323;
    struct timeval* x15538 = &x15321;
    long x15539 = timeval_subtract(x15536, x15537, x15538);
    printf("Generated code run in %ld milliseconds.\n", x15539);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x15307(void* x4921) {
  numeric_int_t x4922 = g_direct_hash(x4921);
  return x4922; 
}

numeric_int_t x15310(void* x4924, void* x4925) {
  numeric_int_t x4926 = g_direct_equal(x4924, x4925);
  return x4926; 
}
