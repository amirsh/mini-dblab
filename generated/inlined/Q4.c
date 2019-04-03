#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct LINEITEMRecord;
struct AGGRecord_OptimalString;
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


numeric_int_t x14740(char* x4977);

boolean_t x14758(char* x4982, char* x4983);

numeric_int_t x14764(void* x4050);

numeric_int_t x14767(void* x4053, void* x4054);

numeric_int_t x14791(struct AGGRecord_OptimalString* x100, struct AGGRecord_OptimalString* x101);

numeric_int_t x5134(void* x5128, void* x5129, void* x5130);

int main(int argc, char** argv) {
  FILE* x1998 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x1999 = 0;
  numeric_int_t x2000 = x1999;
  numeric_int_t* x2001 = &x2000;
  numeric_int_t x2002 = fscanf(x1998, "%d", x2001);
  pclose(x1998);
  struct LINEITEMRecord* x2856 = (struct LINEITEMRecord*)malloc(x2000 * sizeof(struct LINEITEMRecord));
  memset(x2856, 0, x2000 * sizeof(struct LINEITEMRecord));
  numeric_int_t x2006 = O_RDONLY;
  numeric_int_t x2007 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x2006);
  struct stat x2008 = (struct stat){0};
  /* VAR */ struct stat x2009 = x2008;
  struct stat x2010 = x2009;
  struct stat* x2011 = &x2010;
  numeric_int_t x2012 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x2011);
  size_t x2013 = x2011->st_size;
  numeric_int_t x2014 = PROT_READ;
  numeric_int_t x2015 = MAP_PRIVATE;
  char* x2016 = mmap(NULL, x2013, x2014, x2015, x2007, 0);
  /* VAR */ char* x2017 = x2016;
  char* x3 = x2017;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x2000);
    /* VAR */ boolean_t ite12502 = 0;
    if(x6) {
      char x14175 = *x3;
      boolean_t x14176 = x14175!=('\0');
      ite12502 = x14176;
    } else {
      
      ite12502 = 0;
    };
    boolean_t x11756 = ite12502;
    if (!(x11756)) break; 
    
    /* VAR */ numeric_int_t x2025 = 0;
    numeric_int_t x2026 = x2025;
    numeric_int_t* x2027 = &x2026;
    char* x2028 = strntoi_unchecked(x3, x2027);
    x3 = x2028;
    /* VAR */ numeric_int_t x2030 = 0;
    numeric_int_t x2031 = x2030;
    numeric_int_t* x2032 = &x2031;
    char* x2033 = strntoi_unchecked(x3, x2032);
    x3 = x2033;
    /* VAR */ numeric_int_t x2035 = 0;
    numeric_int_t x2036 = x2035;
    numeric_int_t* x2037 = &x2036;
    char* x2038 = strntoi_unchecked(x3, x2037);
    x3 = x2038;
    /* VAR */ numeric_int_t x2040 = 0;
    numeric_int_t x2041 = x2040;
    numeric_int_t* x2042 = &x2041;
    char* x2043 = strntoi_unchecked(x3, x2042);
    x3 = x2043;
    /* VAR */ double x2045 = 0.0;
    double x2046 = x2045;
    double* x2047 = &x2046;
    char* x2048 = strntod_unchecked(x3, x2047);
    x3 = x2048;
    /* VAR */ double x2050 = 0.0;
    double x2051 = x2050;
    double* x2052 = &x2051;
    char* x2053 = strntod_unchecked(x3, x2052);
    x3 = x2053;
    /* VAR */ double x2055 = 0.0;
    double x2056 = x2055;
    double* x2057 = &x2056;
    char* x2058 = strntod_unchecked(x3, x2057);
    x3 = x2058;
    /* VAR */ double x2060 = 0.0;
    double x2061 = x2060;
    double* x2062 = &x2061;
    char* x2063 = strntod_unchecked(x3, x2062);
    x3 = x2063;
    char x2065 = *x3;
    /* VAR */ char x2066 = x2065;
    x3 += 1;
    x3 += 1;
    char x2069 = x2066;
    char x2070 = *x3;
    /* VAR */ char x2071 = x2070;
    x3 += 1;
    x3 += 1;
    char x2074 = x2071;
    /* VAR */ numeric_int_t x2075 = 0;
    numeric_int_t x2076 = x2075;
    numeric_int_t* x2077 = &x2076;
    char* x2078 = strntoi_unchecked(x3, x2077);
    x3 = x2078;
    /* VAR */ numeric_int_t x2080 = 0;
    numeric_int_t x2081 = x2080;
    numeric_int_t* x2082 = &x2081;
    char* x2083 = strntoi_unchecked(x3, x2082);
    x3 = x2083;
    /* VAR */ numeric_int_t x2085 = 0;
    numeric_int_t x2086 = x2085;
    numeric_int_t* x2087 = &x2086;
    char* x2088 = strntoi_unchecked(x3, x2087);
    x3 = x2088;
    numeric_int_t x2090 = x2076*(10000);
    numeric_int_t x2091 = x2081*(100);
    numeric_int_t x2092 = x2090+(x2091);
    numeric_int_t x2093 = x2092+(x2086);
    /* VAR */ numeric_int_t x2094 = 0;
    numeric_int_t x2095 = x2094;
    numeric_int_t* x2096 = &x2095;
    char* x2097 = strntoi_unchecked(x3, x2096);
    x3 = x2097;
    /* VAR */ numeric_int_t x2099 = 0;
    numeric_int_t x2100 = x2099;
    numeric_int_t* x2101 = &x2100;
    char* x2102 = strntoi_unchecked(x3, x2101);
    x3 = x2102;
    /* VAR */ numeric_int_t x2104 = 0;
    numeric_int_t x2105 = x2104;
    numeric_int_t* x2106 = &x2105;
    char* x2107 = strntoi_unchecked(x3, x2106);
    x3 = x2107;
    numeric_int_t x2109 = x2095*(10000);
    numeric_int_t x2110 = x2100*(100);
    numeric_int_t x2111 = x2109+(x2110);
    numeric_int_t x2112 = x2111+(x2105);
    /* VAR */ numeric_int_t x2113 = 0;
    numeric_int_t x2114 = x2113;
    numeric_int_t* x2115 = &x2114;
    char* x2116 = strntoi_unchecked(x3, x2115);
    x3 = x2116;
    /* VAR */ numeric_int_t x2118 = 0;
    numeric_int_t x2119 = x2118;
    numeric_int_t* x2120 = &x2119;
    char* x2121 = strntoi_unchecked(x3, x2120);
    x3 = x2121;
    /* VAR */ numeric_int_t x2123 = 0;
    numeric_int_t x2124 = x2123;
    numeric_int_t* x2125 = &x2124;
    char* x2126 = strntoi_unchecked(x3, x2125);
    x3 = x2126;
    numeric_int_t x2128 = x2114*(10000);
    numeric_int_t x2129 = x2119*(100);
    numeric_int_t x2130 = x2128+(x2129);
    numeric_int_t x2131 = x2130+(x2124);
    /* VAR */ char* x2132 = x3;
    while(1) {
      
      char x2133 = *x3;
      boolean_t x2134 = x2133!=('|');
      /* VAR */ boolean_t ite12622 = 0;
      if(x2134) {
        char x14294 = *x3;
        boolean_t x14295 = x14294!=('\n');
        ite12622 = x14295;
      } else {
        
        ite12622 = 0;
      };
      boolean_t x11869 = ite12622;
      if (!(x11869)) break; 
      
      x3 += 1;
    };
    char* x2140 = x2132;
    numeric_int_t x2141 = x3 - x2140;
    numeric_int_t x2142 = x2141+(1);
    char* x2995 = (char*)malloc(x2142 * sizeof(char));
    memset(x2995, 0, x2142 * sizeof(char));
    char* x2145 = x2132;
    char* x2146 = strncpy(x2995, x2145, x2141);
    x3 += 1;
    /* VAR */ char* x2148 = x3;
    while(1) {
      
      char x2149 = *x3;
      boolean_t x2150 = x2149!=('|');
      /* VAR */ boolean_t ite12643 = 0;
      if(x2150) {
        char x14314 = *x3;
        boolean_t x14315 = x14314!=('\n');
        ite12643 = x14315;
      } else {
        
        ite12643 = 0;
      };
      boolean_t x11883 = ite12643;
      if (!(x11883)) break; 
      
      x3 += 1;
    };
    char* x2156 = x2148;
    numeric_int_t x2157 = x3 - x2156;
    numeric_int_t x2158 = x2157+(1);
    char* x3011 = (char*)malloc(x2158 * sizeof(char));
    memset(x3011, 0, x2158 * sizeof(char));
    char* x2161 = x2148;
    char* x2162 = strncpy(x3011, x2161, x2157);
    x3 += 1;
    /* VAR */ char* x2164 = x3;
    while(1) {
      
      char x2165 = *x3;
      boolean_t x2166 = x2165!=('|');
      /* VAR */ boolean_t ite12664 = 0;
      if(x2166) {
        char x14334 = *x3;
        boolean_t x14335 = x14334!=('\n');
        ite12664 = x14335;
      } else {
        
        ite12664 = 0;
      };
      boolean_t x11897 = ite12664;
      if (!(x11897)) break; 
      
      x3 += 1;
    };
    char* x2172 = x2164;
    numeric_int_t x2173 = x3 - x2172;
    numeric_int_t x2174 = x2173+(1);
    char* x3027 = (char*)malloc(x2174 * sizeof(char));
    memset(x3027, 0, x2174 * sizeof(char));
    char* x2177 = x2164;
    char* x2178 = strncpy(x3027, x2177, x2173);
    x3 += 1;
    struct LINEITEMRecord* x3464 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x3464, 0, 1 * sizeof(struct LINEITEMRecord));
    x3464->L_ORDERKEY = x2026; x3464->L_PARTKEY = x2031; x3464->L_SUPPKEY = x2036; x3464->L_LINENUMBER = x2041; x3464->L_QUANTITY = x2046; x3464->L_EXTENDEDPRICE = x2051; x3464->L_DISCOUNT = x2056; x3464->L_TAX = x2061; x3464->L_RETURNFLAG = x2069; x3464->L_LINESTATUS = x2074; x3464->L_SHIPDATE = x2093; x3464->L_COMMITDATE = x2112; x3464->L_RECEIPTDATE = x2131; x3464->L_SHIPINSTRUCT = x2995; x3464->L_SHIPMODE = x3011; x3464->L_COMMENT = x3027;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x3034 = *x3464;
    *(x2856 + x26) = x3034;
    struct LINEITEMRecord* x3036 = &(x2856[x26]);
    x3464 = x3036;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x2187 = x2017;
  munmap(x2187, x2013);
  FILE* x2188 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x2189 = 0;
  numeric_int_t x2190 = x2189;
  numeric_int_t* x2191 = &x2190;
  numeric_int_t x2192 = fscanf(x2188, "%d", x2191);
  pclose(x2188);
  struct ORDERSRecord* x3049 = (struct ORDERSRecord*)malloc(x2190 * sizeof(struct ORDERSRecord));
  memset(x3049, 0, x2190 * sizeof(struct ORDERSRecord));
  numeric_int_t x2196 = O_RDONLY;
  numeric_int_t x2197 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x2196);
  /* VAR */ struct stat x2198 = x2008;
  struct stat x2199 = x2198;
  struct stat* x2200 = &x2199;
  numeric_int_t x2201 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x2200);
  size_t x2202 = x2200->st_size;
  numeric_int_t x2203 = PROT_READ;
  numeric_int_t x2204 = MAP_PRIVATE;
  char* x2205 = mmap(NULL, x2202, x2203, x2204, x2197, 0);
  /* VAR */ char* x2206 = x2205;
  char* x35 = x2206;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x2190);
    /* VAR */ boolean_t ite12717 = 0;
    if(x38) {
      char x14386 = *x35;
      boolean_t x14387 = x14386!=('\0');
      ite12717 = x14387;
    } else {
      
      ite12717 = 0;
    };
    boolean_t x11943 = ite12717;
    if (!(x11943)) break; 
    
    /* VAR */ numeric_int_t x2214 = 0;
    numeric_int_t x2215 = x2214;
    numeric_int_t* x2216 = &x2215;
    char* x2217 = strntoi_unchecked(x35, x2216);
    x35 = x2217;
    /* VAR */ numeric_int_t x2219 = 0;
    numeric_int_t x2220 = x2219;
    numeric_int_t* x2221 = &x2220;
    char* x2222 = strntoi_unchecked(x35, x2221);
    x35 = x2222;
    char x2224 = *x35;
    /* VAR */ char x2225 = x2224;
    x35 += 1;
    x35 += 1;
    char x2228 = x2225;
    /* VAR */ double x2229 = 0.0;
    double x2230 = x2229;
    double* x2231 = &x2230;
    char* x2232 = strntod_unchecked(x35, x2231);
    x35 = x2232;
    /* VAR */ numeric_int_t x2234 = 0;
    numeric_int_t x2235 = x2234;
    numeric_int_t* x2236 = &x2235;
    char* x2237 = strntoi_unchecked(x35, x2236);
    x35 = x2237;
    /* VAR */ numeric_int_t x2239 = 0;
    numeric_int_t x2240 = x2239;
    numeric_int_t* x2241 = &x2240;
    char* x2242 = strntoi_unchecked(x35, x2241);
    x35 = x2242;
    /* VAR */ numeric_int_t x2244 = 0;
    numeric_int_t x2245 = x2244;
    numeric_int_t* x2246 = &x2245;
    char* x2247 = strntoi_unchecked(x35, x2246);
    x35 = x2247;
    numeric_int_t x2249 = x2235*(10000);
    numeric_int_t x2250 = x2240*(100);
    numeric_int_t x2251 = x2249+(x2250);
    numeric_int_t x2252 = x2251+(x2245);
    /* VAR */ char* x2253 = x35;
    while(1) {
      
      char x2254 = *x35;
      boolean_t x2255 = x2254!=('|');
      /* VAR */ boolean_t ite12769 = 0;
      if(x2255) {
        char x14437 = *x35;
        boolean_t x14438 = x14437!=('\n');
        ite12769 = x14438;
      } else {
        
        ite12769 = 0;
      };
      boolean_t x11988 = ite12769;
      if (!(x11988)) break; 
      
      x35 += 1;
    };
    char* x2261 = x2253;
    numeric_int_t x2262 = x35 - x2261;
    numeric_int_t x2263 = x2262+(1);
    char* x3119 = (char*)malloc(x2263 * sizeof(char));
    memset(x3119, 0, x2263 * sizeof(char));
    char* x2266 = x2253;
    char* x2267 = strncpy(x3119, x2266, x2262);
    x35 += 1;
    /* VAR */ char* x2269 = x35;
    while(1) {
      
      char x2270 = *x35;
      boolean_t x2271 = x2270!=('|');
      /* VAR */ boolean_t ite12790 = 0;
      if(x2271) {
        char x14457 = *x35;
        boolean_t x14458 = x14457!=('\n');
        ite12790 = x14458;
      } else {
        
        ite12790 = 0;
      };
      boolean_t x12002 = ite12790;
      if (!(x12002)) break; 
      
      x35 += 1;
    };
    char* x2277 = x2269;
    numeric_int_t x2278 = x35 - x2277;
    numeric_int_t x2279 = x2278+(1);
    char* x3135 = (char*)malloc(x2279 * sizeof(char));
    memset(x3135, 0, x2279 * sizeof(char));
    char* x2282 = x2269;
    char* x2283 = strncpy(x3135, x2282, x2278);
    x35 += 1;
    /* VAR */ numeric_int_t x2285 = 0;
    numeric_int_t x2286 = x2285;
    numeric_int_t* x2287 = &x2286;
    char* x2288 = strntoi_unchecked(x35, x2287);
    x35 = x2288;
    /* VAR */ char* x2290 = x35;
    while(1) {
      
      char x2291 = *x35;
      boolean_t x2292 = x2291!=('|');
      /* VAR */ boolean_t ite12816 = 0;
      if(x2292) {
        char x14482 = *x35;
        boolean_t x14483 = x14482!=('\n');
        ite12816 = x14483;
      } else {
        
        ite12816 = 0;
      };
      boolean_t x12021 = ite12816;
      if (!(x12021)) break; 
      
      x35 += 1;
    };
    char* x2298 = x2290;
    numeric_int_t x2299 = x35 - x2298;
    numeric_int_t x2300 = x2299+(1);
    char* x3156 = (char*)malloc(x2300 * sizeof(char));
    memset(x3156, 0, x2300 * sizeof(char));
    char* x2303 = x2290;
    char* x2304 = strncpy(x3156, x2303, x2299);
    x35 += 1;
    struct ORDERSRecord* x3595 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x3595, 0, 1 * sizeof(struct ORDERSRecord));
    x3595->O_ORDERKEY = x2215; x3595->O_CUSTKEY = x2220; x3595->O_ORDERSTATUS = x2228; x3595->O_TOTALPRICE = x2230; x3595->O_ORDERDATE = x2252; x3595->O_ORDERPRIORITY = x3119; x3595->O_CLERK = x3135; x3595->O_SHIPPRIORITY = x2286; x3595->O_COMMENT = x3156;
    numeric_int_t x51 = x36;
    struct ORDERSRecord x3163 = *x3595;
    *(x3049 + x51) = x3163;
    struct ORDERSRecord* x3165 = &(x3049[x51]);
    x3595 = x3165;
    numeric_int_t x53 = x36;
    numeric_int_t x54 = x53+(1);
    x36 = x54;
  };
  char* x2313 = x2206;
  munmap(x2313, x2202);
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
