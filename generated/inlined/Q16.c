#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct Q16GRPRecord2;
struct AGGRecord_Q16GRPRecord2;
struct Q16GRPRecord1;
struct PARTRecord;
struct PARTRecord_PARTSUPPRecord;
struct SUPPLIERRecord;
struct AGGRecord_Q16GRPRecord1;
struct PARTSUPPRecord;
struct Q16GRPRecord2 {
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
};

struct AGGRecord_Q16GRPRecord2 {
  struct Q16GRPRecord2* key;
  double* aggs;
};

struct Q16GRPRecord1 {
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  numeric_int_t PS_SUPPKEY;
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

struct PARTRecord_PARTSUPPRecord {
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
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

struct AGGRecord_Q16GRPRecord1 {
  struct Q16GRPRecord1* key;
  double* aggs;
};

struct PARTSUPPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
};


numeric_int_t x31672(struct Q16GRPRecord2* x7591);

boolean_t x31711(struct Q16GRPRecord2* x7596, struct Q16GRPRecord2* x7597);

numeric_int_t x31738(struct Q16GRPRecord1* x7604);

boolean_t x31779(struct Q16GRPRecord1* x7609, struct Q16GRPRecord1* x7610);

numeric_int_t x31815(void* x6255);

numeric_int_t x31818(void* x6258, void* x6259);

numeric_int_t x31825(void* x6265);

numeric_int_t x31828(void* x6268, void* x6269);

numeric_int_t x31891(struct AGGRecord_Q16GRPRecord2* x168, struct AGGRecord_Q16GRPRecord2* x169);

numeric_int_t x8145(void* x8139, void* x8140, void* x8141);

int main(int argc, char** argv) {
  FILE* x3640 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x3641 = 0;
  numeric_int_t x3642 = x3641;
  numeric_int_t* x3643 = &x3642;
  numeric_int_t x3644 = fscanf(x3640, "%d", x3643);
  pclose(x3640);
  struct SUPPLIERRecord* x4762 = (struct SUPPLIERRecord*)malloc(x3642 * sizeof(struct SUPPLIERRecord));
  memset(x4762, 0, x3642 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x3648 = O_RDONLY;
  numeric_int_t x3649 = open("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x3648);
  struct stat x3650 = (struct stat){0};
  /* VAR */ struct stat x3651 = x3650;
  struct stat x3652 = x3651;
  struct stat* x3653 = &x3652;
  numeric_int_t x3654 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/supplier.tbl", x3653);
  size_t x3655 = x3653->st_size;
  numeric_int_t x3656 = PROT_READ;
  numeric_int_t x3657 = MAP_PRIVATE;
  char* x3658 = mmap(NULL, x3655, x3656, x3657, x3649, 0);
  /* VAR */ char* x3659 = x3658;
  char* x3 = x3659;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x3642);
    /* VAR */ boolean_t ite23551 = 0;
    if(x6) {
      char x30371 = *x3;
      boolean_t x30372 = x30371!=('\0');
      ite23551 = x30372;
    } else {
      
      ite23551 = 0;
    };
    boolean_t x21582 = ite23551;
    if (!(x21582)) break; 
    
    /* VAR */ numeric_int_t x3667 = 0;
    numeric_int_t x3668 = x3667;
    numeric_int_t* x3669 = &x3668;
    char* x3670 = strntoi_unchecked(x3, x3669);
    x3 = x3670;
    /* VAR */ char* x3672 = x3;
    while(1) {
      
      char x3673 = *x3;
      boolean_t x3674 = x3673!=('|');
      /* VAR */ boolean_t ite23569 = 0;
      if(x3674) {
        char x30388 = *x3;
        boolean_t x30389 = x30388!=('\n');
        ite23569 = x30389;
      } else {
        
        ite23569 = 0;
      };
      boolean_t x21593 = ite23569;
      if (!(x21593)) break; 
      
      x3 += 1;
    };
    char* x3680 = x3672;
    numeric_int_t x3681 = x3 - x3680;
    numeric_int_t x3682 = x3681+(1);
    char* x4799 = (char*)malloc(x3682 * sizeof(char));
    memset(x4799, 0, x3682 * sizeof(char));
    char* x3685 = x3672;
    char* x3686 = strncpy(x4799, x3685, x3681);
    x3 += 1;
    /* VAR */ char* x3688 = x3;
    while(1) {
      
      char x3689 = *x3;
      boolean_t x3690 = x3689!=('|');
      /* VAR */ boolean_t ite23590 = 0;
      if(x3690) {
        char x30408 = *x3;
        boolean_t x30409 = x30408!=('\n');
        ite23590 = x30409;
      } else {
        
        ite23590 = 0;
      };
      boolean_t x21607 = ite23590;
      if (!(x21607)) break; 
      
      x3 += 1;
    };
    char* x3696 = x3688;
    numeric_int_t x3697 = x3 - x3696;
    numeric_int_t x3698 = x3697+(1);
    char* x4815 = (char*)malloc(x3698 * sizeof(char));
    memset(x4815, 0, x3698 * sizeof(char));
    char* x3701 = x3688;
    char* x3702 = strncpy(x4815, x3701, x3697);
    x3 += 1;
    /* VAR */ numeric_int_t x3704 = 0;
    numeric_int_t x3705 = x3704;
    numeric_int_t* x3706 = &x3705;
    char* x3707 = strntoi_unchecked(x3, x3706);
    x3 = x3707;
    /* VAR */ char* x3709 = x3;
    while(1) {
      
      char x3710 = *x3;
      boolean_t x3711 = x3710!=('|');
      /* VAR */ boolean_t ite23616 = 0;
      if(x3711) {
        char x30433 = *x3;
        boolean_t x30434 = x30433!=('\n');
        ite23616 = x30434;
      } else {
        
        ite23616 = 0;
      };
      boolean_t x21626 = ite23616;
      if (!(x21626)) break; 
      
      x3 += 1;
    };
    char* x3717 = x3709;
    numeric_int_t x3718 = x3 - x3717;
    numeric_int_t x3719 = x3718+(1);
    char* x4836 = (char*)malloc(x3719 * sizeof(char));
    memset(x4836, 0, x3719 * sizeof(char));
    char* x3722 = x3709;
    char* x3723 = strncpy(x4836, x3722, x3718);
    x3 += 1;
    /* VAR */ double x3725 = 0.0;
    double x3726 = x3725;
    double* x3727 = &x3726;
    char* x3728 = strntod_unchecked(x3, x3727);
    x3 = x3728;
    /* VAR */ char* x3730 = x3;
    while(1) {
      
      char x3731 = *x3;
      boolean_t x3732 = x3731!=('|');
      /* VAR */ boolean_t ite23642 = 0;
      if(x3732) {
        char x30458 = *x3;
        boolean_t x30459 = x30458!=('\n');
        ite23642 = x30459;
      } else {
        
        ite23642 = 0;
      };
      boolean_t x21645 = ite23642;
      if (!(x21645)) break; 
      
      x3 += 1;
    };
    char* x3738 = x3730;
    numeric_int_t x3739 = x3 - x3738;
    numeric_int_t x3740 = x3739+(1);
    char* x4857 = (char*)malloc(x3740 * sizeof(char));
    memset(x4857, 0, x3740 * sizeof(char));
    char* x3743 = x3730;
    char* x3744 = strncpy(x4857, x3743, x3739);
    x3 += 1;
    struct SUPPLIERRecord* x5429 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x5429, 0, 1 * sizeof(struct SUPPLIERRecord));
    x5429->S_SUPPKEY = x3668; x5429->S_NAME = x4799; x5429->S_ADDRESS = x4815; x5429->S_NATIONKEY = x3705; x5429->S_PHONE = x4836; x5429->S_ACCTBAL = x3726; x5429->S_COMMENT = x4857;
    numeric_int_t x17 = x4;
    struct SUPPLIERRecord x4864 = *x5429;
    *(x4762 + x17) = x4864;
    struct SUPPLIERRecord* x4866 = &(x4762[x17]);
    x5429 = x4866;
    numeric_int_t x19 = x4;
    numeric_int_t x20 = x19+(1);
    x4 = x20;
  };
  char* x3753 = x3659;
  munmap(x3753, x3655);
  FILE* x3754 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", "r");
  /* VAR */ numeric_int_t x3755 = 0;
  numeric_int_t x3756 = x3755;
  numeric_int_t* x3757 = &x3756;
  numeric_int_t x3758 = fscanf(x3754, "%d", x3757);
  pclose(x3754);
  struct PARTRecord* x4879 = (struct PARTRecord*)malloc(x3756 * sizeof(struct PARTRecord));
  memset(x4879, 0, x3756 * sizeof(struct PARTRecord));
  numeric_int_t x3762 = O_RDONLY;
  numeric_int_t x3763 = open("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x3762);
  /* VAR */ struct stat x3764 = x3650;
  struct stat x3765 = x3764;
  struct stat* x3766 = &x3765;
  numeric_int_t x3767 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x3766);
  size_t x3768 = x3766->st_size;
  numeric_int_t x3769 = PROT_READ;
  numeric_int_t x3770 = MAP_PRIVATE;
  char* x3771 = mmap(NULL, x3768, x3769, x3770, x3763, 0);
  /* VAR */ char* x3772 = x3771;
  char* x26 = x3772;
  /* VAR */ numeric_int_t x27 = 0;
  while(1) {
    
    numeric_int_t x28 = x27;
    boolean_t x29 = x28<(x3756);
    /* VAR */ boolean_t ite23695 = 0;
    if(x29) {
      char x30510 = *x26;
      boolean_t x30511 = x30510!=('\0');
      ite23695 = x30511;
    } else {
      
      ite23695 = 0;
    };
    boolean_t x21691 = ite23695;
    if (!(x21691)) break; 
    
    /* VAR */ numeric_int_t x3780 = 0;
    numeric_int_t x3781 = x3780;
    numeric_int_t* x3782 = &x3781;
    char* x3783 = strntoi_unchecked(x26, x3782);
    x26 = x3783;
    /* VAR */ char* x3785 = x26;
    while(1) {
      
      char x3786 = *x26;
      boolean_t x3787 = x3786!=('|');
      /* VAR */ boolean_t ite23713 = 0;
      if(x3787) {
        char x30527 = *x26;
        boolean_t x30528 = x30527!=('\n');
        ite23713 = x30528;
      } else {
        
        ite23713 = 0;
      };
      boolean_t x21702 = ite23713;
      if (!(x21702)) break; 
      
      x26 += 1;
    };
    char* x3793 = x3785;
    numeric_int_t x3794 = x26 - x3793;
    numeric_int_t x3795 = x3794+(1);
    char* x4915 = (char*)malloc(x3795 * sizeof(char));
    memset(x4915, 0, x3795 * sizeof(char));
    char* x3798 = x3785;
    char* x3799 = strncpy(x4915, x3798, x3794);
    x26 += 1;
    /* VAR */ char* x3801 = x26;
    while(1) {
      
      char x3802 = *x26;
      boolean_t x3803 = x3802!=('|');
      /* VAR */ boolean_t ite23734 = 0;
      if(x3803) {
        char x30547 = *x26;
        boolean_t x30548 = x30547!=('\n');
        ite23734 = x30548;
      } else {
        
        ite23734 = 0;
      };
      boolean_t x21716 = ite23734;
      if (!(x21716)) break; 
      
      x26 += 1;
    };
    char* x3809 = x3801;
    numeric_int_t x3810 = x26 - x3809;
    numeric_int_t x3811 = x3810+(1);
    char* x4931 = (char*)malloc(x3811 * sizeof(char));
    memset(x4931, 0, x3811 * sizeof(char));
    char* x3814 = x3801;
    char* x3815 = strncpy(x4931, x3814, x3810);
    x26 += 1;
    /* VAR */ char* x3817 = x26;
    while(1) {
      
      char x3818 = *x26;
      boolean_t x3819 = x3818!=('|');
      /* VAR */ boolean_t ite23755 = 0;
      if(x3819) {
        char x30567 = *x26;
        boolean_t x30568 = x30567!=('\n');
        ite23755 = x30568;
      } else {
        
        ite23755 = 0;
      };
      boolean_t x21730 = ite23755;
      if (!(x21730)) break; 
      
      x26 += 1;
    };
    char* x3825 = x3817;
    numeric_int_t x3826 = x26 - x3825;
    numeric_int_t x3827 = x3826+(1);
    char* x4947 = (char*)malloc(x3827 * sizeof(char));
    memset(x4947, 0, x3827 * sizeof(char));
    char* x3830 = x3817;
    char* x3831 = strncpy(x4947, x3830, x3826);
    x26 += 1;
    /* VAR */ char* x3833 = x26;
    while(1) {
      
      char x3834 = *x26;
      boolean_t x3835 = x3834!=('|');
      /* VAR */ boolean_t ite23776 = 0;
      if(x3835) {
        char x30587 = *x26;
        boolean_t x30588 = x30587!=('\n');
        ite23776 = x30588;
      } else {
        
        ite23776 = 0;
      };
      boolean_t x21744 = ite23776;
      if (!(x21744)) break; 
      
      x26 += 1;
    };
    char* x3841 = x3833;
    numeric_int_t x3842 = x26 - x3841;
    numeric_int_t x3843 = x3842+(1);
    char* x4963 = (char*)malloc(x3843 * sizeof(char));
    memset(x4963, 0, x3843 * sizeof(char));
    char* x3846 = x3833;
    char* x3847 = strncpy(x4963, x3846, x3842);
    x26 += 1;
    /* VAR */ numeric_int_t x3849 = 0;
    numeric_int_t x3850 = x3849;
    numeric_int_t* x3851 = &x3850;
    char* x3852 = strntoi_unchecked(x26, x3851);
    x26 = x3852;
    /* VAR */ char* x3854 = x26;
    while(1) {
      
      char x3855 = *x26;
      boolean_t x3856 = x3855!=('|');
      /* VAR */ boolean_t ite23802 = 0;
      if(x3856) {
        char x30612 = *x26;
        boolean_t x30613 = x30612!=('\n');
        ite23802 = x30613;
      } else {
        
        ite23802 = 0;
      };
      boolean_t x21763 = ite23802;
      if (!(x21763)) break; 
      
      x26 += 1;
    };
    char* x3862 = x3854;
    numeric_int_t x3863 = x26 - x3862;
    numeric_int_t x3864 = x3863+(1);
    char* x4984 = (char*)malloc(x3864 * sizeof(char));
    memset(x4984, 0, x3864 * sizeof(char));
    char* x3867 = x3854;
    char* x3868 = strncpy(x4984, x3867, x3863);
    x26 += 1;
    /* VAR */ double x3870 = 0.0;
    double x3871 = x3870;
    double* x3872 = &x3871;
    char* x3873 = strntod_unchecked(x26, x3872);
    x26 = x3873;
    /* VAR */ char* x3875 = x26;
    while(1) {
      
      char x3876 = *x26;
      boolean_t x3877 = x3876!=('|');
      /* VAR */ boolean_t ite23828 = 0;
      if(x3877) {
        char x30637 = *x26;
        boolean_t x30638 = x30637!=('\n');
        ite23828 = x30638;
      } else {
        
        ite23828 = 0;
      };
      boolean_t x21782 = ite23828;
      if (!(x21782)) break; 
      
      x26 += 1;
    };
    char* x3883 = x3875;
    numeric_int_t x3884 = x26 - x3883;
    numeric_int_t x3885 = x3884+(1);
    char* x5005 = (char*)malloc(x3885 * sizeof(char));
    memset(x5005, 0, x3885 * sizeof(char));
    char* x3888 = x3875;
    char* x3889 = strncpy(x5005, x3888, x3884);
    x26 += 1;
    struct PARTRecord* x5579 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x5579, 0, 1 * sizeof(struct PARTRecord));
    x5579->P_PARTKEY = x3781; x5579->P_NAME = x4915; x5579->P_MFGR = x4931; x5579->P_BRAND = x4947; x5579->P_TYPE = x4963; x5579->P_SIZE = x3850; x5579->P_CONTAINER = x4984; x5579->P_RETAILPRICE = x3871; x5579->P_COMMENT = x5005;
    numeric_int_t x42 = x27;
    struct PARTRecord x5012 = *x5579;
    *(x4879 + x42) = x5012;
    struct PARTRecord* x5014 = &(x4879[x42]);
    x5579 = x5014;
    numeric_int_t x44 = x27;
    numeric_int_t x45 = x44+(1);
    x27 = x45;
  };
  char* x3898 = x3772;
  munmap(x3898, x3768);
  FILE* x3899 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x3900 = 0;
  numeric_int_t x3901 = x3900;
  numeric_int_t* x3902 = &x3901;
  numeric_int_t x3903 = fscanf(x3899, "%d", x3902);
  pclose(x3899);
  struct PARTSUPPRecord* x5027 = (struct PARTSUPPRecord*)malloc(x3901 * sizeof(struct PARTSUPPRecord));
  memset(x5027, 0, x3901 * sizeof(struct PARTSUPPRecord));
  numeric_int_t x3907 = O_RDONLY;
  numeric_int_t x3908 = open("/Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", x3907);
  /* VAR */ struct stat x3909 = x3650;
  struct stat x3910 = x3909;
  struct stat* x3911 = &x3910;
  numeric_int_t x3912 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/partsupp.tbl", x3911);
  size_t x3913 = x3911->st_size;
  numeric_int_t x3914 = PROT_READ;
  numeric_int_t x3915 = MAP_PRIVATE;
  char* x3916 = mmap(NULL, x3913, x3914, x3915, x3908, 0);
  /* VAR */ char* x3917 = x3916;
  char* x51 = x3917;
  /* VAR */ numeric_int_t x52 = 0;
  while(1) {
    
    numeric_int_t x53 = x52;
    boolean_t x54 = x53<(x3901);
    /* VAR */ boolean_t ite23881 = 0;
    if(x54) {
      char x30689 = *x51;
      boolean_t x30690 = x30689!=('\0');
      ite23881 = x30690;
    } else {
      
      ite23881 = 0;
    };
    boolean_t x21828 = ite23881;
    if (!(x21828)) break; 
    
    /* VAR */ numeric_int_t x3925 = 0;
    numeric_int_t x3926 = x3925;
    numeric_int_t* x3927 = &x3926;
    char* x3928 = strntoi_unchecked(x51, x3927);
    x51 = x3928;
    /* VAR */ numeric_int_t x3930 = 0;
    numeric_int_t x3931 = x3930;
    numeric_int_t* x3932 = &x3931;
    char* x3933 = strntoi_unchecked(x51, x3932);
    x51 = x3933;
    /* VAR */ numeric_int_t x3935 = 0;
    numeric_int_t x3936 = x3935;
    numeric_int_t* x3937 = &x3936;
    char* x3938 = strntoi_unchecked(x51, x3937);
    x51 = x3938;
    /* VAR */ double x3940 = 0.0;
    double x3941 = x3940;
    double* x3942 = &x3941;
    char* x3943 = strntod_unchecked(x51, x3942);
    x51 = x3943;
    /* VAR */ char* x3945 = x51;
    while(1) {
      
      char x3946 = *x51;
      boolean_t x3947 = x3946!=('|');
      /* VAR */ boolean_t ite23914 = 0;
      if(x3947) {
        char x30721 = *x51;
        boolean_t x30722 = x30721!=('\n');
        ite23914 = x30722;
      } else {
        
        ite23914 = 0;
      };
      boolean_t x21854 = ite23914;
      if (!(x21854)) break; 
      
      x51 += 1;
    };
    char* x3953 = x3945;
    numeric_int_t x3954 = x51 - x3953;
    numeric_int_t x3955 = x3954+(1);
    char* x5078 = (char*)malloc(x3955 * sizeof(char));
    memset(x5078, 0, x3955 * sizeof(char));
    char* x3958 = x3945;
    char* x3959 = strncpy(x5078, x3958, x3954);
    x51 += 1;
    struct PARTSUPPRecord* x5654 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x5654, 0, 1 * sizeof(struct PARTSUPPRecord));
    x5654->PS_PARTKEY = x3926; x5654->PS_SUPPKEY = x3931; x5654->PS_AVAILQTY = x3936; x5654->PS_SUPPLYCOST = x3941; x5654->PS_COMMENT = x5078;
    numeric_int_t x63 = x52;
    struct PARTSUPPRecord x5085 = *x5654;
    *(x5027 + x63) = x5085;
    struct PARTSUPPRecord* x5087 = &(x5027[x63]);
    x5654 = x5087;
    numeric_int_t x65 = x52;
    numeric_int_t x66 = x65+(1);
    x52 = x66;
  };
  char* x3968 = x3917;
  munmap(x3968, x3913);
  numeric_int_t x71 = 0;
  for(; x71 < 1 ; x71 += 1) {
    
    GHashTable* x31737 = g_hash_table_new(x31672, x31711);
    GHashTable* x31814 = g_hash_table_new(x31738, x31779);
    void*** x31822 = (void***){x31815};
    numeric_int_t* x31823 = (numeric_int_t*){x31818};
    GHashTable* x31824 = g_hash_table_new(x31822, x31823);
    void*** x31832 = (void***){x31825};
    numeric_int_t* x31833 = (numeric_int_t*){x31828};
    GHashTable* x31834 = g_hash_table_new(x31832, x31833);
    struct timeval x31835 = (struct timeval){0};
    /* VAR */ struct timeval x31836 = x31835;
    struct timeval x31837 = x31836;
    /* VAR */ struct timeval x31838 = x31835;
    struct timeval x31839 = x31838;
    /* VAR */ struct timeval x31840 = x31835;
    struct timeval x31841 = x31840;
    struct timeval* x31842 = &x31839;
    gettimeofday(x31842, NULL);
    /* VAR */ numeric_int_t x31844 = 0;
    /* VAR */ numeric_int_t x31845 = 0;
    /* VAR */ numeric_int_t x31846 = 0;
    numeric_int_t* x31935 = &(x31891);
    GTree* x31936 = g_tree_new(x31935);
    /* VAR */ boolean_t x31937 = 0;
    /* VAR */ numeric_int_t x31938 = 0;
    while(1) {
      
      numeric_int_t x31940 = x31844;
      boolean_t x31941 = x31940<(x3756);
      if (!(x31941)) break; 
      
      numeric_int_t x1726 = x31844;
      struct PARTRecord* x221 = &(x4879[x1726]);
      char* x223 = x221->P_BRAND;
      numeric_int_t x17146 = strlen("Brand#21");
      numeric_int_t x17147 = strncmp(x223, "Brand#21", x17146);
      boolean_t x17148 = x17147==(0);
      boolean_t x225 = !(x17148);
      /* VAR */ boolean_t ite25129 = 0;
      if(x225) {
        char* x31951 = x221->P_TYPE;
        numeric_int_t x31952 = strlen("PROMO PLATED");
        numeric_int_t x31953 = strncmp(x31951, "PROMO PLATED", x31952);
        boolean_t x31954 = x31953==(0);
        boolean_t x31955 = !(x31954);
        ite25129 = x31955;
      } else {
        
        ite25129 = 0;
      };
      boolean_t x22960 = ite25129;
      /* VAR */ boolean_t ite25141 = 0;
      if(x22960) {
        numeric_int_t x31962 = x221->P_SIZE;
        boolean_t x31963 = x31962==(23);
        /* VAR */ boolean_t x31964 = 0;
        if(x31963) {
          x31964 = 1;
        } else {
          
          boolean_t x31967 = x31962==(3);
          x31964 = x31967;
        };
        boolean_t x31970 = x31964;
        /* VAR */ boolean_t x31971 = 0;
        if(x31970) {
          x31971 = 1;
        } else {
          
          boolean_t x31974 = x31962==(33);
          x31971 = x31974;
        };
        boolean_t x31977 = x31971;
        /* VAR */ boolean_t x31978 = 0;
        if(x31977) {
          x31978 = 1;
        } else {
          
          boolean_t x31981 = x31962==(29);
          x31978 = x31981;
        };
        boolean_t x31984 = x31978;
        /* VAR */ boolean_t x31985 = 0;
        if(x31984) {
          x31985 = 1;
        } else {
          
          boolean_t x31988 = x31962==(40);
          x31985 = x31988;
        };
        boolean_t x31991 = x31985;
        /* VAR */ boolean_t x31992 = 0;
        if(x31991) {
          x31992 = 1;
        } else {
          
          boolean_t x31995 = x31962==(27);
          x31992 = x31995;
        };
        boolean_t x31998 = x31992;
        /* VAR */ boolean_t x31999 = 0;
        if(x31998) {
          x31999 = 1;
        } else {
          
          boolean_t x32002 = x31962==(22);
          x31999 = x32002;
        };
        boolean_t x32005 = x31999;
        /* VAR */ boolean_t x32006 = 0;
        if(x32005) {
          x32006 = 1;
        } else {
          
          boolean_t x32009 = x31962==(4);
          x32006 = x32009;
        };
        boolean_t x32012 = x32006;
        ite25141 = x32012;
      } else {
        
        ite25141 = 0;
      };
      boolean_t x22962 = ite25141;
      if(x22962) {
        numeric_int_t x247 = x221->P_PARTKEY;
        void* x6357 = (void*){x247};
        void* x6358 = (void*){x221};
        void* x6359 = g_hash_table_lookup(x31834, x6357);
        GList** x6360 = (GList**){x6359};
        GList** x6361 = NULL;
        boolean_t x6362 = x6360==(x6361);
        /* VAR */ GList** ite22972 = 0;
        if(x6362) {
          GList** x22973 = malloc(8);
          GList* x22974 = NULL;
          pointer_assign(x22973, x22974);
          ite22972 = x22973;
        } else {
          
          ite22972 = x6360;
        };
        GList** x6366 = ite22972;
        GList* x6367 = *(x6366);
        GList* x6368 = g_list_prepend(x6367, x6358);
        pointer_assign(x6366, x6368);
        void* x6370 = (void*){x6366};
        g_hash_table_insert(x31834, x6357, x6370);
      };
      numeric_int_t x1756 = x31844;
      numeric_int_t x252 = x1756+(1);
      x31844 = x252;
    };
    while(1) {
      
      numeric_int_t x32043 = x31845;
      boolean_t x32044 = x32043<(x3901);
      if (!(x32044)) break; 
      
      numeric_int_t x1765 = x31845;
      struct PARTSUPPRecord* x261 = &(x5027[x1765]);
      numeric_int_t x263 = x261->PS_PARTKEY;
      void* x6382 = (void*){x263};
      void* x6383 = g_hash_table_lookup(x31834, x6382);
      GList** x6384 = (GList**){x6383};
      boolean_t x12344 = x6384!=(NULL);
      if(x12344) {
        GList* x7819 = *(x6384);
        /* VAR */ GList* x7820 = x7819;
        while(1) {
          
          GList* x7821 = x7820;
          GList* x7822 = NULL;
          boolean_t x7823 = x7821!=(x7822);
          if (!(x7823)) break; 
          
          GList* x7824 = x7820;
          void* x7825 = g_list_nth_data(x7824, 0);
          struct PARTRecord* x7826 = (struct PARTRecord*){x7825};
          GList* x7827 = x7820;
          GList* x7828 = g_list_next(x7827);
          x7820 = x7828;
          numeric_int_t x7830 = x7826->P_PARTKEY;
          boolean_t x7831 = x7830==(x263);
          if(x7831) {
            char* x787 = x7826->P_NAME;
            char* x788 = x7826->P_MFGR;
            char* x789 = x7826->P_BRAND;
            char* x790 = x7826->P_TYPE;
            numeric_int_t x791 = x7826->P_SIZE;
            char* x792 = x7826->P_CONTAINER;
            double x793 = x7826->P_RETAILPRICE;
            char* x794 = x7826->P_COMMENT;
            numeric_int_t x795 = x261->PS_SUPPKEY;
            numeric_int_t x796 = x261->PS_AVAILQTY;
            double x797 = x261->PS_SUPPLYCOST;
            char* x798 = x261->PS_COMMENT;
            struct PARTRecord_PARTSUPPRecord* x5788 = (struct PARTRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord));
            memset(x5788, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord));
            x5788->P_PARTKEY = x7830; x5788->P_NAME = x787; x5788->P_MFGR = x788; x5788->P_BRAND = x789; x5788->P_TYPE = x790; x5788->P_SIZE = x791; x5788->P_CONTAINER = x792; x5788->P_RETAILPRICE = x793; x5788->P_COMMENT = x794; x5788->PS_PARTKEY = x263; x5788->PS_SUPPKEY = x795; x5788->PS_AVAILQTY = x796; x5788->PS_SUPPLYCOST = x797; x5788->PS_COMMENT = x798;
            numeric_int_t x284 = x5788->PS_SUPPKEY;
            void* x6410 = (void*){x284};
            void* x6411 = (void*){x5788};
            void* x6412 = g_hash_table_lookup(x31824, x6410);
            GList** x6413 = (GList**){x6412};
            GList** x6414 = NULL;
            boolean_t x6415 = x6413==(x6414);
            /* VAR */ GList** ite23077 = 0;
            if(x6415) {
              GList** x23078 = malloc(8);
              GList* x23079 = NULL;
              pointer_assign(x23078, x23079);
              ite23077 = x23078;
            } else {
              
              ite23077 = x6413;
            };
            GList** x6419 = ite23077;
            GList* x6420 = *(x6419);
            GList* x6421 = g_list_prepend(x6420, x6411);
            pointer_assign(x6419, x6421);
            void* x6423 = (void*){x6419};
            g_hash_table_insert(x31824, x6410, x6423);
          };
        };
      };
      numeric_int_t x1817 = x31845;
      numeric_int_t x292 = x1817+(1);
      x31845 = x292;
    };
    while(1) {
      
      numeric_int_t x32149 = x31846;
      boolean_t x32150 = x32149<(x3642);
      if (!(x32150)) break; 
      
      numeric_int_t x1827 = x31846;
      struct SUPPLIERRecord* x302 = &(x4762[x1827]);
      char* x304 = x302->S_COMMENT;
      char* x17297 = pointer_add(x304, 0);
      char* x17298 = strstr(x17297, "Customer");
      char* x17299 = NULL;
      boolean_t x17300 = x17298==(x17299);
      /* VAR */ numeric_int_t ite23103 = 0;
      if(x17300) {
        ite23103 = -1;
      } else {
        
        numeric_int_t x23105 = str_subtract(x17298, x304);
        ite23103 = x23105;
      };
      numeric_int_t x17302 = ite23103;
      char* x17303 = pointer_add(x304, x17302);
      char* x17304 = strstr(x17303, "Complaints");
      char* x17305 = NULL;
      boolean_t x17306 = x17304==(x17305);
      /* VAR */ numeric_int_t ite23114 = 0;
      if(x17306) {
        ite23114 = -1;
      } else {
        
        numeric_int_t x23116 = str_subtract(x17304, x304);
        ite23114 = x23116;
      };
      numeric_int_t x17308 = ite23114;
      boolean_t x307 = x17302!=(-1);
      /* VAR */ boolean_t ite25326 = 0;
      if(x307) {
        boolean_t x32179 = x17308!=(-1);
        ite25326 = x32179;
      } else {
        
        ite25326 = 0;
      };
      boolean_t x23122 = ite25326;
      if(x23122) {
        numeric_int_t x310 = x302->S_SUPPKEY;
        void* x6443 = (void*){x310};
        void* x6444 = g_hash_table_lookup(x31824, x6443);
        GList** x6445 = (GList**){x6444};
        boolean_t x12448 = x6445!=(NULL);
        if(x12448) {
          GList* x7894 = *(x6445);
          /* VAR */ GList* x7895 = x7894;
          /* VAR */ GList** x7896 = x6445;
          while(1) {
            
            GList* x7897 = x7895;
            GList* x7898 = NULL;
            boolean_t x7899 = x7897!=(x7898);
            if (!(x7899)) break; 
            
            GList* x7900 = x7895;
            void* x7901 = g_list_nth_data(x7900, 0);
            struct PARTRecord_PARTSUPPRecord* x7902 = (struct PARTRecord_PARTSUPPRecord*){x7901};
            numeric_int_t x7903 = x7902->PS_SUPPKEY;
            boolean_t x7904 = x7903==(x310);
            boolean_t x7905 = !(x7904);
            if(x7905) {
              GList* x7906 = x7895;
              GList* x7907 = x7906->next;
              GList** x7908 = &(x7907);
              x7896 = x7908;
            } else {
              
              GList** x7910 = x7896;
              GList* x7911 = x7895;
              GList* x7912 = g_list_next(x7911);
              pointer_assign(x7910, x7912);
            };
            GList* x7915 = x7895;
            GList* x7916 = g_list_next(x7915);
            x7895 = x7916;
          };
        };
      };
      numeric_int_t x1856 = x31846;
      numeric_int_t x332 = x1856+(1);
      x31846 = x332;
    };
    GList* x32288 = g_hash_table_get_keys(x31824);
    /* VAR */ GList* x32289 = x32288;
    numeric_int_t x32290 = g_hash_table_size(x31824);
    numeric_int_t x19488 = 0;
    for(; x19488 < x32290 ; x19488 += 1) {
      
      GList* x19489 = x32289;
      void* x19490 = g_list_nth_data(x19489, 0);
      GList* x19491 = x32289;
      GList* x19492 = g_list_next(x19491);
      x32289 = x19492;
      void* x19494 = g_hash_table_lookup(x31824, x19490);
      GList** x19495 = (GList**){x19494};
      GList* x19516 = *(x19495);
      /* VAR */ GList* x19517 = x19516;
      while(1) {
        
        GList* x8021 = x19517;
        GList* x8022 = NULL;
        boolean_t x8023 = x8021!=(x8022);
        if (!(x8023)) break; 
        
        GList* x8024 = x19517;
        void* x8025 = g_list_nth_data(x8024, 0);
        struct PARTRecord_PARTSUPPRecord* x8026 = (struct PARTRecord_PARTSUPPRecord*){x8025};
        GList* x8027 = x19517;
        GList* x8028 = g_list_next(x8027);
        x19517 = x8028;
        numeric_int_t x8030 = x8026->PS_SUPPKEY;
        char* x8031 = x8026->P_BRAND;
        char* x8032 = x8026->P_TYPE;
        numeric_int_t x8033 = x8026->P_SIZE;
        struct Q16GRPRecord1* x8034 = (struct Q16GRPRecord1*)malloc(1 * sizeof(struct Q16GRPRecord1));
        memset(x8034, 0, 1 * sizeof(struct Q16GRPRecord1));
        x8034->P_BRAND = x8031; x8034->P_TYPE = x8032; x8034->P_SIZE = x8033; x8034->PS_SUPPKEY = x8030;
        void* x8037 = g_hash_table_lookup(x31814, x8034);
        boolean_t x8038 = x8037==(NULL);
        /* VAR */ struct AGGRecord_Q16GRPRecord1* ite23354 = 0;
        if(x8038) {
          double* x23355 = (double*)malloc(1 * sizeof(double));
          memset(x23355, 0, 1 * sizeof(double));
          struct AGGRecord_Q16GRPRecord1* x23356 = (struct AGGRecord_Q16GRPRecord1*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord1));
          memset(x23356, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord1));
          x23356->key = x8034; x23356->aggs = x23355;
          g_hash_table_insert(x31814, x8034, x23356);
          ite23354 = x23356;
        } else {
          
          ite23354 = x8037;
        };
        struct AGGRecord_Q16GRPRecord1* x8039 = ite23354;
        double* x8045 = x8039->aggs;
        double x8046 = x8045[0];
        *x8045 = x8046;
      };
    };
    GList* x32455 = g_hash_table_get_keys(x31814);
    /* VAR */ GList* x32456 = x32455;
    numeric_int_t x32457 = g_hash_table_size(x31814);
    numeric_int_t x19600 = 0;
    for(; x19600 < x32457 ; x19600 += 1) {
      
      GList* x19601 = x32456;
      void* x19602 = g_list_nth_data(x19601, 0);
      GList* x19603 = g_list_next(x19601);
      x32456 = x19603;
      void* x19605 = g_hash_table_lookup(x31814, x19602);
      struct AGGRecord_Q16GRPRecord1* x19607 = (struct AGGRecord_Q16GRPRecord1*){x19605};
      struct Q16GRPRecord1* x19608 = x19607->key;
      char* x19609 = x19608->P_BRAND;
      char* x19610 = x19608->P_TYPE;
      numeric_int_t x19611 = x19608->P_SIZE;
      struct Q16GRPRecord2* x19612 = (struct Q16GRPRecord2*)malloc(1 * sizeof(struct Q16GRPRecord2));
      memset(x19612, 0, 1 * sizeof(struct Q16GRPRecord2));
      x19612->P_BRAND = x19609; x19612->P_TYPE = x19610; x19612->P_SIZE = x19611;
      void* x19615 = g_hash_table_lookup(x31737, x19612);
      boolean_t x19616 = x19615==(NULL);
      /* VAR */ struct AGGRecord_Q16GRPRecord2* ite23448 = 0;
      if(x19616) {
        double* x23449 = (double*)malloc(1 * sizeof(double));
        memset(x23449, 0, 1 * sizeof(double));
        struct AGGRecord_Q16GRPRecord2* x23450 = (struct AGGRecord_Q16GRPRecord2*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord2));
        memset(x23450, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord2));
        x23450->key = x19612; x23450->aggs = x23449;
        g_hash_table_insert(x31737, x19612, x23450);
        ite23448 = x23450;
      } else {
        
        ite23448 = x19615;
      };
      struct AGGRecord_Q16GRPRecord2* x19617 = ite23448;
      double* x19623 = x19617->aggs;
      double x19624 = x19623[0];
      double x19625 = x19624+(1.0);
      *x19623 = x19625;
    };
    GList* x32527 = g_hash_table_get_keys(x31737);
    /* VAR */ GList* x32528 = x32527;
    numeric_int_t x32529 = g_hash_table_size(x31737);
    numeric_int_t x19645 = 0;
    for(; x19645 < x32529 ; x19645 += 1) {
      
      GList* x19646 = x32528;
      void* x19647 = g_list_nth_data(x19646, 0);
      GList* x19648 = g_list_next(x19646);
      x32528 = x19648;
      void* x19650 = g_hash_table_lookup(x31737, x19647);
      struct AGGRecord_Q16GRPRecord2* x19652 = (struct AGGRecord_Q16GRPRecord2*){x19650};
      g_tree_insert(x31936, x19652, x19652);
    };
    while(1) {
      
      boolean_t x1936 = x31937;
      boolean_t x418 = !(x1936);
      /* VAR */ boolean_t ite25702 = 0;
      if(x418) {
        numeric_int_t x32554 = g_tree_nnodes(x31936);
        boolean_t x32555 = x32554!=(0);
        ite25702 = x32555;
      } else {
        
        ite25702 = 0;
      };
      boolean_t x23492 = ite25702;
      if (!(x23492)) break; 
      
      void* x8138 = NULL;
      void** x8146 = &(x8138);
      g_tree_foreach(x31936, x8145, x8146);
      struct AGGRecord_Q16GRPRecord2* x8148 = (struct AGGRecord_Q16GRPRecord2*){x8138};
      numeric_int_t x8149 = g_tree_remove(x31936, x8148);
      if(0) {
        x31937 = 1;
      } else {
        
        struct Q16GRPRecord2* x431 = x8148->key;
        char* x432 = x431->P_BRAND;
        char* x434 = x431->P_TYPE;
        numeric_int_t x436 = x431->P_SIZE;
        double* x437 = x8148->aggs;
        double x438 = x437[0];
        printf("%s|%s|%d|%.0f\n", x432, x434, x436, x438);
        numeric_int_t x1958 = x31938;
        numeric_int_t x441 = x1958+(1);
        x31938 = x441;
      };
    };
    numeric_int_t x32584 = x31938;
    printf("(%d rows)\n", x32584);
    struct timeval* x32586 = &x31841;
    gettimeofday(x32586, NULL);
    struct timeval* x32588 = &x31837;
    struct timeval* x32589 = &x31841;
    struct timeval* x32590 = &x31839;
    long x32591 = timeval_subtract(x32588, x32589, x32590);
    printf("Generated code run in %ld milliseconds.\n", x32591);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x31672(struct Q16GRPRecord2* x7591) {
  char* x13972 = x7591->P_BRAND;
  numeric_int_t x16916 = strlen(x13972);
  /* VAR */ numeric_int_t x14918 = 0;
  /* VAR */ numeric_int_t x14919 = 0;
  while(1) {
    
    numeric_int_t x14920 = x14918;
    boolean_t x14921 = x14920<(x16916);
    if (!(x14921)) break; 
    
    numeric_int_t x14922 = x14919;
    numeric_int_t x14923 = x14918;
    char* x16924 = pointer_add(x13972, x14923);
    char x16925 = *(x16924);
    numeric_int_t x14926 = x14922+(x16925);
    x14919 = x14926;
    numeric_int_t x14928 = x14918;
    numeric_int_t x14929 = x14928+(1);
    x14918 = x14929;
  };
  numeric_int_t x14932 = x14919;
  char* x13974 = x7591->P_TYPE;
  numeric_int_t x16934 = strlen(x13974);
  /* VAR */ numeric_int_t x14935 = 0;
  /* VAR */ numeric_int_t x14936 = 0;
  while(1) {
    
    numeric_int_t x14937 = x14935;
    boolean_t x14938 = x14937<(x16934);
    if (!(x14938)) break; 
    
    numeric_int_t x14939 = x14936;
    numeric_int_t x14940 = x14935;
    char* x16942 = pointer_add(x13974, x14940);
    char x16943 = *(x16942);
    numeric_int_t x14943 = x14939+(x16943);
    x14936 = x14943;
    numeric_int_t x14945 = x14935;
    numeric_int_t x14946 = x14945+(1);
    x14935 = x14946;
  };
  numeric_int_t x14949 = x14936;
  numeric_int_t x13976 = x7591->P_SIZE;
  numeric_int_t x13978 = x14932+(x14949);
  numeric_int_t x13979 = x13978+(x13976);
  return x13979; 
}

