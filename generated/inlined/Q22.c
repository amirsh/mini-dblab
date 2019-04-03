#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct AGGRecord_String;
struct AGGRecord_OptimalString;
struct ORDERSRecord;
struct CUSTOMERRecord;
struct AGGRecord_String {
  char* key;
  double* aggs;
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


numeric_int_t x30720(char* x6611);

boolean_t x30738(char* x6616, char* x6617);

numeric_int_t x30744(void* x5550);

numeric_int_t x30747(void* x5553, void* x5554);

numeric_int_t x30892(struct AGGRecord_OptimalString* x240, struct AGGRecord_OptimalString* x241);

numeric_int_t x6993(void* x6987, void* x6988, void* x6989);

int main(int argc, char** argv) {
  FILE* x3432 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", "r");
  /* VAR */ numeric_int_t x3433 = 0;
  numeric_int_t x3434 = x3433;
  numeric_int_t* x3435 = &x3434;
  numeric_int_t x3436 = fscanf(x3432, "%d", x3435);
  pclose(x3432);
  struct CUSTOMERRecord* x4352 = (struct CUSTOMERRecord*)malloc(x3434 * sizeof(struct CUSTOMERRecord));
  memset(x4352, 0, x3434 * sizeof(struct CUSTOMERRecord));
  numeric_int_t x3440 = O_RDONLY;
  numeric_int_t x3441 = open("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x3440);
  struct stat x3442 = (struct stat){0};
  /* VAR */ struct stat x3443 = x3442;
  struct stat x3444 = x3443;
  struct stat* x3445 = &x3444;
  numeric_int_t x3446 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x3445);
  size_t x3447 = x3445->st_size;
  numeric_int_t x3448 = PROT_READ;
  numeric_int_t x3449 = MAP_PRIVATE;
  char* x3450 = mmap(NULL, x3447, x3448, x3449, x3441, 0);
  /* VAR */ char* x3451 = x3450;
  char* x3 = x3451;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x3434);
    /* VAR */ boolean_t ite17281 = 0;
    if(x6) {
      char x29790 = *x3;
      boolean_t x29791 = x29790!=('\0');
      ite17281 = x29791;
    } else {
      
      ite17281 = 0;
    };
    boolean_t x15997 = ite17281;
    if (!(x15997)) break; 
    
