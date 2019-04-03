#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct AGGRecord_String;
struct LINEITEMRecord;
struct WindowRecord_Int_Double;
struct LINEITEMRecord_PARTRecord;
struct PARTRecord;
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

struct WindowRecord_Int_Double {
  numeric_int_t key;
  double wnd;
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


numeric_int_t x19277(void* x4862);

numeric_int_t x19280(void* x4865, void* x4866);

numeric_int_t x19287(void* x4872);

numeric_int_t x19290(void* x4875, void* x4876);

int main(int argc, char** argv) {
  FILE* x2544 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x2545 = 0;
  numeric_int_t x2546 = x2545;
  numeric_int_t* x2547 = &x2546;
  numeric_int_t x2548 = fscanf(x2544, "%d", x2547);
  pclose(x2544);
  struct LINEITEMRecord* x3522 = (struct LINEITEMRecord*)malloc(x2546 * sizeof(struct LINEITEMRecord));
  memset(x3522, 0, x2546 * sizeof(struct LINEITEMRecord));
  numeric_int_t x2552 = O_RDONLY;
  numeric_int_t x2553 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x2552);
  struct stat x2554 = (struct stat){0};
  /* VAR */ struct stat x2555 = x2554;
  struct stat x2556 = x2555;
  struct stat* x2557 = &x2556;
  numeric_int_t x2558 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x2557);
  size_t x2559 = x2557->st_size;
  numeric_int_t x2560 = PROT_READ;
  numeric_int_t x2561 = MAP_PRIVATE;
  char* x2562 = mmap(NULL, x2559, x2560, x2561, x2553, 0);
  /* VAR */ char* x2563 = x2562;
  char* x3 = x2563;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x2546);
    /* VAR */ boolean_t ite15610 = 0;
    if(x6) {
      char x18411 = *x3;
      boolean_t x18412 = x18411!=('\0');
      ite15610 = x18412;
    } else {
      
      ite15610 = 0;
    };
    boolean_t x14311 = ite15610;
    if (!(x14311)) break; 
    
    /* VAR */ numeric_int_t x2571 = 0;
    numeric_int_t x2572 = x2571;
    numeric_int_t* x2573 = &x2572;
    char* x2574 = strntoi_unchecked(x3, x2573);
    x3 = x2574;
    /* VAR */ numeric_int_t x2576 = 0;
    numeric_int_t x2577 = x2576;
    numeric_int_t* x2578 = &x2577;
    char* x2579 = strntoi_unchecked(x3, x2578);
    x3 = x2579;
    /* VAR */ numeric_int_t x2581 = 0;
    numeric_int_t x2582 = x2581;
    numeric_int_t* x2583 = &x2582;
    char* x2584 = strntoi_unchecked(x3, x2583);
    x3 = x2584;
    /* VAR */ numeric_int_t x2586 = 0;
    numeric_int_t x2587 = x2586;
    numeric_int_t* x2588 = &x2587;
    char* x2589 = strntoi_unchecked(x3, x2588);
    x3 = x2589;
    /* VAR */ double x2591 = 0.0;
    double x2592 = x2591;
    double* x2593 = &x2592;
    char* x2594 = strntod_unchecked(x3, x2593);
    x3 = x2594;
    /* VAR */ double x2596 = 0.0;
    double x2597 = x2596;
    double* x2598 = &x2597;
    char* x2599 = strntod_unchecked(x3, x2598);
    x3 = x2599;
    /* VAR */ double x2601 = 0.0;
    double x2602 = x2601;
    double* x2603 = &x2602;
    char* x2604 = strntod_unchecked(x3, x2603);
    x3 = x2604;
    /* VAR */ double x2606 = 0.0;
    double x2607 = x2606;
    double* x2608 = &x2607;
    char* x2609 = strntod_unchecked(x3, x2608);
    x3 = x2609;
    char x2611 = *x3;
    /* VAR */ char x2612 = x2611;
    x3 += 1;
    x3 += 1;
    char x2615 = x2612;
    char x2616 = *x3;
    /* VAR */ char x2617 = x2616;
    x3 += 1;
    x3 += 1;
    char x2620 = x2617;
    /* VAR */ numeric_int_t x2621 = 0;
    numeric_int_t x2622 = x2621;
    numeric_int_t* x2623 = &x2622;
    char* x2624 = strntoi_unchecked(x3, x2623);
    x3 = x2624;
    /* VAR */ numeric_int_t x2626 = 0;
    numeric_int_t x2627 = x2626;
    numeric_int_t* x2628 = &x2627;
    char* x2629 = strntoi_unchecked(x3, x2628);
    x3 = x2629;
    /* VAR */ numeric_int_t x2631 = 0;
    numeric_int_t x2632 = x2631;
    numeric_int_t* x2633 = &x2632;
    char* x2634 = strntoi_unchecked(x3, x2633);
    x3 = x2634;
    numeric_int_t x2636 = x2622*(10000);
    numeric_int_t x2637 = x2627*(100);
    numeric_int_t x2638 = x2636+(x2637);
    numeric_int_t x2639 = x2638+(x2632);
    /* VAR */ numeric_int_t x2640 = 0;
    numeric_int_t x2641 = x2640;
    numeric_int_t* x2642 = &x2641;
    char* x2643 = strntoi_unchecked(x3, x2642);
    x3 = x2643;
    /* VAR */ numeric_int_t x2645 = 0;
    numeric_int_t x2646 = x2645;
    numeric_int_t* x2647 = &x2646;
    char* x2648 = strntoi_unchecked(x3, x2647);
    x3 = x2648;
    /* VAR */ numeric_int_t x2650 = 0;
    numeric_int_t x2651 = x2650;
    numeric_int_t* x2652 = &x2651;
    char* x2653 = strntoi_unchecked(x3, x2652);
    x3 = x2653;
    numeric_int_t x2655 = x2641*(10000);
    numeric_int_t x2656 = x2646*(100);
    numeric_int_t x2657 = x2655+(x2656);
    numeric_int_t x2658 = x2657+(x2651);
    /* VAR */ numeric_int_t x2659 = 0;
    numeric_int_t x2660 = x2659;
    numeric_int_t* x2661 = &x2660;
    char* x2662 = strntoi_unchecked(x3, x2661);
    x3 = x2662;
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
    numeric_int_t x2674 = x2660*(10000);
    numeric_int_t x2675 = x2665*(100);
    numeric_int_t x2676 = x2674+(x2675);
    numeric_int_t x2677 = x2676+(x2670);
    /* VAR */ char* x2678 = x3;
    while(1) {
      
      char x2679 = *x3;
      boolean_t x2680 = x2679!=('|');
      /* VAR */ boolean_t ite15730 = 0;
      if(x2680) {
        char x18530 = *x3;
        boolean_t x18531 = x18530!=('\n');
        ite15730 = x18531;
      } else {
        
        ite15730 = 0;
      };
      boolean_t x14424 = ite15730;
      if (!(x14424)) break; 
      
      x3 += 1;
    };
    char* x2686 = x2678;
    numeric_int_t x2687 = x3 - x2686;
    numeric_int_t x2688 = x2687+(1);
    char* x3661 = (char*)malloc(x2688 * sizeof(char));
    memset(x3661, 0, x2688 * sizeof(char));
    char* x2691 = x2678;
    char* x2692 = strncpy(x3661, x2691, x2687);
    x3 += 1;
    /* VAR */ char* x2694 = x3;
    while(1) {
      
      char x2695 = *x3;
      boolean_t x2696 = x2695!=('|');
      /* VAR */ boolean_t ite15751 = 0;
      if(x2696) {
        char x18550 = *x3;
        boolean_t x18551 = x18550!=('\n');
        ite15751 = x18551;
      } else {
        
        ite15751 = 0;
      };
      boolean_t x14438 = ite15751;
      if (!(x14438)) break; 
      
      x3 += 1;
    };
    char* x2702 = x2694;
    numeric_int_t x2703 = x3 - x2702;
    numeric_int_t x2704 = x2703+(1);
    char* x3677 = (char*)malloc(x2704 * sizeof(char));
    memset(x3677, 0, x2704 * sizeof(char));
    char* x2707 = x2694;
    char* x2708 = strncpy(x3677, x2707, x2703);
    x3 += 1;
    /* VAR */ char* x2710 = x3;
    while(1) {
      
      char x2711 = *x3;
      boolean_t x2712 = x2711!=('|');
      /* VAR */ boolean_t ite15772 = 0;
      if(x2712) {
        char x18570 = *x3;
        boolean_t x18571 = x18570!=('\n');
        ite15772 = x18571;
      } else {
        
        ite15772 = 0;
      };
      boolean_t x14452 = ite15772;
      if (!(x14452)) break; 
      
      x3 += 1;
    };
    char* x2718 = x2710;
    numeric_int_t x2719 = x3 - x2718;
    numeric_int_t x2720 = x2719+(1);
    char* x3693 = (char*)malloc(x2720 * sizeof(char));
    memset(x3693, 0, x2720 * sizeof(char));
    char* x2723 = x2710;
    char* x2724 = strncpy(x3693, x2723, x2719);
    x3 += 1;
    struct LINEITEMRecord* x4190 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4190, 0, 1 * sizeof(struct LINEITEMRecord));
    x4190->L_ORDERKEY = x2572; x4190->L_PARTKEY = x2577; x4190->L_SUPPKEY = x2582; x4190->L_LINENUMBER = x2587; x4190->L_QUANTITY = x2592; x4190->L_EXTENDEDPRICE = x2597; x4190->L_DISCOUNT = x2602; x4190->L_TAX = x2607; x4190->L_RETURNFLAG = x2615; x4190->L_LINESTATUS = x2620; x4190->L_SHIPDATE = x2639; x4190->L_COMMITDATE = x2658; x4190->L_RECEIPTDATE = x2677; x4190->L_SHIPINSTRUCT = x3661; x4190->L_SHIPMODE = x3677; x4190->L_COMMENT = x3693;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x3700 = *x4190;
    *(x3522 + x26) = x3700;
    struct LINEITEMRecord* x3702 = &(x3522[x26]);
    x4190 = x3702;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x2733 = x2563;
  munmap(x2733, x2559);
  FILE* x2734 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", "r");
  /* VAR */ numeric_int_t x2735 = 0;
  numeric_int_t x2736 = x2735;
  numeric_int_t* x2737 = &x2736;
  numeric_int_t x2738 = fscanf(x2734, "%d", x2737);
  pclose(x2734);
  struct PARTRecord* x3715 = (struct PARTRecord*)malloc(x2736 * sizeof(struct PARTRecord));
  memset(x3715, 0, x2736 * sizeof(struct PARTRecord));
  numeric_int_t x2742 = O_RDONLY;
  numeric_int_t x2743 = open("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x2742);
  /* VAR */ struct stat x2744 = x2554;
  struct stat x2745 = x2744;
  struct stat* x2746 = &x2745;
  numeric_int_t x2747 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x2746);
  size_t x2748 = x2746->st_size;
  numeric_int_t x2749 = PROT_READ;
  numeric_int_t x2750 = MAP_PRIVATE;
  char* x2751 = mmap(NULL, x2748, x2749, x2750, x2743, 0);
  /* VAR */ char* x2752 = x2751;
  char* x35 = x2752;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x2736);
    /* VAR */ boolean_t ite15825 = 0;
    if(x38) {
      char x18622 = *x35;
      boolean_t x18623 = x18622!=('\0');
      ite15825 = x18623;
    } else {
      
      ite15825 = 0;
    };
    boolean_t x14498 = ite15825;
    if (!(x14498)) break; 
    
    /* VAR */ numeric_int_t x2760 = 0;
    numeric_int_t x2761 = x2760;
    numeric_int_t* x2762 = &x2761;
    char* x2763 = strntoi_unchecked(x35, x2762);
    x35 = x2763;
    /* VAR */ char* x2765 = x35;
    while(1) {
      
      char x2766 = *x35;
      boolean_t x2767 = x2766!=('|');
      /* VAR */ boolean_t ite15843 = 0;
      if(x2767) {
        char x18639 = *x35;
        boolean_t x18640 = x18639!=('\n');
        ite15843 = x18640;
      } else {
        
        ite15843 = 0;
      };
      boolean_t x14509 = ite15843;
      if (!(x14509)) break; 
      
      x35 += 1;
    };
    char* x2773 = x2765;
    numeric_int_t x2774 = x35 - x2773;
    numeric_int_t x2775 = x2774+(1);
    char* x3751 = (char*)malloc(x2775 * sizeof(char));
    memset(x3751, 0, x2775 * sizeof(char));
    char* x2778 = x2765;
    char* x2779 = strncpy(x3751, x2778, x2774);
    x35 += 1;
    /* VAR */ char* x2781 = x35;
    while(1) {
      
      char x2782 = *x35;
      boolean_t x2783 = x2782!=('|');
      /* VAR */ boolean_t ite15864 = 0;
      if(x2783) {
        char x18659 = *x35;
        boolean_t x18660 = x18659!=('\n');
        ite15864 = x18660;
      } else {
        
        ite15864 = 0;
      };
      boolean_t x14523 = ite15864;
      if (!(x14523)) break; 
      
      x35 += 1;
    };
    char* x2789 = x2781;
    numeric_int_t x2790 = x35 - x2789;
    numeric_int_t x2791 = x2790+(1);
    char* x3767 = (char*)malloc(x2791 * sizeof(char));
    memset(x3767, 0, x2791 * sizeof(char));
    char* x2794 = x2781;
    char* x2795 = strncpy(x3767, x2794, x2790);
    x35 += 1;
    /* VAR */ char* x2797 = x35;
    while(1) {
      
      char x2798 = *x35;
      boolean_t x2799 = x2798!=('|');
      /* VAR */ boolean_t ite15885 = 0;
      if(x2799) {
        char x18679 = *x35;
        boolean_t x18680 = x18679!=('\n');
        ite15885 = x18680;
      } else {
        
        ite15885 = 0;
      };
      boolean_t x14537 = ite15885;
      if (!(x14537)) break; 
      
      x35 += 1;
    };
    char* x2805 = x2797;
    numeric_int_t x2806 = x35 - x2805;
    numeric_int_t x2807 = x2806+(1);
    char* x3783 = (char*)malloc(x2807 * sizeof(char));
    memset(x3783, 0, x2807 * sizeof(char));
    char* x2810 = x2797;
    char* x2811 = strncpy(x3783, x2810, x2806);
    x35 += 1;
    /* VAR */ char* x2813 = x35;
    while(1) {
      
      char x2814 = *x35;
      boolean_t x2815 = x2814!=('|');
      /* VAR */ boolean_t ite15906 = 0;
      if(x2815) {
        char x18699 = *x35;
        boolean_t x18700 = x18699!=('\n');
        ite15906 = x18700;
      } else {
        
        ite15906 = 0;
      };
      boolean_t x14551 = ite15906;
      if (!(x14551)) break; 
      
      x35 += 1;
    };
    char* x2821 = x2813;
    numeric_int_t x2822 = x35 - x2821;
    numeric_int_t x2823 = x2822+(1);
    char* x3799 = (char*)malloc(x2823 * sizeof(char));
    memset(x3799, 0, x2823 * sizeof(char));
    char* x2826 = x2813;
    char* x2827 = strncpy(x3799, x2826, x2822);
    x35 += 1;
    /* VAR */ numeric_int_t x2829 = 0;
    numeric_int_t x2830 = x2829;
    numeric_int_t* x2831 = &x2830;
    char* x2832 = strntoi_unchecked(x35, x2831);
    x35 = x2832;
    /* VAR */ char* x2834 = x35;
    while(1) {
      
      char x2835 = *x35;
      boolean_t x2836 = x2835!=('|');
      /* VAR */ boolean_t ite15932 = 0;
      if(x2836) {
        char x18724 = *x35;
        boolean_t x18725 = x18724!=('\n');
        ite15932 = x18725;
      } else {
        
        ite15932 = 0;
      };
      boolean_t x14570 = ite15932;
      if (!(x14570)) break; 
      
      x35 += 1;
    };
    char* x2842 = x2834;
    numeric_int_t x2843 = x35 - x2842;
    numeric_int_t x2844 = x2843+(1);
    char* x3820 = (char*)malloc(x2844 * sizeof(char));
    memset(x3820, 0, x2844 * sizeof(char));
    char* x2847 = x2834;
    char* x2848 = strncpy(x3820, x2847, x2843);
    x35 += 1;
    /* VAR */ double x2850 = 0.0;
    double x2851 = x2850;
    double* x2852 = &x2851;
    char* x2853 = strntod_unchecked(x35, x2852);
    x35 = x2853;
    /* VAR */ char* x2855 = x35;
    while(1) {
      
      char x2856 = *x35;
      boolean_t x2857 = x2856!=('|');
      /* VAR */ boolean_t ite15958 = 0;
      if(x2857) {
        char x18749 = *x35;
        boolean_t x18750 = x18749!=('\n');
        ite15958 = x18750;
      } else {
        
        ite15958 = 0;
      };
      boolean_t x14589 = ite15958;
      if (!(x14589)) break; 
      
      x35 += 1;
    };
    char* x2863 = x2855;
    numeric_int_t x2864 = x35 - x2863;
    numeric_int_t x2865 = x2864+(1);
    char* x3841 = (char*)malloc(x2865 * sizeof(char));
    memset(x3841, 0, x2865 * sizeof(char));
    char* x2868 = x2855;
    char* x2869 = strncpy(x3841, x2868, x2864);
    x35 += 1;
    struct PARTRecord* x4340 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x4340, 0, 1 * sizeof(struct PARTRecord));
    x4340->P_PARTKEY = x2761; x4340->P_NAME = x3751; x4340->P_MFGR = x3767; x4340->P_BRAND = x3783; x4340->P_TYPE = x3799; x4340->P_SIZE = x2830; x4340->P_CONTAINER = x3820; x4340->P_RETAILPRICE = x2851; x4340->P_COMMENT = x3841;
    numeric_int_t x51 = x36;
    struct PARTRecord x3848 = *x4340;
    *(x3715 + x51) = x3848;
    struct PARTRecord* x3850 = &(x3715[x51]);
    x4340 = x3850;
    numeric_int_t x53 = x36;
    numeric_int_t x54 = x53+(1);
    x36 = x54;
  };
  char* x2878 = x2752;
  munmap(x2878, x2748);
  numeric_int_t x59 = 0;
  for(; x59 < 1 ; x59 += 1) {
    
    double* x19273 = (double*)malloc(1 * sizeof(double));
    memset(x19273, 0, 1 * sizeof(double));
    struct AGGRecord_String* x19274 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x19274, 0, 1 * sizeof(struct AGGRecord_String));
    x19274->key = "Total"; x19274->aggs = x19273;
    void*** x19284 = (void***){x19277};
    numeric_int_t* x19285 = (numeric_int_t*){x19280};
    GHashTable* x19286 = g_hash_table_new(x19284, x19285);
    void*** x19294 = (void***){x19287};
    numeric_int_t* x19295 = (numeric_int_t*){x19290};
    GHashTable* x19296 = g_hash_table_new(x19294, x19295);
    struct timeval x19297 = (struct timeval){0};
    /* VAR */ struct timeval x19298 = x19297;
    struct timeval x19299 = x19298;
    /* VAR */ struct timeval x19300 = x19297;
    struct timeval x19301 = x19300;
    /* VAR */ struct timeval x19302 = x19297;
    struct timeval x19303 = x19302;
    struct timeval* x19304 = &x19301;
    gettimeofday(x19304, NULL);
    /* VAR */ numeric_int_t x19306 = 0;
    /* VAR */ numeric_int_t x19307 = 0;
    /* VAR */ boolean_t x19308 = 0;
    /* VAR */ numeric_int_t x19309 = 0;
    while(1) {
      
      numeric_int_t x19311 = x19306;
      boolean_t x19312 = x19311<(x2546);
      if (!(x19312)) break; 
      
      numeric_int_t x1084 = x19306;
      struct LINEITEMRecord* x133 = &(x3522[x1084]);
      numeric_int_t x135 = x133->L_PARTKEY;
      void* x4902 = (void*){x135};
      void* x4903 = (void*){x133};
      void* x4904 = g_hash_table_lookup(x19296, x4902);
      GList** x4905 = (GList**){x4904};
      GList** x4906 = NULL;
      boolean_t x4907 = x4905==(x4906);
      /* VAR */ GList** ite15149 = 0;
      if(x4907) {
        GList** x15150 = malloc(8);
        GList* x15151 = NULL;
        pointer_assign(x15150, x15151);
        ite15149 = x15150;
      } else {
        
        ite15149 = x4905;
      };
      GList** x4911 = ite15149;
      GList* x4912 = *(x4911);
      GList* x4913 = g_list_prepend(x4912, x4903);
      pointer_assign(x4911, x4913);
      void* x4915 = (void*){x4911};
      g_hash_table_insert(x19296, x4902, x4915);
      numeric_int_t x1089 = x19306;
      numeric_int_t x139 = x1089+(1);
      x19306 = x139;
    };
    while(1) {
      
      numeric_int_t x19340 = x19307;
      boolean_t x19341 = x19340<(x2736);
      if (!(x19341)) break; 
      
      numeric_int_t x1098 = x19307;
      struct PARTRecord* x148 = &(x3715[x1098]);
      char* x150 = x148->P_CONTAINER;
      boolean_t x11210 = strcmp(x150, "MED BAG");
      boolean_t x11211 = x11210==(0);
      /* VAR */ boolean_t ite16565 = 0;
      if(x11211) {
        char* x19349 = x148->P_BRAND;
        boolean_t x19350 = strcmp(x19349, "Brand#15");
        boolean_t x19351 = x19350==(0);
        ite16565 = x19351;
      } else {
        
        ite16565 = 0;
      };
      boolean_t x15173 = ite16565;
      if(x15173) {
        numeric_int_t x155 = x148->P_PARTKEY;
        void* x4933 = (void*){x155};
        void* x4934 = g_hash_table_lookup(x19296, x4933);
        GList** x4935 = (GList**){x4934};
        boolean_t x9050 = x4935!=(NULL);
        if(x9050) {
          GList* x6180 = *(x4935);
          /* VAR */ GList* x6181 = x6180;
          while(1) {
            
            GList* x6182 = x6181;
            GList* x6183 = NULL;
            boolean_t x6184 = x6182!=(x6183);
            if (!(x6184)) break; 
            
            GList* x6185 = x6181;
            void* x6186 = g_list_nth_data(x6185, 0);
            struct LINEITEMRecord* x6187 = (struct LINEITEMRecord*){x6186};
            GList* x6188 = x6181;
            GList* x6189 = g_list_next(x6188);
            x6181 = x6189;
            numeric_int_t x6191 = x6187->L_PARTKEY;
            boolean_t x6192 = x6191==(x155);
            if(x6192) {
              numeric_int_t x492 = x6187->L_ORDERKEY;
              numeric_int_t x493 = x6187->L_SUPPKEY;
              numeric_int_t x494 = x6187->L_LINENUMBER;
              double x495 = x6187->L_QUANTITY;
              double x496 = x6187->L_EXTENDEDPRICE;
              double x497 = x6187->L_DISCOUNT;
              double x498 = x6187->L_TAX;
              char x499 = x6187->L_RETURNFLAG;
              char x500 = x6187->L_LINESTATUS;
              numeric_int_t x501 = x6187->L_SHIPDATE;
              numeric_int_t x502 = x6187->L_COMMITDATE;
              numeric_int_t x503 = x6187->L_RECEIPTDATE;
              char* x504 = x6187->L_SHIPINSTRUCT;
              char* x505 = x6187->L_SHIPMODE;
              char* x506 = x6187->L_COMMENT;
              char* x507 = x148->P_NAME;
              char* x508 = x148->P_MFGR;
              char* x509 = x148->P_BRAND;
              char* x510 = x148->P_TYPE;
              numeric_int_t x511 = x148->P_SIZE;
              double x512 = x148->P_RETAILPRICE;
              char* x513 = x148->P_COMMENT;
              struct LINEITEMRecord_PARTRecord* x4430 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
              memset(x4430, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
              x4430->L_ORDERKEY = x492; x4430->L_PARTKEY = x6191; x4430->L_SUPPKEY = x493; x4430->L_LINENUMBER = x494; x4430->L_QUANTITY = x495; x4430->L_EXTENDEDPRICE = x496; x4430->L_DISCOUNT = x497; x4430->L_TAX = x498; x4430->L_RETURNFLAG = x499; x4430->L_LINESTATUS = x500; x4430->L_SHIPDATE = x501; x4430->L_COMMITDATE = x502; x4430->L_RECEIPTDATE = x503; x4430->L_SHIPINSTRUCT = x504; x4430->L_SHIPMODE = x505; x4430->L_COMMENT = x506; x4430->P_PARTKEY = x155; x4430->P_NAME = x507; x4430->P_MFGR = x508; x4430->P_BRAND = x509; x4430->P_TYPE = x510; x4430->P_SIZE = x511; x4430->P_CONTAINER = x150; x4430->P_RETAILPRICE = x512; x4430->P_COMMENT = x513;
              numeric_int_t x176 = x4430->L_PARTKEY;
              void* x4971 = (void*){x176};
              void* x4972 = (void*){x4430};
              void* x4973 = g_hash_table_lookup(x19286, x4971);
              GList** x4974 = (GList**){x4973};
              GList** x4975 = NULL;
              boolean_t x4976 = x4974==(x4975);
              /* VAR */ GList** ite15280 = 0;
              if(x4976) {
                GList** x15281 = malloc(8);
                GList* x15282 = NULL;
                pointer_assign(x15281, x15282);
                ite15280 = x15281;
              } else {
                
                ite15280 = x4974;
              };
              GList** x4980 = ite15280;
              GList* x4981 = *(x4980);
              GList* x4982 = g_list_prepend(x4981, x4972);
              pointer_assign(x4980, x4982);
              void* x4984 = (void*){x4980};
              g_hash_table_insert(x19286, x4971, x4984);
            };
          };
        };
      };
      numeric_int_t x1176 = x19307;
      numeric_int_t x185 = x1176+(1);
      x19307 = x185;
    };
    GList* x19561 = g_hash_table_get_keys(x19286);
    /* VAR */ GList* x19562 = x19561;
    numeric_int_t x19563 = g_hash_table_size(x19286);
    numeric_int_t x12922 = 0;
    for(; x12922 < x19563 ; x12922 += 1) {
      
      GList* x12923 = x19562;
      void* x12924 = g_list_nth_data(x12923, 0);
      GList* x12925 = x19562;
      GList* x12926 = g_list_next(x12925);
      x19562 = x12926;
      void* x12928 = g_hash_table_lookup(x19286, x12924);
      GList** x12929 = (GList**){x12928};
      /* VAR */ double x12935 = 0.0;
      GList* x12936 = *(x12929);
      /* VAR */ GList* x12937 = x12936;
      while(1) {
        
        GList* x6336 = x12937;
        GList* x6337 = NULL;
        boolean_t x6338 = x6336!=(x6337);
        if (!(x6338)) break; 
        
        GList* x6339 = x12937;
        void* x6340 = g_list_nth_data(x6339, 0);
        struct LINEITEMRecord_PARTRecord* x6341 = (struct LINEITEMRecord_PARTRecord*){x6340};
        double x6342 = x12935;
        double x6343 = x6341->L_QUANTITY;
        double x6344 = x6342+(x6343);
        x12935 = x6344;
        GList* x6346 = x12937;
        GList* x6347 = g_list_next(x6346);
        x12937 = x6347;
      };
      double x12952 = x12935;
      GList* x12953 = *(x12929);
      numeric_int_t x12954 = g_list_length(x12953);
      double x12956 = x12952/(x12954);
      double x12957 = 0.2*(x12956);
      /* VAR */ double x12966 = 0.0;
      GList* x12967 = *(x12929);
      /* VAR */ GList* x12968 = x12967;
      while(1) {
        
        GList* x6367 = x12968;
        GList* x6368 = NULL;
        boolean_t x6369 = x6367!=(x6368);
        if (!(x6369)) break; 
        
        GList* x6370 = x12968;
        void* x6371 = g_list_nth_data(x6370, 0);
        struct LINEITEMRecord_PARTRecord* x6372 = (struct LINEITEMRecord_PARTRecord*){x6371};
        double x6373 = x12966;
        double x6374 = x6372->L_QUANTITY;
        boolean_t x6375 = x6374<(x12957);
        /* VAR */ double ite15532 = 0;
        if(x6375) {
          double x15533 = x6372->L_EXTENDEDPRICE;
          double x15534 = x6373+(x15533);
          ite15532 = x15534;
        } else {
          
          ite15532 = x6373;
        };
        double x6376 = ite15532;
        x12966 = x6376;
        GList* x6380 = x12968;
        GList* x6381 = g_list_next(x6380);
        x12968 = x6381;
      };
      double x12986 = x12966;
      double x12987 = x12986/(7.0);
      GList* x12988 = *(x12929);
      void* x12989 = g_list_nth_data(x12988, 0);
      struct LINEITEMRecord_PARTRecord* x12990 = (struct LINEITEMRecord_PARTRecord*){x12989};
      numeric_int_t x12991 = x12990->L_PARTKEY;
      struct WindowRecord_Int_Double* x12992 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x12992, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      x12992->key = x12991; x12992->wnd = x12987;
      double* x12995 = x19274->aggs;
      double x12996 = x12995[0];
      double x12997 = x12992->wnd;
      double x12998 = x12996+(x12997);
      *x12995 = x12998;
    };
    if(0) {
      x19308 = 1;
    } else {
      
      double* x251 = x19274->aggs;
      double x252 = x251[0];
      printf("%.6f\n", x252);
      numeric_int_t x1244 = x19309;
      numeric_int_t x255 = x1244+(1);
      x19309 = x255;
    };
    numeric_int_t x19758 = x19309;
    printf("(%d rows)\n", x19758);
    struct timeval* x19760 = &x19303;
    gettimeofday(x19760, NULL);
    struct timeval* x19762 = &x19299;
    struct timeval* x19763 = &x19303;
    struct timeval* x19764 = &x19301;
    long x19765 = timeval_subtract(x19762, x19763, x19764);
    printf("Generated code run in %ld milliseconds.\n", x19765);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x19277(void* x4862) {
  numeric_int_t x4863 = g_direct_hash(x4862);
  return x4863; 
}

numeric_int_t x19280(void* x4865, void* x4866) {
  numeric_int_t x4867 = g_direct_equal(x4865, x4866);
  return x4867; 
}

numeric_int_t x19287(void* x4872) {
  numeric_int_t x4873 = g_direct_hash(x4872);
  return x4873; 
}

numeric_int_t x19290(void* x4875, void* x4876) {
  numeric_int_t x4877 = g_direct_equal(x4875, x4876);
  return x4877; 
}