boolean_t x31711(struct Q16GRPRecord2* x7596, struct Q16GRPRecord2* x7597) {
  char* x13983 = x7596->P_BRAND;
  char* x13984 = x7597->P_BRAND;
  boolean_t x14958 = strcmp(x13983, x13984);
  boolean_t x14959 = !(x14958);
  char* x13986 = x7596->P_TYPE;
  char* x13987 = x7597->P_TYPE;
  boolean_t x14962 = strcmp(x13986, x13987);
  boolean_t x14963 = !(x14962);
  numeric_int_t x13989 = x7596->P_SIZE;
  numeric_int_t x13990 = x7597->P_SIZE;
  boolean_t x13991 = x13989==(x13990);
  /* VAR */ boolean_t ite24899 = 0;
  if(x14959) {
    ite24899 = x14963;
  } else {
    
    ite24899 = 0;
  };
  boolean_t x22757 = ite24899;
  /* VAR */ boolean_t ite24906 = 0;
  if(x22757) {
    ite24906 = x13991;
  } else {
    
    ite24906 = 0;
  };
  boolean_t x22759 = ite24906;
  return x22759; 
}

numeric_int_t x31738(struct Q16GRPRecord1* x7604) {
  char* x13997 = x7604->P_BRAND;
  numeric_int_t x16974 = strlen(x13997);
  /* VAR */ numeric_int_t x14974 = 0;
  /* VAR */ numeric_int_t x14975 = 0;
  while(1) {
    
    numeric_int_t x14976 = x14974;
    boolean_t x14977 = x14976<(x16974);
    if (!(x14977)) break; 
    
    numeric_int_t x14978 = x14975;
    numeric_int_t x14979 = x14974;
    char* x16982 = pointer_add(x13997, x14979);
    char x16983 = *(x16982);
    numeric_int_t x14982 = x14978+(x16983);
    x14975 = x14982;
    numeric_int_t x14984 = x14974;
    numeric_int_t x14985 = x14984+(1);
    x14974 = x14985;
  };
  numeric_int_t x14988 = x14975;
  char* x13999 = x7604->P_TYPE;
  numeric_int_t x16992 = strlen(x13999);
  /* VAR */ numeric_int_t x14991 = 0;
  /* VAR */ numeric_int_t x14992 = 0;
  while(1) {
    
    numeric_int_t x14993 = x14991;
    boolean_t x14994 = x14993<(x16992);
    if (!(x14994)) break; 
    
    numeric_int_t x14995 = x14992;
    numeric_int_t x14996 = x14991;
    char* x17000 = pointer_add(x13999, x14996);
    char x17001 = *(x17000);
    numeric_int_t x14999 = x14995+(x17001);
    x14992 = x14999;
    numeric_int_t x15001 = x14991;
    numeric_int_t x15002 = x15001+(1);
    x14991 = x15002;
  };
  numeric_int_t x15005 = x14992;
  numeric_int_t x14001 = x7604->P_SIZE;
  numeric_int_t x14003 = x7604->PS_SUPPKEY;
  numeric_int_t x14005 = x14988+(x15005);
  numeric_int_t x14006 = x14005+(x14001);
  numeric_int_t x14007 = x14006+(x14003);
  return x14007; 
}

