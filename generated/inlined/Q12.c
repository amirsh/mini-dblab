#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct LINEITEMRecord;
struct AGGRecord_OptimalString;
struct ORDERSRecord_LINEITEMRecord;
struct ORDERSRecord;
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

struct ORDERSRecord_LINEITEMRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  numeric_int_t O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  numeric_int_t O_SHIPPRIORITY;
  char* O_COMMENT;
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


numeric_int_t x19659(char* x6082);

boolean_t x19677(char* x6087, char* x6088);

numeric_int_t x19683(void* x5051);

numeric_int_t x19686(void* x5054, void* x5055);

numeric_int_t x19710(struct AGGRecord_OptimalString* x131, struct AGGRecord_OptimalString* x132);

numeric_int_t x6353(void* x6347, void* x6348, void* x6349);

int main(int argc, char** argv) {
  FILE* x2797 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x2798 = 0;
  numeric_int_t x2799 = x2798;
  numeric_int_t* x2800 = &x2799;
  numeric_int_t x2801 = fscanf(x2797, "%d", x2800);
  pclose(x2797);
  struct LINEITEMRecord* x3755 = (struct LINEITEMRecord*)malloc(x2799 * sizeof(struct LINEITEMRecord));
  memset(x3755, 0, x2799 * sizeof(struct LINEITEMRecord));
  numeric_int_t x2805 = O_RDONLY;
  numeric_int_t x2806 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x2805);
  struct stat x2807 = (struct stat){0};
  /* VAR */ struct stat x2808 = x2807;
  struct stat x2809 = x2808;
  struct stat* x2810 = &x2809;
  numeric_int_t x2811 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x2810);
  size_t x2812 = x2810->st_size;
  numeric_int_t x2813 = PROT_READ;
  numeric_int_t x2814 = MAP_PRIVATE;
  char* x2815 = mmap(NULL, x2812, x2813, x2814, x2806, 0);
  /* VAR */ char* x2816 = x2815;
  char* x3 = x2816;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x2799);
    /* VAR */ boolean_t ite15265 = 0;
    if(x6) {
      char x18912 = *x3;
      boolean_t x18913 = x18912!=('\0');
      ite15265 = x18913;
    } else {
      
      ite15265 = 0;
    };
    boolean_t x14283 = ite15265;
    if (!(x14283)) break; 
    
    /* VAR */ numeric_int_t x2824 = 0;
    numeric_int_t x2825 = x2824;
    numeric_int_t* x2826 = &x2825;
    char* x2827 = strntoi_unchecked(x3, x2826);
    x3 = x2827;
    /* VAR */ numeric_int_t x2829 = 0;
    numeric_int_t x2830 = x2829;
    numeric_int_t* x2831 = &x2830;
    char* x2832 = strntoi_unchecked(x3, x2831);
    x3 = x2832;
    /* VAR */ numeric_int_t x2834 = 0;
    numeric_int_t x2835 = x2834;
    numeric_int_t* x2836 = &x2835;
    char* x2837 = strntoi_unchecked(x3, x2836);
    x3 = x2837;
    /* VAR */ numeric_int_t x2839 = 0;
    numeric_int_t x2840 = x2839;
    numeric_int_t* x2841 = &x2840;
    char* x2842 = strntoi_unchecked(x3, x2841);
    x3 = x2842;
    /* VAR */ double x2844 = 0.0;
    double x2845 = x2844;
    double* x2846 = &x2845;
    char* x2847 = strntod_unchecked(x3, x2846);
    x3 = x2847;
    /* VAR */ double x2849 = 0.0;
    double x2850 = x2849;
    double* x2851 = &x2850;
    char* x2852 = strntod_unchecked(x3, x2851);
    x3 = x2852;
    /* VAR */ double x2854 = 0.0;
    double x2855 = x2854;
    double* x2856 = &x2855;
    char* x2857 = strntod_unchecked(x3, x2856);
    x3 = x2857;
    /* VAR */ double x2859 = 0.0;
    double x2860 = x2859;
    double* x2861 = &x2860;
    char* x2862 = strntod_unchecked(x3, x2861);
    x3 = x2862;
    char x2864 = *x3;
    /* VAR */ char x2865 = x2864;
    x3 += 1;
    x3 += 1;
    char x2868 = x2865;
    char x2869 = *x3;
    /* VAR */ char x2870 = x2869;
    x3 += 1;
    x3 += 1;
    char x2873 = x2870;
    /* VAR */ numeric_int_t x2874 = 0;
    numeric_int_t x2875 = x2874;
    numeric_int_t* x2876 = &x2875;
    char* x2877 = strntoi_unchecked(x3, x2876);
    x3 = x2877;
    /* VAR */ numeric_int_t x2879 = 0;
    numeric_int_t x2880 = x2879;
    numeric_int_t* x2881 = &x2880;
    char* x2882 = strntoi_unchecked(x3, x2881);
    x3 = x2882;
    /* VAR */ numeric_int_t x2884 = 0;
    numeric_int_t x2885 = x2884;
    numeric_int_t* x2886 = &x2885;
    char* x2887 = strntoi_unchecked(x3, x2886);
    x3 = x2887;
    numeric_int_t x2889 = x2875*(10000);
    numeric_int_t x2890 = x2880*(100);
    numeric_int_t x2891 = x2889+(x2890);
    numeric_int_t x2892 = x2891+(x2885);
    /* VAR */ numeric_int_t x2893 = 0;
    numeric_int_t x2894 = x2893;
    numeric_int_t* x2895 = &x2894;
    char* x2896 = strntoi_unchecked(x3, x2895);
    x3 = x2896;
    /* VAR */ numeric_int_t x2898 = 0;
    numeric_int_t x2899 = x2898;
    numeric_int_t* x2900 = &x2899;
    char* x2901 = strntoi_unchecked(x3, x2900);
    x3 = x2901;
    /* VAR */ numeric_int_t x2903 = 0;
    numeric_int_t x2904 = x2903;
    numeric_int_t* x2905 = &x2904;
    char* x2906 = strntoi_unchecked(x3, x2905);
    x3 = x2906;
    numeric_int_t x2908 = x2894*(10000);
    numeric_int_t x2909 = x2899*(100);
    numeric_int_t x2910 = x2908+(x2909);
    numeric_int_t x2911 = x2910+(x2904);
    /* VAR */ numeric_int_t x2912 = 0;
    numeric_int_t x2913 = x2912;
    numeric_int_t* x2914 = &x2913;
    char* x2915 = strntoi_unchecked(x3, x2914);
    x3 = x2915;
    /* VAR */ numeric_int_t x2917 = 0;
    numeric_int_t x2918 = x2917;
    numeric_int_t* x2919 = &x2918;
    char* x2920 = strntoi_unchecked(x3, x2919);
    x3 = x2920;
    /* VAR */ numeric_int_t x2922 = 0;
    numeric_int_t x2923 = x2922;
    numeric_int_t* x2924 = &x2923;
    char* x2925 = strntoi_unchecked(x3, x2924);
    x3 = x2925;
    numeric_int_t x2927 = x2913*(10000);
    numeric_int_t x2928 = x2918*(100);
    numeric_int_t x2929 = x2927+(x2928);
    numeric_int_t x2930 = x2929+(x2923);
    /* VAR */ char* x2931 = x3;
    while(1) {
      
      char x2932 = *x3;
      boolean_t x2933 = x2932!=('|');
      /* VAR */ boolean_t ite15385 = 0;
      if(x2933) {
        char x19031 = *x3;
        boolean_t x19032 = x19031!=('\n');
        ite15385 = x19032;
      } else {
        
        ite15385 = 0;
      };
      boolean_t x14396 = ite15385;
      if (!(x14396)) break; 
      
      x3 += 1;
    };
    char* x2939 = x2931;
    numeric_int_t x2940 = x3 - x2939;
    numeric_int_t x2941 = x2940+(1);
    char* x3894 = (char*)malloc(x2941 * sizeof(char));
    memset(x3894, 0, x2941 * sizeof(char));
    char* x2944 = x2931;
    char* x2945 = strncpy(x3894, x2944, x2940);
    x3 += 1;
    /* VAR */ char* x2947 = x3;
    while(1) {
      
      char x2948 = *x3;
      boolean_t x2949 = x2948!=('|');
      /* VAR */ boolean_t ite15406 = 0;
      if(x2949) {
        char x19051 = *x3;
        boolean_t x19052 = x19051!=('\n');
        ite15406 = x19052;
      } else {
        
        ite15406 = 0;
      };
      boolean_t x14410 = ite15406;
      if (!(x14410)) break; 
      
      x3 += 1;
    };
    char* x2955 = x2947;
    numeric_int_t x2956 = x3 - x2955;
    numeric_int_t x2957 = x2956+(1);
    char* x3910 = (char*)malloc(x2957 * sizeof(char));
    memset(x3910, 0, x2957 * sizeof(char));
    char* x2960 = x2947;
    char* x2961 = strncpy(x3910, x2960, x2956);
    x3 += 1;
    /* VAR */ char* x2963 = x3;
    while(1) {
      
      char x2964 = *x3;
      boolean_t x2965 = x2964!=('|');
      /* VAR */ boolean_t ite15427 = 0;
      if(x2965) {
        char x19071 = *x3;
        boolean_t x19072 = x19071!=('\n');
        ite15427 = x19072;
      } else {
        
        ite15427 = 0;
      };
      boolean_t x14424 = ite15427;
      if (!(x14424)) break; 
      
      x3 += 1;
    };
    char* x2971 = x2963;
    numeric_int_t x2972 = x3 - x2971;
    numeric_int_t x2973 = x2972+(1);
    char* x3926 = (char*)malloc(x2973 * sizeof(char));
    memset(x3926, 0, x2973 * sizeof(char));
    char* x2976 = x2963;
    char* x2977 = strncpy(x3926, x2976, x2972);
    x3 += 1;
    struct LINEITEMRecord* x4413 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4413, 0, 1 * sizeof(struct LINEITEMRecord));
    x4413->L_ORDERKEY = x2825; x4413->L_PARTKEY = x2830; x4413->L_SUPPKEY = x2835; x4413->L_LINENUMBER = x2840; x4413->L_QUANTITY = x2845; x4413->L_EXTENDEDPRICE = x2850; x4413->L_DISCOUNT = x2855; x4413->L_TAX = x2860; x4413->L_RETURNFLAG = x2868; x4413->L_LINESTATUS = x2873; x4413->L_SHIPDATE = x2892; x4413->L_COMMITDATE = x2911; x4413->L_RECEIPTDATE = x2930; x4413->L_SHIPINSTRUCT = x3894; x4413->L_SHIPMODE = x3910; x4413->L_COMMENT = x3926;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x3933 = *x4413;
    *(x3755 + x26) = x3933;
    struct LINEITEMRecord* x3935 = &(x3755[x26]);
    x4413 = x3935;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x2986 = x2816;
  munmap(x2986, x2812);
  FILE* x2987 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x2988 = 0;
  numeric_int_t x2989 = x2988;
  numeric_int_t* x2990 = &x2989;
  numeric_int_t x2991 = fscanf(x2987, "%d", x2990);
  pclose(x2987);
  struct ORDERSRecord* x3948 = (struct ORDERSRecord*)malloc(x2989 * sizeof(struct ORDERSRecord));
  memset(x3948, 0, x2989 * sizeof(struct ORDERSRecord));
  numeric_int_t x2995 = O_RDONLY;
  numeric_int_t x2996 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x2995);
  /* VAR */ struct stat x2997 = x2807;
  struct stat x2998 = x2997;
  struct stat* x2999 = &x2998;
  numeric_int_t x3000 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x2999);
  size_t x3001 = x2999->st_size;
  numeric_int_t x3002 = PROT_READ;
  numeric_int_t x3003 = MAP_PRIVATE;
  char* x3004 = mmap(NULL, x3001, x3002, x3003, x2996, 0);
  /* VAR */ char* x3005 = x3004;
  char* x35 = x3005;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x2989);
    /* VAR */ boolean_t ite15480 = 0;
    if(x38) {
      char x19123 = *x35;
      boolean_t x19124 = x19123!=('\0');
      ite15480 = x19124;
    } else {
      
      ite15480 = 0;
    };
    boolean_t x14470 = ite15480;
    if (!(x14470)) break; 
    
    /* VAR */ numeric_int_t x3013 = 0;
    numeric_int_t x3014 = x3013;
    numeric_int_t* x3015 = &x3014;
    char* x3016 = strntoi_unchecked(x35, x3015);
    x35 = x3016;
    /* VAR */ numeric_int_t x3018 = 0;
    numeric_int_t x3019 = x3018;
    numeric_int_t* x3020 = &x3019;
    char* x3021 = strntoi_unchecked(x35, x3020);
    x35 = x3021;
    char x3023 = *x35;
    /* VAR */ char x3024 = x3023;
    x35 += 1;
    x35 += 1;
    char x3027 = x3024;
    /* VAR */ double x3028 = 0.0;
    double x3029 = x3028;
    double* x3030 = &x3029;
    char* x3031 = strntod_unchecked(x35, x3030);
    x35 = x3031;
    /* VAR */ numeric_int_t x3033 = 0;
    numeric_int_t x3034 = x3033;
    numeric_int_t* x3035 = &x3034;
    char* x3036 = strntoi_unchecked(x35, x3035);
    x35 = x3036;
    /* VAR */ numeric_int_t x3038 = 0;
    numeric_int_t x3039 = x3038;
    numeric_int_t* x3040 = &x3039;
    char* x3041 = strntoi_unchecked(x35, x3040);
    x35 = x3041;
    /* VAR */ numeric_int_t x3043 = 0;
    numeric_int_t x3044 = x3043;
    numeric_int_t* x3045 = &x3044;
    char* x3046 = strntoi_unchecked(x35, x3045);
    x35 = x3046;
    numeric_int_t x3048 = x3034*(10000);
    numeric_int_t x3049 = x3039*(100);
    numeric_int_t x3050 = x3048+(x3049);
    numeric_int_t x3051 = x3050+(x3044);
    /* VAR */ char* x3052 = x35;
    while(1) {
      
      char x3053 = *x35;
      boolean_t x3054 = x3053!=('|');
      /* VAR */ boolean_t ite15532 = 0;
      if(x3054) {
        char x19174 = *x35;
        boolean_t x19175 = x19174!=('\n');
        ite15532 = x19175;
      } else {
        
        ite15532 = 0;
      };
      boolean_t x14515 = ite15532;
      if (!(x14515)) break; 
      
      x35 += 1;
    };
    char* x3060 = x3052;
    numeric_int_t x3061 = x35 - x3060;
    numeric_int_t x3062 = x3061+(1);
    char* x4018 = (char*)malloc(x3062 * sizeof(char));
    memset(x4018, 0, x3062 * sizeof(char));
    char* x3065 = x3052;
    char* x3066 = strncpy(x4018, x3065, x3061);
    x35 += 1;
    /* VAR */ char* x3068 = x35;
    while(1) {
      
      char x3069 = *x35;
      boolean_t x3070 = x3069!=('|');
      /* VAR */ boolean_t ite15553 = 0;
      if(x3070) {
        char x19194 = *x35;
        boolean_t x19195 = x19194!=('\n');
        ite15553 = x19195;
      } else {
        
        ite15553 = 0;
      };
      boolean_t x14529 = ite15553;
      if (!(x14529)) break; 
      
      x35 += 1;
    };
    char* x3076 = x3068;
    numeric_int_t x3077 = x35 - x3076;
    numeric_int_t x3078 = x3077+(1);
    char* x4034 = (char*)malloc(x3078 * sizeof(char));
    memset(x4034, 0, x3078 * sizeof(char));
    char* x3081 = x3068;
    char* x3082 = strncpy(x4034, x3081, x3077);
    x35 += 1;
    /* VAR */ numeric_int_t x3084 = 0;
    numeric_int_t x3085 = x3084;
    numeric_int_t* x3086 = &x3085;
    char* x3087 = strntoi_unchecked(x35, x3086);
    x35 = x3087;
    /* VAR */ char* x3089 = x35;
    while(1) {
      
      char x3090 = *x35;
      boolean_t x3091 = x3090!=('|');
      /* VAR */ boolean_t ite15579 = 0;
      if(x3091) {
        char x19219 = *x35;
        boolean_t x19220 = x19219!=('\n');
        ite15579 = x19220;
      } else {
        
        ite15579 = 0;
      };
      boolean_t x14548 = ite15579;
      if (!(x14548)) break; 
      
      x35 += 1;
    };
    char* x3097 = x3089;
    numeric_int_t x3098 = x35 - x3097;
    numeric_int_t x3099 = x3098+(1);
    char* x4055 = (char*)malloc(x3099 * sizeof(char));
    memset(x4055, 0, x3099 * sizeof(char));
    char* x3102 = x3089;
    char* x3103 = strncpy(x4055, x3102, x3098);
    x35 += 1;
    struct ORDERSRecord* x4544 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x4544, 0, 1 * sizeof(struct ORDERSRecord));
    x4544->O_ORDERKEY = x3014; x4544->O_CUSTKEY = x3019; x4544->O_ORDERSTATUS = x3027; x4544->O_TOTALPRICE = x3029; x4544->O_ORDERDATE = x3051; x4544->O_ORDERPRIORITY = x4018; x4544->O_CLERK = x4034; x4544->O_SHIPPRIORITY = x3085; x4544->O_COMMENT = x4055;
    numeric_int_t x51 = x36;
    struct ORDERSRecord x4062 = *x4544;
    *(x3948 + x51) = x4062;
    struct ORDERSRecord* x4064 = &(x3948[x51]);
    x4544 = x4064;
    numeric_int_t x53 = x36;
    numeric_int_t x54 = x53+(1);
    x36 = x54;
  };
  char* x3112 = x3005;
  munmap(x3112, x3001);
  numeric_int_t x59 = 0;
  for(; x59 < 1 ; x59 += 1) {
    
    GHashTable* x19682 = g_hash_table_new(x19659, x19677);
    void*** x19690 = (void***){x19683};
    numeric_int_t* x19691 = (numeric_int_t*){x19686};
    GHashTable* x19692 = g_hash_table_new(x19690, x19691);
    struct timeval x19693 = (struct timeval){0};
    /* VAR */ struct timeval x19694 = x19693;
    struct timeval x19695 = x19694;
    /* VAR */ struct timeval x19696 = x19693;
    struct timeval x19697 = x19696;
    /* VAR */ struct timeval x19698 = x19693;
    struct timeval x19699 = x19698;
    struct timeval* x19700 = &x19697;
    gettimeofday(x19700, NULL);
    /* VAR */ numeric_int_t x19702 = 0;
    /* VAR */ numeric_int_t x19703 = 0;
    numeric_int_t* x19716 = &(x19710);
    GTree* x19717 = g_tree_new(x19716);
    /* VAR */ boolean_t x19718 = 0;
    /* VAR */ numeric_int_t x19719 = 0;
    while(1) {
      
      numeric_int_t x19721 = x19702;
      boolean_t x19722 = x19721<(x2989);
      if (!(x19722)) break; 
      
      numeric_int_t x1359 = x19702;
      struct ORDERSRecord* x153 = &(x3948[x1359]);
      numeric_int_t x155 = x153->O_ORDERKEY;
      void* x5089 = (void*){x155};
      void* x5090 = (void*){x153};
      void* x5091 = g_hash_table_lookup(x19692, x5089);
      GList** x5092 = (GList**){x5091};
      GList** x5093 = NULL;
      boolean_t x5094 = x5092==(x5093);
      /* VAR */ GList** ite14980 = 0;
      if(x5094) {
        GList** x14981 = malloc(8);
        GList* x14982 = NULL;
        pointer_assign(x14981, x14982);
        ite14980 = x14981;
      } else {
        
        ite14980 = x5092;
      };
      GList** x5098 = ite14980;
      GList* x5099 = *(x5098);
      GList* x5100 = g_list_prepend(x5099, x5090);
      pointer_assign(x5098, x5100);
      void* x5102 = (void*){x5098};
      g_hash_table_insert(x19692, x5089, x5102);
      numeric_int_t x1364 = x19702;
      numeric_int_t x159 = x1364+(1);
      x19702 = x159;
    };
    while(1) {
      
      numeric_int_t x19750 = x19703;
      boolean_t x19751 = x19750<(x2799);
      if (!(x19751)) break; 
      
      numeric_int_t x1373 = x19703;
      struct LINEITEMRecord* x168 = &(x3755[x1373]);
      numeric_int_t x170 = x168->L_RECEIPTDATE;
      boolean_t x171 = x170<(19950101);
      /* VAR */ boolean_t ite16129 = 0;
      if(x171) {
        numeric_int_t x19758 = x168->L_COMMITDATE;
        boolean_t x19759 = x19758<(19950101);
        ite16129 = x19759;
      } else {
        
        ite16129 = 0;
      };
      boolean_t x15003 = ite16129;
      /* VAR */ boolean_t ite16138 = 0;
      if(x15003) {
        numeric_int_t x19766 = x168->L_SHIPDATE;
        boolean_t x19767 = x19766<(19950101);
        ite16138 = x19767;
      } else {
        
        ite16138 = 0;
      };
      boolean_t x15005 = ite16138;
      /* VAR */ boolean_t ite16147 = 0;
      if(x15005) {
        numeric_int_t x19774 = x168->L_SHIPDATE;
        numeric_int_t x19775 = x168->L_COMMITDATE;
        boolean_t x19776 = x19774<(x19775);
        ite16147 = x19776;
      } else {
        
        ite16147 = 0;
      };
      boolean_t x15007 = ite16147;
      /* VAR */ boolean_t ite16157 = 0;
      if(x15007) {
        numeric_int_t x19783 = x168->L_COMMITDATE;
        boolean_t x19784 = x19783<(x170);
        ite16157 = x19784;
      } else {
        
        ite16157 = 0;
      };
      boolean_t x15009 = ite16157;
      /* VAR */ boolean_t ite16166 = 0;
      if(x15009) {
        boolean_t x19791 = x170>=(19940101);
        ite16166 = x19791;
      } else {
        
        ite16166 = 0;
      };
      boolean_t x15011 = ite16166;
      /* VAR */ boolean_t ite16174 = 0;
      if(x15011) {
        char* x19798 = x168->L_SHIPMODE;
        boolean_t x19799 = strcmp(x19798, "MAIL");
        boolean_t x19800 = x19799==(0);
        /* VAR */ boolean_t x19801 = 0;
        if(x19800) {
          x19801 = 1;
        } else {
          
          boolean_t x19804 = strcmp(x19798, "SHIP");
          boolean_t x19805 = x19804==(0);
          x19801 = x19805;
        };
        boolean_t x19808 = x19801;
        ite16174 = x19808;
      } else {
        
        ite16174 = 0;
      };
      boolean_t x15013 = ite16174;
      if(x15013) {
        numeric_int_t x192 = x168->L_ORDERKEY;
        void* x5137 = (void*){x192};
        void* x5138 = g_hash_table_lookup(x19692, x5137);
        GList** x5139 = (GList**){x5138};
        boolean_t x9298 = x5139!=(NULL);
        if(x9298) {
          GList* x6251 = *(x5139);
          /* VAR */ GList* x6252 = x6251;
          while(1) {
            
            GList* x6253 = x6252;
            GList* x6254 = NULL;
            boolean_t x6255 = x6253!=(x6254);
            if (!(x6255)) break; 
            
            GList* x6256 = x6252;
            void* x6257 = g_list_nth_data(x6256, 0);
            struct ORDERSRecord* x6258 = (struct ORDERSRecord*){x6257};
            GList* x6259 = x6252;
            GList* x6260 = g_list_next(x6259);
            x6252 = x6260;
            numeric_int_t x6262 = x6258->O_ORDERKEY;
            boolean_t x6263 = x6262==(x192);
            if(x6263) {
              numeric_int_t x657 = x6258->O_CUSTKEY;
              char x658 = x6258->O_ORDERSTATUS;
              double x659 = x6258->O_TOTALPRICE;
              numeric_int_t x660 = x6258->O_ORDERDATE;
              char* x661 = x6258->O_ORDERPRIORITY;
              char* x662 = x6258->O_CLERK;
              numeric_int_t x663 = x6258->O_SHIPPRIORITY;
              char* x664 = x6258->O_COMMENT;
              numeric_int_t x665 = x168->L_PARTKEY;
              numeric_int_t x666 = x168->L_SUPPKEY;
              numeric_int_t x667 = x168->L_LINENUMBER;
              double x668 = x168->L_QUANTITY;
              double x669 = x168->L_EXTENDEDPRICE;
              double x670 = x168->L_DISCOUNT;
              double x671 = x168->L_TAX;
              char x672 = x168->L_RETURNFLAG;
              char x673 = x168->L_LINESTATUS;
              numeric_int_t x674 = x168->L_SHIPDATE;
              numeric_int_t x675 = x168->L_COMMITDATE;
              char* x676 = x168->L_SHIPINSTRUCT;
              char* x677 = x168->L_SHIPMODE;
              char* x678 = x168->L_COMMENT;
              struct ORDERSRecord_LINEITEMRecord* x4655 = (struct ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct ORDERSRecord_LINEITEMRecord));
              memset(x4655, 0, 1 * sizeof(struct ORDERSRecord_LINEITEMRecord));
              x4655->O_ORDERKEY = x6262; x4655->O_CUSTKEY = x657; x4655->O_ORDERSTATUS = x658; x4655->O_TOTALPRICE = x659; x4655->O_ORDERDATE = x660; x4655->O_ORDERPRIORITY = x661; x4655->O_CLERK = x662; x4655->O_SHIPPRIORITY = x663; x4655->O_COMMENT = x664; x4655->L_ORDERKEY = x192; x4655->L_PARTKEY = x665; x4655->L_SUPPKEY = x666; x4655->L_LINENUMBER = x667; x4655->L_QUANTITY = x668; x4655->L_EXTENDEDPRICE = x669; x4655->L_DISCOUNT = x670; x4655->L_TAX = x671; x4655->L_RETURNFLAG = x672; x4655->L_LINESTATUS = x673; x4655->L_SHIPDATE = x674; x4655->L_COMMITDATE = x675; x4655->L_RECEIPTDATE = x170; x4655->L_SHIPINSTRUCT = x676; x4655->L_SHIPMODE = x677; x4655->L_COMMENT = x678;
              char* x256 = x4655->L_SHIPMODE;
              void* x6291 = g_hash_table_lookup(x19682, x256);
              boolean_t x6224 = x6291==(NULL);
              /* VAR */ struct AGGRecord_OptimalString* ite15137 = 0;
              if(x6224) {
                double* x15138 = (double*)malloc(2 * sizeof(double));
                memset(x15138, 0, 2 * sizeof(double));
                struct AGGRecord_OptimalString* x15139 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
                memset(x15139, 0, 1 * sizeof(struct AGGRecord_OptimalString));
                x15139->key = x256; x15139->aggs = x15138;
                g_hash_table_insert(x19682, x256, x15139);
                ite15137 = x15139;
              } else {
                
                ite15137 = x6291;
              };
              struct AGGRecord_OptimalString* x6234 = ite15137;
              double* x261 = x6234->aggs;
              double x275 = x261[0];
              char* x276 = x4655->O_ORDERPRIORITY;
              boolean_t x11928 = strcmp(x276, "1-URGENT");
              boolean_t x11929 = x11928==(0);
              /* VAR */ boolean_t ite16338 = 0;
              if(x11929) {
                ite16338 = 1;
              } else {
                
                boolean_t x19966 = strcmp(x276, "2-HIGH");
                boolean_t x19967 = x19966==(0);
                ite16338 = x19967;
              };
              boolean_t x15153 = ite16338;
              /* VAR */ double ite15155 = 0;
              if(x15153) {
                double x15156 = x275+(1.0);
                ite15155 = x15156;
              } else {
                
                ite15155 = x275;
              };
              double x282 = ite15155;
              *x261 = x282;
              double x290 = x261[1];
              boolean_t x11937 = strcmp(x276, "1-URGENT");
              boolean_t x11938 = x11937!=(0);
              /* VAR */ boolean_t ite16358 = 0;
              if(x11938) {
                boolean_t x19984 = strcmp(x276, "2-HIGH");
                boolean_t x19985 = x19984!=(0);
                ite16358 = x19985;
              } else {
                
                ite16358 = 0;
              };
              boolean_t x15166 = ite16358;
              /* VAR */ double ite15168 = 0;
              if(x15166) {
                double x15169 = x290+(1.0);
                ite15168 = x15169;
              } else {
                
                ite15168 = x290;
              };
              double x296 = ite15168;
              *(x261 + 1) = x296;
            };
          };
        };
      };
      numeric_int_t x1554 = x19703;
      numeric_int_t x308 = x1554+(1);
      x19703 = x308;
    };
    GList* x20005 = g_hash_table_get_keys(x19682);
    /* VAR */ GList* x20006 = x20005;
    numeric_int_t x20007 = g_hash_table_size(x19682);
    numeric_int_t x13241 = 0;
    for(; x13241 < x20007 ; x13241 += 1) {
      
      GList* x13242 = x20006;
      void* x13243 = g_list_nth_data(x13242, 0);
      GList* x13244 = g_list_next(x13242);
      x20006 = x13244;
      void* x13246 = g_hash_table_lookup(x19682, x13243);
      struct AGGRecord_OptimalString* x13248 = (struct AGGRecord_OptimalString*){x13246};
      g_tree_insert(x19717, x13248, x13248);
    };
    while(1) {
      
      boolean_t x1564 = x19718;
      boolean_t x320 = !(x1564);
      /* VAR */ boolean_t ite16407 = 0;
      if(x320) {
        numeric_int_t x20032 = g_tree_nnodes(x19717);
        boolean_t x20033 = x20032!=(0);
        ite16407 = x20033;
      } else {
        
        ite16407 = 0;
      };
      boolean_t x15208 = ite16407;
      if (!(x15208)) break; 
      
      void* x6346 = NULL;
      void** x6354 = &(x6346);
      g_tree_foreach(x19717, x6353, x6354);
      struct AGGRecord_OptimalString* x6356 = (struct AGGRecord_OptimalString*){x6346};
      numeric_int_t x6357 = g_tree_remove(x19717, x6356);
      if(0) {
        x19718 = 1;
      } else {
        
        char* x333 = x6356->key;
        double* x335 = x6356->aggs;
        double x336 = x335[0];
        double x337 = x335[1];
        printf("%s|%.0f|%.0f\n", x333, x336, x337);
        numeric_int_t x1583 = x19719;
        numeric_int_t x340 = x1583+(1);
        x19719 = x340;
      };
    };
    numeric_int_t x20060 = x19719;
    printf("(%d rows)\n", x20060);
    struct timeval* x20062 = &x19699;
    gettimeofday(x20062, NULL);
    struct timeval* x20064 = &x19695;
    struct timeval* x20065 = &x19699;
    struct timeval* x20066 = &x19697;
    long x20067 = timeval_subtract(x20064, x20065, x20066);
    printf("Generated code run in %ld milliseconds.\n", x20067);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x19659(char* x6082) {
  numeric_int_t x11695 = strlen(x6082);
  /* VAR */ numeric_int_t x10434 = 0;
  /* VAR */ numeric_int_t x10435 = 0;
  while(1) {
    
    numeric_int_t x10436 = x10434;
    boolean_t x10437 = x10436<(x11695);
    if (!(x10437)) break; 
    
    numeric_int_t x10438 = x10435;
    numeric_int_t x10439 = x10434;
    char* x11703 = pointer_add(x6082, x10439);
    char x11704 = *(x11703);
    numeric_int_t x10442 = x10438+(x11704);
    x10435 = x10442;
    numeric_int_t x10444 = x10434;
    numeric_int_t x10445 = x10444+(1);
    x10434 = x10445;
  };
  numeric_int_t x10448 = x10435;
  return x10448; 
}

boolean_t x19677(char* x6087, char* x6088) {
  boolean_t x10452 = strcmp(x6087, x6088);
  boolean_t x10453 = !(x10452);
  return x10453; 
}

numeric_int_t x19683(void* x5051) {
  numeric_int_t x5052 = g_direct_hash(x5051);
  return x5052; 
}

numeric_int_t x19686(void* x5054, void* x5055) {
  numeric_int_t x5056 = g_direct_equal(x5054, x5055);
  return x5056; 
}

numeric_int_t x19710(struct AGGRecord_OptimalString* x131, struct AGGRecord_OptimalString* x132) {
  char* x133 = x131->key;
  char* x134 = x132->key;
  numeric_int_t x11750 = strcmp(x133, x134);
  return x11750; 
}

numeric_int_t x6353(void* x6347, void* x6348, void* x6349) {
  struct AGGRecord_OptimalString** x6350 = (struct AGGRecord_OptimalString**){x6349};
  struct AGGRecord_OptimalString* x6351 = (struct AGGRecord_OptimalString*){x6348};
  pointer_assign(x6350, x6351);
  return 1; 
}
