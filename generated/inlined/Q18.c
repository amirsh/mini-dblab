#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord;
struct AGGRecord_Int_ORDERSRecord;
struct LINEITEMRecord;
struct Q18GRPRecord;
struct ORDERSRecord;
struct AGGRecord_Int;
struct AGGRecord_Q18GRPRecord;
struct CUSTOMERRecord;
struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord {
  numeric_int_t key;
  double* aggs;
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  numeric_int_t O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  numeric_int_t O_SHIPPRIORITY;
  char* O_COMMENT;
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
};

struct AGGRecord_Int_ORDERSRecord {
  numeric_int_t key;
  double* aggs;
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

struct Q18GRPRecord {
  char* C_NAME;
  numeric_int_t C_CUSTKEY;
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_ORDERDATE;
  double O_TOTALPRICE;
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

struct AGGRecord_Int {
  numeric_int_t key;
  double* aggs;
};

struct AGGRecord_Q18GRPRecord {
  struct Q18GRPRecord* key;
  double* aggs;
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


numeric_int_t x27323(struct Q18GRPRecord* x7918);

boolean_t x27351(struct Q18GRPRecord* x7923, struct Q18GRPRecord* x7924);

numeric_int_t x27395(void* x6487);

numeric_int_t x27398(void* x6490, void* x6491);

numeric_int_t x27405(void* x6497);

numeric_int_t x27408(void* x6500, void* x6501);

numeric_int_t x27415(numeric_int_t x7951);

boolean_t x27417(numeric_int_t x7956, numeric_int_t x7957);

numeric_int_t x27471(struct AGGRecord_Q18GRPRecord* x150, struct AGGRecord_Q18GRPRecord* x151);

numeric_int_t x8350(void* x8344, void* x8345, void* x8346);

int main(int argc, char** argv) {
  FILE* x3433 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x3434 = 0;
  numeric_int_t x3435 = x3434;
  numeric_int_t* x3436 = &x3435;
  numeric_int_t x3437 = fscanf(x3433, "%d", x3436);
  pclose(x3433);
  struct LINEITEMRecord* x4717 = (struct LINEITEMRecord*)malloc(x3435 * sizeof(struct LINEITEMRecord));
  memset(x4717, 0, x3435 * sizeof(struct LINEITEMRecord));
  numeric_int_t x3441 = O_RDONLY;
  numeric_int_t x3442 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x3441);
  struct stat x3443 = (struct stat){0};
  /* VAR */ struct stat x3444 = x3443;
  struct stat x3445 = x3444;
  struct stat* x3446 = &x3445;
  numeric_int_t x3447 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x3446);
  size_t x3448 = x3446->st_size;
  numeric_int_t x3449 = PROT_READ;
  numeric_int_t x3450 = MAP_PRIVATE;
  char* x3451 = mmap(NULL, x3448, x3449, x3450, x3442, 0);
  /* VAR */ char* x3452 = x3451;
  char* x3 = x3452;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x3435);
    /* VAR */ boolean_t ite22635 = 0;
    if(x6) {
      char x26210 = *x3;
      boolean_t x26211 = x26210!=('\0');
      ite22635 = x26211;
    } else {
      
      ite22635 = 0;
    };
    boolean_t x21012 = ite22635;
    if (!(x21012)) break; 
    