boolean_t x31779(struct Q16GRPRecord1* x7609, struct Q16GRPRecord1* x7610) {
  char* x14011 = x7609->P_BRAND;
  char* x14012 = x7610->P_BRAND;
  boolean_t x15016 = strcmp(x14011, x14012);
  boolean_t x15017 = !(x15016);
  char* x14014 = x7609->P_TYPE;
  char* x14015 = x7610->P_TYPE;
  boolean_t x15020 = strcmp(x14014, x14015);
  boolean_t x15021 = !(x15020);
  numeric_int_t x14017 = x7609->P_SIZE;
  numeric_int_t x14018 = x7610->P_SIZE;
  boolean_t x14019 = x14017==(x14018);
  numeric_int_t x14020 = x7609->PS_SUPPKEY;
  numeric_int_t x14021 = x7610->PS_SUPPKEY;
  boolean_t x14022 = x14020==(x14021);
  /* VAR */ boolean_t ite24972 = 0;
  if(x15017) {
    ite24972 = x15021;
  } else {
    
    ite24972 = 0;
  };
  boolean_t x22820 = ite24972;
  /* VAR */ boolean_t ite24979 = 0;
  if(x22820) {
    ite24979 = x14019;
  } else {
    
    ite24979 = 0;
  };
  boolean_t x22822 = ite24979;
  /* VAR */ boolean_t ite24986 = 0;
  if(x22822) {
    ite24986 = x14022;
  } else {
    
    ite24986 = 0;
  };
  boolean_t x22824 = ite24986;
  return x22824; 
}

