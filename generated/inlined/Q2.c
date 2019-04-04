#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct REGIONRecord;
struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord;
struct NATIONRecord;
struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
struct PARTRecord;
struct SUPPLIERRecord;
struct PARTSUPPRecord;
struct REGIONRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
};

struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord {
  numeric_int_t key;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* wnd;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  char* N_COMMENT;
};

struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  numeric_int_t P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
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


numeric_int_t x43148(void* x9902);

numeric_int_t x43151(void* x9905, void* x9906);

numeric_int_t x43158(void* x9912);

numeric_int_t x43161(void* x9915, void* x9916);

numeric_int_t x43168(void* x9922);

numeric_int_t x43171(void* x9925, void* x9926);

numeric_int_t x43178(void* x9932);

numeric_int_t x43181(void* x9935, void* x9936);

numeric_int_t x43188(void* x9942);

numeric_int_t x43191(void* x9945, void* x9946);

numeric_int_t x43252(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x193, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x194);

numeric_int_t x12885(void* x12879, void* x12880, void* x12881);

int main(int argc, char** argv) {
  FILE* x6498 = popen("wc -l ../../data/sf1/part.tbl", "r");
  /* VAR */ numeric_int_t x6499 = 0;
  numeric_int_t x6500 = x6499;
  numeric_int_t* x6501 = &x6500;
  numeric_int_t x6502 = fscanf(x6498, "%d", x6501);
  pclose(x6498);
  struct PARTRecord* x7932 = (struct PARTRecord*)malloc(x6500 * sizeof(struct PARTRecord));
  memset(x7932, 0, x6500 * sizeof(struct PARTRecord));
  numeric_int_t x6506 = O_RDONLY;
  numeric_int_t x6507 = open("../../data/sf1/part.tbl", x6506);
  struct stat x6508 = (struct stat){0};
  /* VAR */ struct stat x6509 = x6508;
  struct stat x6510 = x6509;
  struct stat* x6511 = &x6510;
  numeric_int_t x6512 = stat("../../data/sf1/part.tbl", x6511);
  size_t x6513 = x6511->st_size;
  numeric_int_t x6514 = PROT_READ;
  numeric_int_t x6515 = MAP_PRIVATE;
  char* x6516 = mmap(NULL, x6513, x6514, x6515, x6507, 0);
  /* VAR */ char* x6517 = x6516;
  char* x3 = x6517;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x6500);
    /* VAR */ boolean_t ite34501 = 0;
    if(x6) {
      char x41218 = *x3;
      boolean_t x41219 = x41218!=('\0');
      ite34501 = x41219;
    } else {
      
      ite34501 = 0;
    };
    boolean_t x31341 = ite34501;
    if (!(x31341)) break; 
    
    /* VAR */ numeric_int_t x6525 = 0;
    numeric_int_t x6526 = x6525;
    numeric_int_t* x6527 = &x6526;
    char* x6528 = strntoi_unchecked(x3, x6527);
    x3 = x6528;
    /* VAR */ char* x6530 = x3;
    while(1) {
      
      char x6531 = *x3;
      boolean_t x6532 = x6531!=('|');
      /* VAR */ boolean_t ite34519 = 0;
      if(x6532) {
        char x41235 = *x3;
        boolean_t x41236 = x41235!=('\n');
        ite34519 = x41236;
      } else {
        
        ite34519 = 0;
      };
      boolean_t x31352 = ite34519;
      if (!(x31352)) break; 
      
      x3 += 1;
    };
    char* x6538 = x6530;
    numeric_int_t x6539 = x3 - x6538;
    numeric_int_t x6540 = x6539+(1);
    char* x7969 = (char*)malloc(x6540 * sizeof(char));
    memset(x7969, 0, x6540 * sizeof(char));
    char* x6543 = x6530;
    char* x6544 = strncpy(x7969, x6543, x6539);
    x3 += 1;
    /* VAR */ char* x6546 = x3;
    while(1) {
      
      char x6547 = *x3;
      boolean_t x6548 = x6547!=('|');
      /* VAR */ boolean_t ite34540 = 0;
      if(x6548) {
        char x41255 = *x3;
        boolean_t x41256 = x41255!=('\n');
        ite34540 = x41256;
      } else {
        
        ite34540 = 0;
      };
      boolean_t x31366 = ite34540;
      if (!(x31366)) break; 
      
      x3 += 1;
    };
    char* x6554 = x6546;
    numeric_int_t x6555 = x3 - x6554;
    numeric_int_t x6556 = x6555+(1);
    char* x7985 = (char*)malloc(x6556 * sizeof(char));
    memset(x7985, 0, x6556 * sizeof(char));
    char* x6559 = x6546;
    char* x6560 = strncpy(x7985, x6559, x6555);
    x3 += 1;
    /* VAR */ char* x6562 = x3;
    while(1) {
      
      char x6563 = *x3;
      boolean_t x6564 = x6563!=('|');
      /* VAR */ boolean_t ite34561 = 0;
      if(x6564) {
        char x41275 = *x3;
        boolean_t x41276 = x41275!=('\n');
        ite34561 = x41276;
      } else {
        
        ite34561 = 0;
      };
      boolean_t x31380 = ite34561;
      if (!(x31380)) break; 
      
      x3 += 1;
    };
    char* x6570 = x6562;
    numeric_int_t x6571 = x3 - x6570;
    numeric_int_t x6572 = x6571+(1);
    char* x8001 = (char*)malloc(x6572 * sizeof(char));
    memset(x8001, 0, x6572 * sizeof(char));
    char* x6575 = x6562;
    char* x6576 = strncpy(x8001, x6575, x6571);
    x3 += 1;
    /* VAR */ char* x6578 = x3;
    while(1) {
      
      char x6579 = *x3;
      boolean_t x6580 = x6579!=('|');
      /* VAR */ boolean_t ite34582 = 0;
      if(x6580) {
        char x41295 = *x3;
        boolean_t x41296 = x41295!=('\n');
        ite34582 = x41296;
      } else {
        
        ite34582 = 0;
      };
      boolean_t x31394 = ite34582;
      if (!(x31394)) break; 
      
      x3 += 1;
    };
    char* x6586 = x6578;
    numeric_int_t x6587 = x3 - x6586;
    numeric_int_t x6588 = x6587+(1);
    char* x8017 = (char*)malloc(x6588 * sizeof(char));
    memset(x8017, 0, x6588 * sizeof(char));
    char* x6591 = x6578;
    char* x6592 = strncpy(x8017, x6591, x6587);
    x3 += 1;
    /* VAR */ numeric_int_t x6594 = 0;
    numeric_int_t x6595 = x6594;
    numeric_int_t* x6596 = &x6595;
    char* x6597 = strntoi_unchecked(x3, x6596);
    x3 = x6597;
    /* VAR */ char* x6599 = x3;
    while(1) {
      
      char x6600 = *x3;
      boolean_t x6601 = x6600!=('|');
      /* VAR */ boolean_t ite34608 = 0;
      if(x6601) {
        char x41320 = *x3;
        boolean_t x41321 = x41320!=('\n');
        ite34608 = x41321;
      } else {
        
        ite34608 = 0;
      };
      boolean_t x31413 = ite34608;
      if (!(x31413)) break; 
      
      x3 += 1;
    };
    char* x6607 = x6599;
    numeric_int_t x6608 = x3 - x6607;
    numeric_int_t x6609 = x6608+(1);
    char* x8038 = (char*)malloc(x6609 * sizeof(char));
    memset(x8038, 0, x6609 * sizeof(char));
    char* x6612 = x6599;
    char* x6613 = strncpy(x8038, x6612, x6608);
    x3 += 1;
    /* VAR */ double x6615 = 0.0;
    double x6616 = x6615;
    double* x6617 = &x6616;
    char* x6618 = strntod_unchecked(x3, x6617);
    x3 = x6618;
    /* VAR */ char* x6620 = x3;
    while(1) {
      
      char x6621 = *x3;
      boolean_t x6622 = x6621!=('|');
      /* VAR */ boolean_t ite34634 = 0;
      if(x6622) {
        char x41345 = *x3;
        boolean_t x41346 = x41345!=('\n');
        ite34634 = x41346;
      } else {
        
        ite34634 = 0;
      };
      boolean_t x31432 = ite34634;
      if (!(x31432)) break; 
      
      x3 += 1;
    };
    char* x6628 = x6620;
    numeric_int_t x6629 = x3 - x6628;
    numeric_int_t x6630 = x6629+(1);
    char* x8059 = (char*)malloc(x6630 * sizeof(char));
    memset(x8059, 0, x6630 * sizeof(char));
    char* x6633 = x6620;
    char* x6634 = strncpy(x8059, x6633, x6629);
    x3 += 1;
    struct PARTRecord* x8793 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x8793, 0, 1 * sizeof(struct PARTRecord));
    x8793->P_PARTKEY = x6526; x8793->P_NAME = x7969; x8793->P_MFGR = x7985; x8793->P_BRAND = x8001; x8793->P_TYPE = x8017; x8793->P_SIZE = x6595; x8793->P_CONTAINER = x8038; x8793->P_RETAILPRICE = x6616; x8793->P_COMMENT = x8059;
    numeric_int_t x19 = x4;
    struct PARTRecord x8066 = *x8793;
    *(x7932 + x19) = x8066;
    struct PARTRecord* x8068 = &(x7932[x19]);
    x8793 = x8068;
    numeric_int_t x21 = x4;
    numeric_int_t x22 = x21+(1);
    x4 = x22;
  };
  char* x6643 = x6517;
  munmap(x6643, x6513);
  FILE* x6644 = popen("wc -l ../../data/sf1/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x6645 = 0;
  numeric_int_t x6646 = x6645;
  numeric_int_t* x6647 = &x6646;
  numeric_int_t x6648 = fscanf(x6644, "%d", x6647);
  pclose(x6644);
  struct PARTSUPPRecord* x8081 = (struct PARTSUPPRecord*)malloc(x6646 * sizeof(struct PARTSUPPRecord));
  memset(x8081, 0, x6646 * sizeof(struct PARTSUPPRecord));
  numeric_int_t x6652 = O_RDONLY;
  numeric_int_t x6653 = open("../../data/sf1/partsupp.tbl", x6652);
  /* VAR */ struct stat x6654 = x6508;
  struct stat x6655 = x6654;
  struct stat* x6656 = &x6655;
  numeric_int_t x6657 = stat("../../data/sf1/partsupp.tbl", x6656);
  size_t x6658 = x6656->st_size;
  numeric_int_t x6659 = PROT_READ;
  numeric_int_t x6660 = MAP_PRIVATE;
  char* x6661 = mmap(NULL, x6658, x6659, x6660, x6653, 0);
  /* VAR */ char* x6662 = x6661;
  char* x28 = x6662;
  /* VAR */ numeric_int_t x29 = 0;
  while(1) {
    
    numeric_int_t x30 = x29;
    boolean_t x31 = x30<(x6646);
    /* VAR */ boolean_t ite34687 = 0;
    if(x31) {
      char x41397 = *x28;
      boolean_t x41398 = x41397!=('\0');
      ite34687 = x41398;
    } else {
      
      ite34687 = 0;
    };
    boolean_t x31478 = ite34687;
    if (!(x31478)) break; 
    
    /* VAR */ numeric_int_t x6670 = 0;
    numeric_int_t x6671 = x6670;
    numeric_int_t* x6672 = &x6671;
    char* x6673 = strntoi_unchecked(x28, x6672);
    x28 = x6673;
    /* VAR */ numeric_int_t x6675 = 0;
    numeric_int_t x6676 = x6675;
    numeric_int_t* x6677 = &x6676;
    char* x6678 = strntoi_unchecked(x28, x6677);
    x28 = x6678;
    /* VAR */ numeric_int_t x6680 = 0;
    numeric_int_t x6681 = x6680;
    numeric_int_t* x6682 = &x6681;
    char* x6683 = strntoi_unchecked(x28, x6682);
    x28 = x6683;
    /* VAR */ double x6685 = 0.0;
    double x6686 = x6685;
    double* x6687 = &x6686;
    char* x6688 = strntod_unchecked(x28, x6687);
    x28 = x6688;
    /* VAR */ char* x6690 = x28;
    while(1) {
      
      char x6691 = *x28;
      boolean_t x6692 = x6691!=('|');
      /* VAR */ boolean_t ite34720 = 0;
      if(x6692) {
        char x41429 = *x28;
        boolean_t x41430 = x41429!=('\n');
        ite34720 = x41430;
      } else {
        
        ite34720 = 0;
      };
      boolean_t x31504 = ite34720;
      if (!(x31504)) break; 
      
      x28 += 1;
    };
    char* x6698 = x6690;
    numeric_int_t x6699 = x28 - x6698;
    numeric_int_t x6700 = x6699+(1);
    char* x8132 = (char*)malloc(x6700 * sizeof(char));
    memset(x8132, 0, x6700 * sizeof(char));
    char* x6703 = x6690;
    char* x6704 = strncpy(x8132, x6703, x6699);
    x28 += 1;
    struct PARTSUPPRecord* x8868 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x8868, 0, 1 * sizeof(struct PARTSUPPRecord));
    x8868->PS_PARTKEY = x6671; x8868->PS_SUPPKEY = x6676; x8868->PS_AVAILQTY = x6681; x8868->PS_SUPPLYCOST = x6686; x8868->PS_COMMENT = x8132;
    numeric_int_t x40 = x29;
    struct PARTSUPPRecord x8139 = *x8868;
    *(x8081 + x40) = x8139;
    struct PARTSUPPRecord* x8141 = &(x8081[x40]);
    x8868 = x8141;
    numeric_int_t x42 = x29;
    numeric_int_t x43 = x42+(1);
    x29 = x43;
  };
  char* x6713 = x6662;
  munmap(x6713, x6658);
  FILE* x6714 = popen("wc -l ../../data/sf1/nation.tbl", "r");
  /* VAR */ numeric_int_t x6715 = 0;
  numeric_int_t x6716 = x6715;
  numeric_int_t* x6717 = &x6716;
  numeric_int_t x6718 = fscanf(x6714, "%d", x6717);
  pclose(x6714);
  struct NATIONRecord* x8154 = (struct NATIONRecord*)malloc(x6716 * sizeof(struct NATIONRecord));
  memset(x8154, 0, x6716 * sizeof(struct NATIONRecord));
  numeric_int_t x6722 = O_RDONLY;
  numeric_int_t x6723 = open("../../data/sf1/nation.tbl", x6722);
  /* VAR */ struct stat x6724 = x6508;
  struct stat x6725 = x6724;
  struct stat* x6726 = &x6725;
  numeric_int_t x6727 = stat("../../data/sf1/nation.tbl", x6726);
  size_t x6728 = x6726->st_size;
  numeric_int_t x6729 = PROT_READ;
  numeric_int_t x6730 = MAP_PRIVATE;
  char* x6731 = mmap(NULL, x6728, x6729, x6730, x6723, 0);
  /* VAR */ char* x6732 = x6731;
  char* x49 = x6732;
  /* VAR */ numeric_int_t x50 = 0;
  while(1) {
    
    numeric_int_t x51 = x50;
    boolean_t x52 = x51<(x6716);
    /* VAR */ boolean_t ite34773 = 0;
    if(x52) {
      char x41481 = *x49;
      boolean_t x41482 = x41481!=('\0');
      ite34773 = x41482;
    } else {
      
      ite34773 = 0;
    };
    boolean_t x31550 = ite34773;
    if (!(x31550)) break; 
    
    /* VAR */ numeric_int_t x6740 = 0;
    numeric_int_t x6741 = x6740;
    numeric_int_t* x6742 = &x6741;
    char* x6743 = strntoi_unchecked(x49, x6742);
    x49 = x6743;
    /* VAR */ char* x6745 = x49;
    while(1) {
      
      char x6746 = *x49;
      boolean_t x6747 = x6746!=('|');
      /* VAR */ boolean_t ite34791 = 0;
      if(x6747) {
        char x41498 = *x49;
        boolean_t x41499 = x41498!=('\n');
        ite34791 = x41499;
      } else {
        
        ite34791 = 0;
      };
      boolean_t x31561 = ite34791;
      if (!(x31561)) break; 
      
      x49 += 1;
    };
    char* x6753 = x6745;
    numeric_int_t x6754 = x49 - x6753;
    numeric_int_t x6755 = x6754+(1);
    char* x8190 = (char*)malloc(x6755 * sizeof(char));
    memset(x8190, 0, x6755 * sizeof(char));
    char* x6758 = x6745;
    char* x6759 = strncpy(x8190, x6758, x6754);
    x49 += 1;
    /* VAR */ numeric_int_t x6761 = 0;
    numeric_int_t x6762 = x6761;
    numeric_int_t* x6763 = &x6762;
    char* x6764 = strntoi_unchecked(x49, x6763);
    x49 = x6764;
    /* VAR */ char* x6766 = x49;
    while(1) {
      
      char x6767 = *x49;
      boolean_t x6768 = x6767!=('|');
      /* VAR */ boolean_t ite34817 = 0;
      if(x6768) {
        char x41523 = *x49;
        boolean_t x41524 = x41523!=('\n');
        ite34817 = x41524;
      } else {
        
        ite34817 = 0;
      };
      boolean_t x31580 = ite34817;
      if (!(x31580)) break; 
      
      x49 += 1;
    };
    char* x6774 = x6766;
    numeric_int_t x6775 = x49 - x6774;
    numeric_int_t x6776 = x6775+(1);
    char* x8211 = (char*)malloc(x6776 * sizeof(char));
    memset(x8211, 0, x6776 * sizeof(char));
    char* x6779 = x6766;
    char* x6780 = strncpy(x8211, x6779, x6775);
    x49 += 1;
    struct NATIONRecord* x8949 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x8949, 0, 1 * sizeof(struct NATIONRecord));
    x8949->N_NATIONKEY = x6741; x8949->N_NAME = x8190; x8949->N_REGIONKEY = x6762; x8949->N_COMMENT = x8211;
    numeric_int_t x60 = x50;
    struct NATIONRecord x8218 = *x8949;
    *(x8154 + x60) = x8218;
    struct NATIONRecord* x8220 = &(x8154[x60]);
    x8949 = x8220;
    numeric_int_t x62 = x50;
    numeric_int_t x63 = x62+(1);
    x50 = x63;
  };
  char* x6789 = x6732;
  munmap(x6789, x6728);
  FILE* x6790 = popen("wc -l ../../data/sf1/region.tbl", "r");
  /* VAR */ numeric_int_t x6791 = 0;
  numeric_int_t x6792 = x6791;
  numeric_int_t* x6793 = &x6792;
  numeric_int_t x6794 = fscanf(x6790, "%d", x6793);
  pclose(x6790);
  struct REGIONRecord* x8233 = (struct REGIONRecord*)malloc(x6792 * sizeof(struct REGIONRecord));
  memset(x8233, 0, x6792 * sizeof(struct REGIONRecord));
  numeric_int_t x6798 = O_RDONLY;
  numeric_int_t x6799 = open("../../data/sf1/region.tbl", x6798);
  /* VAR */ struct stat x6800 = x6508;
  struct stat x6801 = x6800;
  struct stat* x6802 = &x6801;
  numeric_int_t x6803 = stat("../../data/sf1/region.tbl", x6802);
  size_t x6804 = x6802->st_size;
  numeric_int_t x6805 = PROT_READ;
  numeric_int_t x6806 = MAP_PRIVATE;
  char* x6807 = mmap(NULL, x6804, x6805, x6806, x6799, 0);
  /* VAR */ char* x6808 = x6807;
  char* x69 = x6808;
  /* VAR */ numeric_int_t x70 = 0;
  while(1) {
    
    numeric_int_t x71 = x70;
    boolean_t x72 = x71<(x6792);
    /* VAR */ boolean_t ite34870 = 0;
    if(x72) {
      char x41575 = *x69;
      boolean_t x41576 = x41575!=('\0');
      ite34870 = x41576;
    } else {
      
      ite34870 = 0;
    };
    boolean_t x31626 = ite34870;
    if (!(x31626)) break; 
    
    /* VAR */ numeric_int_t x6816 = 0;
    numeric_int_t x6817 = x6816;
    numeric_int_t* x6818 = &x6817;
    char* x6819 = strntoi_unchecked(x69, x6818);
    x69 = x6819;
    /* VAR */ char* x6821 = x69;
    while(1) {
      
      char x6822 = *x69;
      boolean_t x6823 = x6822!=('|');
      /* VAR */ boolean_t ite34888 = 0;
      if(x6823) {
        char x41592 = *x69;
        boolean_t x41593 = x41592!=('\n');
        ite34888 = x41593;
      } else {
        
        ite34888 = 0;
      };
      boolean_t x31637 = ite34888;
      if (!(x31637)) break; 
      
      x69 += 1;
    };
    char* x6829 = x6821;
    numeric_int_t x6830 = x69 - x6829;
    numeric_int_t x6831 = x6830+(1);
    char* x8269 = (char*)malloc(x6831 * sizeof(char));
    memset(x8269, 0, x6831 * sizeof(char));
    char* x6834 = x6821;
    char* x6835 = strncpy(x8269, x6834, x6830);
    x69 += 1;
    /* VAR */ char* x6837 = x69;
    while(1) {
      
      char x6838 = *x69;
      boolean_t x6839 = x6838!=('|');
      /* VAR */ boolean_t ite34909 = 0;
      if(x6839) {
        char x41612 = *x69;
        boolean_t x41613 = x41612!=('\n');
        ite34909 = x41613;
      } else {
        
        ite34909 = 0;
      };
      boolean_t x31651 = ite34909;
      if (!(x31651)) break; 
      
      x69 += 1;
    };
    char* x6845 = x6837;
    numeric_int_t x6846 = x69 - x6845;
    numeric_int_t x6847 = x6846+(1);
    char* x8285 = (char*)malloc(x6847 * sizeof(char));
    memset(x8285, 0, x6847 * sizeof(char));
    char* x6850 = x6837;
    char* x6851 = strncpy(x8285, x6850, x6846);
    x69 += 1;
    struct REGIONRecord* x9025 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x9025, 0, 1 * sizeof(struct REGIONRecord));
    x9025->R_REGIONKEY = x6817; x9025->R_NAME = x8269; x9025->R_COMMENT = x8285;
    numeric_int_t x79 = x70;
    struct REGIONRecord x8292 = *x9025;
    *(x8233 + x79) = x8292;
    struct REGIONRecord* x8294 = &(x8233[x79]);
    x9025 = x8294;
    numeric_int_t x81 = x70;
    numeric_int_t x82 = x81+(1);
    x70 = x82;
  };
  char* x6860 = x6808;
  munmap(x6860, x6804);
  FILE* x6861 = popen("wc -l ../../data/sf1/supplier.tbl", "r");
  /* VAR */ numeric_int_t x6862 = 0;
  numeric_int_t x6863 = x6862;
  numeric_int_t* x6864 = &x6863;
  numeric_int_t x6865 = fscanf(x6861, "%d", x6864);
  pclose(x6861);
  struct SUPPLIERRecord* x8307 = (struct SUPPLIERRecord*)malloc(x6863 * sizeof(struct SUPPLIERRecord));
  memset(x8307, 0, x6863 * sizeof(struct SUPPLIERRecord));
  numeric_int_t x6869 = O_RDONLY;
  numeric_int_t x6870 = open("../../data/sf1/supplier.tbl", x6869);
  /* VAR */ struct stat x6871 = x6508;
  struct stat x6872 = x6871;
  struct stat* x6873 = &x6872;
  numeric_int_t x6874 = stat("../../data/sf1/supplier.tbl", x6873);
  size_t x6875 = x6873->st_size;
  numeric_int_t x6876 = PROT_READ;
  numeric_int_t x6877 = MAP_PRIVATE;
  char* x6878 = mmap(NULL, x6875, x6876, x6877, x6870, 0);
  /* VAR */ char* x6879 = x6878;
  char* x88 = x6879;
  /* VAR */ numeric_int_t x89 = 0;
  while(1) {
    
    numeric_int_t x90 = x89;
    boolean_t x91 = x90<(x6863);
    /* VAR */ boolean_t ite34962 = 0;
    if(x91) {
      char x41664 = *x88;
      boolean_t x41665 = x41664!=('\0');
      ite34962 = x41665;
    } else {
      
      ite34962 = 0;
    };
    boolean_t x31697 = ite34962;
    if (!(x31697)) break; 
    
    /* VAR */ numeric_int_t x6887 = 0;
    numeric_int_t x6888 = x6887;
    numeric_int_t* x6889 = &x6888;
    char* x6890 = strntoi_unchecked(x88, x6889);
    x88 = x6890;
    /* VAR */ char* x6892 = x88;
    while(1) {
      
      char x6893 = *x88;
      boolean_t x6894 = x6893!=('|');
      /* VAR */ boolean_t ite34980 = 0;
      if(x6894) {
        char x41681 = *x88;
        boolean_t x41682 = x41681!=('\n');
        ite34980 = x41682;
      } else {
        
        ite34980 = 0;
      };
      boolean_t x31708 = ite34980;
      if (!(x31708)) break; 
      
      x88 += 1;
    };
    char* x6900 = x6892;
    numeric_int_t x6901 = x88 - x6900;
    numeric_int_t x6902 = x6901+(1);
    char* x8343 = (char*)malloc(x6902 * sizeof(char));
    memset(x8343, 0, x6902 * sizeof(char));
    char* x6905 = x6892;
    char* x6906 = strncpy(x8343, x6905, x6901);
    x88 += 1;
    /* VAR */ char* x6908 = x88;
    while(1) {
      
      char x6909 = *x88;
      boolean_t x6910 = x6909!=('|');
      /* VAR */ boolean_t ite35001 = 0;
      if(x6910) {
        char x41701 = *x88;
        boolean_t x41702 = x41701!=('\n');
        ite35001 = x41702;
      } else {
        
        ite35001 = 0;
      };
      boolean_t x31722 = ite35001;
      if (!(x31722)) break; 
      
      x88 += 1;
    };
    char* x6916 = x6908;
    numeric_int_t x6917 = x88 - x6916;
    numeric_int_t x6918 = x6917+(1);
    char* x8359 = (char*)malloc(x6918 * sizeof(char));
    memset(x8359, 0, x6918 * sizeof(char));
    char* x6921 = x6908;
    char* x6922 = strncpy(x8359, x6921, x6917);
    x88 += 1;
    /* VAR */ numeric_int_t x6924 = 0;
    numeric_int_t x6925 = x6924;
    numeric_int_t* x6926 = &x6925;
    char* x6927 = strntoi_unchecked(x88, x6926);
    x88 = x6927;
    /* VAR */ char* x6929 = x88;
    while(1) {
      
      char x6930 = *x88;
      boolean_t x6931 = x6930!=('|');
      /* VAR */ boolean_t ite35027 = 0;
      if(x6931) {
        char x41726 = *x88;
        boolean_t x41727 = x41726!=('\n');
        ite35027 = x41727;
      } else {
        
        ite35027 = 0;
      };
      boolean_t x31741 = ite35027;
      if (!(x31741)) break; 
      
      x88 += 1;
    };
    char* x6937 = x6929;
    numeric_int_t x6938 = x88 - x6937;
    numeric_int_t x6939 = x6938+(1);
    char* x8380 = (char*)malloc(x6939 * sizeof(char));
    memset(x8380, 0, x6939 * sizeof(char));
    char* x6942 = x6929;
    char* x6943 = strncpy(x8380, x6942, x6938);
    x88 += 1;
    /* VAR */ double x6945 = 0.0;
    double x6946 = x6945;
    double* x6947 = &x6946;
    char* x6948 = strntod_unchecked(x88, x6947);
    x88 = x6948;
    /* VAR */ char* x6950 = x88;
    while(1) {
      
      char x6951 = *x88;
      boolean_t x6952 = x6951!=('|');
      /* VAR */ boolean_t ite35053 = 0;
      if(x6952) {
        char x41751 = *x88;
        boolean_t x41752 = x41751!=('\n');
        ite35053 = x41752;
      } else {
        
        ite35053 = 0;
      };
      boolean_t x31760 = ite35053;
      if (!(x31760)) break; 
      
      x88 += 1;
    };
    char* x6958 = x6950;
    numeric_int_t x6959 = x88 - x6958;
    numeric_int_t x6960 = x6959+(1);
    char* x8401 = (char*)malloc(x6960 * sizeof(char));
    memset(x8401, 0, x6960 * sizeof(char));
    char* x6963 = x6950;
    char* x6964 = strncpy(x8401, x6963, x6959);
    x88 += 1;
    struct SUPPLIERRecord* x9143 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x9143, 0, 1 * sizeof(struct SUPPLIERRecord));
    x9143->S_SUPPKEY = x6888; x9143->S_NAME = x8343; x9143->S_ADDRESS = x8359; x9143->S_NATIONKEY = x6925; x9143->S_PHONE = x8380; x9143->S_ACCTBAL = x6946; x9143->S_COMMENT = x8401;
    numeric_int_t x102 = x89;
    struct SUPPLIERRecord x8408 = *x9143;
    *(x8307 + x102) = x8408;
    struct SUPPLIERRecord* x8410 = &(x8307[x102]);
    x9143 = x8410;
    numeric_int_t x104 = x89;
    numeric_int_t x105 = x104+(1);
    x89 = x105;
  };
  char* x6973 = x6879;
  munmap(x6973, x6875);
  numeric_int_t x110 = 0;
  for(; x110 < 1 ; x110 += 1) {
    
    void*** x43155 = (void***){x43148};
    numeric_int_t* x43156 = (numeric_int_t*){x43151};
    GHashTable* x43157 = g_hash_table_new(x43155, x43156);
    void*** x43165 = (void***){x43158};
    numeric_int_t* x43166 = (numeric_int_t*){x43161};
    GHashTable* x43167 = g_hash_table_new(x43165, x43166);
    void*** x43175 = (void***){x43168};
    numeric_int_t* x43176 = (numeric_int_t*){x43171};
    GHashTable* x43177 = g_hash_table_new(x43175, x43176);
    void*** x43185 = (void***){x43178};
    numeric_int_t* x43186 = (numeric_int_t*){x43181};
    GHashTable* x43187 = g_hash_table_new(x43185, x43186);
    void*** x43195 = (void***){x43188};
    numeric_int_t* x43196 = (numeric_int_t*){x43191};
    GHashTable* x43197 = g_hash_table_new(x43195, x43196);
    struct timeval x43198 = (struct timeval){0};
    /* VAR */ struct timeval x43199 = x43198;
    struct timeval x43200 = x43199;
    /* VAR */ struct timeval x43201 = x43198;
    struct timeval x43202 = x43201;
    /* VAR */ struct timeval x43203 = x43198;
    struct timeval x43204 = x43203;
    struct timeval* x43205 = &x43202;
    gettimeofday(x43205, NULL);
    /* VAR */ numeric_int_t x43207 = 0;
    /* VAR */ numeric_int_t x43208 = 0;
    /* VAR */ numeric_int_t x43209 = 0;
    /* VAR */ numeric_int_t x43210 = 0;
    /* VAR */ numeric_int_t x43211 = 0;
    numeric_int_t* x43292 = &(x43252);
    GTree* x43293 = g_tree_new(x43292);
    /* VAR */ boolean_t x43294 = 0;
    /* VAR */ numeric_int_t x43295 = 0;
    while(1) {
      
      numeric_int_t x43297 = x43211;
      boolean_t x43298 = x43297<(x6792);
      if (!(x43298)) break; 
      
      numeric_int_t x4009 = x43211;
      struct REGIONRecord* x249 = &(x8233[x4009]);
      char* x251 = x249->R_NAME;
      boolean_t x23857 = strcmp(x251, "AFRICA");
      boolean_t x23858 = x23857==(0);
      if(x23858) {
        numeric_int_t x253 = x249->R_REGIONKEY;
        void* x10010 = (void*){x253};
        void* x10011 = (void*){x249};
        void* x10012 = g_hash_table_lookup(x43167, x10010);
        GList** x10013 = (GList**){x10012};
        GList** x10014 = NULL;
        boolean_t x10015 = x10013==(x10014);
        /* VAR */ GList** ite33295 = 0;
        if(x10015) {
          GList** x33296 = malloc(8);
          GList* x33297 = NULL;
          pointer_assign(x33296, x33297);
          ite33295 = x33296;
        } else {
          
          ite33295 = x10013;
        };
        GList** x10019 = ite33295;
        GList* x10020 = *(x10019);
        GList* x10021 = g_list_prepend(x10020, x10011);
        pointer_assign(x10019, x10021);
        void* x10023 = (void*){x10019};
        g_hash_table_insert(x43167, x10010, x10023);
      };
      numeric_int_t x4017 = x43211;
      numeric_int_t x258 = x4017+(1);
      x43211 = x258;
    };
    while(1) {
      
      numeric_int_t x43330 = x43210;
      boolean_t x43331 = x43330<(x6500);
      if (!(x43331)) break; 
      
      numeric_int_t x4026 = x43210;
      struct PARTRecord* x267 = &(x7932[x4026]);
      numeric_int_t x269 = x267->P_SIZE;
      boolean_t x270 = x269==(43);
      /* VAR */ boolean_t ite36651 = 0;
      if(x270) {
        char* x43338 = x267->P_TYPE;
        numeric_int_t x43339 = strlen(x43338);
        numeric_int_t x43340 = strlen("TIN");
        numeric_int_t x43341 = x43339-(x43340);
        char* x43342 = pointer_add(x43338, x43341);
        numeric_int_t x43343 = strncmp(x43342, "TIN", x43341);
        boolean_t x43344 = x43343==(0);
        ite36651 = x43344;
      } else {
        
        ite36651 = 0;
      };
      boolean_t x33318 = ite36651;
      if(x33318) {
        numeric_int_t x274 = x267->P_PARTKEY;
        void* x10041 = (void*){x274};
        void* x10042 = (void*){x267};
        void* x10043 = g_hash_table_lookup(x43177, x10041);
        GList** x10044 = (GList**){x10043};
        GList** x10045 = NULL;
        boolean_t x10046 = x10044==(x10045);
        /* VAR */ GList** ite33328 = 0;
        if(x10046) {
          GList** x33329 = malloc(8);
          GList* x33330 = NULL;
          pointer_assign(x33329, x33330);
          ite33328 = x33329;
        } else {
          
          ite33328 = x10044;
        };
        GList** x10050 = ite33328;
        GList* x10051 = *(x10050);
        GList* x10052 = g_list_prepend(x10051, x10042);
        pointer_assign(x10050, x10052);
        void* x10054 = (void*){x10050};
        g_hash_table_insert(x43177, x10041, x10054);
      };
      numeric_int_t x4037 = x43210;
      numeric_int_t x279 = x4037+(1);
      x43210 = x279;
    };
    while(1) {
      
      numeric_int_t x43375 = x43209;
      boolean_t x43376 = x43375<(x6716);
      if (!(x43376)) break; 
      
      numeric_int_t x4046 = x43209;
      struct NATIONRecord* x288 = &(x8154[x4046]);
      numeric_int_t x290 = x288->N_NATIONKEY;
      void* x10066 = (void*){x290};
      void* x10067 = (void*){x288};
      void* x10068 = g_hash_table_lookup(x43187, x10066);
      GList** x10069 = (GList**){x10068};
      GList** x10070 = NULL;
      boolean_t x10071 = x10069==(x10070);
      /* VAR */ GList** ite33356 = 0;
      if(x10071) {
        GList** x33357 = malloc(8);
        GList* x33358 = NULL;
        pointer_assign(x33357, x33358);
        ite33356 = x33357;
      } else {
        
        ite33356 = x10069;
      };
      GList** x10075 = ite33356;
      GList* x10076 = *(x10075);
      GList* x10077 = g_list_prepend(x10076, x10067);
      pointer_assign(x10075, x10077);
      void* x10079 = (void*){x10075};
      g_hash_table_insert(x43187, x10066, x10079);
      numeric_int_t x4051 = x43209;
      numeric_int_t x294 = x4051+(1);
      x43209 = x294;
    };
    while(1) {
      
      numeric_int_t x43404 = x43208;
      boolean_t x43405 = x43404<(x6863);
      if (!(x43405)) break; 
      
      numeric_int_t x4060 = x43208;
      struct SUPPLIERRecord* x303 = &(x8307[x4060]);
      numeric_int_t x305 = x303->S_SUPPKEY;
      void* x10091 = (void*){x305};
      void* x10092 = (void*){x303};
      void* x10093 = g_hash_table_lookup(x43197, x10091);
      GList** x10094 = (GList**){x10093};
      GList** x10095 = NULL;
      boolean_t x10096 = x10094==(x10095);
      /* VAR */ GList** ite33384 = 0;
      if(x10096) {
        GList** x33385 = malloc(8);
        GList* x33386 = NULL;
        pointer_assign(x33385, x33386);
        ite33384 = x33385;
      } else {
        
        ite33384 = x10094;
      };
      GList** x10100 = ite33384;
      GList* x10101 = *(x10100);
      GList* x10102 = g_list_prepend(x10101, x10092);
      pointer_assign(x10100, x10102);
      void* x10104 = (void*){x10100};
      g_hash_table_insert(x43197, x10091, x10104);
      numeric_int_t x4065 = x43208;
      numeric_int_t x309 = x4065+(1);
      x43208 = x309;
    };
    while(1) {
      
      numeric_int_t x43433 = x43207;
      boolean_t x43434 = x43433<(x6646);
      if (!(x43434)) break; 
      
      numeric_int_t x4074 = x43207;
      struct PARTSUPPRecord* x318 = &(x8081[x4074]);
      numeric_int_t x320 = x318->PS_SUPPKEY;
      void* x10116 = (void*){x320};
      void* x10117 = g_hash_table_lookup(x43197, x10116);
      GList** x10118 = (GList**){x10117};
      boolean_t x18875 = x10118!=(NULL);
      if(x18875) {
        GList* x12353 = *(x10118);
        /* VAR */ GList* x12354 = x12353;
        while(1) {
          
          GList* x12355 = x12354;
          GList* x12356 = NULL;
          boolean_t x12357 = x12355!=(x12356);
          if (!(x12357)) break; 
          
          GList* x12358 = x12354;
          void* x12359 = g_list_nth_data(x12358, 0);
          struct SUPPLIERRecord* x12360 = (struct SUPPLIERRecord*){x12359};
          GList* x12361 = x12354;
          GList* x12362 = g_list_next(x12361);
          x12354 = x12362;
          numeric_int_t x12364 = x12360->S_SUPPKEY;
          boolean_t x12365 = x12364==(x320);
          if(x12365) {
            char* x1662 = x12360->S_NAME;
            char* x1663 = x12360->S_ADDRESS;
            numeric_int_t x1664 = x12360->S_NATIONKEY;
            char* x1665 = x12360->S_PHONE;
            double x1666 = x12360->S_ACCTBAL;
            char* x1667 = x12360->S_COMMENT;
            numeric_int_t x1668 = x318->PS_PARTKEY;
            numeric_int_t x1669 = x318->PS_AVAILQTY;
            double x1670 = x318->PS_SUPPLYCOST;
            char* x1671 = x318->PS_COMMENT;
            void* x10138 = (void*){x1664};
            void* x10139 = g_hash_table_lookup(x43187, x10138);
            GList** x10140 = (GList**){x10139};
            boolean_t x19301 = x10140!=(NULL);
            if(x19301) {
              GList* x12154 = *(x10140);
              /* VAR */ GList* x12155 = x12154;
              while(1) {
                
                GList* x12156 = x12155;
                GList* x12157 = NULL;
                boolean_t x12158 = x12156!=(x12157);
                if (!(x12158)) break; 
                
                GList* x12159 = x12155;
                void* x12160 = g_list_nth_data(x12159, 0);
                struct NATIONRecord* x12161 = (struct NATIONRecord*){x12160};
                GList* x12162 = x12155;
                GList* x12163 = g_list_next(x12162);
                x12155 = x12163;
                numeric_int_t x12165 = x12161->N_NATIONKEY;
                boolean_t x12166 = x12165==(x1664);
                if(x12166) {
                  char* x1935 = x12161->N_NAME;
                  numeric_int_t x1936 = x12161->N_REGIONKEY;
                  char* x1937 = x12161->N_COMMENT;
                  void* x10153 = (void*){x1668};
                  void* x10154 = g_hash_table_lookup(x43177, x10153);
                  GList** x10155 = (GList**){x10154};
                  boolean_t x19507 = x10155!=(NULL);
                  if(x19507) {
                    GList* x12062 = *(x10155);
                    /* VAR */ GList* x12063 = x12062;
                    while(1) {
                      
                      GList* x12064 = x12063;
                      GList* x12065 = NULL;
                      boolean_t x12066 = x12064!=(x12065);
                      if (!(x12066)) break; 
                      
                      GList* x12067 = x12063;
                      void* x12068 = g_list_nth_data(x12067, 0);
                      struct PARTRecord* x12069 = (struct PARTRecord*){x12068};
                      GList* x12070 = x12063;
                      GList* x12071 = g_list_next(x12070);
                      x12063 = x12071;
                      numeric_int_t x12073 = x12069->P_PARTKEY;
                      boolean_t x12074 = x12073==(x1668);
                      if(x12074) {
                        char* x2073 = x12069->P_NAME;
                        char* x2074 = x12069->P_MFGR;
                        char* x2075 = x12069->P_BRAND;
                        char* x2076 = x12069->P_TYPE;
                        numeric_int_t x2077 = x12069->P_SIZE;
                        char* x2078 = x12069->P_CONTAINER;
                        double x2079 = x12069->P_RETAILPRICE;
                        char* x2080 = x12069->P_COMMENT;
                        void* x10173 = (void*){x1936};
                        void* x10174 = g_hash_table_lookup(x43167, x10173);
                        GList** x10175 = (GList**){x10174};
                        boolean_t x19615 = x10175!=(NULL);
                        if(x19615) {
                          GList* x12026 = *(x10175);
                          /* VAR */ GList* x12027 = x12026;
                          while(1) {
                            
                            GList* x12028 = x12027;
                            GList* x12029 = NULL;
                            boolean_t x12030 = x12028!=(x12029);
                            if (!(x12030)) break; 
                            
                            GList* x12031 = x12027;
                            void* x12032 = g_list_nth_data(x12031, 0);
                            struct REGIONRecord* x12033 = (struct REGIONRecord*){x12032};
                            GList* x12034 = x12027;
                            GList* x12035 = g_list_next(x12034);
                            x12027 = x12035;
                            numeric_int_t x12037 = x12033->R_REGIONKEY;
                            boolean_t x12038 = x12037==(x1936);
                            if(x12038) {
                              char* x2146 = x12033->R_NAME;
                              char* x2147 = x12033->R_COMMENT;
                              struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9331 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
                              memset(x9331, 0, 1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
                              x9331->R_REGIONKEY = x12037; x9331->R_NAME = x2146; x9331->R_COMMENT = x2147; x9331->P_PARTKEY = x12073; x9331->P_NAME = x2073; x9331->P_MFGR = x2074; x9331->P_BRAND = x2075; x9331->P_TYPE = x2076; x9331->P_SIZE = x2077; x9331->P_CONTAINER = x2078; x9331->P_RETAILPRICE = x2079; x9331->P_COMMENT = x2080; x9331->N_NATIONKEY = x12165; x9331->N_NAME = x1935; x9331->N_REGIONKEY = x1936; x9331->N_COMMENT = x1937; x9331->S_SUPPKEY = x12364; x9331->S_NAME = x1662; x9331->S_ADDRESS = x1663; x9331->S_NATIONKEY = x1664; x9331->S_PHONE = x1665; x9331->S_ACCTBAL = x1666; x9331->S_COMMENT = x1667; x9331->PS_PARTKEY = x1668; x9331->PS_SUPPKEY = x320; x9331->PS_AVAILQTY = x1669; x9331->PS_SUPPLYCOST = x1670; x9331->PS_COMMENT = x1671;
                              numeric_int_t x679 = x9331->P_PARTKEY;
                              void* x10191 = (void*){x679};
                              void* x10192 = (void*){x9331};
                              void* x10193 = g_hash_table_lookup(x43157, x10191);
                              GList** x10194 = (GList**){x10193};
                              GList** x10195 = NULL;
                              boolean_t x10196 = x10194==(x10195);
                              /* VAR */ GList** ite34279 = 0;
                              if(x10196) {
                                GList** x34280 = malloc(8);
                                GList* x34281 = NULL;
                                pointer_assign(x34280, x34281);
                                ite34279 = x34280;
                              } else {
                                
                                ite34279 = x10194;
                              };
                              GList** x10200 = ite34279;
                              GList* x10201 = *(x10200);
                              GList* x10202 = g_list_prepend(x10201, x10192);
                              pointer_assign(x10200, x10202);
                              void* x10204 = (void*){x10200};
                              g_hash_table_insert(x43157, x10191, x10204);
                            };
                          };
                        };
                      };
                    };
                  };
                };
              };
            };
          };
        };
      };
      numeric_int_t x4538 = x43207;
      numeric_int_t x699 = x4538+(1);
      x43207 = x699;
    };
    GList* x44370 = g_hash_table_get_keys(x43157);
    /* VAR */ GList* x44371 = x44370;
    numeric_int_t x44372 = g_hash_table_size(x43157);
    numeric_int_t x28250 = 0;
    for(; x28250 < x44372 ; x28250 += 1) {
      
      GList* x28251 = x44371;
      void* x28252 = g_list_nth_data(x28251, 0);
      GList* x28253 = x44371;
      GList* x28254 = g_list_next(x28253);
      x44371 = x28254;
      void* x28256 = g_hash_table_lookup(x43157, x28252);
      GList** x28257 = (GList**){x28256};
      GList* x28261 = *(x28257);
      /* VAR */ GList* x28262 = x28261;
      GList* x28263 = x28262;
      void* x28264 = g_list_nth_data(x28263, 0);
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28265 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x28264};
      /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28266 = x28265;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28267 = x28266;
      double x28268 = x28267->PS_SUPPLYCOST;
      /* VAR */ double x28269 = x28268;
      while(1) {
        
        GList* x12846 = x28262;
        GList* x12847 = NULL;
        boolean_t x12848 = x12846!=(x12847);
        if (!(x12848)) break; 
        
        GList* x12849 = x28262;
        void* x12850 = g_list_nth_data(x12849, 0);
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x12851 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x12850};
        GList* x12852 = x28262;
        GList* x12853 = g_list_next(x12852);
        x28262 = x12853;
        double x12855 = x12851->PS_SUPPLYCOST;
        double x12856 = x28269;
        boolean_t x12857 = x12855<(x12856);
        if(x12857) {
          x28269 = x12855;
          x28266 = x12851;
        };
      };
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28287 = x28266;
      GList* x28288 = *(x28257);
      void* x28289 = g_list_nth_data(x28288, 0);
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28290 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x28289};
      numeric_int_t x28291 = x28290->P_PARTKEY;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x28292 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x28292, 0, 1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      x28292->key = x28291; x28292->wnd = x28287;
      g_tree_insert(x43293, x28292, x28292);
    };
    while(1) {
      
      boolean_t x4555 = x43294;
      boolean_t x718 = !(x4555);
      /* VAR */ boolean_t ite37788 = 0;
      if(x718) {
        numeric_int_t x44471 = g_tree_nnodes(x43293);
        boolean_t x44472 = x44471!=(0);
        ite37788 = x44472;
      } else {
        
        ite37788 = 0;
      };
      boolean_t x34437 = ite37788;
      if (!(x34437)) break; 
      
      void* x12878 = NULL;
      void** x12886 = &(x12878);
      g_tree_foreach(x43293, x12885, x12886);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x12888 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x12878};
      numeric_int_t x12889 = g_tree_remove(x43293, x12888);
      numeric_int_t x4563 = x43295;
      boolean_t x728 = x4563>=(100);
      if(x728) {
        x43294 = 1;
      } else {
        
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x730 = x12888->wnd;
        double x731 = x730->S_ACCTBAL;
        char* x732 = x730->S_NAME;
        char* x734 = x730->N_NAME;
        numeric_int_t x736 = x730->P_PARTKEY;
        char* x737 = x730->P_MFGR;
        char* x739 = x730->S_ADDRESS;
        char* x741 = x730->S_PHONE;
        char* x743 = x730->S_COMMENT;
        printf("%.2f|%s|%s|%d|%s|%s|%s|%s\n", x731, x732, x734, x736, x737, x739, x741, x743);
        numeric_int_t x4583 = x43295;
        numeric_int_t x747 = x4583+(1);
        x43295 = x747;
      };
    };
    numeric_int_t x44506 = x43295;
    printf("(%d rows)\n", x44506);
    struct timeval* x44508 = &x43204;
    gettimeofday(x44508, NULL);
    struct timeval* x44510 = &x43200;
    struct timeval* x44511 = &x43204;
    struct timeval* x44512 = &x43202;
    long x44513 = timeval_subtract(x44510, x44511, x44512);
    printf("Generated code run in %ld milliseconds.\n", x44513);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x43148(void* x9902) {
  numeric_int_t x9903 = g_direct_hash(x9902);
  return x9903; 
}