    /* VAR */ numeric_int_t x3460 = 0;
    numeric_int_t x3461 = x3460;
    numeric_int_t* x3462 = &x3461;
    char* x3463 = strntoi_unchecked(x3, x3462);
    x3 = x3463;
    /* VAR */ numeric_int_t x3465 = 0;
    numeric_int_t x3466 = x3465;
    numeric_int_t* x3467 = &x3466;
    char* x3468 = strntoi_unchecked(x3, x3467);
    x3 = x3468;
    /* VAR */ numeric_int_t x3470 = 0;
    numeric_int_t x3471 = x3470;
    numeric_int_t* x3472 = &x3471;
    char* x3473 = strntoi_unchecked(x3, x3472);
    x3 = x3473;
    /* VAR */ numeric_int_t x3475 = 0;
    numeric_int_t x3476 = x3475;
    numeric_int_t* x3477 = &x3476;
    char* x3478 = strntoi_unchecked(x3, x3477);
    x3 = x3478;
    /* VAR */ double x3480 = 0.0;
    double x3481 = x3480;
    double* x3482 = &x3481;
    char* x3483 = strntod_unchecked(x3, x3482);
    x3 = x3483;
    /* VAR */ double x3485 = 0.0;
    double x3486 = x3485;
    double* x3487 = &x3486;
    char* x3488 = strntod_unchecked(x3, x3487);
    x3 = x3488;
    /* VAR */ double x3490 = 0.0;
    double x3491 = x3490;
    double* x3492 = &x3491;
    char* x3493 = strntod_unchecked(x3, x3492);
    x3 = x3493;
    /* VAR */ double x3495 = 0.0;
    double x3496 = x3495;
    double* x3497 = &x3496;
    char* x3498 = strntod_unchecked(x3, x3497);
    x3 = x3498;
    char x3500 = *x3;
    /* VAR */ char x3501 = x3500;
    x3 += 1;
    x3 += 1;
    char x3504 = x3501;
    char x3505 = *x3;
    /* VAR */ char x3506 = x3505;
    x3 += 1;
    x3 += 1;
    char x3509 = x3506;
    /* VAR */ numeric_int_t x3510 = 0;
    numeric_int_t x3511 = x3510;
    numeric_int_t* x3512 = &x3511;
    char* x3513 = strntoi_unchecked(x3, x3512);
    x3 = x3513;
    /* VAR */ numeric_int_t x3515 = 0;
    numeric_int_t x3516 = x3515;
    numeric_int_t* x3517 = &x3516;
    char* x3518 = strntoi_unchecked(x3, x3517);
    x3 = x3518;
    /* VAR */ numeric_int_t x3520 = 0;
    numeric_int_t x3521 = x3520;
    numeric_int_t* x3522 = &x3521;
    char* x3523 = strntoi_unchecked(x3, x3522);
    x3 = x3523;
    numeric_int_t x3525 = x3511*(10000);
    numeric_int_t x3526 = x3516*(100);
    numeric_int_t x3527 = x3525+(x3526);
    numeric_int_t x3528 = x3527+(x3521);
    /* VAR */ numeric_int_t x3529 = 0;
    numeric_int_t x3530 = x3529;
    numeric_int_t* x3531 = &x3530;
    char* x3532 = strntoi_unchecked(x3, x3531);
    x3 = x3532;
    /* VAR */ numeric_int_t x3534 = 0;
    numeric_int_t x3535 = x3534;
    numeric_int_t* x3536 = &x3535;
    char* x3537 = strntoi_unchecked(x3, x3536);
    x3 = x3537;
    /* VAR */ numeric_int_t x3539 = 0;
    numeric_int_t x3540 = x3539;
    numeric_int_t* x3541 = &x3540;
    char* x3542 = strntoi_unchecked(x3, x3541);
    x3 = x3542;
    numeric_int_t x3544 = x3530*(10000);
    numeric_int_t x3545 = x3535*(100);
    numeric_int_t x3546 = x3544+(x3545);
    numeric_int_t x3547 = x3546+(x3540);
    /* VAR */ numeric_int_t x3548 = 0;
    numeric_int_t x3549 = x3548;
    numeric_int_t* x3550 = &x3549;
    char* x3551 = strntoi_unchecked(x3, x3550);
    x3 = x3551;
    /* VAR */ numeric_int_t x3553 = 0;
    numeric_int_t x3554 = x3553;
    numeric_int_t* x3555 = &x3554;
    char* x3556 = strntoi_unchecked(x3, x3555);
    x3 = x3556;
    /* VAR */ numeric_int_t x3558 = 0;
    numeric_int_t x3559 = x3558;
    numeric_int_t* x3560 = &x3559;
    char* x3561 = strntoi_unchecked(x3, x3560);
    x3 = x3561;
    numeric_int_t x3563 = x3549*(10000);
    numeric_int_t x3564 = x3554*(100);
    numeric_int_t x3565 = x3563+(x3564);
    numeric_int_t x3566 = x3565+(x3559);
    /* VAR */ char* x3567 = x3;
    while(1) {
      
      char x3568 = *x3;
      boolean_t x3569 = x3568!=('|');
      /* VAR */ boolean_t ite22755 = 0;
      if(x3569) {
        char x26329 = *x3;
        boolean_t x26330 = x26329!=('\n');
        ite22755 = x26330;
      } else {
        
        ite22755 = 0;
      };
      boolean_t x21125 = ite22755;
      if (!(x21125)) break; 
      
      x3 += 1;
    };
    char* x3575 = x3567;
    numeric_int_t x3576 = x3 - x3575;
    numeric_int_t x3577 = x3576+(1);
    char* x4856 = (char*)malloc(x3577 * sizeof(char));
    memset(x4856, 0, x3577 * sizeof(char));
    char* x3580 = x3567;
    char* x3581 = strncpy(x4856, x3580, x3576);
    x3 += 1;
    /* VAR */ char* x3583 = x3;
    while(1) {
      
      char x3584 = *x3;
      boolean_t x3585 = x3584!=('|');
      /* VAR */ boolean_t ite22776 = 0;
      if(x3585) {
        char x26349 = *x3;
        boolean_t x26350 = x26349!=('\n');
        ite22776 = x26350;
      } else {
        
        ite22776 = 0;
      };
      boolean_t x21139 = ite22776;
      if (!(x21139)) break; 
      
      x3 += 1;
    };
    char* x3591 = x3583;
    numeric_int_t x3592 = x3 - x3591;
    numeric_int_t x3593 = x3592+(1);
    char* x4872 = (char*)malloc(x3593 * sizeof(char));
    memset(x4872, 0, x3593 * sizeof(char));
    char* x3596 = x3583;
    char* x3597 = strncpy(x4872, x3596, x3592);
    x3 += 1;
    /* VAR */ char* x3599 = x3;
    while(1) {
      
      char x3600 = *x3;
      boolean_t x3601 = x3600!=('|');
      /* VAR */ boolean_t ite22797 = 0;
      if(x3601) {
        char x26369 = *x3;
        boolean_t x26370 = x26369!=('\n');
        ite22797 = x26370;
      } else {
        
        ite22797 = 0;
      };
      boolean_t x21153 = ite22797;
      if (!(x21153)) break; 
      
      x3 += 1;
    };
    char* x3607 = x3599;
    numeric_int_t x3608 = x3 - x3607;
    numeric_int_t x3609 = x3608+(1);
    char* x4888 = (char*)malloc(x3609 * sizeof(char));
    memset(x4888, 0, x3609 * sizeof(char));
    char* x3612 = x3599;
    char* x3613 = strncpy(x4888, x3612, x3608);
    x3 += 1;
    struct LINEITEMRecord* x5541 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x5541, 0, 1 * sizeof(struct LINEITEMRecord));
    x5541->L_ORDERKEY = x3461; x5541->L_PARTKEY = x3466; x5541->L_SUPPKEY = x3471; x5541->L_LINENUMBER = x3476; x5541->L_QUANTITY = x3481; x5541->L_EXTENDEDPRICE = x3486; x5541->L_DISCOUNT = x3491; x5541->L_TAX = x3496; x5541->L_RETURNFLAG = x3504; x5541->L_LINESTATUS = x3509; x5541->L_SHIPDATE = x3528; x5541->L_COMMITDATE = x3547; x5541->L_RECEIPTDATE = x3566; x5541->L_SHIPINSTRUCT = x4856; x5541->L_SHIPMODE = x4872; x5541->L_COMMENT = x4888;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x4895 = *x5541;
    *(x4717 + x26) = x4895;
    struct LINEITEMRecord* x4897 = &(x4717[x26]);
    x5541 = x4897;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x3622 = x3452;
  munmap(x3622, x3448);
  FILE* x3623 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", "r");
  /* VAR */ numeric_int_t x3624 = 0;
  numeric_int_t x3625 = x3624;
  numeric_int_t* x3626 = &x3625;
  numeric_int_t x3627 = fscanf(x3623, "%d", x3626);
  pclose(x3623);
  struct ORDERSRecord* x4910 = (struct ORDERSRecord*)malloc(x3625 * sizeof(struct ORDERSRecord));
  memset(x4910, 0, x3625 * sizeof(struct ORDERSRecord));
  numeric_int_t x3631 = O_RDONLY;
  numeric_int_t x3632 = open("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x3631);
  /* VAR */ struct stat x3633 = x3443;
  struct stat x3634 = x3633;
  struct stat* x3635 = &x3634;
  numeric_int_t x3636 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/orders.tbl", x3635);
  size_t x3637 = x3635->st_size;
  numeric_int_t x3638 = PROT_READ;
  numeric_int_t x3639 = MAP_PRIVATE;
  char* x3640 = mmap(NULL, x3637, x3638, x3639, x3632, 0);
  /* VAR */ char* x3641 = x3640;
  char* x35 = x3641;
  /* VAR */ numeric_int_t x36 = 0;
  while(1) {
    
    numeric_int_t x37 = x36;
    boolean_t x38 = x37<(x3625);
    /* VAR */ boolean_t ite22850 = 0;
    if(x38) {
      char x26421 = *x35;
      boolean_t x26422 = x26421!=('\0');
      ite22850 = x26422;
    } else {
      
      ite22850 = 0;
    };
    boolean_t x21199 = ite22850;
    if (!(x21199)) break; 
    
    /* VAR */ numeric_int_t x3649 = 0;
    numeric_int_t x3650 = x3649;
    numeric_int_t* x3651 = &x3650;
    char* x3652 = strntoi_unchecked(x35, x3651);
    x35 = x3652;
    /* VAR */ numeric_int_t x3654 = 0;
    numeric_int_t x3655 = x3654;
    numeric_int_t* x3656 = &x3655;
    char* x3657 = strntoi_unchecked(x35, x3656);
    x35 = x3657;
    char x3659 = *x35;
    /* VAR */ char x3660 = x3659;
    x35 += 1;
    x35 += 1;
    char x3663 = x3660;
    /* VAR */ double x3664 = 0.0;
    double x3665 = x3664;
    double* x3666 = &x3665;
    char* x3667 = strntod_unchecked(x35, x3666);
    x35 = x3667;
    /* VAR */ numeric_int_t x3669 = 0;
    numeric_int_t x3670 = x3669;
    numeric_int_t* x3671 = &x3670;
    char* x3672 = strntoi_unchecked(x35, x3671);
    x35 = x3672;
    /* VAR */ numeric_int_t x3674 = 0;
    numeric_int_t x3675 = x3674;
    numeric_int_t* x3676 = &x3675;
    char* x3677 = strntoi_unchecked(x35, x3676);
    x35 = x3677;
    /* VAR */ numeric_int_t x3679 = 0;
    numeric_int_t x3680 = x3679;
    numeric_int_t* x3681 = &x3680;
    char* x3682 = strntoi_unchecked(x35, x3681);
    x35 = x3682;
    numeric_int_t x3684 = x3670*(10000);
    numeric_int_t x3685 = x3675*(100);
    numeric_int_t x3686 = x3684+(x3685);
    numeric_int_t x3687 = x3686+(x3680);
    /* VAR */ char* x3688 = x35;
    while(1) {
      
      char x3689 = *x35;
      boolean_t x3690 = x3689!=('|');
      /* VAR */ boolean_t ite22902 = 0;
      if(x3690) {
        char x26472 = *x35;
        boolean_t x26473 = x26472!=('\n');
        ite22902 = x26473;
      } else {
        
        ite22902 = 0;
      };
      boolean_t x21244 = ite22902;
      if (!(x21244)) break; 
      
      x35 += 1;
    };
    char* x3696 = x3688;
    numeric_int_t x3697 = x35 - x3696;
    numeric_int_t x3698 = x3697+(1);
    char* x4980 = (char*)malloc(x3698 * sizeof(char));
    memset(x4980, 0, x3698 * sizeof(char));
    char* x3701 = x3688;
    char* x3702 = strncpy(x4980, x3701, x3697);
    x35 += 1;
    /* VAR */ char* x3704 = x35;
    while(1) {
      
      char x3705 = *x35;
      boolean_t x3706 = x3705!=('|');
      /* VAR */ boolean_t ite22923 = 0;
      if(x3706) {
        char x26492 = *x35;
        boolean_t x26493 = x26492!=('\n');
        ite22923 = x26493;
      } else {
        
        ite22923 = 0;
      };
      boolean_t x21258 = ite22923;
      if (!(x21258)) break; 
      
      x35 += 1;
    };
    char* x3712 = x3704;
    numeric_int_t x3713 = x35 - x3712;
    numeric_int_t x3714 = x3713+(1);
    char* x4996 = (char*)malloc(x3714 * sizeof(char));
    memset(x4996, 0, x3714 * sizeof(char));
    char* x3717 = x3704;
    char* x3718 = strncpy(x4996, x3717, x3713);
    x35 += 1;
    /* VAR */ numeric_int_t x3720 = 0;
    numeric_int_t x3721 = x3720;
    numeric_int_t* x3722 = &x3721;
    char* x3723 = strntoi_unchecked(x35, x3722);
    x35 = x3723;
    /* VAR */ char* x3725 = x35;
    while(1) {
      
      char x3726 = *x35;
      boolean_t x3727 = x3726!=('|');
      /* VAR */ boolean_t ite22949 = 0;
      if(x3727) {
        char x26517 = *x35;
        boolean_t x26518 = x26517!=('\n');
        ite22949 = x26518;
      } else {
        
        ite22949 = 0;
      };
      boolean_t x21277 = ite22949;
      if (!(x21277)) break; 
      
      x35 += 1;
    };
    char* x3733 = x3725;
    numeric_int_t x3734 = x35 - x3733;
    numeric_int_t x3735 = x3734+(1);
    char* x5017 = (char*)malloc(x3735 * sizeof(char));
    memset(x5017, 0, x3735 * sizeof(char));
    char* x3738 = x3725;
    char* x3739 = strncpy(x5017, x3738, x3734);
    x35 += 1;
    struct ORDERSRecord* x5672 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x5672, 0, 1 * sizeof(struct ORDERSRecord));
    x5672->O_ORDERKEY = x3650; x5672->O_CUSTKEY = x3655; x5672->O_ORDERSTATUS = x3663; x5672->O_TOTALPRICE = x3665; x5672->O_ORDERDATE = x3687; x5672->O_ORDERPRIORITY = x4980; x5672->O_CLERK = x4996; x5672->O_SHIPPRIORITY = x3721; x5672->O_COMMENT = x5017;
    numeric_int_t x51 = x36;
    struct ORDERSRecord x5024 = *x5672;
    *(x4910 + x51) = x5024;
    struct ORDERSRecord* x5026 = &(x4910[x51]);
    x5672 = x5026;
    numeric_int_t x53 = x36;
    numeric_int_t x54 = x53+(1);
    x36 = x54;
  };
  char* x3748 = x3641;
  munmap(x3748, x3637);
  FILE* x3749 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", "r");
  /* VAR */ numeric_int_t x3750 = 0;
  numeric_int_t x3751 = x3750;
  numeric_int_t* x3752 = &x3751;
  numeric_int_t x3753 = fscanf(x3749, "%d", x3752);
  pclose(x3749);
  struct CUSTOMERRecord* x5039 = (struct CUSTOMERRecord*)malloc(x3751 * sizeof(struct CUSTOMERRecord));
  memset(x5039, 0, x3751 * sizeof(struct CUSTOMERRecord));
  numeric_int_t x3757 = O_RDONLY;
  numeric_int_t x3758 = open("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x3757);
  /* VAR */ struct stat x3759 = x3443;
  struct stat x3760 = x3759;
  struct stat* x3761 = &x3760;
  numeric_int_t x3762 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/customer.tbl", x3761);
  size_t x3763 = x3761->st_size;
  numeric_int_t x3764 = PROT_READ;
  numeric_int_t x3765 = MAP_PRIVATE;
  char* x3766 = mmap(NULL, x3763, x3764, x3765, x3758, 0);
  /* VAR */ char* x3767 = x3766;
  char* x60 = x3767;
  /* VAR */ numeric_int_t x61 = 0;
  while(1) {
    
    numeric_int_t x62 = x61;
    boolean_t x63 = x62<(x3751);
    /* VAR */ boolean_t ite23002 = 0;
    if(x63) {
      char x26569 = *x60;
      boolean_t x26570 = x26569!=('\0');
      ite23002 = x26570;
    } else {
      
      ite23002 = 0;
    };
    boolean_t x21323 = ite23002;
    if (!(x21323)) break; 
    
    /* VAR */ numeric_int_t x3775 = 0;
    numeric_int_t x3776 = x3775;
    numeric_int_t* x3777 = &x3776;
    char* x3778 = strntoi_unchecked(x60, x3777);
    x60 = x3778;
    /* VAR */ char* x3780 = x60;
    while(1) {
      
      char x3781 = *x60;
      boolean_t x3782 = x3781!=('|');
      /* VAR */ boolean_t ite23020 = 0;
      if(x3782) {
        char x26586 = *x60;
        boolean_t x26587 = x26586!=('\n');
        ite23020 = x26587;
      } else {
        
        ite23020 = 0;
      };
      boolean_t x21334 = ite23020;
      if (!(x21334)) break; 
      
      x60 += 1;
    };
    char* x3788 = x3780;
    numeric_int_t x3789 = x60 - x3788;
    numeric_int_t x3790 = x3789+(1);
    char* x5075 = (char*)malloc(x3790 * sizeof(char));
    memset(x5075, 0, x3790 * sizeof(char));
    char* x3793 = x3780;
    char* x3794 = strncpy(x5075, x3793, x3789);
    x60 += 1;
    /* VAR */ char* x3796 = x60;
    while(1) {
      
      char x3797 = *x60;
      boolean_t x3798 = x3797!=('|');
      /* VAR */ boolean_t ite23041 = 0;
      if(x3798) {
        char x26606 = *x60;
        boolean_t x26607 = x26606!=('\n');
        ite23041 = x26607;
      } else {
        
        ite23041 = 0;
      };
      boolean_t x21348 = ite23041;
      if (!(x21348)) break; 
      
      x60 += 1;
    };
    char* x3804 = x3796;
    numeric_int_t x3805 = x60 - x3804;
    numeric_int_t x3806 = x3805+(1);
    char* x5091 = (char*)malloc(x3806 * sizeof(char));
    memset(x5091, 0, x3806 * sizeof(char));
    char* x3809 = x3796;
    char* x3810 = strncpy(x5091, x3809, x3805);
    x60 += 1;
    /* VAR */ numeric_int_t x3812 = 0;
    numeric_int_t x3813 = x3812;
    numeric_int_t* x3814 = &x3813;
    char* x3815 = strntoi_unchecked(x60, x3814);
    x60 = x3815;
    /* VAR */ char* x3817 = x60;
    while(1) {
      
      char x3818 = *x60;
      boolean_t x3819 = x3818!=('|');
      /* VAR */ boolean_t ite23067 = 0;
      if(x3819) {
        char x26631 = *x60;
        boolean_t x26632 = x26631!=('\n');
        ite23067 = x26632;
      } else {
        
        ite23067 = 0;
      };
      boolean_t x21367 = ite23067;
      if (!(x21367)) break; 
      
      x60 += 1;
    };
    char* x3825 = x3817;
    numeric_int_t x3826 = x60 - x3825;
    numeric_int_t x3827 = x3826+(1);
    char* x5112 = (char*)malloc(x3827 * sizeof(char));
    memset(x5112, 0, x3827 * sizeof(char));
    char* x3830 = x3817;
    char* x3831 = strncpy(x5112, x3830, x3826);
    x60 += 1;
    /* VAR */ double x3833 = 0.0;
    double x3834 = x3833;
    double* x3835 = &x3834;
    char* x3836 = strntod_unchecked(x60, x3835);
    x60 = x3836;
    /* VAR */ char* x3838 = x60;
    while(1) {
      
      char x3839 = *x60;
      boolean_t x3840 = x3839!=('|');
      /* VAR */ boolean_t ite23093 = 0;
      if(x3840) {
        char x26656 = *x60;
        boolean_t x26657 = x26656!=('\n');
        ite23093 = x26657;
      } else {
        
        ite23093 = 0;
      };
      boolean_t x21386 = ite23093;
      if (!(x21386)) break; 
      
      x60 += 1;
    };
    char* x3846 = x3838;
    numeric_int_t x3847 = x60 - x3846;
    numeric_int_t x3848 = x3847+(1);
    char* x5133 = (char*)malloc(x3848 * sizeof(char));
    memset(x5133, 0, x3848 * sizeof(char));
    char* x3851 = x3838;
    char* x3852 = strncpy(x5133, x3851, x3847);
    x60 += 1;
    /* VAR */ char* x3854 = x60;
    while(1) {
      
      char x3855 = *x60;
      boolean_t x3856 = x3855!=('|');
      /* VAR */ boolean_t ite23114 = 0;
      if(x3856) {
        char x26676 = *x60;
        boolean_t x26677 = x26676!=('\n');
        ite23114 = x26677;
      } else {
        
        ite23114 = 0;
      };
      boolean_t x21400 = ite23114;
      if (!(x21400)) break; 
      
      x60 += 1;
    };
    char* x3862 = x3854;
    numeric_int_t x3863 = x60 - x3862;
    numeric_int_t x3864 = x3863+(1);
    char* x5149 = (char*)malloc(x3864 * sizeof(char));
    memset(x5149, 0, x3864 * sizeof(char));
    char* x3867 = x3854;
    char* x3868 = strncpy(x5149, x3867, x3863);
    x60 += 1;
    struct CUSTOMERRecord* x5806 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x5806, 0, 1 * sizeof(struct CUSTOMERRecord));
    x5806->C_CUSTKEY = x3776; x5806->C_NAME = x5075; x5806->C_ADDRESS = x5091; x5806->C_NATIONKEY = x3813; x5806->C_PHONE = x5112; x5806->C_ACCTBAL = x3834; x5806->C_MKTSEGMENT = x5133; x5806->C_COMMENT = x5149;
    numeric_int_t x75 = x61;
    struct CUSTOMERRecord x5156 = *x5806;
    *(x5039 + x75) = x5156;
    struct CUSTOMERRecord* x5158 = &(x5039[x75]);
    x5806 = x5158;
    numeric_int_t x77 = x61;
    numeric_int_t x78 = x77+(1);
    x61 = x78;
  };
  char* x3877 = x3767;
  munmap(x3877, x3763);
  numeric_int_t x83 = 0;
  for(; x83 < 1 ; x83 += 1) {
    
    GHashTable* x27394 = g_hash_table_new(x27323, x27351);
    void*** x27402 = (void***){x27395};
    numeric_int_t* x27403 = (numeric_int_t*){x27398};
    GHashTable* x27404 = g_hash_table_new(x27402, x27403);
    void*** x27412 = (void***){x27405};
    numeric_int_t* x27413 = (numeric_int_t*){x27408};
    GHashTable* x27414 = g_hash_table_new(x27412, x27413);
    GHashTable* x27421 = g_hash_table_new(x27415, x27417);
    struct timeval x27422 = (struct timeval){0};
    /* VAR */ struct timeval x27423 = x27422;
    struct timeval x27424 = x27423;
    /* VAR */ struct timeval x27425 = x27422;
    struct timeval x27426 = x27425;
    /* VAR */ struct timeval x27427 = x27422;
    struct timeval x27428 = x27427;
    struct timeval* x27429 = &x27426;
    gettimeofday(x27429, NULL);
    /* VAR */ numeric_int_t x27431 = 0;
    /* VAR */ numeric_int_t x27432 = 0;
    /* VAR */ numeric_int_t x27433 = 0;
    numeric_int_t* x27508 = &(x27471);
    GTree* x27509 = g_tree_new(x27508);
    /* VAR */ boolean_t x27510 = 0;
    /* VAR */ numeric_int_t x27511 = 0;
    while(1) {
      
      numeric_int_t x27513 = x27433;
      boolean_t x27514 = x27513<(x3435);
      if (!(x27514)) break; 
      
      numeric_int_t x1655 = x27433;
      struct LINEITEMRecord* x188 = &(x4717[x1655]);
      numeric_int_t x190 = x188->L_ORDERKEY;
      void* x8939 = g_hash_table_lookup(x27421, x190);
      boolean_t x8020 = x8939==(NULL);
      /* VAR */ struct AGGRecord_Int* ite22199 = 0;
      if(x8020) {
        double* x22200 = (double*)malloc(1 * sizeof(double));
        memset(x22200, 0, 1 * sizeof(double));
        struct AGGRecord_Int* x22201 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
        memset(x22201, 0, 1 * sizeof(struct AGGRecord_Int));
        x22201->key = x190; x22201->aggs = x22200;
        g_hash_table_insert(x27421, x190, x22201);
        ite22199 = x22201;
      } else {
        
        ite22199 = x8939;
      };
      struct AGGRecord_Int* x8030 = ite22199;
      double* x195 = x8030->aggs;
      double x209 = x195[0];
      double x210 = x188->L_QUANTITY;
      double x211 = x209+(x210);
      *x195 = x211;
      numeric_int_t x1684 = x27433;
      numeric_int_t x218 = x1684+(1);
      x27433 = x218;
    };
    GList* x27567 = g_hash_table_get_keys(x27421);
    /* VAR */ GList* x27568 = x27567;
    numeric_int_t x27569 = g_hash_table_size(x27421);
    numeric_int_t x19191 = 0;
    for(; x19191 < x27569 ; x19191 += 1) {
      
      GList* x19192 = x27568;
      void* x19193 = g_list_nth_data(x19192, 0);
      GList* x19194 = g_list_next(x19192);
      x27568 = x19194;
      void* x19196 = g_hash_table_lookup(x27421, x19193);
      struct AGGRecord_Int* x19198 = (struct AGGRecord_Int*){x19196};
      double* x19199 = x19198->aggs;
      double x19200 = x19199[0];
      boolean_t x19201 = x19200>(300.0);
      if(x19201) {
        numeric_int_t x228 = x19198->key;
        void* x6569 = (void*){x228};
        void* x6570 = (void*){x19198};
        void* x6571 = g_hash_table_lookup(x27414, x6569);
        GList** x6572 = (GList**){x6571};
        GList** x6573 = NULL;
        boolean_t x6574 = x6572==(x6573);
        /* VAR */ GList** ite22302 = 0;
        if(x6574) {
          GList** x22303 = malloc(8);
          GList* x22304 = NULL;
          pointer_assign(x22303, x22304);
          ite22302 = x22303;
        } else {
          
          ite22302 = x6572;
        };
        GList** x6578 = ite22302;
        GList* x6579 = *(x6578);
        GList* x6580 = g_list_prepend(x6579, x6570);
        pointer_assign(x6578, x6580);
        void* x6582 = (void*){x6578};
        g_hash_table_insert(x27414, x6569, x6582);
      };
    };
    while(1) {
      
      numeric_int_t x27638 = x27431;
      boolean_t x27639 = x27638<(x3625);
      if (!(x27639)) break; 
      
      numeric_int_t x1704 = x27431;
      struct ORDERSRecord* x240 = &(x4910[x1704]);
      numeric_int_t x242 = x240->O_ORDERKEY;
      void* x6592 = (void*){x242};
      void* x6593 = g_hash_table_lookup(x27414, x6592);
      GList** x6594 = (GList**){x6593};
      boolean_t x12662 = x6594!=(NULL);
      if(x12662) {
        GList* x8145 = *(x6594);
        /* VAR */ GList* x8146 = x8145;
        while(1) {
          
          GList* x8147 = x8146;
          GList* x8148 = NULL;
          boolean_t x8149 = x8147!=(x8148);
          if (!(x8149)) break; 
          
          GList* x8150 = x8146;
          void* x8151 = g_list_nth_data(x8150, 0);
          struct AGGRecord_Int* x8152 = (struct AGGRecord_Int*){x8151};
          GList* x8153 = x8146;
          GList* x8154 = g_list_next(x8153);
          x8146 = x8154;
          double* x8156 = x8152->aggs;
          numeric_int_t x8157 = x8152->key;
          boolean_t x8158 = x242==(x8157);
          if(x8158) {
            numeric_int_t x734 = x240->O_CUSTKEY;
            char x735 = x240->O_ORDERSTATUS;
            double x736 = x240->O_TOTALPRICE;
            numeric_int_t x737 = x240->O_ORDERDATE;
            char* x738 = x240->O_ORDERPRIORITY;
            char* x739 = x240->O_CLERK;
            numeric_int_t x740 = x240->O_SHIPPRIORITY;
            char* x741 = x240->O_COMMENT;
            struct AGGRecord_Int_ORDERSRecord* x5914 = (struct AGGRecord_Int_ORDERSRecord*)malloc(1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
            memset(x5914, 0, 1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
            x5914->key = x8157; x5914->aggs = x8156; x5914->O_ORDERKEY = x242; x5914->O_CUSTKEY = x734; x5914->O_ORDERSTATUS = x735; x5914->O_TOTALPRICE = x736; x5914->O_ORDERDATE = x737; x5914->O_ORDERPRIORITY = x738; x5914->O_CLERK = x739; x5914->O_SHIPPRIORITY = x740; x5914->O_COMMENT = x741;
            numeric_int_t x265 = x5914->O_CUSTKEY;
            void* x6617 = (void*){x265};
            void* x6618 = (void*){x5914};
            void* x6619 = g_hash_table_lookup(x27404, x6617);
            GList** x6620 = (GList**){x6619};
            GList** x6621 = NULL;
            boolean_t x6622 = x6620==(x6621);
            /* VAR */ GList** ite22398 = 0;
            if(x6622) {
              GList** x22399 = malloc(8);
              GList* x22400 = NULL;
              pointer_assign(x22399, x22400);
              ite22398 = x22399;
            } else {
              
              ite22398 = x6620;
            };
            GList** x6626 = ite22398;
            GList* x6627 = *(x6626);
            GList* x6628 = g_list_prepend(x6627, x6618);
            pointer_assign(x6626, x6628);
            void* x6630 = (void*){x6626};
            g_hash_table_insert(x27404, x6617, x6630);
          };
        };
      };
      numeric_int_t x1750 = x27431;
      numeric_int_t x273 = x1750+(1);
      x27431 = x273;
    };
    while(1) {
      
      numeric_int_t x27738 = x27432;
      boolean_t x27739 = x27738<(x3751);
      if (!(x27739)) break; 
      
      numeric_int_t x1760 = x27432;
      struct CUSTOMERRecord* x283 = &(x5039[x1760]);
      numeric_int_t x285 = x283->C_CUSTKEY;
      void* x6643 = (void*){x285};
      void* x6644 = g_hash_table_lookup(x27404, x6643);
      GList** x6645 = (GList**){x6644};
      boolean_t x12753 = x6645!=(NULL);
      if(x12753) {
        GList* x8256 = *(x6645);
        /* VAR */ GList* x8257 = x8256;
        while(1) {
          
          GList* x8258 = x8257;
          GList* x8259 = NULL;
          boolean_t x8260 = x8258!=(x8259);
          if (!(x8260)) break; 
          
          GList* x8261 = x8257;
          void* x8262 = g_list_nth_data(x8261, 0);
          struct AGGRecord_Int_ORDERSRecord* x8263 = (struct AGGRecord_Int_ORDERSRecord*){x8262};
          GList* x8264 = x8257;
          GList* x8265 = g_list_next(x8264);
          x8257 = x8265;
          numeric_int_t x8267 = x8263->O_CUSTKEY;
          boolean_t x8268 = x8267==(x285);
          if(x8268) {
            numeric_int_t x833 = x8263->key;
            double* x834 = x8263->aggs;
            numeric_int_t x835 = x8263->O_ORDERKEY;
            char x836 = x8263->O_ORDERSTATUS;
            double x837 = x8263->O_TOTALPRICE;
            numeric_int_t x838 = x8263->O_ORDERDATE;
            char* x839 = x8263->O_ORDERPRIORITY;
            char* x840 = x8263->O_CLERK;
            numeric_int_t x841 = x8263->O_SHIPPRIORITY;
            char* x842 = x8263->O_COMMENT;
            char* x843 = x283->C_NAME;
            char* x844 = x283->C_ADDRESS;
            numeric_int_t x845 = x283->C_NATIONKEY;
            char* x846 = x283->C_PHONE;
            double x847 = x283->C_ACCTBAL;
            char* x848 = x283->C_MKTSEGMENT;
            char* x849 = x283->C_COMMENT;
            struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord* x5956 = (struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord*)malloc(1 * sizeof(struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord));
            memset(x5956, 0, 1 * sizeof(struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord));
            x5956->key = x833; x5956->aggs = x834; x5956->O_ORDERKEY = x835; x5956->O_CUSTKEY = x8267; x5956->O_ORDERSTATUS = x836; x5956->O_TOTALPRICE = x837; x5956->O_ORDERDATE = x838; x5956->O_ORDERPRIORITY = x839; x5956->O_CLERK = x840; x5956->O_SHIPPRIORITY = x841; x5956->O_COMMENT = x842; x5956->C_CUSTKEY = x285; x5956->C_NAME = x843; x5956->C_ADDRESS = x844; x5956->C_NATIONKEY = x845; x5956->C_PHONE = x846; x5956->C_ACCTBAL = x847; x5956->C_MKTSEGMENT = x848; x5956->C_COMMENT = x849;
            char* x340 = x5956->C_NAME;
            numeric_int_t x341 = x5956->C_CUSTKEY;
            numeric_int_t x342 = x5956->O_ORDERKEY;
            numeric_int_t x343 = x5956->O_ORDERDATE;
            double x344 = x5956->O_TOTALPRICE;
            struct Q18GRPRecord* x5964 = (struct Q18GRPRecord*)malloc(1 * sizeof(struct Q18GRPRecord));
            memset(x5964, 0, 1 * sizeof(struct Q18GRPRecord));
            x5964->C_NAME = x340; x5964->C_CUSTKEY = x341; x5964->O_ORDERKEY = x342; x5964->O_ORDERDATE = x343; x5964->O_TOTALPRICE = x344;
            void* x8298 = g_hash_table_lookup(x27394, x5964);
            boolean_t x8239 = x8298==(NULL);
            /* VAR */ struct AGGRecord_Q18GRPRecord* ite22522 = 0;
            if(x8239) {
              double* x22523 = (double*)malloc(1 * sizeof(double));
              memset(x22523, 0, 1 * sizeof(double));
              struct AGGRecord_Q18GRPRecord* x22524 = (struct AGGRecord_Q18GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q18GRPRecord));
              memset(x22524, 0, 1 * sizeof(struct AGGRecord_Q18GRPRecord));
              x22524->key = x5964; x22524->aggs = x22523;
              g_hash_table_insert(x27394, x5964, x22524);
              ite22522 = x22524;
            } else {
              
              ite22522 = x8298;
            };
            struct AGGRecord_Q18GRPRecord* x8249 = ite22522;
            double* x350 = x8249->aggs;
            double x364 = x350[0];
            double* x365 = x5956->aggs;
            double x366 = x365[0];
            double x367 = x364+(x366);
            *x350 = x367;
          };
        };
      };
      numeric_int_t x1886 = x27432;
      numeric_int_t x378 = x1886+(1);
      x27432 = x378;
    };
    GList* x27869 = g_hash_table_get_keys(x27394);
    /* VAR */ GList* x27870 = x27869;
    numeric_int_t x27871 = g_hash_table_size(x27394);
    numeric_int_t x19447 = 0;
    for(; x19447 < x27871 ; x19447 += 1) {
      
      GList* x19448 = x27870;
      void* x19449 = g_list_nth_data(x19448, 0);
      GList* x19450 = g_list_next(x19448);
      x27870 = x19450;
      void* x19452 = g_hash_table_lookup(x27394, x19449);
      struct AGGRecord_Q18GRPRecord* x19454 = (struct AGGRecord_Q18GRPRecord*){x19452};
      g_tree_insert(x27509, x19454, x19454);
    };
    while(1) {
      
      boolean_t x1895 = x27510;
      boolean_t x389 = !(x1895);
      /* VAR */ boolean_t ite24351 = 0;
      if(x389) {
        numeric_int_t x27896 = g_tree_nnodes(x27509);
        boolean_t x27897 = x27896!=(0);
        ite24351 = x27897;
      } else {
        
        ite24351 = 0;
      };
      boolean_t x22571 = ite24351;
      if (!(x22571)) break; 
      
      void* x8343 = NULL;
      void** x8351 = &(x8343);
      g_tree_foreach(x27509, x8350, x8351);
      struct AGGRecord_Q18GRPRecord* x8353 = (struct AGGRecord_Q18GRPRecord*){x8343};
      numeric_int_t x8354 = g_tree_remove(x27509, x8353);
      numeric_int_t x1903 = x27511;
      boolean_t x399 = x1903>=(100);
      if(x399) {
        x27510 = 1;
      } else {
        
        double* x401 = x8353->aggs;
        struct Q18GRPRecord* x402 = x8353->key;
        char* x403 = x402->C_NAME;
        numeric_int_t x405 = x402->C_CUSTKEY;
        numeric_int_t x406 = x402->O_ORDERKEY;
        numeric_int_t x407 = x402->O_ORDERDATE;
        char* x408 = ltoa(x407);
        double x409 = x402->O_TOTALPRICE;
        double x410 = x401[0];
        printf("%s|%d|%d|%s|%.2f|%.2f\n", x403, x405, x406, x408, x409, x410);
        numeric_int_t x1918 = x27511;
        numeric_int_t x413 = x1918+(1);
        x27511 = x413;
      };
    };
    numeric_int_t x27931 = x27511;
    printf("(%d rows)\n", x27931);
    struct timeval* x27933 = &x27428;
    gettimeofday(x27933, NULL);
    struct timeval* x27935 = &x27424;
    struct timeval* x27936 = &x27428;
    struct timeval* x27937 = &x27426;
    long x27938 = timeval_subtract(x27935, x27936, x27937);
    printf("Generated code run in %ld milliseconds.\n", x27938);
  };
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x27323(struct Q18GRPRecord* x7918) {
  char* x14296 = x7918->C_NAME;
  numeric_int_t x17114 = strlen(x14296);
  /* VAR */ numeric_int_t x15232 = 0;
  /* VAR */ numeric_int_t x15233 = 0;
  while(1) {
    
    numeric_int_t x15234 = x15232;
    boolean_t x15235 = x15234<(x17114);
    if (!(x15235)) break; 
    
    numeric_int_t x15236 = x15233;
    numeric_int_t x15237 = x15232;
    char* x17122 = pointer_add(x14296, x15237);
    char x17123 = *(x17122);
    numeric_int_t x15240 = x15236+(x17123);
    x15233 = x15240;
    numeric_int_t x15242 = x15232;
    numeric_int_t x15243 = x15242+(1);
    x15232 = x15243;
  };
  numeric_int_t x15246 = x15233;
  numeric_int_t x14298 = x7918->C_CUSTKEY;
  numeric_int_t x14300 = x7918->O_ORDERKEY;
  numeric_int_t x14302 = x7918->O_ORDERDATE;
  double x14304 = x7918->O_TOTALPRICE;
  numeric_int_t x15251 = (numeric_int_t){x14304};
  numeric_int_t x14306 = x15246+(x14298);
  numeric_int_t x14307 = x14306+(x14300);
  numeric_int_t x14308 = x14307+(x14302);
  numeric_int_t x14309 = x14308+(x15251);
  return x14309; 
}

boolean_t x27351(struct Q18GRPRecord* x7923, struct Q18GRPRecord* x7924) {
  char* x14313 = x7923->C_NAME;
  char* x14314 = x7924->C_NAME;
  boolean_t x15261 = strcmp(x14313, x14314);
  boolean_t x15262 = !(x15261);
  numeric_int_t x14316 = x7923->C_CUSTKEY;
  numeric_int_t x14317 = x7924->C_CUSTKEY;
  boolean_t x14318 = x14316==(x14317);
  numeric_int_t x14319 = x7923->O_ORDERKEY;
  numeric_int_t x14320 = x7924->O_ORDERKEY;
  boolean_t x14321 = x14319==(x14320);
  numeric_int_t x14322 = x7923->O_ORDERDATE;
  numeric_int_t x14323 = x7924->O_ORDERDATE;
  boolean_t x14324 = x14322==(x14323);
  double x14325 = x7923->O_TOTALPRICE;
  double x14326 = x7924->O_TOTALPRICE;
  boolean_t x14327 = x14325==(x14326);
  /* VAR */ boolean_t ite23820 = 0;
  if(x15262) {
    ite23820 = x14318;
  } else {
    
    ite23820 = 0;
  };
  boolean_t x22066 = ite23820;
  /* VAR */ boolean_t ite23827 = 0;
  if(x22066) {
    ite23827 = x14321;
  } else {
    
    ite23827 = 0;
  };
  boolean_t x22068 = ite23827;
  /* VAR */ boolean_t ite23834 = 0;
  if(x22068) {
    ite23834 = x14324;
  } else {
    
    ite23834 = 0;
  };
  boolean_t x22070 = ite23834;
  /* VAR */ boolean_t ite23841 = 0;
  if(x22070) {
    ite23841 = x14327;
  } else {
    
    ite23841 = 0;
  };
  boolean_t x22072 = ite23841;
  return x22072; 
}

numeric_int_t x27395(void* x6487) {
  numeric_int_t x6488 = g_direct_hash(x6487);
  return x6488; 
}

numeric_int_t x27398(void* x6490, void* x6491) {
  numeric_int_t x6492 = g_direct_equal(x6490, x6491);
  return x6492; 
}

numeric_int_t x27405(void* x6497) {
  numeric_int_t x6498 = g_direct_hash(x6497);
  return x6498; 
}

numeric_int_t x27408(void* x6500, void* x6501) {
  numeric_int_t x6502 = g_direct_equal(x6500, x6501);
  return x6502; 
}

numeric_int_t x27415(numeric_int_t x7951) {
  return x7951; 
}

boolean_t x27417(numeric_int_t x7956, numeric_int_t x7957) {
  boolean_t x7958 = x7956==(x7957);
  return x7958; 
}

numeric_int_t x27471(struct AGGRecord_Q18GRPRecord* x150, struct AGGRecord_Q18GRPRecord* x151) {
  struct Q18GRPRecord* x152 = x150->key;
  double x153 = x152->O_TOTALPRICE;
  struct Q18GRPRecord* x154 = x151->key;
  double x155 = x154->O_TOTALPRICE;
  boolean_t x156 = x153<(x155);
  /* VAR */ numeric_int_t ite22159 = 0;
  if(x156) {
    ite22159 = 1;
  } else {
    
    boolean_t x22161 = x153>(x155);
    /* VAR */ numeric_int_t ite22163 = 0;
    if(x22161) {
      ite22163 = -1;
    } else {
      
      numeric_int_t x22165 = x152->O_ORDERDATE;
      numeric_int_t x22166 = x154->O_ORDERDATE;
      boolean_t x22167 = x22165<(x22166);
      /* VAR */ numeric_int_t ite22169 = 0;
      if(x22167) {
        ite22169 = -1;
      } else {
        
        boolean_t x22171 = x22165>(x22166);
        /* VAR */ numeric_int_t ite22173 = 0;
        if(x22171) {
          ite22173 = 1;
        } else {
          
          ite22173 = 0;
        };
        numeric_int_t x22172 = ite22173;
        ite22169 = x22172;
      };
      numeric_int_t x22168 = ite22169;
      ite22163 = x22168;
    };
    numeric_int_t x22162 = ite22163;
    ite22159 = x22162;
  };
  numeric_int_t x165 = ite22159;
  return x165; 
}

numeric_int_t x8350(void* x8344, void* x8345, void* x8346) {
  struct AGGRecord_Q18GRPRecord** x8347 = (struct AGGRecord_Q18GRPRecord**){x8346};
  struct AGGRecord_Q18GRPRecord* x8348 = (struct AGGRecord_Q18GRPRecord*){x8345};
  pointer_assign(x8347, x8348);
  return 1; 
}