numeric_int_t x31815(void* x6255) {
  numeric_int_t x6256 = g_direct_hash(x6255);
  return x6256; 
}

numeric_int_t x31818(void* x6258, void* x6259) {
  numeric_int_t x6260 = g_direct_equal(x6258, x6259);
  return x6260; 
}

numeric_int_t x31825(void* x6265) {
  numeric_int_t x6266 = g_direct_hash(x6265);
  return x6266; 
}

numeric_int_t x31828(void* x6268, void* x6269) {
  numeric_int_t x6270 = g_direct_equal(x6268, x6269);
  return x6270; 
}

numeric_int_t x31891(struct AGGRecord_Q16GRPRecord2* x168, struct AGGRecord_Q16GRPRecord2* x169) {
  double* x170 = x168->aggs;
  double x171 = x170[0];
  double* x172 = x169->aggs;
  double x173 = x172[0];
  boolean_t x174 = x171<(x173);
  /* VAR */ numeric_int_t ite22911 = 0;
  if(x174) {
    ite22911 = 1;
  } else {
    
    double x22913 = x170[0];
    double x22914 = x172[0];
    boolean_t x22915 = x22913>(x22914);
    /* VAR */ numeric_int_t ite22917 = 0;
    if(x22915) {
      ite22917 = -1;
    } else {
      
      struct Q16GRPRecord2* x22919 = x168->key;
      char* x22920 = x22919->P_BRAND;
      struct Q16GRPRecord2* x22921 = x169->key;
      char* x22922 = x22921->P_BRAND;
      numeric_int_t x22923 = strcmp(x22920, x22922);
      /* VAR */ numeric_int_t x22924 = x22923;
      numeric_int_t x22925 = x22924;
      boolean_t x22926 = x22925==(0);
      if(x22926) {
        char* x186 = x22919->P_TYPE;
        char* x187 = x22921->P_TYPE;
        numeric_int_t x17125 = strcmp(x186, x187);
        x22924 = x17125;
        numeric_int_t x190 = x22924;
        boolean_t x191 = x190==(0);
        if(x191) {
          numeric_int_t x192 = x22919->P_SIZE;
          numeric_int_t x193 = x22921->P_SIZE;
          numeric_int_t x194 = x192-(x193);
          x22924 = x194;
        };
      };
      numeric_int_t x22939 = x22924;
      ite22917 = x22939;
    };
    numeric_int_t x22916 = ite22917;
    ite22911 = x22916;
  };
  numeric_int_t x200 = ite22911;
  return x200; 
}

numeric_int_t x8145(void* x8139, void* x8140, void* x8141) {
  struct AGGRecord_Q16GRPRecord2** x8142 = (struct AGGRecord_Q16GRPRecord2**){x8141};
  struct AGGRecord_Q16GRPRecord2* x8143 = (struct AGGRecord_Q16GRPRecord2*){x8140};
  pointer_assign(x8142, x8143);
  return 1; 
}