numeric_int_t x43151(void* x9905, void* x9906) {
  numeric_int_t x9907 = g_direct_equal(x9905, x9906);
  return x9907; 
}

numeric_int_t x43158(void* x9912) {
  numeric_int_t x9913 = g_direct_hash(x9912);
  return x9913; 
}

numeric_int_t x43161(void* x9915, void* x9916) {
  numeric_int_t x9917 = g_direct_equal(x9915, x9916);
  return x9917; 
}

numeric_int_t x43168(void* x9922) {
  numeric_int_t x9923 = g_direct_hash(x9922);
  return x9923; 
}

numeric_int_t x43171(void* x9925, void* x9926) {
  numeric_int_t x9927 = g_direct_equal(x9925, x9926);
  return x9927; 
}

numeric_int_t x43178(void* x9932) {
  numeric_int_t x9933 = g_direct_hash(x9932);
  return x9933; 
}

numeric_int_t x43181(void* x9935, void* x9936) {
  numeric_int_t x9937 = g_direct_equal(x9935, x9936);
  return x9937; 
}

numeric_int_t x43188(void* x9942) {
  numeric_int_t x9943 = g_direct_hash(x9942);
  return x9943; 
}

numeric_int_t x43191(void* x9945, void* x9946) {
  numeric_int_t x9947 = g_direct_equal(x9945, x9946);
  return x9947; 
}

