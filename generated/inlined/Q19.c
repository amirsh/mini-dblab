#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct AGGRecord_String;
struct LINEITEMRecord;
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


numeric_int_t x26053(void* x7297);

numeric_int_t x26056(void* x7300, void* x7301);

int main(int argc, char** argv) {
  FILE* x4605 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x4606 = 0;
  numeric_int_t x4607 = x4606;
  numeric_int_t* x4608 = &x4607;
  numeric_int_t x4609 = fscanf(x4605, "%d", x4608);
  pclose(x4605);
  struct LINEITEMRecord* x5771 = (struct LINEITEMRecord*)malloc(x4607 * sizeof(struct LINEITEMRecord));
  memset(x5771, 0, x4607 * sizeof(struct LINEITEMRecord));
  numeric_int_t x4613 = O_RDONLY;
  numeric_int_t x4614 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x4613);
  struct stat x4615 = (struct stat){0};
  /* VAR */ struct stat x4616 = x4615;
  struct stat x4617 = x4616;
  struct stat* x4618 = &x4617;
  numeric_int_t x4619 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x4618);
  size_t x4620 = x4618->st_size;
  numeric_int_t x4621 = PROT_READ;
  numeric_int_t x4622 = MAP_PRIVATE;
  char* x4623 = mmap(NULL, x4620, x4621, x4622, x4614, 0);
  /* VAR */ char* x4624 = x4623;
  char* x3 = x4624;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x4607);
    /* VAR */ boolean_t ite17566 = 0;
    if(x6) {
      char x24901 = *x3;
      boolean_t x24902 = x24901!=('\0');
      ite17566 = x24902;
    } else {
      
      ite17566 = 0;
    };
    boolean_t x16765 = ite17566;
    if (!(x16765)) break; 
    
    /* VAR */ numeric_int_t x4632 = 0;
    numeric_int_t x4633 = x4632;
    numeric_int_t* x4634 = &x4633;
    char* x4635 = strntoi_unchecked(x3, x4634);
    x3 = x4635;
    /* VAR */ numeric_int_t x4637 = 0;
    numeric_int_t x4638 = x4637;
    numeric_int_t* x4639 = &x4638;
    char* x4640 = strntoi_unchecked(x3, x4639);
    x3 = x4640;
    /* VAR */ numeric_int_t x4642 = 0;
    numeric_int_t x4643 = x4642;
    numeric_int_t* x4644 = &x4643;
    char* x4645 = strntoi_unchecked(x3, x4644);
    x3 = x4645;
    /* VAR */ numeric_int_t x4647 = 0;
    numeric_int_t x4648 = x4647;
    numeric_int_t* x4649 = &x4648;
    char* x4650 = strntoi_unchecked(x3, x4649);
    x3 = x4650;
    /* VAR */ double x4652 = 0.0;
    double x4653 = x4652;
    double* x4654 = &x4653;
    char* x4655 = strntod_unchecked(x3, x4654);
    x3 = x4655;
    /* VAR */ double x4657 = 0.0;
    double x4658 = x4657;
    double* x4659 = &x4658;
    char* x4660 = strntod_unchecked(x3, x4659);
    x3 = x4660;
    /* VAR */ double x4662 = 0.0;
    double x4663 = x4662;
    double* x4664 = &x4663;
    char* x4665 = strntod_unchecked(x3, x4664);
    x3 = x4665;
    /* VAR */ double x4667 = 0.0;
    double x4668 = x4667;
    double* x4669 = &x4668;
    char* x4670 = strntod_unchecked(x3, x4669);
    x3 = x4670;
    char x4672 = *x3;
    /* VAR */ char x4673 = x4672;
    x3 += 1;
    x3 += 1;
    char x4676 = x4673;
    char x4677 = *x3;
    /* VAR */ char x4678 = x4677;
    x3 += 1;
    x3 += 1;
    char x4681 = x4678;
    /* VAR */ numeric_int_t x4682 = 0;
    numeric_int_t x4683 = x4682;
    numeric_int_t* x4684 = &x4683;
    char* x4685 = strntoi_unchecked(x3, x4684);
    x3 = x4685;
    /* VAR */ numeric_int_t x4687 = 0;
    numeric_int_t x4688 = x4687;
    numeric_int_t* x4689 = &x4688;
    char* x4690 = strntoi_unchecked(x3, x4689);
    x3 = x4690;
    /* VAR */ numeric_int_t x4692 = 0;
    numeric_int_t x4693 = x4692;
    numeric_int_t* x4694 = &x4693;
    char* x4695 = strntoi_unchecked(x3, x4694);
    x3 = x4695;
    numeric_int_t x4697 = x4683*(10000);
    numeric_int_t x4698 = x4688*(100);
    numeric_int_t x4699 = x4697+(x4698);
    numeric_int_t x4700 = x4699+(x4693);
    /* VAR */ numeric_int_t x4701 = 0;
    numeric_int_t x4702 = x4701;
    numeric_int_t* x4703 = &x4702;
    char* x4704 = strntoi_unchecked(x3, x4703);
    x3 = x4704;
    /* VAR */ numeric_int_t x4706 = 0;
    numeric_int_t x4707 = x4706;
    numeric_int_t* x4708 = &x4707;
    char* x4709 = strntoi_unchecked(x3, x4708);
    x3 = x4709;
    /* VAR */ numeric_int_t x4711 = 0;
    numeric_int_t x4712 = x4711;
    numeric_int_t* x4713 = &x4712;
    char* x4714 = strntoi_unchecked(x3, x4713);
    x3 = x4714;
    numeric_int_t x4716 = x4702*(10000);
    numeric_int_t x4717 = x4707*(100);
    numeric_int_t x4718 = x4716+(x4717);
    numeric_int_t x4719 = x4718+(x4712);
    /* VAR */ numeric_int_t x4720 = 0;
    numeric_int_t x4721 = x4720;
    numeric_int_t* x4722 = &x4721;
    char* x4723 = strntoi_unchecked(x3, x4722);
    x3 = x4723;
    /* VAR */ numeric_int_t x4725 = 0;
    numeric_int_t x4726 = x4725;
    numeric_int_t* x4727 = &x4726;
    char* x4728 = strntoi_unchecked(x3, x4727);
    x3 = x4728;
    /* VAR */ numeric_int_t x4730 = 0;
    numeric_int_t x4731 = x4730;
    numeric_int_t* x4732 = &x4731;
    char* x4733 = strntoi_unchecked(x3, x4732);
    x3 = x4733;
    numeric_int_t x4735 = x4721*(10000);
    numeric_int_t x4736 = x4726*(100);
    numeric_int_t x4737 = x4735+(x4736);
    numeric_int_t x4738 = x4737+(x4731);
    /* VAR */ char* x4739 = x3;
    while(1) {
      
      char x4740 = *x3;
      boolean_t x4741 = x4740!=('|');
      /* VAR */ boolean_t ite17686 = 0;
      if(x4741) {
        char x25020 = *x3;
        boolean_t x25021 = x25020!=('\n');
        ite17686 = x25021;
      } else {
        
        ite17686 = 0;
      };
      boolean_t x16878 = ite17686;
      if (!(x16878)) break; 
      
      x3 += 1;
    };
    char* x4747 = x4739;
    numeric_int_t x4748 = x3 - x4747;
    numeric_int_t x4749 = x4748+(1);
    char* x5910 = (char*)malloc(x4749 * sizeof(char));
    memset(x5910, 0, x4749 * sizeof(char));
    char* x4752 = x4739;
    char* x4753 = strncpy(x5910, x4752, x4748);
    x3 += 1;
    /* VAR */ char* x4755 = x3;
    while(1) {
      
      char x4756 = *x3;
      boolean_t x4757 = x4756!=('|');
      /* VAR */ boolean_t ite17707 = 0;
      if(x4757) {
        char x25040 = *x3;
        boolean_t x25041 = x25040!=('\n');
        ite17707 = x25041;
      } else {
        
        ite17707 = 0;
      };
      boolean_t x16892 = ite17707;
      if (!(x16892)) break; 
      
      x3 += 1;
    };
    char* x4763 = x4755;
    numeric_int_t x4764 = x3 - x4763;
    numeric_int_t x4765 = x4764+(1);
    char* x5926 = (char*)malloc(x4765 * sizeof(char));
    memset(x5926, 0, x4765 * sizeof(char));
    char* x4768 = x4755;
    char* x4769 = strncpy(x5926, x4768, x4764);
    x3 += 1;
    /* VAR */ char* x4771 = x3;
    while(1) {
      
      char x4772 = *x3;
      boolean_t x4773 = x4772!=('|');
      /* VAR */ boolean_t ite17728 = 0;
      if(x4773) {
        char x25060 = *x3;
        boolean_t x25061 = x25060!=('\n');
        ite17728 = x25061;
      } else {
        
        ite17728 = 0;
      };
      boolean_t x16906 = ite17728;
      if (!(x16906)) break; 
      
      x3 += 1;
    };
    char* x4779 = x4771;
    numeric_int_t x4780 = x3 - x4779;
    numeric_int_t x4781 = x4780+(1);
    char* x5942 = (char*)malloc(x4781 * sizeof(char));
    memset(x5942, 0, x4781 * sizeof(char));
    char* x4784 = x4771;
    char* x4785 = strncpy(x5942, x4784, x4780);
    x3 += 1;
    struct LINEITEMRecord* x6533 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x6533, 0, 1 * sizeof(struct LINEITEMRecord));
    x6533->L_ORDERKEY = x4633; x6533->L_PARTKEY = x4638; x6533->L_SUPPKEY = x4643; x6533->L_LINENUMBER = x4648; x6533->L_QUANTITY = x4653; x6533->L_EXTENDEDPRICE = x4658; x6533->L_DISCOUNT = x4663; x6533->L_TAX = x4668; x6533->L_RETURNFLAG = x4676; x6533->L_LINESTATUS = x4681; x6533->L_SHIPDATE = x4700; x6533->L_COMMITDATE = x4719; x6533->L_RECEIPTDATE = x4738; x6533->L_SHIPINSTRUCT = x5910; x6533->L_SHIPMODE = x5926; x6533->L_COMMENT = x5942;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x5949 = *x6533;
    *(x5771 + x26) = x5949;
    struct LINEITEMRecord* x5951 = &(x5771[x26]);
    x6533 = x5951;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x4794 = x4624;
  munmap(x4794, x4620);
  FILE* x4795 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", "r");
  /* VAR */ numeric_int_t x4796 = 0;
  numeric_int_t x4797 = x4796;
  numeric_int_t* x4798 = &x4797;
  numeric_int_t x4799 = fscanf(x4795, "%d", x4798);
  pclose(x4795);
  struct PARTRecord* x5964 = (struct PARTRecord*)malloc(x4797 * sizeof(struct PARTRecord));
  memset(x5964, 0, x4797 * sizeof(struct PARTRecord));
  numeric_int_t x4803 = O_RDONLY;
  numeric_int_t x4804 = open("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x4803);
  /* VAR */ struct stat x4805 = x4615;
  struct stat x4806 = x4805;
  struct stat* x4807 = &x4806;
  numeric_int_t x4808 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/part.tbl", x4807);
  size_t x4809 = x4807->st_size;
  numeric_int_t x4810 = PROT_READ;
  numeric_int_t x4811 = MAP_PRIVATE;
  char* x4812 = mmap(NULL, x4809, x4810, x4811, x4804, 0);
  /* VAR */ char* x4813 = x4812;
  char* x35 = x4813;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x4797);
    /* VAR */ boolean_t ite17781 = 0;
    if(x38) {
      char x25112 = *x35;
      boolean_t x25113 = x25112!=('\0');
      ite17781 = x25113;
    } else {
      
      ite17781 = 0;
    };
    boolean_t x16952 = ite17781;
    if (!(x16952)) break; 
    
    /* VAR */ numeric_int_t x4821 = 0;
    numeric_int_t x4822 = x4821;
    numeric_int_t* x4823 = &x4822;
    char* x4824 = strntoi_unchecked(x35, x4823);
    x35 = x4824;
    /* VAR */ char* x4826 = x35;
    while(1) {
      
      char x4827 = *x35;
      boolean_t x4828 = x4827!=('|');
      /* VAR */ boolean_t ite17799 = 0;
      if(x4828) {
        char x25129 = *x35;
        boolean_t x25130 = x25129!=('\n');
        ite17799 = x25130;
      } else {
        
        ite17799 = 0;
      };
      boolean_t x16963 = ite17799;
      if (!(x16963)) break; 
      
      x35 += 1;
    };
    char* x4834 = x4826;
    numeric_int_t x4835 = x35 - x4834;
    numeric_int_t x4836 = x4835+(1);
    char* x6000 = (char*)malloc(x4836 * sizeof(char));
    memset(x6000, 0, x4836 * sizeof(char));
    char* x4839 = x4826;
    char* x4840 = strncpy(x6000, x4839, x4835);
    x35 += 1;
    /* VAR */ char* x4842 = x35;
    while(1) {
      
      char x4843 = *x35;
      boolean_t x4844 = x4843!=('|');
      /* VAR */ boolean_t ite17820 = 0;
      if(x4844) {
        char x25149 = *x35;
        boolean_t x25150 = x25149!=('\n');
        ite17820 = x25150;
      } else {
        
        ite17820 = 0;
      };
      boolean_t x16977 = ite17820;
      if (!(x16977)) break; 
      
      x35 += 1;
    };
    char* x4850 = x4842;
    numeric_int_t x4851 = x35 - x4850;
    numeric_int_t x4852 = x4851+(1);
    char* x6016 = (char*)malloc(x4852 * sizeof(char));
    memset(x6016, 0, x4852 * sizeof(char));
    char* x4855 = x4842;
    char* x4856 = strncpy(x6016, x4855, x4851);
    x35 += 1;
    /* VAR */ char* x4858 = x35;
    while(1) {
      
      char x4859 = *x35;
      boolean_t x4860 = x4859!=('|');
      /* VAR */ boolean_t ite17841 = 0;
      if(x4860) {
        char x25169 = *x35;
        boolean_t x25170 = x25169!=('\n');
        ite17841 = x25170;
      } else {
        
        ite17841 = 0;
      };
      boolean_t x16991 = ite17841;
      if (!(x16991)) break; 
      
      x35 += 1;
    };
    char* x4866 = x4858;
    numeric_int_t x4867 = x35 - x4866;
    numeric_int_t x4868 = x4867+(1);
    char* x6032 = (char*)malloc(x4868 * sizeof(char));
    memset(x6032, 0, x4868 * sizeof(char));
    char* x4871 = x4858;
    char* x4872 = strncpy(x6032, x4871, x4867);
    x35 += 1;
    /* VAR */ char* x4874 = x35;
    while(1) {
      
      char x4875 = *x35;
      boolean_t x4876 = x4875!=('|');
      /* VAR */ boolean_t ite17862 = 0;
      if(x4876) {
        char x25189 = *x35;
        boolean_t x25190 = x25189!=('\n');
        ite17862 = x25190;
      } else {
        
        ite17862 = 0;
      };
      boolean_t x17005 = ite17862;
      if (!(x17005)) break; 
      
      x35 += 1;
    };
    char* x4882 = x4874;
    numeric_int_t x4883 = x35 - x4882;
    numeric_int_t x4884 = x4883+(1);
    char* x6048 = (char*)malloc(x4884 * sizeof(char));
    memset(x6048, 0, x4884 * sizeof(char));
    char* x4887 = x4874;
    char* x4888 = strncpy(x6048, x4887, x4883);
    x35 += 1;
    /* VAR */ numeric_int_t x4890 = 0;
    numeric_int_t x4891 = x4890;
    numeric_int_t* x4892 = &x4891;
    char* x4893 = strntoi_unchecked(x35, x4892);
    x35 = x4893;
    /* VAR */ char* x4895 = x35;
    while(1) {
      
      char x4896 = *x35;
      boolean_t x4897 = x4896!=('|');
      /* VAR */ boolean_t ite17888 = 0;
      if(x4897) {
        char x25214 = *x35;
        boolean_t x25215 = x25214!=('\n');
        ite17888 = x25215;
      } else {
        
        ite17888 = 0;
      };
      boolean_t x17024 = ite17888;
      if (!(x17024)) break; 
      
      x35 += 1;
    };
    char* x4903 = x4895;
    numeric_int_t x4904 = x35 - x4903;
    numeric_int_t x4905 = x4904+(1);
    char* x6069 = (char*)malloc(x4905 * sizeof(char));
    memset(x6069, 0, x4905 * sizeof(char));
    char* x4908 = x4895;
    char* x4909 = strncpy(x6069, x4908, x4904);
    x35 += 1;
    /* VAR */ double x4911 = 0.0;
    double x4912 = x4911;
    double* x4913 = &x4912;
    char* x4914 = strntod_unchecked(x35, x4913);
    x35 = x4914;
    /* VAR */ char* x4916 = x35;
    while(1) {
      
      char x4917 = *x35;
      boolean_t x4918 = x4917!=('|');
      /* VAR */ boolean_t ite17914 = 0;
      if(x4918) {
        char x25239 = *x35;
        boolean_t x25240 = x25239!=('\n');
        ite17914 = x25240;
      } else {
        
        ite17914 = 0;
      };
      boolean_t x17043 = ite17914;
      if (!(x17043)) break; 
      
      x35 += 1;
    };
    char* x4924 = x4916;
    numeric_int_t x4925 = x35 - x4924;
    numeric_int_t x4926 = x4925+(1);
    char* x6090 = (char*)malloc(x4926 * sizeof(char));
    memset(x6090, 0, x4926 * sizeof(char));
    char* x4929 = x4916;
    char* x4930 = strncpy(x6090, x4929, x4925);
    x35 += 1;
    struct PARTRecord* x6683 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x6683, 0, 1 * sizeof(struct PARTRecord));
    x6683->P_PARTKEY = x4822; x6683->P_NAME = x6000; x6683->P_MFGR = x6016; x6683->P_BRAND = x6032; x6683->P_TYPE = x6048; x6683->P_SIZE = x4891; x6683->P_CONTAINER = x6069; x6683->P_RETAILPRICE = x4912; x6683->P_COMMENT = x6090;
    numeric_int_t x51 = x36;
    struct PARTRecord x6097 = *x6683;
    *(x5964 + x51) = x6097;
    struct PARTRecord* x6099 = &(x5964[x51]);
    x6683 = x6099;
    numeric_int_t x53 = x36;
    numeric_int_t x54 = x53+(1);
    x36 = x54;
  };
  char* x4939 = x4813;
  munmap(x4939, x4809);
  numeric_int_t x59 = 0;
  for(; x59 < 1 ; x59 += 1) {
    
    double* x26049 = (double*)malloc(1 * sizeof(double));
    memset(x26049, 0, 1 * sizeof(double));
    struct AGGRecord_String* x26050 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x26050, 0, 1 * sizeof(struct AGGRecord_String));
    x26050->key = "Total"; x26050->aggs = x26049;
    void*** x26060 = (void***){x26053};
    numeric_int_t* x26061 = (numeric_int_t*){x26056};
    GHashTable* x26062 = g_hash_table_new(x26060, x26061);
    struct timeval x26063 = (struct timeval){0};
    /* VAR */ struct timeval x26064 = x26063;
    struct timeval x26065 = x26064;
    /* VAR */ struct timeval x26066 = x26063;
    struct timeval x26067 = x26066;
    /* VAR */ struct timeval x26068 = x26063;
    struct timeval x26069 = x26068;
    struct timeval* x26070 = &x26067;
    gettimeofday(x26070, NULL);
    /* VAR */ numeric_int_t x26072 = 0;
    /* VAR */ numeric_int_t x26073 = 0;
    /* VAR */ boolean_t x26074 = 0;
    /* VAR */ numeric_int_t x26075 = 0;
    while(1) {
      
      numeric_int_t x26077 = x26073;
      boolean_t x26078 = x26077<(x4607);
      if (!(x26078)) break; 
      
      numeric_int_t x2197 = x26073;
      struct LINEITEMRecord* x262 = &(x5771[x2197]);
      double x264 = x262->L_QUANTITY;
      boolean_t x266 = x264<=(36.0);
      /* VAR */ boolean_t ite18423 = 0;
      if(x266) {
        boolean_t x26085 = x264>=(26.0);
        ite18423 = x26085;
      } else {
        
        ite18423 = 0;
      };
      boolean_t x17339 = ite18423;
      /* VAR */ boolean_t ite18431 = 0;
      if(x17339) {
        ite18431 = 1;
      } else {
        
        boolean_t x26093 = x264<=(25.0);
        /* VAR */ boolean_t x26094 = 0;
        if(x26093) {
          boolean_t x26096 = x264>=(15.0);
          x26094 = x26096;
        } else {
          
          x26094 = 0;
        };
        boolean_t x26100 = x26094;
        ite18431 = x26100;
      };
      boolean_t x17341 = ite18431;
      /* VAR */ boolean_t ite18441 = 0;
      if(x17341) {
        ite18441 = 1;
      } else {
        
        boolean_t x26107 = x264<=(14.0);
        /* VAR */ boolean_t x26108 = 0;
        if(x26107) {
          boolean_t x26110 = x264>=(4.0);
          x26108 = x26110;
        } else {
          
          x26108 = 0;
        };
        boolean_t x26114 = x26108;
        ite18441 = x26114;
      };
      boolean_t x17343 = ite18441;
      /* VAR */ boolean_t ite18451 = 0;
      if(x17343) {
        char* x26120 = x262->L_SHIPINSTRUCT;
        boolean_t x26121 = strcmp(x26120, "DELIVER IN PERSON");
        boolean_t x26122 = x26121==(0);
        ite18451 = x26122;
      } else {
        
        ite18451 = 0;
      };
      boolean_t x17345 = ite18451;
      /* VAR */ boolean_t ite18461 = 0;
      if(x17345) {
        char* x26129 = x262->L_SHIPMODE;
        boolean_t x26130 = strcmp(x26129, "AIR");
        boolean_t x26131 = x26130==(0);
        /* VAR */ boolean_t x26132 = 0;
        if(x26131) {
          x26132 = 1;
        } else {
          
          boolean_t x26135 = strcmp(x26129, "AIRREG");
          boolean_t x26136 = x26135==(0);
          x26132 = x26136;
        };
        boolean_t x26139 = x26132;
        ite18461 = x26139;
      } else {
        
        ite18461 = 0;
      };
      boolean_t x17347 = ite18461;
      if(x17347) {
        numeric_int_t x290 = x262->L_PARTKEY;
        void* x7348 = (void*){x290};
        void* x7349 = (void*){x262};
        void* x7350 = g_hash_table_lookup(x26062, x7348);
        GList** x7351 = (GList**){x7350};
        GList** x7352 = NULL;
        boolean_t x7353 = x7351==(x7352);
        /* VAR */ GList** ite17357 = 0;
        if(x7353) {
          GList** x17358 = malloc(8);
          GList* x17359 = NULL;
          pointer_assign(x17358, x17359);
          ite17357 = x17358;
        } else {
          
          ite17357 = x7351;
        };
        GList** x7357 = ite17357;
        GList* x7358 = *(x7357);
        GList* x7359 = g_list_prepend(x7358, x7349);
        pointer_assign(x7357, x7359);
        void* x7361 = (void*){x7357};
        g_hash_table_insert(x26062, x7348, x7361);
      };
      numeric_int_t x2229 = x26073;
      numeric_int_t x295 = x2229+(1);
      x26073 = x295;
    };
    while(1) {
      
      numeric_int_t x26170 = x26072;
      boolean_t x26171 = x26170<(x4797);
      if (!(x26171)) break; 
      
      numeric_int_t x2238 = x26072;
      struct PARTRecord* x304 = &(x5964[x2238]);
      numeric_int_t x306 = x304->P_SIZE;
      boolean_t x307 = x306>=(1);
      /* VAR */ boolean_t ite18506 = 0;
      if(x307) {
        boolean_t x26178 = x306<=(5);
        /* VAR */ boolean_t x26179 = 0;
        if(x26178) {
          char* x26181 = x304->P_BRAND;
          boolean_t x26182 = strcmp(x26181, "Brand#31");
          boolean_t x26183 = x26182==(0);
          x26179 = x26183;
        } else {
          
          x26179 = 0;
        };
        boolean_t x26187 = x26179;
        /* VAR */ boolean_t x26188 = 0;
        if(x26187) {
          char* x26190 = x304->P_CONTAINER;
          boolean_t x26191 = strcmp(x26190, "SM BOX");
          boolean_t x26192 = x26191==(0);
          /* VAR */ boolean_t x26193 = 0;
          if(x26192) {
            x26193 = 1;
          } else {
            
            boolean_t x26196 = strcmp(x26190, "SM CASE");
            boolean_t x26197 = x26196==(0);
            x26193 = x26197;
          };
          boolean_t x26200 = x26193;
          /* VAR */ boolean_t x26201 = 0;
          if(x26200) {
            x26201 = 1;
          } else {
            
            boolean_t x26204 = strcmp(x26190, "SM PACK");
            boolean_t x26205 = x26204==(0);
            x26201 = x26205;
          };
          boolean_t x26208 = x26201;
          /* VAR */ boolean_t x26209 = 0;
          if(x26208) {
            x26209 = 1;
          } else {
            
            boolean_t x26212 = strcmp(x26190, "SM PKG");
            boolean_t x26213 = x26212==(0);
            x26209 = x26213;
          };
          boolean_t x26216 = x26209;
          x26188 = x26216;
        } else {
          
          x26188 = 0;
        };
        boolean_t x26220 = x26188;
        ite18506 = x26220;
      } else {
        
        ite18506 = 0;
      };
      boolean_t x17380 = ite18506;
      /* VAR */ boolean_t ite18518 = 0;
      if(x17380) {
        ite18518 = 1;
      } else {
        
        boolean_t x26228 = x306<=(10);
        /* VAR */ boolean_t x26229 = 0;
        if(x26228) {
          char* x26231 = x304->P_BRAND;
          boolean_t x26232 = strcmp(x26231, "Brand#43");
          boolean_t x26233 = x26232==(0);
          x26229 = x26233;
        } else {
          
          x26229 = 0;
        };
        boolean_t x26237 = x26229;
        /* VAR */ boolean_t x26238 = 0;
        if(x26237) {
          char* x26240 = x304->P_CONTAINER;
          boolean_t x26241 = strcmp(x26240, "MED BAG");
          boolean_t x26242 = x26241==(0);
          /* VAR */ boolean_t x26243 = 0;
          if(x26242) {
            x26243 = 1;
          } else {
            
            boolean_t x26246 = strcmp(x26240, "MED BOX");
            boolean_t x26247 = x26246==(0);
            x26243 = x26247;
          };
          boolean_t x26250 = x26243;
          /* VAR */ boolean_t x26251 = 0;
          if(x26250) {
            x26251 = 1;
          } else {
            
            boolean_t x26254 = strcmp(x26240, "MED PACK");
            boolean_t x26255 = x26254==(0);
            x26251 = x26255;
          };
          boolean_t x26258 = x26251;
          /* VAR */ boolean_t x26259 = 0;
          if(x26258) {
            x26259 = 1;
          } else {
            
            boolean_t x26262 = strcmp(x26240, "MED PKG");
            boolean_t x26263 = x26262==(0);
            x26259 = x26263;
          };
          boolean_t x26266 = x26259;
          x26238 = x26266;
        } else {
          
          x26238 = 0;
        };
        boolean_t x26270 = x26238;
        ite18518 = x26270;
      };
      boolean_t x17382 = ite18518;
      /* VAR */ boolean_t ite18530 = 0;
      if(x17382) {
        ite18530 = 1;
      } else {
        
        boolean_t x26277 = x306<=(15);
        /* VAR */ boolean_t x26278 = 0;
        if(x26277) {
          char* x26280 = x304->P_BRAND;
          boolean_t x26281 = strcmp(x26280, "Brand#43");
          boolean_t x26282 = x26281==(0);
          x26278 = x26282;
        } else {
          
          x26278 = 0;
        };
        boolean_t x26286 = x26278;
        /* VAR */ boolean_t x26287 = 0;
        if(x26286) {
          char* x26289 = x304->P_CONTAINER;
          boolean_t x26290 = strcmp(x26289, "LG BOX");
          boolean_t x26291 = x26290==(0);
          /* VAR */ boolean_t x26292 = 0;
          if(x26291) {
            x26292 = 1;
          } else {
            
            boolean_t x26295 = strcmp(x26289, "LG CASE");
            boolean_t x26296 = x26295==(0);
            x26292 = x26296;
          };
          boolean_t x26299 = x26292;
          /* VAR */ boolean_t x26300 = 0;
          if(x26299) {
            x26300 = 1;
          } else {
            
            boolean_t x26303 = strcmp(x26289, "LG PACK");
            boolean_t x26304 = x26303==(0);
            x26300 = x26304;
          };
          boolean_t x26307 = x26300;
          /* VAR */ boolean_t x26308 = 0;
          if(x26307) {
            x26308 = 1;
          } else {
            
            boolean_t x26311 = strcmp(x26289, "LG PKG");
            boolean_t x26312 = x26311==(0);
            x26308 = x26312;
          };
          boolean_t x26315 = x26308;
          x26287 = x26315;
        } else {
          
          x26287 = 0;
        };
        boolean_t x26319 = x26287;
        ite18530 = x26319;
      };
      boolean_t x17384 = ite18530;
      if(x17384) {
        numeric_int_t x350 = x304->P_PARTKEY;
        void* x7418 = (void*){x350};
        void* x7419 = g_hash_table_lookup(x26062, x7418);
        GList** x7420 = (GList**){x7419};
        boolean_t x11569 = x7420!=(NULL);
        if(x11569) {
          GList* x8764 = *(x7420);
          /* VAR */ GList* x8765 = x8764;
          while(1) {
            
            GList* x8766 = x8765;
            GList* x8767 = NULL;
            boolean_t x8768 = x8766!=(x8767);
            if (!(x8768)) break; 
            
            GList* x8769 = x8765;
            void* x8770 = g_list_nth_data(x8769, 0);
            struct LINEITEMRecord* x8771 = (struct LINEITEMRecord*){x8770};
            GList* x8772 = x8765;
            GList* x8773 = g_list_next(x8772);
            x8765 = x8773;
            numeric_int_t x8775 = x8771->L_PARTKEY;
            boolean_t x8776 = x350==(x8775);
            if(x8776) {
              numeric_int_t x1108 = x8771->L_ORDERKEY;
              numeric_int_t x1109 = x8771->L_SUPPKEY;
              numeric_int_t x1110 = x8771->L_LINENUMBER;
              double x1111 = x8771->L_QUANTITY;
              double x1112 = x8771->L_EXTENDEDPRICE;
              double x1113 = x8771->L_DISCOUNT;
              double x1114 = x8771->L_TAX;
              char x1115 = x8771->L_RETURNFLAG;
              char x1116 = x8771->L_LINESTATUS;
              numeric_int_t x1117 = x8771->L_SHIPDATE;
              numeric_int_t x1118 = x8771->L_COMMITDATE;
              numeric_int_t x1119 = x8771->L_RECEIPTDATE;
              char* x1120 = x8771->L_SHIPINSTRUCT;
              char* x1121 = x8771->L_SHIPMODE;
              char* x1122 = x8771->L_COMMENT;
              char* x1123 = x304->P_NAME;
              char* x1124 = x304->P_MFGR;
              char* x1125 = x304->P_BRAND;
              char* x1126 = x304->P_TYPE;
              char* x1127 = x304->P_CONTAINER;
              double x1128 = x304->P_RETAILPRICE;
              char* x1129 = x304->P_COMMENT;
              struct LINEITEMRecord_PARTRecord* x6832 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
              memset(x6832, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
              x6832->L_ORDERKEY = x1108; x6832->L_PARTKEY = x8775; x6832->L_SUPPKEY = x1109; x6832->L_LINENUMBER = x1110; x6832->L_QUANTITY = x1111; x6832->L_EXTENDEDPRICE = x1112; x6832->L_DISCOUNT = x1113; x6832->L_TAX = x1114; x6832->L_RETURNFLAG = x1115; x6832->L_LINESTATUS = x1116; x6832->L_SHIPDATE = x1117; x6832->L_COMMITDATE = x1118; x6832->L_RECEIPTDATE = x1119; x6832->L_SHIPINSTRUCT = x1120; x6832->L_SHIPMODE = x1121; x6832->L_COMMENT = x1122; x6832->P_PARTKEY = x350; x6832->P_NAME = x1123; x6832->P_MFGR = x1124; x6832->P_BRAND = x1125; x6832->P_TYPE = x1126; x6832->P_SIZE = x306; x6832->P_CONTAINER = x1127; x6832->P_RETAILPRICE = x1128; x6832->P_COMMENT = x1129;
              char* x464 = x6832->P_BRAND;
              boolean_t x13907 = strcmp(x464, "Brand#31");
              boolean_t x13908 = x13907==(0);
              /* VAR */ boolean_t ite18711 = 0;
              if(x13908) {
                char* x26604 = x6832->P_CONTAINER;
                boolean_t x26605 = strcmp(x26604, "SM BOX");
                boolean_t x26606 = x26605==(0);
                /* VAR */ boolean_t x26607 = 0;
                if(x26606) {
                  x26607 = 1;
                } else {
                  
                  boolean_t x26610 = strcmp(x26604, "SM CASE");
                  boolean_t x26611 = x26610==(0);
                  x26607 = x26611;
                };
                boolean_t x26614 = x26607;
                /* VAR */ boolean_t x26615 = 0;
                if(x26614) {
                  x26615 = 1;
                } else {
                  
                  boolean_t x26618 = strcmp(x26604, "SM PACK");
                  boolean_t x26619 = x26618==(0);
                  x26615 = x26619;
                };
                boolean_t x26622 = x26615;
                /* VAR */ boolean_t x26623 = 0;
                if(x26622) {
                  x26623 = 1;
                } else {
                  
                  boolean_t x26626 = strcmp(x26604, "SM PKG");
                  boolean_t x26627 = x26626==(0);
                  x26623 = x26627;
                };
                boolean_t x26630 = x26623;
                ite18711 = x26630;
              } else {
                
                ite18711 = 0;
              };
              boolean_t x17490 = ite18711;
              /* VAR */ boolean_t ite18727 = 0;
              if(x17490) {
                double x26637 = x6832->L_QUANTITY;
                boolean_t x26638 = x26637>=(4.0);
                ite18727 = x26638;
              } else {
                
                ite18727 = 0;
              };
              boolean_t x17492 = ite18727;
              /* VAR */ boolean_t ite18736 = 0;
              if(x17492) {
                double x26645 = x6832->L_QUANTITY;
                boolean_t x26646 = x26645<=(14.0);
                ite18736 = x26646;
              } else {
                
                ite18736 = 0;
              };
              boolean_t x17494 = ite18736;
              /* VAR */ boolean_t ite18745 = 0;
              if(x17494) {
                numeric_int_t x26653 = x6832->P_SIZE;
                boolean_t x26654 = x26653<=(5);
                ite18745 = x26654;
              } else {
                
                ite18745 = 0;
              };
              boolean_t x17496 = ite18745;
              /* VAR */ boolean_t ite18754 = 0;
              if(x17496) {
                ite18754 = 1;
              } else {
                
                boolean_t x26662 = strcmp(x464, "Brand#43");
                boolean_t x26663 = x26662==(0);
                /* VAR */ boolean_t x26664 = 0;
                if(x26663) {
                  char* x26666 = x6832->P_CONTAINER;
                  boolean_t x26667 = strcmp(x26666, "MED BAG");
                  boolean_t x26668 = x26667==(0);
                  /* VAR */ boolean_t x26669 = 0;
                  if(x26668) {
                    x26669 = 1;
                  } else {
                    
                    boolean_t x26672 = strcmp(x26666, "MED BOX");
                    boolean_t x26673 = x26672==(0);
                    x26669 = x26673;
                  };
                  boolean_t x26676 = x26669;
                  /* VAR */ boolean_t x26677 = 0;
                  if(x26676) {
                    x26677 = 1;
                  } else {
                    
                    boolean_t x26680 = strcmp(x26666, "MED PACK");
                    boolean_t x26681 = x26680==(0);
                    x26677 = x26681;
                  };
                  boolean_t x26684 = x26677;
                  /* VAR */ boolean_t x26685 = 0;
                  if(x26684) {
                    x26685 = 1;
                  } else {
                    
                    boolean_t x26688 = strcmp(x26666, "MED PKG");
                    boolean_t x26689 = x26688==(0);
                    x26685 = x26689;
                  };
                  boolean_t x26692 = x26685;
                  x26664 = x26692;
                } else {
                  
                  x26664 = 0;
                };
                boolean_t x26696 = x26664;
                /* VAR */ boolean_t x26697 = 0;
                if(x26696) {
                  double x26699 = x6832->L_QUANTITY;
                  boolean_t x26700 = x26699>=(15.0);
                  x26697 = x26700;
                } else {
                  
                  x26697 = 0;
                };
                boolean_t x26704 = x26697;
                /* VAR */ boolean_t x26705 = 0;
                if(x26704) {
                  double x26707 = x6832->L_QUANTITY;
                  boolean_t x26708 = x26707<=(25.0);
                  x26705 = x26708;
                } else {
                  
                  x26705 = 0;
                };
                boolean_t x26712 = x26705;
                /* VAR */ boolean_t x26713 = 0;
                if(x26712) {
                  numeric_int_t x26715 = x6832->P_SIZE;
                  boolean_t x26716 = x26715<=(10);
                  x26713 = x26716;
                } else {
                  
                  x26713 = 0;
                };
                boolean_t x26720 = x26713;
                ite18754 = x26720;
              };
              boolean_t x17498 = ite18754;
              /* VAR */ boolean_t ite18771 = 0;
              if(x17498) {
                ite18771 = 1;
              } else {
                
                boolean_t x26727 = strcmp(x464, "Brand#43");
                boolean_t x26728 = x26727==(0);
                /* VAR */ boolean_t x26729 = 0;
                if(x26728) {
                  char* x26731 = x6832->P_CONTAINER;
                  boolean_t x26732 = strcmp(x26731, "LG BOX");
                  boolean_t x26733 = x26732==(0);
                  /* VAR */ boolean_t x26734 = 0;
                  if(x26733) {
                    x26734 = 1;
                  } else {
                    
                    boolean_t x26737 = strcmp(x26731, "LG CASE");
                    boolean_t x26738 = x26737==(0);
                    x26734 = x26738;
                  };
                  boolean_t x26741 = x26734;
                  /* VAR */ boolean_t x26742 = 0;
                  if(x26741) {
                    x26742 = 1;
                  } else {
                    
                    boolean_t x26745 = strcmp(x26731, "LG PACK");
                    boolean_t x26746 = x26745==(0);
                    x26742 = x26746;
                  };
                  boolean_t x26749 = x26742;
                  /* VAR */ boolean_t x26750 = 0;
                  if(x26749) {
                    x26750 = 1;
                  } else {
                    
                    boolean_t x26753 = strcmp(x26731, "LG PKG");
                    boolean_t x26754 = x26753==(0);
                    x26750 = x26754;
                  };
                  boolean_t x26757 = x26750;
                  x26729 = x26757;
                } else {
                  
                  x26729 = 0;
                };
                boolean_t x26761 = x26729;
                /* VAR */ boolean_t x26762 = 0;
                if(x26761) {
                  double x26764 = x6832->L_QUANTITY;
                  boolean_t x26765 = x26764>=(26.0);
                  x26762 = x26765;
                } else {
                  
                  x26762 = 0;
                };
                boolean_t x26769 = x26762;
                /* VAR */ boolean_t x26770 = 0;
                if(x26769) {
                  double x26772 = x6832->L_QUANTITY;
                  boolean_t x26773 = x26772<=(36.0);
                  x26770 = x26773;
                } else {
                  
                  x26770 = 0;
                };
                boolean_t x26777 = x26770;
                /* VAR */ boolean_t x26778 = 0;
                if(x26777) {
                  numeric_int_t x26780 = x6832->P_SIZE;
                  boolean_t x26781 = x26780<=(15);
                  x26778 = x26781;
                } else {
                  
                  x26778 = 0;
                };
                boolean_t x26785 = x26778;
                ite18771 = x26785;
              };
              boolean_t x17500 = ite18771;
              if(x17500) {
                double* x534 = x26050->aggs;
                double x548 = x534[0];
                double x549 = x6832->L_EXTENDEDPRICE;
                double x550 = x6832->L_DISCOUNT;
                double x551 = 1.0-(x550);
                double x552 = x549*(x551);
                double x553 = x548+(x552);
                *x534 = x553;
              };
            };
          };
        };
      };
      numeric_int_t x2541 = x26072;
      numeric_int_t x566 = x2541+(1);
      x26072 = x566;
    };
    if(0) {
      x26074 = 1;
    } else {
      
      double* x578 = x26050->aggs;
      double x579 = x578[0];
      printf("%.4f\n", x579);
      numeric_int_t x2557 = x26075;
      numeric_int_t x582 = x2557+(1);
      x26075 = x582;
    };
    numeric_int_t x26820 = x26075;
    printf("(%d rows)\n", x26820);
    struct timeval* x26822 = &x26069;
    gettimeofday(x26822, NULL);
    struct timeval* x26824 = &x26065;
    struct timeval* x26825 = &x26069;
    struct timeval* x26826 = &x26067;
    long x26827 = timeval_subtract(x26824, x26825, x26826);
    printf("Generated code run in %ld milliseconds.\n", x26827);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x26053(void* x7297) {
  numeric_int_t x7298 = g_direct_hash(x7297);
  return x7298; 
}

numeric_int_t x26056(void* x7300, void* x7301) {
  numeric_int_t x7302 = g_direct_equal(x7300, x7301);
  return x7302; 
}
