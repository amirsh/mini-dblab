#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct Q3GRPRecord;
struct LINEITEMRecord;
struct AGGRecord_Q3GRPRecord;
struct CUSTOMERRecord_ORDERSRecord;
struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord;
struct ORDERSRecord;
struct CUSTOMERRecord;
struct Q3GRPRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t O_ORDERDATE;
  numeric_int_t O_SHIPPRIORITY;
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

struct AGGRecord_Q3GRPRecord {
  struct Q3GRPRecord* key;
  double* aggs;
};

struct CUSTOMERRecord_ORDERSRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
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

struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
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


numeric_int_t x26151(struct Q3GRPRecord* x7963);

boolean_t x26158(struct Q3GRPRecord* x7968, struct Q3GRPRecord* x7969);

numeric_int_t x26183(void* x6520);

numeric_int_t x26186(void* x6523, void* x6524);

numeric_int_t x26193(void* x6530);

numeric_int_t x26196(void* x6533, void* x6534);

numeric_int_t x26254(struct AGGRecord_Q3GRPRecord* x146, struct AGGRecord_Q3GRPRecord* x147);

numeric_int_t x8370(void* x8364, void* x8365, void* x8366);

int main(int argc, char** argv) {
  FILE* x3436 = popen("wc -l ../../data/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x3437 = 0;
  numeric_int_t x3438 = x3437;
  numeric_int_t* x3439 = &x3438;
  numeric_int_t x3440 = fscanf(x3436, "%d", x3439);
  pclose(x3436);
  struct LINEITEMRecord* x4736 = (struct LINEITEMRecord*)malloc(x3438 * sizeof(struct LINEITEMRecord));
  memset(x4736, 0, x3438 * sizeof(struct LINEITEMRecord));
  numeric_int_t x3444 = O_RDONLY;
  numeric_int_t x3445 = open("../../data/sf1/lineitem.tbl", x3444);
  struct stat x3446 = (struct stat){0};
  /* VAR */ struct stat x3447 = x3446;
  struct stat x3448 = x3447;
  struct stat* x3449 = &x3448;
  numeric_int_t x3450 = stat("../../data/sf1/lineitem.tbl", x3449);
  size_t x3451 = x3449->st_size;
  numeric_int_t x3452 = PROT_READ;
  numeric_int_t x3453 = MAP_PRIVATE;
  char* x3454 = mmap(NULL, x3451, x3452, x3453, x3445, 0);
  /* VAR */ char* x3455 = x3454;
  char* x3 = x3455;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x3438);
    /* VAR */ boolean_t ite21946 = 0;
    if(x6) {
      char x25133 = *x3;
      boolean_t x25134 = x25133!=('\0');
      ite21946 = x25134;
    } else {
      
      ite21946 = 0;
    };
    boolean_t x20497 = ite21946;
    if (!(x20497)) break; 
    
    /* VAR */ numeric_int_t x3463 = 0;
    numeric_int_t x3464 = x3463;
    numeric_int_t* x3465 = &x3464;
    char* x3466 = strntoi_unchecked(x3, x3465);
    x3 = x3466;
    /* VAR */ numeric_int_t x3468 = 0;
    numeric_int_t x3469 = x3468;
    numeric_int_t* x3470 = &x3469;
    char* x3471 = strntoi_unchecked(x3, x3470);
    x3 = x3471;
    /* VAR */ numeric_int_t x3473 = 0;
    numeric_int_t x3474 = x3473;
    numeric_int_t* x3475 = &x3474;
    char* x3476 = strntoi_unchecked(x3, x3475);
    x3 = x3476;
    /* VAR */ numeric_int_t x3478 = 0;
    numeric_int_t x3479 = x3478;
    numeric_int_t* x3480 = &x3479;
    char* x3481 = strntoi_unchecked(x3, x3480);
    x3 = x3481;
    /* VAR */ double x3483 = 0.0;
    double x3484 = x3483;
    double* x3485 = &x3484;
    char* x3486 = strntod_unchecked(x3, x3485);
    x3 = x3486;
    /* VAR */ double x3488 = 0.0;
    double x3489 = x3488;
    double* x3490 = &x3489;
    char* x3491 = strntod_unchecked(x3, x3490);
    x3 = x3491;
    /* VAR */ double x3493 = 0.0;
    double x3494 = x3493;
    double* x3495 = &x3494;
    char* x3496 = strntod_unchecked(x3, x3495);
    x3 = x3496;
    /* VAR */ double x3498 = 0.0;
    double x3499 = x3498;
    double* x3500 = &x3499;
    char* x3501 = strntod_unchecked(x3, x3500);
    x3 = x3501;
    char x3503 = *x3;
    /* VAR */ char x3504 = x3503;
    x3 += 1;
    x3 += 1;
    char x3507 = x3504;
    char x3508 = *x3;
    /* VAR */ char x3509 = x3508;
    x3 += 1;
    x3 += 1;
    char x3512 = x3509;
    /* VAR */ numeric_int_t x3513 = 0;
    numeric_int_t x3514 = x3513;
    numeric_int_t* x3515 = &x3514;
    char* x3516 = strntoi_unchecked(x3, x3515);
    x3 = x3516;
    /* VAR */ numeric_int_t x3518 = 0;
    numeric_int_t x3519 = x3518;
    numeric_int_t* x3520 = &x3519;
    char* x3521 = strntoi_unchecked(x3, x3520);
    x3 = x3521;
    /* VAR */ numeric_int_t x3523 = 0;
    numeric_int_t x3524 = x3523;
    numeric_int_t* x3525 = &x3524;
    char* x3526 = strntoi_unchecked(x3, x3525);
    x3 = x3526;
    numeric_int_t x3528 = x3514*(10000);
    numeric_int_t x3529 = x3519*(100);
    numeric_int_t x3530 = x3528+(x3529);
    numeric_int_t x3531 = x3530+(x3524);
    /* VAR */ numeric_int_t x3532 = 0;
    numeric_int_t x3533 = x3532;
    numeric_int_t* x3534 = &x3533;
    char* x3535 = strntoi_unchecked(x3, x3534);
    x3 = x3535;
    /* VAR */ numeric_int_t x3537 = 0;
    numeric_int_t x3538 = x3537;
    numeric_int_t* x3539 = &x3538;
    char* x3540 = strntoi_unchecked(x3, x3539);
    x3 = x3540;
    /* VAR */ numeric_int_t x3542 = 0;
    numeric_int_t x3543 = x3542;
    numeric_int_t* x3544 = &x3543;
    char* x3545 = strntoi_unchecked(x3, x3544);
    x3 = x3545;
    numeric_int_t x3547 = x3533*(10000);
    numeric_int_t x3548 = x3538*(100);
    numeric_int_t x3549 = x3547+(x3548);
    numeric_int_t x3550 = x3549+(x3543);
    /* VAR */ numeric_int_t x3551 = 0;
    numeric_int_t x3552 = x3551;
    numeric_int_t* x3553 = &x3552;
    char* x3554 = strntoi_unchecked(x3, x3553);
    x3 = x3554;
    /* VAR */ numeric_int_t x3556 = 0;
    numeric_int_t x3557 = x3556;
    numeric_int_t* x3558 = &x3557;
    char* x3559 = strntoi_unchecked(x3, x3558);
    x3 = x3559;
    /* VAR */ numeric_int_t x3561 = 0;
    numeric_int_t x3562 = x3561;
    numeric_int_t* x3563 = &x3562;
    char* x3564 = strntoi_unchecked(x3, x3563);
    x3 = x3564;
    numeric_int_t x3566 = x3552*(10000);
    numeric_int_t x3567 = x3557*(100);
    numeric_int_t x3568 = x3566+(x3567);
    numeric_int_t x3569 = x3568+(x3562);
    /* VAR */ char* x3570 = x3;
    while(1) {
      
      char x3571 = *x3;
      boolean_t x3572 = x3571!=('|');
      /* VAR */ boolean_t ite22066 = 0;
      if(x3572) {
        char x25252 = *x3;
        boolean_t x25253 = x25252!=('\n');
        ite22066 = x25253;
      } else {
        
        ite22066 = 0;
      };
      boolean_t x20610 = ite22066;
      if (!(x20610)) break; 
      
      x3 += 1;
    };
    char* x3578 = x3570;
    numeric_int_t x3579 = x3 - x3578;
    numeric_int_t x3580 = x3579+(1);
    char* x4875 = (char*)malloc(x3580 * sizeof(char));
    memset(x4875, 0, x3580 * sizeof(char));
    char* x3583 = x3570;
    char* x3584 = strncpy(x4875, x3583, x3579);
    x3 += 1;
    /* VAR */ char* x3586 = x3;
    while(1) {
      
      char x3587 = *x3;
      boolean_t x3588 = x3587!=('|');
      /* VAR */ boolean_t ite22087 = 0;
      if(x3588) {
        char x25272 = *x3;
        boolean_t x25273 = x25272!=('\n');
        ite22087 = x25273;
      } else {
        
        ite22087 = 0;
      };
      boolean_t x20624 = ite22087;
      if (!(x20624)) break; 
      
      x3 += 1;
    };
    char* x3594 = x3586;
    numeric_int_t x3595 = x3 - x3594;
    numeric_int_t x3596 = x3595+(1);
    char* x4891 = (char*)malloc(x3596 * sizeof(char));
    memset(x4891, 0, x3596 * sizeof(char));
    char* x3599 = x3586;
    char* x3600 = strncpy(x4891, x3599, x3595);
    x3 += 1;
    /* VAR */ char* x3602 = x3;
    while(1) {
      
      char x3603 = *x3;
      boolean_t x3604 = x3603!=('|');
      /* VAR */ boolean_t ite22108 = 0;
      if(x3604) {
        char x25292 = *x3;
        boolean_t x25293 = x25292!=('\n');
        ite22108 = x25293;
      } else {
        
        ite22108 = 0;
      };
      boolean_t x20638 = ite22108;
      if (!(x20638)) break; 
      
      x3 += 1;
    };
    char* x3610 = x3602;
    numeric_int_t x3611 = x3 - x3610;
    numeric_int_t x3612 = x3611+(1);
    char* x4907 = (char*)malloc(x3612 * sizeof(char));
    memset(x4907, 0, x3612 * sizeof(char));
    char* x3615 = x3602;
    char* x3616 = strncpy(x4907, x3615, x3611);
    x3 += 1;
    struct LINEITEMRecord* x5568 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x5568, 0, 1 * sizeof(struct LINEITEMRecord));
    x5568->L_ORDERKEY = x3464; x5568->L_PARTKEY = x3469; x5568->L_SUPPKEY = x3474; x5568->L_LINENUMBER = x3479; x5568->L_QUANTITY = x3484; x5568->L_EXTENDEDPRICE = x3489; x5568->L_DISCOUNT = x3494; x5568->L_TAX = x3499; x5568->L_RETURNFLAG = x3507; x5568->L_LINESTATUS = x3512; x5568->L_SHIPDATE = x3531; x5568->L_COMMITDATE = x3550; x5568->L_RECEIPTDATE = x3569; x5568->L_SHIPINSTRUCT = x4875; x5568->L_SHIPMODE = x4891; x5568->L_COMMENT = x4907;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x4914 = *x5568;
    *(x4736 + x26) = x4914;
    struct LINEITEMRecord* x4916 = &(x4736[x26]);
    x5568 = x4916;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x3625 = x3455;
  munmap(x3625, x3451);
  FILE* x3626 = popen("wc -l ../../data/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x3627 = 0;
  numeric_int_t x3628 = x3627;
  numeric_int_t* x3629 = &x3628;
  numeric_int_t x3630 = fscanf(x3626, "%d", x3629);
  pclose(x3626);
  struct ORDERSRecord* x4929 = (struct ORDERSRecord*)malloc(x3628 * sizeof(struct ORDERSRecord));
  memset(x4929, 0, x3628 * sizeof(struct ORDERSRecord));
  numeric_int_t x3634 = O_RDONLY;
  numeric_int_t x3635 = open("../../data/sf1/orders.tbl", x3634);
  /* VAR */ struct stat x3636 = x3446;
  struct stat x3637 = x3636;
  struct stat* x3638 = &x3637;
  numeric_int_t x3639 = stat("../../data/sf1/orders.tbl", x3638);
  size_t x3640 = x3638->st_size;
  numeric_int_t x3641 = PROT_READ;
  numeric_int_t x3642 = MAP_PRIVATE;
  char* x3643 = mmap(NULL, x3640, x3641, x3642, x3635, 0);
  /* VAR */ char* x3644 = x3643;
  char* x35 = x3644;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x3628);
    /* VAR */ boolean_t ite22161 = 0;
    if(x38) {
      char x25344 = *x35;
      boolean_t x25345 = x25344!=('\0');
      ite22161 = x25345;
    } else {
      
      ite22161 = 0;
    };
    boolean_t x20684 = ite22161;
    if (!(x20684)) break; 
    
    /* VAR */ numeric_int_t x3652 = 0;
    numeric_int_t x3653 = x3652;
    numeric_int_t* x3654 = &x3653;
    char* x3655 = strntoi_unchecked(x35, x3654);
    x35 = x3655;
    /* VAR */ numeric_int_t x3657 = 0;
    numeric_int_t x3658 = x3657;
    numeric_int_t* x3659 = &x3658;
    char* x3660 = strntoi_unchecked(x35, x3659);
    x35 = x3660;
    char x3662 = *x35;
    /* VAR */ char x3663 = x3662;
    x35 += 1;
    x35 += 1;
    char x3666 = x3663;
    /* VAR */ double x3667 = 0.0;
    double x3668 = x3667;
    double* x3669 = &x3668;
    char* x3670 = strntod_unchecked(x35, x3669);
    x35 = x3670;
    /* VAR */ numeric_int_t x3672 = 0;
    numeric_int_t x3673 = x3672;
    numeric_int_t* x3674 = &x3673;
    char* x3675 = strntoi_unchecked(x35, x3674);
    x35 = x3675;
    /* VAR */ numeric_int_t x3677 = 0;
    numeric_int_t x3678 = x3677;
    numeric_int_t* x3679 = &x3678;
    char* x3680 = strntoi_unchecked(x35, x3679);
    x35 = x3680;
    /* VAR */ numeric_int_t x3682 = 0;
    numeric_int_t x3683 = x3682;
    numeric_int_t* x3684 = &x3683;
    char* x3685 = strntoi_unchecked(x35, x3684);
    x35 = x3685;
    numeric_int_t x3687 = x3673*(10000);
    numeric_int_t x3688 = x3678*(100);
    numeric_int_t x3689 = x3687+(x3688);
    numeric_int_t x3690 = x3689+(x3683);
    /* VAR */ char* x3691 = x35;
    while(1) {
      
      char x3692 = *x35;
      boolean_t x3693 = x3692!=('|');
      /* VAR */ boolean_t ite22213 = 0;
      if(x3693) {
        char x25395 = *x35;
        boolean_t x25396 = x25395!=('\n');
        ite22213 = x25396;
      } else {
        
        ite22213 = 0;
      };
      boolean_t x20729 = ite22213;
      if (!(x20729)) break; 
      
      x35 += 1;
    };
    char* x3699 = x3691;
    numeric_int_t x3700 = x35 - x3699;
    numeric_int_t x3701 = x3700+(1);
    char* x4999 = (char*)malloc(x3701 * sizeof(char));
    memset(x4999, 0, x3701 * sizeof(char));
    char* x3704 = x3691;
    char* x3705 = strncpy(x4999, x3704, x3700);
    x35 += 1;
    /* VAR */ char* x3707 = x35;
    while(1) {
      
      char x3708 = *x35;
      boolean_t x3709 = x3708!=('|');
      /* VAR */ boolean_t ite22234 = 0;
      if(x3709) {
        char x25415 = *x35;
        boolean_t x25416 = x25415!=('\n');
        ite22234 = x25416;
      } else {
        
        ite22234 = 0;
      };
      boolean_t x20743 = ite22234;
      if (!(x20743)) break; 
      
      x35 += 1;
    };
    char* x3715 = x3707;
    numeric_int_t x3716 = x35 - x3715;
    numeric_int_t x3717 = x3716+(1);
    char* x5015 = (char*)malloc(x3717 * sizeof(char));
    memset(x5015, 0, x3717 * sizeof(char));
    char* x3720 = x3707;
    char* x3721 = strncpy(x5015, x3720, x3716);
    x35 += 1;
    /* VAR */ numeric_int_t x3723 = 0;
    numeric_int_t x3724 = x3723;
    numeric_int_t* x3725 = &x3724;
    char* x3726 = strntoi_unchecked(x35, x3725);
    x35 = x3726;
    /* VAR */ char* x3728 = x35;
    while(1) {
      
      char x3729 = *x35;
      boolean_t x3730 = x3729!=('|');
      /* VAR */ boolean_t ite22260 = 0;
      if(x3730) {
        char x25440 = *x35;
        boolean_t x25441 = x25440!=('\n');
        ite22260 = x25441;
      } else {
        
        ite22260 = 0;
      };
      boolean_t x20762 = ite22260;
      if (!(x20762)) break; 
      
      x35 += 1;
    };
    char* x3736 = x3728;
    numeric_int_t x3737 = x35 - x3736;
    numeric_int_t x3738 = x3737+(1);
    char* x5036 = (char*)malloc(x3738 * sizeof(char));
    memset(x5036, 0, x3738 * sizeof(char));
    char* x3741 = x3728;
    char* x3742 = strncpy(x5036, x3741, x3737);
    x35 += 1;
    struct ORDERSRecord* x5699 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x5699, 0, 1 * sizeof(struct ORDERSRecord));
    x5699->O_ORDERKEY = x3653; x5699->O_CUSTKEY = x3658; x5699->O_ORDERSTATUS = x3666; x5699->O_TOTALPRICE = x3668; x5699->O_ORDERDATE = x3690; x5699->O_ORDERPRIORITY = x4999; x5699->O_CLERK = x5015; x5699->O_SHIPPRIORITY = x3724; x5699->O_COMMENT = x5036;
    numeric_int_t x51 = x36;
    struct ORDERSRecord x5043 = *x5699;
    *(x4929 + x51) = x5043;
    struct ORDERSRecord* x5045 = &(x4929[x51]);
    x5699 = x5045;
    numeric_int_t x53 = x36;
    numeric_int_t x54 = x53+(1);
    x36 = x54;
  };
  char* x3751 = x3644;
  munmap(x3751, x3640);
  FILE* x3752 = popen("wc -l ../../data/sf1/customer.tbl", "r");
  /* VAR */ numeric_int_t x3753 = 0;
  numeric_int_t x3754 = x3753;
  numeric_int_t* x3755 = &x3754;
  numeric_int_t x3756 = fscanf(x3752, "%d", x3755);
  pclose(x3752);
  struct CUSTOMERRecord* x5058 = (struct CUSTOMERRecord*)malloc(x3754 * sizeof(struct CUSTOMERRecord));
  memset(x5058, 0, x3754 * sizeof(struct CUSTOMERRecord));
  numeric_int_t x3760 = O_RDONLY;
  numeric_int_t x3761 = open("../../data/sf1/customer.tbl", x3760);
  /* VAR */ struct stat x3762 = x3446;
  struct stat x3763 = x3762;
  struct stat* x3764 = &x3763;
  numeric_int_t x3765 = stat("../../data/sf1/customer.tbl", x3764);
  size_t x3766 = x3764->st_size;
  numeric_int_t x3767 = PROT_READ;
  numeric_int_t x3768 = MAP_PRIVATE;
  char* x3769 = mmap(NULL, x3766, x3767, x3768, x3761, 0);
  /* VAR */ char* x3770 = x3769;
  char* x60 = x3770;
  /* VAR */ numeric_int_t x61 = 0;
  while(1) {
    
    numeric_int_t x62 = x61;
    boolean_t x63 = x62<(x3754);
    /* VAR */ boolean_t ite22313 = 0;
    if(x63) {
      char x25492 = *x60;
      boolean_t x25493 = x25492!=('\0');
      ite22313 = x25493;
    } else {
      
      ite22313 = 0;
    };
    boolean_t x20808 = ite22313;
    if (!(x20808)) break; 
    
    /* VAR */ numeric_int_t x3778 = 0;
    numeric_int_t x3779 = x3778;
    numeric_int_t* x3780 = &x3779;
    char* x3781 = strntoi_unchecked(x60, x3780);
    x60 = x3781;
    /* VAR */ char* x3783 = x60;
    while(1) {
      
      char x3784 = *x60;
      boolean_t x3785 = x3784!=('|');
      /* VAR */ boolean_t ite22331 = 0;
      if(x3785) {
        char x25509 = *x60;
        boolean_t x25510 = x25509!=('\n');
        ite22331 = x25510;
      } else {
        
        ite22331 = 0;
      };
      boolean_t x20819 = ite22331;
      if (!(x20819)) break; 
      
      x60 += 1;
    };
    char* x3791 = x3783;
    numeric_int_t x3792 = x60 - x3791;
    numeric_int_t x3793 = x3792+(1);
    char* x5094 = (char*)malloc(x3793 * sizeof(char));
    memset(x5094, 0, x3793 * sizeof(char));
    char* x3796 = x3783;
    char* x3797 = strncpy(x5094, x3796, x3792);
    x60 += 1;
    /* VAR */ char* x3799 = x60;
    while(1) {
      
      char x3800 = *x60;
      boolean_t x3801 = x3800!=('|');
      /* VAR */ boolean_t ite22352 = 0;
      if(x3801) {
        char x25529 = *x60;
        boolean_t x25530 = x25529!=('\n');
        ite22352 = x25530;
      } else {
        
        ite22352 = 0;
      };
      boolean_t x20833 = ite22352;
      if (!(x20833)) break; 
      
      x60 += 1;
    };
    char* x3807 = x3799;
    numeric_int_t x3808 = x60 - x3807;
    numeric_int_t x3809 = x3808+(1);
    char* x5110 = (char*)malloc(x3809 * sizeof(char));
    memset(x5110, 0, x3809 * sizeof(char));
    char* x3812 = x3799;
    char* x3813 = strncpy(x5110, x3812, x3808);
    x60 += 1;
    /* VAR */ numeric_int_t x3815 = 0;
    numeric_int_t x3816 = x3815;
    numeric_int_t* x3817 = &x3816;
    char* x3818 = strntoi_unchecked(x60, x3817);
    x60 = x3818;
    /* VAR */ char* x3820 = x60;
    while(1) {
      
      char x3821 = *x60;
      boolean_t x3822 = x3821!=('|');
      /* VAR */ boolean_t ite22378 = 0;
      if(x3822) {
        char x25554 = *x60;
        boolean_t x25555 = x25554!=('\n');
        ite22378 = x25555;
      } else {
        
        ite22378 = 0;
      };
      boolean_t x20852 = ite22378;
      if (!(x20852)) break; 
      
      x60 += 1;
    };
    char* x3828 = x3820;
    numeric_int_t x3829 = x60 - x3828;
    numeric_int_t x3830 = x3829+(1);
    char* x5131 = (char*)malloc(x3830 * sizeof(char));
    memset(x5131, 0, x3830 * sizeof(char));
    char* x3833 = x3820;
    char* x3834 = strncpy(x5131, x3833, x3829);
    x60 += 1;
    /* VAR */ double x3836 = 0.0;
    double x3837 = x3836;
    double* x3838 = &x3837;
    char* x3839 = strntod_unchecked(x60, x3838);
    x60 = x3839;
    /* VAR */ char* x3841 = x60;
    while(1) {
      
      char x3842 = *x60;
      boolean_t x3843 = x3842!=('|');
      /* VAR */ boolean_t ite22404 = 0;
      if(x3843) {
        char x25579 = *x60;
        boolean_t x25580 = x25579!=('\n');
        ite22404 = x25580;
      } else {
        
        ite22404 = 0;
      };
      boolean_t x20871 = ite22404;
      if (!(x20871)) break; 
      
      x60 += 1;
    };
    char* x3849 = x3841;
    numeric_int_t x3850 = x60 - x3849;
    numeric_int_t x3851 = x3850+(1);
    char* x5152 = (char*)malloc(x3851 * sizeof(char));
    memset(x5152, 0, x3851 * sizeof(char));
    char* x3854 = x3841;
    char* x3855 = strncpy(x5152, x3854, x3850);
    x60 += 1;
    /* VAR */ char* x3857 = x60;
    while(1) {
      
      char x3858 = *x60;
      boolean_t x3859 = x3858!=('|');
      /* VAR */ boolean_t ite22425 = 0;
      if(x3859) {
        char x25599 = *x60;
        boolean_t x25600 = x25599!=('\n');
        ite22425 = x25600;
      } else {
        
        ite22425 = 0;
      };
      boolean_t x20885 = ite22425;
      if (!(x20885)) break; 
      
      x60 += 1;
    };
    char* x3865 = x3857;
    numeric_int_t x3866 = x60 - x3865;
    numeric_int_t x3867 = x3866+(1);
    char* x5168 = (char*)malloc(x3867 * sizeof(char));
    memset(x5168, 0, x3867 * sizeof(char));
    char* x3870 = x3857;
    char* x3871 = strncpy(x5168, x3870, x3866);
    x60 += 1;
    struct CUSTOMERRecord* x5833 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x5833, 0, 1 * sizeof(struct CUSTOMERRecord));
    x5833->C_CUSTKEY = x3779; x5833->C_NAME = x5094; x5833->C_ADDRESS = x5110; x5833->C_NATIONKEY = x3816; x5833->C_PHONE = x5131; x5833->C_ACCTBAL = x3837; x5833->C_MKTSEGMENT = x5152; x5833->C_COMMENT = x5168;
    numeric_int_t x75 = x61;
    struct CUSTOMERRecord x5175 = *x5833;
    *(x5058 + x75) = x5175;
    struct CUSTOMERRecord* x5177 = &(x5058[x75]);
    x5833 = x5177;
    numeric_int_t x77 = x61;
    numeric_int_t x78 = x77+(1);
    x61 = x78;
  };
  char* x3880 = x3770;
  munmap(x3880, x3766);
  numeric_int_t x83 = 0;
  for(; x83 < 1 ; x83 += 1) {
    
    GHashTable* x26182 = g_hash_table_new(x26151, x26158);
    void*** x26190 = (void***){x26183};
    numeric_int_t* x26191 = (numeric_int_t*){x26186};
    GHashTable* x26192 = g_hash_table_new(x26190, x26191);
    void*** x26200 = (void***){x26193};
    numeric_int_t* x26201 = (numeric_int_t*){x26196};
    GHashTable* x26202 = g_hash_table_new(x26200, x26201);
    struct timeval x26203 = (struct timeval){0};
    /* VAR */ struct timeval x26204 = x26203;
    struct timeval x26205 = x26204;
    /* VAR */ struct timeval x26206 = x26203;
    struct timeval x26207 = x26206;
    /* VAR */ struct timeval x26208 = x26203;
    struct timeval x26209 = x26208;
    struct timeval* x26210 = &x26207;
    gettimeofday(x26210, NULL);
    /* VAR */ numeric_int_t x26212 = 0;
    /* VAR */ numeric_int_t x26213 = 0;
    /* VAR */ numeric_int_t x26214 = 0;
    numeric_int_t* x26293 = &(x26254);
    GTree* x26294 = g_tree_new(x26293);
    /* VAR */ boolean_t x26295 = 0;
    /* VAR */ numeric_int_t x26296 = 0;
    while(1) {
      
      numeric_int_t x26298 = x26212;
      boolean_t x26299 = x26298<(x3754);
      if (!(x26299)) break; 
      
      numeric_int_t x1603 = x26212;
      struct CUSTOMERRecord* x183 = &(x5058[x1603]);
      char* x185 = x183->C_MKTSEGMENT;
      boolean_t x17003 = strcmp(x185, "HOUSEHOLD");
      boolean_t x17004 = x17003==(0);
      if(x17004) {
        numeric_int_t x187 = x183->C_CUSTKEY;
        void* x6585 = (void*){x187};
        void* x6586 = (void*){x183};
        void* x6587 = g_hash_table_lookup(x26202, x6585);
        GList** x6588 = (GList**){x6587};
        GList** x6589 = NULL;
        boolean_t x6590 = x6588==(x6589);
        /* VAR */ GList** ite21570 = 0;
        if(x6590) {
          GList** x21571 = malloc(8);
          GList* x21572 = NULL;
          pointer_assign(x21571, x21572);
          ite21570 = x21571;
        } else {
          
          ite21570 = x6588;
        };
        GList** x6594 = ite21570;
        GList* x6595 = *(x6594);
        GList* x6596 = g_list_prepend(x6595, x6586);
        pointer_assign(x6594, x6596);
        void* x6598 = (void*){x6594};
        g_hash_table_insert(x26202, x6585, x6598);
      };
      numeric_int_t x1611 = x26212;
      numeric_int_t x192 = x1611+(1);
      x26212 = x192;
    };
    while(1) {
      
      numeric_int_t x26331 = x26213;
      boolean_t x26332 = x26331<(x3628);
      if (!(x26332)) break; 
      
      numeric_int_t x1620 = x26213;
      struct ORDERSRecord* x201 = &(x4929[x1620]);
      numeric_int_t x203 = x201->O_ORDERDATE;
      boolean_t x204 = x203<(19950304);
      if(x204) {
        numeric_int_t x205 = x201->O_CUSTKEY;
        void* x6613 = (void*){x205};
        void* x6614 = g_hash_table_lookup(x26202, x6613);
        GList** x6615 = (GList**){x6614};
        boolean_t x12554 = x6615!=(NULL);
        if(x12554) {
          GList* x8131 = *(x6615);
          /* VAR */ GList* x8132 = x8131;
          while(1) {
            
            GList* x8133 = x8132;
            GList* x8134 = NULL;
            boolean_t x8135 = x8133!=(x8134);
            if (!(x8135)) break; 
            
            GList* x8136 = x8132;
            void* x8137 = g_list_nth_data(x8136, 0);
            struct CUSTOMERRecord* x8138 = (struct CUSTOMERRecord*){x8137};
            GList* x8139 = x8132;
            GList* x8140 = g_list_next(x8139);
            x8132 = x8140;
            numeric_int_t x8142 = x8138->C_CUSTKEY;
            boolean_t x8143 = x8142==(x205);
            if(x8143) {
              char* x661 = x8138->C_NAME;
              char* x662 = x8138->C_ADDRESS;
              numeric_int_t x663 = x8138->C_NATIONKEY;
              char* x664 = x8138->C_PHONE;
              double x665 = x8138->C_ACCTBAL;
              char* x666 = x8138->C_MKTSEGMENT;
              char* x667 = x8138->C_COMMENT;
              numeric_int_t x668 = x201->O_ORDERKEY;
              char x669 = x201->O_ORDERSTATUS;
              double x670 = x201->O_TOTALPRICE;
              char* x671 = x201->O_ORDERPRIORITY;
              char* x672 = x201->O_CLERK;
              numeric_int_t x673 = x201->O_SHIPPRIORITY;
              char* x674 = x201->O_COMMENT;
              struct CUSTOMERRecord_ORDERSRecord* x5934 = (struct CUSTOMERRecord_ORDERSRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
              memset(x5934, 0, 1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
              x5934->C_CUSTKEY = x8142; x5934->C_NAME = x661; x5934->C_ADDRESS = x662; x5934->C_NATIONKEY = x663; x5934->C_PHONE = x664; x5934->C_ACCTBAL = x665; x5934->C_MKTSEGMENT = x666; x5934->C_COMMENT = x667; x5934->O_ORDERKEY = x668; x5934->O_CUSTKEY = x205; x5934->O_ORDERSTATUS = x669; x5934->O_TOTALPRICE = x670; x5934->O_ORDERDATE = x203; x5934->O_ORDERPRIORITY = x671; x5934->O_CLERK = x672; x5934->O_SHIPPRIORITY = x673; x5934->O_COMMENT = x674;
              numeric_int_t x226 = x5934->O_ORDERKEY;
              void* x6643 = (void*){x226};
              void* x6644 = (void*){x5934};
              void* x6645 = g_hash_table_lookup(x26192, x6643);
              GList** x6646 = (GList**){x6645};
              GList** x6647 = NULL;
              boolean_t x6648 = x6646==(x6647);
              /* VAR */ GList** ite21682 = 0;
              if(x6648) {
                GList** x21683 = malloc(8);
                GList* x21684 = NULL;
                pointer_assign(x21683, x21684);
                ite21682 = x21683;
              } else {
                
                ite21682 = x6646;
              };
              GList** x6652 = ite21682;
              GList* x6653 = *(x6652);
              GList* x6654 = g_list_prepend(x6653, x6644);
              pointer_assign(x6652, x6654);
              void* x6656 = (void*){x6652};
              g_hash_table_insert(x26192, x6643, x6656);
            };
          };
        };
      };
      numeric_int_t x1679 = x26213;
      numeric_int_t x235 = x1679+(1);
      x26213 = x235;
    };
    while(1) {
      
      numeric_int_t x26444 = x26214;
      boolean_t x26445 = x26444<(x3438);
      if (!(x26445)) break; 
      
      numeric_int_t x1689 = x26214;
      struct LINEITEMRecord* x245 = &(x4736[x1689]);
      numeric_int_t x247 = x245->L_SHIPDATE;
      boolean_t x248 = x247>(19950304);
      if(x248) {
        numeric_int_t x249 = x245->L_ORDERKEY;
        void* x6672 = (void*){x249};
        void* x6673 = g_hash_table_lookup(x26192, x6672);
        GList** x6674 = (GList**){x6673};
        boolean_t x12658 = x6674!=(NULL);
        if(x12658) {
          GList* x8263 = *(x6674);
          /* VAR */ GList* x8264 = x8263;
          while(1) {
            
            GList* x8265 = x8264;
            GList* x8266 = NULL;
            boolean_t x8267 = x8265!=(x8266);
            if (!(x8267)) break; 
            
            GList* x8268 = x8264;
            void* x8269 = g_list_nth_data(x8268, 0);
            struct CUSTOMERRecord_ORDERSRecord* x8270 = (struct CUSTOMERRecord_ORDERSRecord*){x8269};
            GList* x8271 = x8264;
            GList* x8272 = g_list_next(x8271);
            x8264 = x8272;
            numeric_int_t x8274 = x8270->O_ORDERKEY;
            boolean_t x8275 = x8274==(x249);
            if(x8275) {
              numeric_int_t x779 = x8270->C_CUSTKEY;
              char* x780 = x8270->C_NAME;
              char* x781 = x8270->C_ADDRESS;
              numeric_int_t x782 = x8270->C_NATIONKEY;
              char* x783 = x8270->C_PHONE;
              double x784 = x8270->C_ACCTBAL;
              char* x785 = x8270->C_MKTSEGMENT;
              char* x786 = x8270->C_COMMENT;
              numeric_int_t x787 = x8270->O_CUSTKEY;
              char x788 = x8270->O_ORDERSTATUS;
              double x789 = x8270->O_TOTALPRICE;
              numeric_int_t x790 = x8270->O_ORDERDATE;
              char* x791 = x8270->O_ORDERPRIORITY;
              char* x792 = x8270->O_CLERK;
              numeric_int_t x793 = x8270->O_SHIPPRIORITY;
              char* x794 = x8270->O_COMMENT;
              numeric_int_t x795 = x245->L_PARTKEY;
              numeric_int_t x796 = x245->L_SUPPKEY;
              numeric_int_t x797 = x245->L_LINENUMBER;
              double x798 = x245->L_QUANTITY;
              double x799 = x245->L_EXTENDEDPRICE;
              double x800 = x245->L_DISCOUNT;
              double x801 = x245->L_TAX;
              char x802 = x245->L_RETURNFLAG;
              char x803 = x245->L_LINESTATUS;
              numeric_int_t x804 = x245->L_COMMITDATE;
              numeric_int_t x805 = x245->L_RECEIPTDATE;
              char* x806 = x245->L_SHIPINSTRUCT;
              char* x807 = x245->L_SHIPMODE;
              char* x808 = x245->L_COMMENT;
              struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x5992 = (struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
              memset(x5992, 0, 1 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
              x5992->C_CUSTKEY = x779; x5992->C_NAME = x780; x5992->C_ADDRESS = x781; x5992->C_NATIONKEY = x782; x5992->C_PHONE = x783; x5992->C_ACCTBAL = x784; x5992->C_MKTSEGMENT = x785; x5992->C_COMMENT = x786; x5992->O_ORDERKEY = x8274; x5992->O_CUSTKEY = x787; x5992->O_ORDERSTATUS = x788; x5992->O_TOTALPRICE = x789; x5992->O_ORDERDATE = x790; x5992->O_ORDERPRIORITY = x791; x5992->O_CLERK = x792; x5992->O_SHIPPRIORITY = x793; x5992->O_COMMENT = x794; x5992->L_ORDERKEY = x249; x5992->L_PARTKEY = x795; x5992->L_SUPPKEY = x796; x5992->L_LINENUMBER = x797; x5992->L_QUANTITY = x798; x5992->L_EXTENDEDPRICE = x799; x5992->L_DISCOUNT = x800; x5992->L_TAX = x801; x5992->L_RETURNFLAG = x802; x5992->L_LINESTATUS = x803; x5992->L_SHIPDATE = x247; x5992->L_COMMITDATE = x804; x5992->L_RECEIPTDATE = x805; x5992->L_SHIPINSTRUCT = x806; x5992->L_SHIPMODE = x807; x5992->L_COMMENT = x808;
              numeric_int_t x300 = x5992->L_ORDERKEY;
              numeric_int_t x301 = x5992->O_ORDERDATE;
              numeric_int_t x302 = x5992->O_SHIPPRIORITY;
              struct Q3GRPRecord* x5998 = (struct Q3GRPRecord*)malloc(1 * sizeof(struct Q3GRPRecord));
              memset(x5998, 0, 1 * sizeof(struct Q3GRPRecord));
              x5998->L_ORDERKEY = x300; x5998->O_ORDERDATE = x301; x5998->O_SHIPPRIORITY = x302;
              void* x8316 = g_hash_table_lookup(x26182, x5998);
              boolean_t x8244 = x8316==(NULL);
              /* VAR */ struct AGGRecord_Q3GRPRecord* ite21833 = 0;
              if(x8244) {
                double* x21834 = (double*)malloc(1 * sizeof(double));
                memset(x21834, 0, 1 * sizeof(double));
                struct AGGRecord_Q3GRPRecord* x21835 = (struct AGGRecord_Q3GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q3GRPRecord));
                memset(x21835, 0, 1 * sizeof(struct AGGRecord_Q3GRPRecord));
                x21835->key = x5998; x21835->aggs = x21834;
                g_hash_table_insert(x26182, x5998, x21835);
                ite21833 = x21835;
              } else {
                
                ite21833 = x8316;
              };
              struct AGGRecord_Q3GRPRecord* x8254 = ite21833;
              double* x308 = x8254->aggs;
              double x322 = x308[0];
              double x323 = x5992->L_EXTENDEDPRICE;
              double x324 = x5992->L_DISCOUNT;
              double x325 = 1.0-(x324);
              double x326 = x323*(x325);
              double x327 = x322+(x326);
              *x308 = x327;
            };
          };
        };
      };
      numeric_int_t x1840 = x26214;
      numeric_int_t x339 = x1840+(1);
      x26214 = x339;
    };
    GList* x26604 = g_hash_table_get_keys(x26182);
    /* VAR */ GList* x26605 = x26604;
    numeric_int_t x26606 = g_hash_table_size(x26182);
    numeric_int_t x19076 = 0;
    for(; x19076 < x26606 ; x19076 += 1) {
      
      GList* x19077 = x26605;
      void* x19078 = g_list_nth_data(x19077, 0);
      GList* x19079 = g_list_next(x19077);
      x26605 = x19079;
      void* x19081 = g_hash_table_lookup(x26182, x19078);
      struct AGGRecord_Q3GRPRecord* x19083 = (struct AGGRecord_Q3GRPRecord*){x19081};
      g_tree_insert(x26294, x19083, x19083);
    };
    while(1) {
      
      boolean_t x1849 = x26295;
      boolean_t x350 = !(x1849);
      /* VAR */ boolean_t ite23470 = 0;
      if(x350) {
        numeric_int_t x26631 = g_tree_nnodes(x26294);
        boolean_t x26632 = x26631!=(0);
        ite23470 = x26632;
      } else {
        
        ite23470 = 0;
      };
      boolean_t x21884 = ite23470;
      if (!(x21884)) break; 
      
      void* x8363 = NULL;
      void** x8371 = &(x8363);
      g_tree_foreach(x26294, x8370, x8371);
      struct AGGRecord_Q3GRPRecord* x8373 = (struct AGGRecord_Q3GRPRecord*){x8363};
      numeric_int_t x8374 = g_tree_remove(x26294, x8373);
      numeric_int_t x1857 = x26296;
      boolean_t x360 = x1857>=(10);
      if(x360) {
        x26295 = 1;
      } else {
        
        struct Q3GRPRecord* x362 = x8373->key;
        numeric_int_t x363 = x362->L_ORDERKEY;
        double* x364 = x8373->aggs;
        double x365 = x364[0];
        numeric_int_t x366 = x362->O_ORDERDATE;
        char* x367 = ltoa(x366);
        numeric_int_t x368 = x362->O_SHIPPRIORITY;
        printf("%d|%.4f|%s|%d\n", x363, x365, x367, x368);
        numeric_int_t x1869 = x26296;
        numeric_int_t x371 = x1869+(1);
        x26296 = x371;
      };
    };
    numeric_int_t x26664 = x26296;
    printf("(%d rows)\n", x26664);
    struct timeval* x26666 = &x26209;
    gettimeofday(x26666, NULL);
    struct timeval* x26668 = &x26205;
    struct timeval* x26669 = &x26209;
    struct timeval* x26670 = &x26207;
    long x26671 = timeval_subtract(x26668, x26669, x26670);
    printf("Generated code run in %ld milliseconds.\n", x26671);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x26151(struct Q3GRPRecord* x7963) {
  numeric_int_t x14207 = x7963->L_ORDERKEY;
  numeric_int_t x14209 = x7963->O_ORDERDATE;
  numeric_int_t x14211 = x7963->O_SHIPPRIORITY;
  numeric_int_t x14213 = x14207+(x14209);
  numeric_int_t x14214 = x14213+(x14211);
  return x14214; 
}

boolean_t x26158(struct Q3GRPRecord* x7968, struct Q3GRPRecord* x7969) {
  numeric_int_t x14218 = x7968->L_ORDERKEY;
  numeric_int_t x14219 = x7969->L_ORDERKEY;
  boolean_t x14220 = x14218==(x14219);
  numeric_int_t x14221 = x7968->O_ORDERDATE;
  numeric_int_t x14222 = x7969->O_ORDERDATE;
  boolean_t x14223 = x14221==(x14222);
  numeric_int_t x14224 = x7968->O_SHIPPRIORITY;
  numeric_int_t x14225 = x7969->O_SHIPPRIORITY;
  boolean_t x14226 = x14224==(x14225);
  /* VAR */ boolean_t ite23006 = 0;
  if(x14220) {
    ite23006 = x14223;
  } else {
    
    ite23006 = 0;
  };
  boolean_t x21436 = ite23006;
  /* VAR */ boolean_t ite23013 = 0;
  if(x21436) {
    ite23013 = x14226;
  } else {
    
    ite23013 = 0;
  };
  boolean_t x21438 = ite23013;
  return x21438; 
}

numeric_int_t x26183(void* x6520) {
  numeric_int_t x6521 = g_direct_hash(x6520);
  return x6521; 
}

numeric_int_t x26186(void* x6523, void* x6524) {
  numeric_int_t x6525 = g_direct_equal(x6523, x6524);
  return x6525; 
}

numeric_int_t x26193(void* x6530) {
  numeric_int_t x6531 = g_direct_hash(x6530);
  return x6531; 
}

numeric_int_t x26196(void* x6533, void* x6534) {
  numeric_int_t x6535 = g_direct_equal(x6533, x6534);
  return x6535; 
}

numeric_int_t x26254(struct AGGRecord_Q3GRPRecord* x146, struct AGGRecord_Q3GRPRecord* x147) {
  double* x148 = x146->aggs;
  double x149 = x148[0];
  double* x150 = x147->aggs;
  double x151 = x150[0];
  boolean_t x152 = x149<(x151);
  /* VAR */ numeric_int_t ite21520 = 0;
  if(x152) {
    ite21520 = 1;
  } else {
    
    boolean_t x21522 = x149>(x151);
    /* VAR */ numeric_int_t ite21524 = 0;
    if(x21522) {
      ite21524 = -1;
    } else {
      
      struct Q3GRPRecord* x21526 = x146->key;
      numeric_int_t x21527 = x21526->O_ORDERDATE;
      struct Q3GRPRecord* x21528 = x147->key;
      numeric_int_t x21529 = x21528->O_ORDERDATE;
      boolean_t x21530 = x21527<(x21529);
      /* VAR */ numeric_int_t ite21532 = 0;
      if(x21530) {
        ite21532 = -1;
      } else {
        
        boolean_t x21534 = x21527>(x21529);
        /* VAR */ numeric_int_t ite21536 = 0;
        if(x21534) {
          ite21536 = 1;
        } else {
          
          ite21536 = 0;
        };
        numeric_int_t x21535 = ite21536;
        ite21532 = x21535;
      };
      numeric_int_t x21531 = ite21532;
      ite21524 = x21531;
    };
    numeric_int_t x21523 = ite21524;
    ite21520 = x21523;
  };
  numeric_int_t x163 = ite21520;
  return x163; 
}

numeric_int_t x8370(void* x8364, void* x8365, void* x8366) {
  struct AGGRecord_Q3GRPRecord** x8367 = (struct AGGRecord_Q3GRPRecord**){x8366};
  struct AGGRecord_Q3GRPRecord* x8368 = (struct AGGRecord_Q3GRPRecord*){x8365};
  pointer_assign(x8367, x8368);
  return 1; 
}