    /* VAR */ numeric_int_t x3459 = 0;
    numeric_int_t x3460 = x3459;
    numeric_int_t* x3461 = &x3460;
    char* x3462 = strntoi_unchecked(x3, x3461);
    x3 = x3462;
    /* VAR */ char* x3464 = x3;
    while(1) {
      
      char x3465 = *x3;
      boolean_t x3466 = x3465!=('|');
      /* VAR */ boolean_t ite17299 = 0;
      if(x3466) {
        char x29807 = *x3;
        boolean_t x29808 = x29807!=('\n');
        ite17299 = x29808;
      } else {
        
        ite17299 = 0;
      };
      boolean_t x16008 = ite17299;
      if (!(x16008)) break; 
      
      x3 += 1;
    };
    char* x3472 = x3464;
    numeric_int_t x3473 = x3 - x3472;
    numeric_int_t x3474 = x3473+(1);
    char* x4389 = (char*)malloc(x3474 * sizeof(char));
    memset(x4389, 0, x3474 * sizeof(char));
    char* x3477 = x3464;
    char* x3478 = strncpy(x4389, x3477, x3473);
    x3 += 1;
    /* VAR */ char* x3480 = x3;
    while(1) {
      
      char x3481 = *x3;
      boolean_t x3482 = x3481!=('|');
      /* VAR */ boolean_t ite17320 = 0;
      if(x3482) {
        char x29827 = *x3;
        boolean_t x29828 = x29827!=('\n');
        ite17320 = x29828;
      } else {
        
        ite17320 = 0;
      };
      boolean_t x16022 = ite17320;
      if (!(x16022)) break; 
      
      x3 += 1;
    };
    char* x3488 = x3480;
    numeric_int_t x3489 = x3 - x3488;
    numeric_int_t x3490 = x3489+(1);
    char* x4405 = (char*)malloc(x3490 * sizeof(char));
    memset(x4405, 0, x3490 * sizeof(char));
    char* x3493 = x3480;
    char* x3494 = strncpy(x4405, x3493, x3489);
    x3 += 1;
    /* VAR */ numeric_int_t x3496 = 0;
    numeric_int_t x3497 = x3496;
    numeric_int_t* x3498 = &x3497;
    char* x3499 = strntoi_unchecked(x3, x3498);
    x3 = x3499;
    /* VAR */ char* x3501 = x3;
    while(1) {
      
      char x3502 = *x3;
      boolean_t x3503 = x3502!=('|');
      /* VAR */ boolean_t ite17346 = 0;
      if(x3503) {
        char x29852 = *x3;
        boolean_t x29853 = x29852!=('\n');
        ite17346 = x29853;
      } else {
        
        ite17346 = 0;
      };
      boolean_t x16041 = ite17346;
      if (!(x16041)) break; 
      
      x3 += 1;
    };
    char* x3509 = x3501;
    numeric_int_t x3510 = x3 - x3509;
    numeric_int_t x3511 = x3510+(1);
    char* x4426 = (char*)malloc(x3511 * sizeof(char));
    memset(x4426, 0, x3511 * sizeof(char));
    char* x3514 = x3501;
    char* x3515 = strncpy(x4426, x3514, x3510);
    x3 += 1;
    /* VAR */ double x3517 = 0.0;
    double x3518 = x3517;
    double* x3519 = &x3518;
    char* x3520 = strntod_unchecked(x3, x3519);
    x3 = x3520;
    /* VAR */ char* x3522 = x3;
    while(1) {
      
      char x3523 = *x3;
      boolean_t x3524 = x3523!=('|');
      /* VAR */ boolean_t ite17372 = 0;
      if(x3524) {
        char x29877 = *x3;
        boolean_t x29878 = x29877!=('\n');
        ite17372 = x29878;
      } else {
        
        ite17372 = 0;
      };
      boolean_t x16060 = ite17372;
      if (!(x16060)) break; 
      
      x3 += 1;
    };
    char* x3530 = x3522;
    numeric_int_t x3531 = x3 - x3530;
    numeric_int_t x3532 = x3531+(1);
    char* x4447 = (char*)malloc(x3532 * sizeof(char));
    memset(x4447, 0, x3532 * sizeof(char));
    char* x3535 = x3522;
    char* x3536 = strncpy(x4447, x3535, x3531);
    x3 += 1;
    /* VAR */ char* x3538 = x3;
    while(1) {
      
      char x3539 = *x3;
      boolean_t x3540 = x3539!=('|');
      /* VAR */ boolean_t ite17393 = 0;
      if(x3540) {
        char x29897 = *x3;
        boolean_t x29898 = x29897!=('\n');
        ite17393 = x29898;
      } else {
        
        ite17393 = 0;
      };
      boolean_t x16074 = ite17393;
      if (!(x16074)) break; 
      
      x3 += 1;
    };
    char* x3546 = x3538;
    numeric_int_t x3547 = x3 - x3546;
    numeric_int_t x3548 = x3547+(1);
    char* x4463 = (char*)malloc(x3548 * sizeof(char));
    memset(x4463, 0, x3548 * sizeof(char));
    char* x3551 = x3538;
    char* x3552 = strncpy(x4463, x3551, x3547);
    x3 += 1;
    struct CUSTOMERRecord* x4931 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x4931, 0, 1 * sizeof(struct CUSTOMERRecord));
    x4931->C_CUSTKEY = x3460; x4931->C_NAME = x4389; x4931->C_ADDRESS = x4405; x4931->C_NATIONKEY = x3497; x4931->C_PHONE = x4426; x4931->C_ACCTBAL = x3518; x4931->C_MKTSEGMENT = x4447; x4931->C_COMMENT = x4463;
    numeric_int_t x18 = x4;
    struct CUSTOMERRecord x4470 = *x4931;
    *(x4352 + x18) = x4470;
    struct CUSTOMERRecord* x4472 = &(x4352[x18]);
    x4931 = x4472;
    numeric_int_t x20 = x4;
    numeric_int_t x21 = x20+(1);
    x4 = x21;
  };
  char* x3561 = x3451;
  munmap(x3561, x3447);
  FILE* x3562 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x3563 = 0;
  numeric_int_t x3564 = x3563;
  numeric_int_t* x3565 = &x3564;
  numeric_int_t x3566 = fscanf(x3562, "%d", x3565);
  pclose(x3562);
  struct ORDERSRecord* x4485 = (struct ORDERSRecord*)malloc(x3564 * sizeof(struct ORDERSRecord));
  memset(x4485, 0, x3564 * sizeof(struct ORDERSRecord));
  numeric_int_t x3570 = O_RDONLY;
  numeric_int_t x3571 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x3570);
  /* VAR */ struct stat x3572 = x3442;
  struct stat x3573 = x3572;
  struct stat* x3574 = &x3573;
  numeric_int_t x3575 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x3574);
  size_t x3576 = x3574->st_size;
  numeric_int_t x3577 = PROT_READ;
  numeric_int_t x3578 = MAP_PRIVATE;
  char* x3579 = mmap(NULL, x3576, x3577, x3578, x3571, 0);
  /* VAR */ char* x3580 = x3579;
  char* x27 = x3580;
  /* VAR */ numeric_int_t x28 = 0;
  while(1) {
    
    numeric_int_t x29 = x28;
    boolean_t x30 = x29<(x3564);
    /* VAR */ boolean_t ite17446 = 0;
    if(x30) {
      char x29949 = *x27;
      boolean_t x29950 = x29949!=('\0');
      ite17446 = x29950;
    } else {
      
      ite17446 = 0;
    };
    boolean_t x16120 = ite17446;
    if (!(x16120)) break; 
    
    /* VAR */ numeric_int_t x3588 = 0;
    numeric_int_t x3589 = x3588;
    numeric_int_t* x3590 = &x3589;
    char* x3591 = strntoi_unchecked(x27, x3590);
    x27 = x3591;
    /* VAR */ numeric_int_t x3593 = 0;
    numeric_int_t x3594 = x3593;
    numeric_int_t* x3595 = &x3594;
    char* x3596 = strntoi_unchecked(x27, x3595);
    x27 = x3596;
    char x3598 = *x27;
    /* VAR */ char x3599 = x3598;
    x27 += 1;
    x27 += 1;
    char x3602 = x3599;
    /* VAR */ double x3603 = 0.0;
    double x3604 = x3603;
    double* x3605 = &x3604;
    char* x3606 = strntod_unchecked(x27, x3605);
    x27 = x3606;
    /* VAR */ numeric_int_t x3608 = 0;
    numeric_int_t x3609 = x3608;
    numeric_int_t* x3610 = &x3609;
    char* x3611 = strntoi_unchecked(x27, x3610);
    x27 = x3611;
    /* VAR */ numeric_int_t x3613 = 0;
    numeric_int_t x3614 = x3613;
    numeric_int_t* x3615 = &x3614;
    char* x3616 = strntoi_unchecked(x27, x3615);
    x27 = x3616;
    /* VAR */ numeric_int_t x3618 = 0;
    numeric_int_t x3619 = x3618;
    numeric_int_t* x3620 = &x3619;
    char* x3621 = strntoi_unchecked(x27, x3620);
    x27 = x3621;
    numeric_int_t x3623 = x3609*(10000);
    numeric_int_t x3624 = x3614*(100);
    numeric_int_t x3625 = x3623+(x3624);
    numeric_int_t x3626 = x3625+(x3619);
    /* VAR */ char* x3627 = x27;
    while(1) {
      
      char x3628 = *x27;
      boolean_t x3629 = x3628!=('|');
      /* VAR */ boolean_t ite17498 = 0;
      if(x3629) {
        char x30000 = *x27;
        boolean_t x30001 = x30000!=('\n');
        ite17498 = x30001;
      } else {
        
        ite17498 = 0;
      };
      boolean_t x16165 = ite17498;
      if (!(x16165)) break; 
      
      x27 += 1;
    };
    char* x3635 = x3627;
    numeric_int_t x3636 = x27 - x3635;
    numeric_int_t x3637 = x3636+(1);
    char* x4555 = (char*)malloc(x3637 * sizeof(char));
    memset(x4555, 0, x3637 * sizeof(char));
    char* x3640 = x3627;
    char* x3641 = strncpy(x4555, x3640, x3636);
    x27 += 1;
    /* VAR */ char* x3643 = x27;
    while(1) {
      
      char x3644 = *x27;
      boolean_t x3645 = x3644!=('|');
      /* VAR */ boolean_t ite17519 = 0;
      if(x3645) {
        char x30020 = *x27;
        boolean_t x30021 = x30020!=('\n');
        ite17519 = x30021;
      } else {
        
        ite17519 = 0;
      };
      boolean_t x16179 = ite17519;
      if (!(x16179)) break; 
      
      x27 += 1;
    };
    char* x3651 = x3643;
    numeric_int_t x3652 = x27 - x3651;
    numeric_int_t x3653 = x3652+(1);
    char* x4571 = (char*)malloc(x3653 * sizeof(char));
    memset(x4571, 0, x3653 * sizeof(char));
    char* x3656 = x3643;
    char* x3657 = strncpy(x4571, x3656, x3652);
    x27 += 1;
    /* VAR */ numeric_int_t x3659 = 0;
    numeric_int_t x3660 = x3659;
    numeric_int_t* x3661 = &x3660;
    char* x3662 = strntoi_unchecked(x27, x3661);
    x27 = x3662;
    /* VAR */ char* x3664 = x27;
    while(1) {
      
      char x3665 = *x27;
      boolean_t x3666 = x3665!=('|');
      /* VAR */ boolean_t ite17545 = 0;
      if(x3666) {
        char x30045 = *x27;
        boolean_t x30046 = x30045!=('\n');
        ite17545 = x30046;
      } else {
        
        ite17545 = 0;
      };
      boolean_t x16198 = ite17545;
      if (!(x16198)) break; 
      
      x27 += 1;
    };
    char* x3672 = x3664;
    numeric_int_t x3673 = x27 - x3672;
    numeric_int_t x3674 = x3673+(1);
    char* x4592 = (char*)malloc(x3674 * sizeof(char));
    memset(x4592, 0, x3674 * sizeof(char));
    char* x3677 = x3664;
    char* x3678 = strncpy(x4592, x3677, x3673);
    x27 += 1;
    struct ORDERSRecord* x5062 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x5062, 0, 1 * sizeof(struct ORDERSRecord));
    x5062->O_ORDERKEY = x3589; x5062->O_CUSTKEY = x3594; x5062->O_ORDERSTATUS = x3602; x5062->O_TOTALPRICE = x3604; x5062->O_ORDERDATE = x3626; x5062->O_ORDERPRIORITY = x4555; x5062->O_CLERK = x4571; x5062->O_SHIPPRIORITY = x3660; x5062->O_COMMENT = x4592;
    numeric_int_t x43 = x28;
    struct ORDERSRecord x4599 = *x5062;
    *(x4485 + x43) = x4599;
    struct ORDERSRecord* x4601 = &(x4485[x43]);
    x5062 = x4601;
    numeric_int_t x45 = x28;
    numeric_int_t x46 = x45+(1);
    x28 = x46;
  };
  char* x3687 = x3580;
  munmap(x3687, x3576);
  numeric_int_t x51 = 0;
  for(; x51 < 1 ; x51 += 1) {
    
    GHashTable* x30743 = g_hash_table_new(x30720, x30738);
    void*** x30751 = (void***){x30744};
    numeric_int_t* x30752 = (numeric_int_t*){x30747};
    GHashTable* x30753 = g_hash_table_new(x30751, x30752);
    double* x30754 = (double*)malloc(3 * sizeof(double));
    memset(x30754, 0, 3 * sizeof(double));
    struct AGGRecord_String* x30755 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x30755, 0, 1 * sizeof(struct AGGRecord_String));
    x30755->key = "AVG_C_ACCTBAL"; x30755->aggs = x30754;
    struct timeval x30758 = (struct timeval){0};
    /* VAR */ struct timeval x30759 = x30758;
    struct timeval x30760 = x30759;
    /* VAR */ struct timeval x30761 = x30758;
    struct timeval x30762 = x30761;
    /* VAR */ struct timeval x30763 = x30758;
    struct timeval x30764 = x30763;
    struct timeval* x30765 = &x30762;
    gettimeofday(x30765, NULL);
    /* VAR */ numeric_int_t x30767 = 0;
    /* VAR */ struct AGGRecord_String* x30768 = NULL;
    while(1) {
      
      numeric_int_t x30770 = x30767;
      boolean_t x30771 = x30770<(x3434);
      if (!(x30771)) break; 
      
      numeric_int_t x1454 = x30767;
      struct CUSTOMERRecord* x111 = &(x4352[x1454]);
      double x113 = x111->C_ACCTBAL;
      boolean_t x114 = x113>(0.0);
      /* VAR */ boolean_t ite18193 = 0;
      if(x114) {
        char* x30778 = x111->C_PHONE;
        numeric_int_t x30779 = strlen("23");
        numeric_int_t x30780 = strncmp(x30778, "23", x30779);
        boolean_t x30781 = x30780==(0);
        /* VAR */ boolean_t x30782 = 0;
        if(x30781) {
          x30782 = 1;
        } else {
          
          numeric_int_t x30785 = strlen("29");
          numeric_int_t x30786 = strncmp(x30778, "29", x30785);
          boolean_t x30787 = x30786==(0);
          /* VAR */ boolean_t x30788 = 0;
          if(x30787) {
            x30788 = 1;
          } else {
            
            numeric_int_t x30791 = strlen("22");
            numeric_int_t x30792 = strncmp(x30778, "22", x30791);
            boolean_t x30793 = x30792==(0);
            /* VAR */ boolean_t x30794 = 0;
            if(x30793) {
              x30794 = 1;
            } else {
              
              numeric_int_t x30797 = strlen("20");
              numeric_int_t x30798 = strncmp(x30778, "20", x30797);
              boolean_t x30799 = x30798==(0);
              /* VAR */ boolean_t x30800 = 0;
              if(x30799) {
                x30800 = 1;
              } else {
                
                numeric_int_t x30803 = strlen("24");
                numeric_int_t x30804 = strncmp(x30778, "24", x30803);
                boolean_t x30805 = x30804==(0);
                /* VAR */ boolean_t x30806 = 0;
                if(x30805) {
                  x30806 = 1;
                } else {
                  
                  numeric_int_t x30809 = strlen("26");
                  numeric_int_t x30810 = strncmp(x30778, "26", x30809);
                  boolean_t x30811 = x30810==(0);
                  /* VAR */ boolean_t x30812 = 0;
                  if(x30811) {
                    x30812 = 1;
                  } else {
                    
                    numeric_int_t x30815 = strlen("25");
                    numeric_int_t x30816 = strncmp(x30778, "25", x30815);
                    boolean_t x30817 = x30816==(0);
                    x30812 = x30817;
                  };
                  boolean_t x30820 = x30812;
                  x30806 = x30820;
                };
                boolean_t x30823 = x30806;
                x30800 = x30823;
              };
              boolean_t x30826 = x30800;
              x30794 = x30826;
            };
            boolean_t x30829 = x30794;
            x30788 = x30829;
          };
          boolean_t x30832 = x30788;
          x30782 = x30832;
        };
        boolean_t x30835 = x30782;
        ite18193 = x30835;
      } else {
        
        ite18193 = 0;
      };
      boolean_t x16796 = ite18193;
      if(x16796) {
        double* x134 = x30755->aggs;
        double x148 = x134[0];
        double x149 = x113+(x148);
        *x134 = x149;
        double x157 = x134[1];
        double x159 = x157+(1.0);
        *(x134 + 1) = x159;
      };
      numeric_int_t x1509 = x30767;
      numeric_int_t x167 = x1509+(1);
      x30767 = x167;
    };
    double* x30860 = x30755->aggs;
    double x30861 = x30860[0];
    double x30862 = x30860[1];
    double x30863 = x30861/(x30862);
    *(x30860 + 2) = x30863;
    x30768 = x30755;
    struct AGGRecord_String* x30866 = x30768;
    double* x30867 = x30866->aggs;
    double x30868 = x30867[2];
    /* VAR */ numeric_int_t x30869 = 0;
    /* VAR */ numeric_int_t x30870 = 0;
    numeric_int_t* x30913 = &(x30892);
    GTree* x30914 = g_tree_new(x30913);
    /* VAR */ boolean_t x30915 = 0;
    /* VAR */ numeric_int_t x30916 = 0;
    while(1) {
      
      numeric_int_t x30918 = x30869;
      boolean_t x30919 = x30918<(x3434);
      if (!(x30919)) break; 
      
      numeric_int_t x1638 = x30869;
      struct CUSTOMERRecord* x273 = &(x4352[x1638]);
      char* x275 = x273->C_PHONE;
      numeric_int_t x12794 = strlen("23");
      numeric_int_t x12795 = strncmp(x275, "23", x12794);
      boolean_t x12796 = x12795==(0);
      /* VAR */ boolean_t ite18293 = 0;
      if(x12796) {
        ite18293 = 1;
      } else {
        
        numeric_int_t x30929 = strlen("29");
        numeric_int_t x30930 = strncmp(x275, "29", x30929);
        boolean_t x30931 = x30930==(0);
        /* VAR */ boolean_t x30932 = 0;
        if(x30931) {
          x30932 = 1;
        } else {
          
          numeric_int_t x30935 = strlen("22");
          numeric_int_t x30936 = strncmp(x275, "22", x30935);
          boolean_t x30937 = x30936==(0);
          /* VAR */ boolean_t x30938 = 0;
          if(x30937) {
            x30938 = 1;
          } else {
            
            numeric_int_t x30941 = strlen("20");
            numeric_int_t x30942 = strncmp(x275, "20", x30941);
            boolean_t x30943 = x30942==(0);
            /* VAR */ boolean_t x30944 = 0;
            if(x30943) {
              x30944 = 1;
            } else {
              
              numeric_int_t x30947 = strlen("24");
              numeric_int_t x30948 = strncmp(x275, "24", x30947);
              boolean_t x30949 = x30948==(0);
              /* VAR */ boolean_t x30950 = 0;
              if(x30949) {
                x30950 = 1;
              } else {
                
                numeric_int_t x30953 = strlen("26");
                numeric_int_t x30954 = strncmp(x275, "26", x30953);
                boolean_t x30955 = x30954==(0);
                /* VAR */ boolean_t x30956 = 0;
                if(x30955) {
                  x30956 = 1;
                } else {
                  
                  numeric_int_t x30959 = strlen("25");
                  numeric_int_t x30960 = strncmp(x275, "25", x30959);
                  boolean_t x30961 = x30960==(0);
                  x30956 = x30961;
                };
                boolean_t x30964 = x30956;
                x30950 = x30964;
              };
              boolean_t x30967 = x30950;
              x30944 = x30967;
            };
            boolean_t x30970 = x30944;
            x30938 = x30970;
          };
          boolean_t x30973 = x30938;
          x30932 = x30973;
        };
        boolean_t x30976 = x30932;
        ite18293 = x30976;
      };
      boolean_t x16883 = ite18293;
      /* VAR */ boolean_t ite18305 = 0;
      if(x16883) {
        double x30982 = x273->C_ACCTBAL;
        boolean_t x30983 = x30982>(x30868);
        ite18305 = x30983;
      } else {
        
        ite18305 = 0;
      };
      boolean_t x16885 = ite18305;
      if(x16885) {
        numeric_int_t x292 = x273->C_CUSTKEY;
        void* x5677 = (void*){x292};
        void* x5678 = (void*){x273};
        void* x5679 = g_hash_table_lookup(x30753, x5677);
        GList** x5680 = (GList**){x5679};
        GList** x5681 = NULL;
        boolean_t x5682 = x5680==(x5681);
        /* VAR */ GList** ite16895 = 0;
        if(x5682) {
          GList** x16896 = malloc(8);
          GList* x16897 = NULL;
          pointer_assign(x16896, x16897);
          ite16895 = x16896;
        } else {
          
          ite16895 = x5680;
        };
        GList** x5686 = ite16895;
        GList* x5687 = *(x5686);
        GList* x5688 = g_list_prepend(x5687, x5678);
        pointer_assign(x5686, x5688);
        void* x5690 = (void*){x5686};
        g_hash_table_insert(x30753, x5677, x5690);
      };
      numeric_int_t x1661 = x30869;
      numeric_int_t x297 = x1661+(1);
      x30869 = x297;
    };
    while(1) {
      
      numeric_int_t x31014 = x30870;
      boolean_t x31015 = x31014<(x3564);
      if (!(x31015)) break; 
      
      numeric_int_t x1670 = x30870;
      struct ORDERSRecord* x306 = &(x4485[x1670]);
      numeric_int_t x308 = x306->O_CUSTKEY;
      void* x5702 = (void*){x308};
      void* x5703 = g_hash_table_lookup(x30753, x5702);
      GList** x5704 = (GList**){x5703};
      boolean_t x10133 = x5704!=(NULL);
      if(x10133) {
        GList* x6803 = *(x5704);
        /* VAR */ GList* x6804 = x6803;
        /* VAR */ GList** x6805 = x5704;
        while(1) {
          
          GList* x6806 = x6804;
          GList* x6807 = NULL;
          boolean_t x6808 = x6806!=(x6807);
          if (!(x6808)) break; 
          
          GList* x6809 = x6804;
          void* x6810 = g_list_nth_data(x6809, 0);
          struct CUSTOMERRecord* x6811 = (struct CUSTOMERRecord*){x6810};
          numeric_int_t x6812 = x6811->C_CUSTKEY;
          boolean_t x6813 = x6812==(x308);
          boolean_t x6814 = !(x6813);
          if(x6814) {
            GList* x6815 = x6804;
            GList* x6816 = x6815->next;
            GList** x6817 = &(x6816);
            x6805 = x6817;
          } else {
            
            GList** x6819 = x6805;
            GList* x6820 = x6804;
            GList* x6821 = g_list_next(x6820);
            pointer_assign(x6819, x6821);
          };
          GList* x6824 = x6804;
          GList* x6825 = g_list_next(x6824);
          x6804 = x6825;
        };
      };
      numeric_int_t x1692 = x30870;
      numeric_int_t x329 = x1692+(1);
      x30870 = x329;
    };
    GList* x31133 = g_hash_table_get_keys(x30753);
    /* VAR */ GList* x31134 = x31133;
    numeric_int_t x31135 = g_hash_table_size(x30753);
    numeric_int_t x14487 = 0;
    for(; x14487 < x31135 ; x14487 += 1) {
      
      GList* x14488 = x31134;
      void* x14489 = g_list_nth_data(x14488, 0);
      GList* x14490 = x31134;
      GList* x14491 = g_list_next(x14490);
      x31134 = x14491;
      void* x14493 = g_hash_table_lookup(x30753, x14489);
      GList** x14494 = (GList**){x14493};
      GList* x14521 = *(x14494);
      /* VAR */ GList* x14522 = x14521;
      while(1) {
        
        GList* x6930 = x14522;
        GList* x6931 = NULL;
        boolean_t x6932 = x6930!=(x6931);
        if (!(x6932)) break; 
        
        GList* x6933 = x14522;
        void* x6934 = g_list_nth_data(x6933, 0);
        struct CUSTOMERRecord* x6935 = (struct CUSTOMERRecord*){x6934};
        GList* x6936 = x14522;
        GList* x6937 = g_list_next(x6936);
        x14522 = x6937;
        char* x6939 = x6935->C_PHONE;
        numeric_int_t x13007 = 2-(0);
        numeric_int_t x13008 = x13007+(1);
        char* x13009 = malloc(x13008);
        char* x13010 = pointer_add(x6939, 0);
        numeric_int_t x13011 = x13008-(1);
        char* x13012 = strncpy(x13009, x13010, x13011);
        *(x13009 + x13011) = '\0';
        void* x6941 = g_hash_table_lookup(x30743, x13009);
        boolean_t x6942 = x6941==(NULL);
        /* VAR */ struct AGGRecord_OptimalString* ite17176 = 0;
        if(x6942) {
          double* x17177 = (double*)malloc(2 * sizeof(double));
          memset(x17177, 0, 2 * sizeof(double));
          struct AGGRecord_OptimalString* x17178 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
          memset(x17178, 0, 1 * sizeof(struct AGGRecord_OptimalString));
          x17178->key = x13009; x17178->aggs = x17177;
          g_hash_table_insert(x30743, x13009, x17178);
          ite17176 = x17178;
        } else {
          
          ite17176 = x6941;
        };
        struct AGGRecord_OptimalString* x6943 = ite17176;
        double* x6949 = x6943->aggs;
        double x6950 = x6949[0];
        double x6951 = x6935->C_ACCTBAL;
        double x6952 = x6951+(x6950);
        *x6949 = x6952;
        double x6954 = x6949[1];
        double x6955 = x6954+(1.0);
        *(x6949 + 1) = x6955;
      };
    };
    GList* x31301 = g_hash_table_get_keys(x30743);
    /* VAR */ GList* x31302 = x31301;
    numeric_int_t x31303 = g_hash_table_size(x30743);
    numeric_int_t x14575 = 0;
    for(; x14575 < x31303 ; x14575 += 1) {
      
      GList* x14576 = x31302;
      void* x14577 = g_list_nth_data(x14576, 0);
      GList* x14578 = g_list_next(x14576);
      x31302 = x14578;
      void* x14580 = g_hash_table_lookup(x30743, x14577);
      struct AGGRecord_OptimalString* x14582 = (struct AGGRecord_OptimalString*){x14580};
      g_tree_insert(x30914, x14582, x14582);
    };
    while(1) {
      
      boolean_t x1746 = x30915;
      boolean_t x387 = !(x1746);
      /* VAR */ boolean_t ite18653 = 0;
      if(x387) {
        numeric_int_t x31328 = g_tree_nnodes(x30914);
        boolean_t x31329 = x31328!=(0);
        ite18653 = x31329;
      } else {
        
        ite18653 = 0;
      };
      boolean_t x17224 = ite18653;
      if (!(x17224)) break; 
      
      void* x6986 = NULL;
      void** x6994 = &(x6986);
      g_tree_foreach(x30914, x6993, x6994);
      struct AGGRecord_OptimalString* x6996 = (struct AGGRecord_OptimalString*){x6986};
      numeric_int_t x6997 = g_tree_remove(x30914, x6996);
      if(0) {
        x30915 = 1;
      } else {
        
        char* x400 = x6996->key;
        double* x402 = x6996->aggs;
        double x403 = x402[1];
        double x404 = x402[0];
        printf("%s|%.0f|%.2f\n", x400, x403, x404);
        numeric_int_t x1765 = x30916;
        numeric_int_t x407 = x1765+(1);
        x30916 = x407;
      };
    };
    numeric_int_t x31356 = x30916;
    printf("(%d rows)\n", x31356);
    struct timeval* x31358 = &x30764;
    gettimeofday(x31358, NULL);
    struct timeval* x31360 = &x30760;
    struct timeval* x31361 = &x30764;
    struct timeval* x31362 = &x30762;
    long x31363 = timeval_subtract(x31360, x31361, x31362);
    printf("Generated code run in %ld milliseconds.\n", x31363);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x30720(char* x6611) {
  numeric_int_t x12625 = strlen(x6611);
  /* VAR */ numeric_int_t x11280 = 0;
  /* VAR */ numeric_int_t x11281 = 0;
  while(1) {
    
    numeric_int_t x11282 = x11280;
    boolean_t x11283 = x11282<(x12625);
    if (!(x11283)) break; 
    
    numeric_int_t x11284 = x11281;
    numeric_int_t x11285 = x11280;
    char* x12633 = pointer_add(x6611, x11285);
    char x12634 = *(x12633);
    numeric_int_t x11288 = x11284+(x12634);
    x11281 = x11288;
    numeric_int_t x11290 = x11280;
    numeric_int_t x11291 = x11290+(1);
    x11280 = x11291;
  };
  numeric_int_t x11294 = x11281;
  return x11294; 
}

