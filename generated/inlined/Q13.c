#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct ORDERSRecord;
struct AGGRecord_Int;
struct Q13IntRecord;
struct CUSTOMERRecord;
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

struct AGGRecord_Int {
  numeric_int_t key;
  double* aggs;
};

struct Q13IntRecord {
  numeric_int_t count;
};

struct CUSTOMERRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
};


numeric_int_t x12263(numeric_int_t x4043);

boolean_t x12265(numeric_int_t x4048, numeric_int_t x4049);

numeric_int_t x12366(struct AGGRecord_Int* x121, struct AGGRecord_Int* x122);

numeric_int_t x4189(void* x4183, void* x4184, void* x4185);

int main(int argc, char** argv) {
  FILE* x1844 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", "r");
  /* VAR */ numeric_int_t x1845 = 0;
  numeric_int_t x1846 = x1845;
  numeric_int_t* x1847 = &x1846;
  numeric_int_t x1848 = fscanf(x1844, "%d", x1847);
  pclose(x1844);
  struct CUSTOMERRecord* x2600 = (struct CUSTOMERRecord*)malloc(x1846 * sizeof(struct CUSTOMERRecord));
  memset(x2600, 0, x1846 * sizeof(struct CUSTOMERRecord));
  numeric_int_t x1852 = O_RDONLY;
  numeric_int_t x1853 = open("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x1852);
  struct stat x1854 = (struct stat){0};
  /* VAR */ struct stat x1855 = x1854;
  struct stat x1856 = x1855;
  struct stat* x1857 = &x1856;
  numeric_int_t x1858 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x1857);
  size_t x1859 = x1857->st_size;
  numeric_int_t x1860 = PROT_READ;
  numeric_int_t x1861 = MAP_PRIVATE;
  char* x1862 = mmap(NULL, x1859, x1860, x1861, x1853, 0);
  /* VAR */ char* x1863 = x1862;
  char* x3 = x1863;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x1846);
    /* VAR */ boolean_t ite10066 = 0;
    if(x6) {
      char x11721 = *x3;
      boolean_t x11722 = x11721!=('\0');
      ite10066 = x11722;
    } else {
      
      ite10066 = 0;
    };
    boolean_t x9343 = ite10066;
    if (!(x9343)) break; 
    
    /* VAR */ numeric_int_t x1871 = 0;
    numeric_int_t x1872 = x1871;
    numeric_int_t* x1873 = &x1872;
    char* x1874 = strntoi_unchecked(x3, x1873);
    x3 = x1874;
    /* VAR */ char* x1876 = x3;
    while(1) {
      
      char x1877 = *x3;
      boolean_t x1878 = x1877!=('|');
      /* VAR */ boolean_t ite10084 = 0;
      if(x1878) {
        char x11738 = *x3;
        boolean_t x11739 = x11738!=('\n');
        ite10084 = x11739;
      } else {
        
        ite10084 = 0;
      };
      boolean_t x9354 = ite10084;
      if (!(x9354)) break; 
      
      x3 += 1;
    };
    char* x1884 = x1876;
    numeric_int_t x1885 = x3 - x1884;
    numeric_int_t x1886 = x1885+(1);
    char* x2637 = (char*)malloc(x1886 * sizeof(char));
    memset(x2637, 0, x1886 * sizeof(char));
    char* x1889 = x1876;
    char* x1890 = strncpy(x2637, x1889, x1885);
    x3 += 1;
    /* VAR */ char* x1892 = x3;
    while(1) {
      
      char x1893 = *x3;
      boolean_t x1894 = x1893!=('|');
      /* VAR */ boolean_t ite10105 = 0;
      if(x1894) {
        char x11758 = *x3;
        boolean_t x11759 = x11758!=('\n');
        ite10105 = x11759;
      } else {
        
        ite10105 = 0;
      };
      boolean_t x9368 = ite10105;
      if (!(x9368)) break; 
      
      x3 += 1;
    };
    char* x1900 = x1892;
    numeric_int_t x1901 = x3 - x1900;
    numeric_int_t x1902 = x1901+(1);
    char* x2653 = (char*)malloc(x1902 * sizeof(char));
    memset(x2653, 0, x1902 * sizeof(char));
    char* x1905 = x1892;
    char* x1906 = strncpy(x2653, x1905, x1901);
    x3 += 1;
    /* VAR */ numeric_int_t x1908 = 0;
    numeric_int_t x1909 = x1908;
    numeric_int_t* x1910 = &x1909;
    char* x1911 = strntoi_unchecked(x3, x1910);
    x3 = x1911;
    /* VAR */ char* x1913 = x3;
    while(1) {
      
      char x1914 = *x3;
      boolean_t x1915 = x1914!=('|');
      /* VAR */ boolean_t ite10131 = 0;
      if(x1915) {
        char x11783 = *x3;
        boolean_t x11784 = x11783!=('\n');
        ite10131 = x11784;
      } else {
        
        ite10131 = 0;
      };
      boolean_t x9387 = ite10131;
      if (!(x9387)) break; 
      
      x3 += 1;
    };
    char* x1921 = x1913;
    numeric_int_t x1922 = x3 - x1921;
    numeric_int_t x1923 = x1922+(1);
    char* x2674 = (char*)malloc(x1923 * sizeof(char));
    memset(x2674, 0, x1923 * sizeof(char));
    char* x1926 = x1913;
    char* x1927 = strncpy(x2674, x1926, x1922);
    x3 += 1;
    /* VAR */ double x1929 = 0.0;
    double x1930 = x1929;
    double* x1931 = &x1930;
    char* x1932 = strntod_unchecked(x3, x1931);
    x3 = x1932;
    /* VAR */ char* x1934 = x3;
    while(1) {
      
      char x1935 = *x3;
      boolean_t x1936 = x1935!=('|');
      /* VAR */ boolean_t ite10157 = 0;
      if(x1936) {
        char x11808 = *x3;
        boolean_t x11809 = x11808!=('\n');
        ite10157 = x11809;
      } else {
        
        ite10157 = 0;
      };
      boolean_t x9406 = ite10157;
      if (!(x9406)) break; 
      
      x3 += 1;
    };
    char* x1942 = x1934;
    numeric_int_t x1943 = x3 - x1942;
    numeric_int_t x1944 = x1943+(1);
    char* x2695 = (char*)malloc(x1944 * sizeof(char));
    memset(x2695, 0, x1944 * sizeof(char));
    char* x1947 = x1934;
    char* x1948 = strncpy(x2695, x1947, x1943);
    x3 += 1;
    /* VAR */ char* x1950 = x3;
    while(1) {
      
      char x1951 = *x3;
      boolean_t x1952 = x1951!=('|');
      /* VAR */ boolean_t ite10178 = 0;
      if(x1952) {
        char x11828 = *x3;
        boolean_t x11829 = x11828!=('\n');
        ite10178 = x11829;
      } else {
        
        ite10178 = 0;
      };
      boolean_t x9420 = ite10178;
      if (!(x9420)) break; 
      
      x3 += 1;
    };
    char* x1958 = x1950;
    numeric_int_t x1959 = x3 - x1958;
    numeric_int_t x1960 = x1959+(1);
    char* x2711 = (char*)malloc(x1960 * sizeof(char));
    memset(x2711, 0, x1960 * sizeof(char));
    char* x1963 = x1950;
    char* x1964 = strncpy(x2711, x1963, x1959);
    x3 += 1;
    struct CUSTOMERRecord* x3100 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x3100, 0, 1 * sizeof(struct CUSTOMERRecord));
    x3100->C_CUSTKEY = x1872; x3100->C_NAME = x2637; x3100->C_ADDRESS = x2653; x3100->C_NATIONKEY = x1909; x3100->C_PHONE = x2674; x3100->C_ACCTBAL = x1930; x3100->C_MKTSEGMENT = x2695; x3100->C_COMMENT = x2711;
    numeric_int_t x18 = x4;
    struct CUSTOMERRecord x2718 = *x3100;
    *(x2600 + x18) = x2718;
    struct CUSTOMERRecord* x2720 = &(x2600[x18]);
    x3100 = x2720;
    numeric_int_t x20 = x4;
    numeric_int_t x21 = x20+(1);
    x4 = x21;
  };
  char* x1973 = x1863;
  munmap(x1973, x1859);
  FILE* x1974 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x1975 = 0;
  numeric_int_t x1976 = x1975;
  numeric_int_t* x1977 = &x1976;
  numeric_int_t x1978 = fscanf(x1974, "%d", x1977);
  pclose(x1974);
  struct ORDERSRecord* x2733 = (struct ORDERSRecord*)malloc(x1976 * sizeof(struct ORDERSRecord));
  memset(x2733, 0, x1976 * sizeof(struct ORDERSRecord));
  numeric_int_t x1982 = O_RDONLY;
  numeric_int_t x1983 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x1982);
  /* VAR */ struct stat x1984 = x1854;
  struct stat x1985 = x1984;
  struct stat* x1986 = &x1985;
  numeric_int_t x1987 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x1986);
  size_t x1988 = x1986->st_size;
  numeric_int_t x1989 = PROT_READ;
  numeric_int_t x1990 = MAP_PRIVATE;
  char* x1991 = mmap(NULL, x1988, x1989, x1990, x1983, 0);
  /* VAR */ char* x1992 = x1991;
  char* x27 = x1992;
  /* VAR */ numeric_int_t x28 = 0;
  while(1) {
    
    numeric_int_t x29 = x28;
    boolean_t x30 = x29<(x1976);
    /* VAR */ boolean_t ite10231 = 0;
    if(x30) {
      char x11880 = *x27;
      boolean_t x11881 = x11880!=('\0');
      ite10231 = x11881;
    } else {
      
      ite10231 = 0;
    };
    boolean_t x9466 = ite10231;
    if (!(x9466)) break; 
    
    /* VAR */ numeric_int_t x2000 = 0;
    numeric_int_t x2001 = x2000;
    numeric_int_t* x2002 = &x2001;
    char* x2003 = strntoi_unchecked(x27, x2002);
    x27 = x2003;
    /* VAR */ numeric_int_t x2005 = 0;
    numeric_int_t x2006 = x2005;
    numeric_int_t* x2007 = &x2006;
    char* x2008 = strntoi_unchecked(x27, x2007);
    x27 = x2008;
    char x2010 = *x27;
    /* VAR */ char x2011 = x2010;
    x27 += 1;
    x27 += 1;
    char x2014 = x2011;
    /* VAR */ double x2015 = 0.0;
    double x2016 = x2015;
    double* x2017 = &x2016;
    char* x2018 = strntod_unchecked(x27, x2017);
    x27 = x2018;
    /* VAR */ numeric_int_t x2020 = 0;
    numeric_int_t x2021 = x2020;
    numeric_int_t* x2022 = &x2021;
    char* x2023 = strntoi_unchecked(x27, x2022);
    x27 = x2023;
    /* VAR */ numeric_int_t x2025 = 0;
    numeric_int_t x2026 = x2025;
    numeric_int_t* x2027 = &x2026;
    char* x2028 = strntoi_unchecked(x27, x2027);
    x27 = x2028;
    /* VAR */ numeric_int_t x2030 = 0;
    numeric_int_t x2031 = x2030;
    numeric_int_t* x2032 = &x2031;
    char* x2033 = strntoi_unchecked(x27, x2032);
    x27 = x2033;
    numeric_int_t x2035 = x2021*(10000);
    numeric_int_t x2036 = x2026*(100);
    numeric_int_t x2037 = x2035+(x2036);
    numeric_int_t x2038 = x2037+(x2031);
    /* VAR */ char* x2039 = x27;
    while(1) {
      
      char x2040 = *x27;
      boolean_t x2041 = x2040!=('|');
      /* VAR */ boolean_t ite10283 = 0;
      if(x2041) {
        char x11931 = *x27;
        boolean_t x11932 = x11931!=('\n');
        ite10283 = x11932;
      } else {
        
        ite10283 = 0;
      };
      boolean_t x9511 = ite10283;
      if (!(x9511)) break; 
      
      x27 += 1;
    };
    char* x2047 = x2039;
    numeric_int_t x2048 = x27 - x2047;
    numeric_int_t x2049 = x2048+(1);
    char* x2803 = (char*)malloc(x2049 * sizeof(char));
    memset(x2803, 0, x2049 * sizeof(char));
    char* x2052 = x2039;
    char* x2053 = strncpy(x2803, x2052, x2048);
    x27 += 1;
    /* VAR */ char* x2055 = x27;
    while(1) {
      
      char x2056 = *x27;
      boolean_t x2057 = x2056!=('|');
      /* VAR */ boolean_t ite10304 = 0;
      if(x2057) {
        char x11951 = *x27;
        boolean_t x11952 = x11951!=('\n');
        ite10304 = x11952;
      } else {
        
        ite10304 = 0;
      };
      boolean_t x9525 = ite10304;
      if (!(x9525)) break; 
      
      x27 += 1;
    };
    char* x2063 = x2055;
    numeric_int_t x2064 = x27 - x2063;
    numeric_int_t x2065 = x2064+(1);
    char* x2819 = (char*)malloc(x2065 * sizeof(char));
    memset(x2819, 0, x2065 * sizeof(char));
    char* x2068 = x2055;
    char* x2069 = strncpy(x2819, x2068, x2064);
    x27 += 1;
    /* VAR */ numeric_int_t x2071 = 0;
    numeric_int_t x2072 = x2071;
    numeric_int_t* x2073 = &x2072;
    char* x2074 = strntoi_unchecked(x27, x2073);
    x27 = x2074;
    /* VAR */ char* x2076 = x27;
    while(1) {
      
      char x2077 = *x27;
      boolean_t x2078 = x2077!=('|');
      /* VAR */ boolean_t ite10330 = 0;
      if(x2078) {
        char x11976 = *x27;
        boolean_t x11977 = x11976!=('\n');
        ite10330 = x11977;
      } else {
        
        ite10330 = 0;
      };
      boolean_t x9544 = ite10330;
      if (!(x9544)) break; 
      
      x27 += 1;
    };
    char* x2084 = x2076;
    numeric_int_t x2085 = x27 - x2084;
    numeric_int_t x2086 = x2085+(1);
    char* x2840 = (char*)malloc(x2086 * sizeof(char));
    memset(x2840, 0, x2086 * sizeof(char));
    char* x2089 = x2076;
    char* x2090 = strncpy(x2840, x2089, x2085);
    x27 += 1;
    struct ORDERSRecord* x3231 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x3231, 0, 1 * sizeof(struct ORDERSRecord));
    x3231->O_ORDERKEY = x2001; x3231->O_CUSTKEY = x2006; x3231->O_ORDERSTATUS = x2014; x3231->O_TOTALPRICE = x2016; x3231->O_ORDERDATE = x2038; x3231->O_ORDERPRIORITY = x2803; x3231->O_CLERK = x2819; x3231->O_SHIPPRIORITY = x2072; x3231->O_COMMENT = x2840;
    numeric_int_t x43 = x28;
    struct ORDERSRecord x2847 = *x3231;
    *(x2733 + x43) = x2847;
    struct ORDERSRecord* x2849 = &(x2733[x43]);
    x3231 = x2849;
    numeric_int_t x45 = x28;
    numeric_int_t x46 = x45+(1);
    x28 = x46;
  };
  char* x2099 = x1992;
  munmap(x2099, x1988);
  struct Q13IntRecord* x2856 = (struct Q13IntRecord*)malloc(x1846 * sizeof(struct Q13IntRecord));
  memset(x2856, 0, x1846 * sizeof(struct Q13IntRecord));
  numeric_int_t x52 = 0;
  for(; x52 < x1846 ; x52 += 1) {
    
    struct Q13IntRecord* x12014 = (struct Q13IntRecord*)malloc(1 * sizeof(struct Q13IntRecord));
    memset(x12014, 0, 1 * sizeof(struct Q13IntRecord));
    x12014->count = 0;
    struct Q13IntRecord x12017 = *x12014;
    *(x2856 + x52) = x12017;
    struct Q13IntRecord* x12019 = &(x2856[x52]);
    x12014 = x12019;
  };
  numeric_int_t x58 = 0;
  for(; x58 < 1 ; x58 += 1) {
    
    GHashTable* x12269 = g_hash_table_new(x12263, x12265);
    struct timeval x12270 = (struct timeval){0};
    /* VAR */ struct timeval x12271 = x12270;
    struct timeval x12272 = x12271;
    /* VAR */ struct timeval x12273 = x12270;
    struct timeval x12274 = x12273;
    /* VAR */ struct timeval x12275 = x12270;
    struct timeval x12276 = x12275;
    struct timeval* x12277 = &x12274;
    gettimeofday(x12277, NULL);
    /* VAR */ numeric_int_t x12279 = 0;
    while(1) {
      
      numeric_int_t x12281 = x12279;
      boolean_t x12282 = x12281<(x1976);
      if (!(x12282)) break; 
      
      numeric_int_t x806 = x12279;
      struct ORDERSRecord* x87 = &(x2733[x806]);
      char* x89 = x87->O_COMMENT;
      char* x7630 = pointer_add(x89, 0);
      char* x7631 = strstr(x7630, "unusual");
      char* x7632 = NULL;
      boolean_t x7633 = x7631==(x7632);
      /* VAR */ numeric_int_t ite9842 = 0;
      if(x7633) {
        ite9842 = -1;
      } else {
        
        numeric_int_t x9844 = str_subtract(x7631, x89);
        ite9842 = x9844;
      };
      numeric_int_t x7635 = ite9842;
      char* x7636 = pointer_add(x89, x7635);
      char* x7637 = strstr(x7636, "packages");
      char* x7638 = NULL;
      boolean_t x7639 = x7637==(x7638);
      /* VAR */ numeric_int_t ite9853 = 0;
      if(x7639) {
        ite9853 = -1;
      } else {
        
        numeric_int_t x9855 = str_subtract(x7637, x89);
        ite9853 = x9855;
      };
      numeric_int_t x7641 = ite9853;
      boolean_t x92 = x7635!=(-1);
      /* VAR */ boolean_t ite10673 = 0;
      if(x92) {
        boolean_t x12311 = x7641!=(-1);
        ite10673 = x12311;
      } else {
        
        ite10673 = 0;
      };
      boolean_t x9861 = ite10673;
      boolean_t x95 = !(x9861);
      if(x95) {
        numeric_int_t x99 = x87->O_CUSTKEY;
        struct Q13IntRecord* x100 = &(x2856[x99]);
        numeric_int_t x101 = x100->count;
        numeric_int_t x102 = x101+(1);
        x100->count = x102;
      };
      numeric_int_t x826 = x12279;
      numeric_int_t x107 = x826+(1);
      x12279 = x107;
    };
    /* VAR */ numeric_int_t x12326 = 0;
    numeric_int_t* x12405 = &(x12366);
    GTree* x12406 = g_tree_new(x12405);
    /* VAR */ boolean_t x12407 = 0;
    /* VAR */ numeric_int_t x12408 = 0;
    while(1) {
      
      numeric_int_t x12410 = x12326;
      boolean_t x12411 = x12410<(x1846);
      if (!(x12411)) break; 
      
      numeric_int_t x888 = x12326;
      struct Q13IntRecord* x154 = &(x2856[x888]);
      numeric_int_t x156 = x154->count;
      void* x4587 = g_hash_table_lookup(x12269, x156);
      boolean_t x4137 = x4587==(NULL);
      /* VAR */ struct AGGRecord_Int* ite9963 = 0;
      if(x4137) {
        double* x9964 = (double*)malloc(1 * sizeof(double));
        memset(x9964, 0, 1 * sizeof(double));
        struct AGGRecord_Int* x9965 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
        memset(x9965, 0, 1 * sizeof(struct AGGRecord_Int));
        x9965->key = x156; x9965->aggs = x9964;
        g_hash_table_insert(x12269, x156, x9965);
        ite9963 = x9965;
      } else {
        
        ite9963 = x4587;
      };
      struct AGGRecord_Int* x4147 = ite9963;
      double* x161 = x4147->aggs;
      double x175 = x161[0];
      double x177 = x175+(1.0);
      *x161 = x177;
      numeric_int_t x917 = x12326;
      numeric_int_t x184 = x917+(1);
      x12326 = x184;
    };
    GList* x12439 = g_hash_table_get_keys(x12269);
    /* VAR */ GList* x12440 = x12439;
    numeric_int_t x12441 = g_hash_table_size(x12269);
    numeric_int_t x8629 = 0;
    for(; x8629 < x12441 ; x8629 += 1) {
      
      GList* x8630 = x12440;
      void* x8631 = g_list_nth_data(x8630, 0);
      GList* x8632 = g_list_next(x8630);
      x12440 = x8632;
      void* x8634 = g_hash_table_lookup(x12269, x8631);
      struct AGGRecord_Int* x8636 = (struct AGGRecord_Int*){x8634};
      g_tree_insert(x12406, x8636, x8636);
    };
    while(1) {
      
      boolean_t x926 = x12407;
      boolean_t x195 = !(x926);
      /* VAR */ boolean_t ite10830 = 0;
      if(x195) {
        numeric_int_t x12466 = g_tree_nnodes(x12406);
        boolean_t x12467 = x12466!=(0);
        ite10830 = x12467;
      } else {
        
        ite10830 = 0;
      };
      boolean_t x10010 = ite10830;
      if (!(x10010)) break; 
      
      void* x4182 = NULL;
      void** x4190 = &(x4182);
      g_tree_foreach(x12406, x4189, x4190);
      struct AGGRecord_Int* x4192 = (struct AGGRecord_Int*){x4182};
      numeric_int_t x4193 = g_tree_remove(x12406, x4192);
      if(0) {
        x12407 = 1;
      } else {
        
        numeric_int_t x208 = x4192->key;
        double* x209 = x4192->aggs;
        double x210 = x209[0];
        printf("%d|%.0f\n", x208, x210);
        numeric_int_t x943 = x12408;
        numeric_int_t x213 = x943+(1);
        x12408 = x213;
      };
    };
    numeric_int_t x12493 = x12408;
    printf("(%d rows)\n", x12493);
    struct timeval* x12495 = &x12276;
    gettimeofday(x12495, NULL);
    struct timeval* x12497 = &x12272;
    struct timeval* x12498 = &x12276;
    struct timeval* x12499 = &x12274;
    long x12500 = timeval_subtract(x12497, x12498, x12499);
    printf("Generated code run in %ld milliseconds.\n", x12500);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x12263(numeric_int_t x4043) {
  return x4043; 
}

boolean_t x12265(numeric_int_t x4048, numeric_int_t x4049) {
  boolean_t x4050 = x4048==(x4049);
  return x4050; 
}

numeric_int_t x12366(struct AGGRecord_Int* x121, struct AGGRecord_Int* x122) {
  double* x123 = x121->aggs;
  double x124 = x123[0];
  double* x125 = x122->aggs;
  double x126 = x125[0];
  boolean_t x127 = x124<(x126);
  /* VAR */ numeric_int_t ite9921 = 0;
  if(x127) {
    ite9921 = 1;
  } else {
    
    double x9923 = x123[0];
    double x9924 = x125[0];
    boolean_t x9925 = x9923>(x9924);
    /* VAR */ numeric_int_t ite9927 = 0;
    if(x9925) {
      ite9927 = -1;
    } else {
      
      numeric_int_t x9929 = x121->key;
      numeric_int_t x9930 = x122->key;
      boolean_t x9931 = x9929<(x9930);
      /* VAR */ numeric_int_t ite9933 = 0;
      if(x9931) {
        ite9933 = 1;
      } else {
        
        boolean_t x9935 = x9929>(x9930);
        /* VAR */ numeric_int_t ite9937 = 0;
        if(x9935) {
          ite9937 = -1;
        } else {
          
          ite9937 = 0;
        };
        numeric_int_t x9936 = ite9937;
        ite9933 = x9936;
      };
      numeric_int_t x9932 = ite9933;
      ite9927 = x9932;
    };
    numeric_int_t x9926 = ite9927;
    ite9921 = x9926;
  };
  numeric_int_t x138 = ite9921;
  return x138; 
}

numeric_int_t x4189(void* x4183, void* x4184, void* x4185) {
  struct AGGRecord_Int** x4186 = (struct AGGRecord_Int**){x4185};
  struct AGGRecord_Int* x4187 = (struct AGGRecord_Int*){x4184};
  pointer_assign(x4186, x4187);
  return 1; 
}