numeric_int_t x43252(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x193, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x194) {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x195 = x193->wnd;
  double x196 = x195->S_ACCTBAL;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x197 = x194->wnd;
  double x198 = x197->S_ACCTBAL;
  boolean_t x199 = x196<(x198);
  /* VAR */ numeric_int_t ite33244 = 0;
  if(x199) {
    ite33244 = 1;
  } else {
    
    boolean_t x33246 = x196>(x198);
    /* VAR */ numeric_int_t ite33248 = 0;
    if(x33246) {
      ite33248 = -1;
    } else {
      
      char* x33250 = x195->N_NAME;
      char* x33251 = x197->N_NAME;
      numeric_int_t x33252 = strcmp(x33250, x33251);
      /* VAR */ numeric_int_t x33253 = x33252;
      numeric_int_t x33254 = x33253;
      boolean_t x33255 = x33254==(0);
      if(x33255) {
        char* x207 = x195->S_NAME;
        char* x208 = x197->S_NAME;
        numeric_int_t x23836 = strcmp(x207, x208);
        x33253 = x23836;
        numeric_int_t x211 = x33253;
        boolean_t x212 = x211==(0);
        if(x212) {
          numeric_int_t x213 = x195->P_PARTKEY;
          numeric_int_t x214 = x197->P_PARTKEY;
          numeric_int_t x215 = x213-(x214);
          x33253 = x215;
        };
      };
      numeric_int_t x33268 = x33253;
      ite33248 = x33268;
    };
    numeric_int_t x33247 = ite33248;
    ite33244 = x33247;
  };
  numeric_int_t x221 = ite33244;
  return x221; 
}

numeric_int_t x12885(void* x12879, void* x12880, void* x12881) {
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord** x12882 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord**){x12881};
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x12883 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x12880};
  pointer_assign(x12882, x12883);
  return 1; 
}