boolean_t x30738(char* x6616, char* x6617) {
  boolean_t x11298 = strcmp(x6616, x6617);
  boolean_t x11299 = !(x11298);
  return x11299; 
}

numeric_int_t x30744(void* x5550) {
  numeric_int_t x5551 = g_direct_hash(x5550);
  return x5551; 
}

numeric_int_t x30747(void* x5553, void* x5554) {
  numeric_int_t x5555 = g_direct_equal(x5553, x5554);
  return x5555; 
}

numeric_int_t x30892(struct AGGRecord_OptimalString* x240, struct AGGRecord_OptimalString* x241) {
  char* x242 = x240->key;
  char* x12766 = pointer_add(x242, 0);
  char x12767 = *(x12766);
  char* x244 = x241->key;
  char* x12769 = pointer_add(x244, 0);
  char x12770 = *(x12769);
  numeric_int_t x246 = x12767-(x12770);
  /* VAR */ numeric_int_t res247 = x246;
  numeric_int_t x248 = res247;
  boolean_t x249 = x248==(0);
  if(x249) {
    char* x12776 = pointer_add(x242, 1);
    char x12777 = *(x12776);
    char* x12778 = pointer_add(x244, 1);
    char x12779 = *(x12778);
    numeric_int_t x252 = x12777-(x12779);
    res247 = x252;
  };
  numeric_int_t x255 = res247;
  return x255; 
}

numeric_int_t x6993(void* x6987, void* x6988, void* x6989) {
  struct AGGRecord_OptimalString** x6990 = (struct AGGRecord_OptimalString**){x6989};
  struct AGGRecord_OptimalString* x6991 = (struct AGGRecord_OptimalString*){x6988};
  pointer_assign(x6990, x6991);
  return 1; 
}
