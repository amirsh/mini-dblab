#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dblab_clib.h" 


struct AGGRecord_String;
struct LINEITEMRecord;
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


int main(int argc, char** argv) {
  FILE* x1293 = popen("wc -l /Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x1294 = 0;
  numeric_int_t x1295 = x1294;
  numeric_int_t* x1296 = &x1295;
  numeric_int_t x1297 = fscanf(x1293, "%d", x1296);
  pclose(x1293);
  struct LINEITEMRecord* x1845 = (struct LINEITEMRecord*)malloc(x1295 * sizeof(struct LINEITEMRecord));
  memset(x1845, 0, x1295 * sizeof(struct LINEITEMRecord));
  numeric_int_t x1301 = O_RDONLY;
  numeric_int_t x1302 = open("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x1301);
  struct stat x1303 = (struct stat){0};
  /* VAR */ struct stat x1304 = x1303;
  struct stat x1305 = x1304;
  struct stat* x1306 = &x1305;
  numeric_int_t x1307 = stat("/Users/amirsh/Dropbox/sf0.1/sf1/lineitem.tbl", x1306);
  size_t x1308 = x1306->st_size;
  numeric_int_t x1309 = PROT_READ;
  numeric_int_t x1310 = MAP_PRIVATE;
  char* x1311 = mmap(NULL, x1308, x1309, x1310, x1302, 0);
  /* VAR */ char* x1312 = x1311;
  char* x3 = x1312;
  /* VAR */ numeric_int_t x4 = 0;
  while(1) {
    
    numeric_int_t x5 = x4;
    boolean_t x6 = x5<(x1295);
    /* VAR */ boolean_t ite5589 = 0;
    if(x6) {
      char x7568 = *x3;
      boolean_t x7569 = x7568!=('\0');
      ite5589 = x7569;
    } else {
      
      ite5589 = 0;
    };
    boolean_t x5271 = ite5589;
    if (!(x5271)) break; 
    
    /* VAR */ numeric_int_t x1320 = 0;
    numeric_int_t x1321 = x1320;
    numeric_int_t* x1322 = &x1321;
    char* x1323 = strntoi_unchecked(x3, x1322);
    x3 = x1323;
    /* VAR */ numeric_int_t x1325 = 0;
    numeric_int_t x1326 = x1325;
    numeric_int_t* x1327 = &x1326;
    char* x1328 = strntoi_unchecked(x3, x1327);
    x3 = x1328;
    /* VAR */ numeric_int_t x1330 = 0;
    numeric_int_t x1331 = x1330;
    numeric_int_t* x1332 = &x1331;
    char* x1333 = strntoi_unchecked(x3, x1332);
    x3 = x1333;
    /* VAR */ numeric_int_t x1335 = 0;
    numeric_int_t x1336 = x1335;
    numeric_int_t* x1337 = &x1336;
    char* x1338 = strntoi_unchecked(x3, x1337);
    x3 = x1338;
    /* VAR */ double x1340 = 0.0;
    double x1341 = x1340;
    double* x1342 = &x1341;
    char* x1343 = strntod_unchecked(x3, x1342);
    x3 = x1343;
    /* VAR */ double x1345 = 0.0;
    double x1346 = x1345;
    double* x1347 = &x1346;
    char* x1348 = strntod_unchecked(x3, x1347);
    x3 = x1348;
    /* VAR */ double x1350 = 0.0;
    double x1351 = x1350;
    double* x1352 = &x1351;
    char* x1353 = strntod_unchecked(x3, x1352);
    x3 = x1353;
    /* VAR */ double x1355 = 0.0;
    double x1356 = x1355;
    double* x1357 = &x1356;
    char* x1358 = strntod_unchecked(x3, x1357);
    x3 = x1358;
    char x1360 = *x3;
    /* VAR */ char x1361 = x1360;
    x3 += 1;
    x3 += 1;
    char x1364 = x1361;
    char x1365 = *x3;
    /* VAR */ char x1366 = x1365;
    x3 += 1;
    x3 += 1;
    char x1369 = x1366;
    /* VAR */ numeric_int_t x1370 = 0;
    numeric_int_t x1371 = x1370;
    numeric_int_t* x1372 = &x1371;
    char* x1373 = strntoi_unchecked(x3, x1372);
    x3 = x1373;
    /* VAR */ numeric_int_t x1375 = 0;
    numeric_int_t x1376 = x1375;
    numeric_int_t* x1377 = &x1376;
    char* x1378 = strntoi_unchecked(x3, x1377);
    x3 = x1378;
    /* VAR */ numeric_int_t x1380 = 0;
    numeric_int_t x1381 = x1380;
    numeric_int_t* x1382 = &x1381;
    char* x1383 = strntoi_unchecked(x3, x1382);
    x3 = x1383;
    numeric_int_t x1385 = x1371*(10000);
    numeric_int_t x1386 = x1376*(100);
    numeric_int_t x1387 = x1385+(x1386);
    numeric_int_t x1388 = x1387+(x1381);
    /* VAR */ numeric_int_t x1389 = 0;
    numeric_int_t x1390 = x1389;
    numeric_int_t* x1391 = &x1390;
    char* x1392 = strntoi_unchecked(x3, x1391);
    x3 = x1392;
    /* VAR */ numeric_int_t x1394 = 0;
    numeric_int_t x1395 = x1394;
    numeric_int_t* x1396 = &x1395;
    char* x1397 = strntoi_unchecked(x3, x1396);
    x3 = x1397;
    /* VAR */ numeric_int_t x1399 = 0;
    numeric_int_t x1400 = x1399;
    numeric_int_t* x1401 = &x1400;
    char* x1402 = strntoi_unchecked(x3, x1401);
    x3 = x1402;
    numeric_int_t x1404 = x1390*(10000);
    numeric_int_t x1405 = x1395*(100);
    numeric_int_t x1406 = x1404+(x1405);
    numeric_int_t x1407 = x1406+(x1400);
    /* VAR */ numeric_int_t x1408 = 0;
    numeric_int_t x1409 = x1408;
    numeric_int_t* x1410 = &x1409;
    char* x1411 = strntoi_unchecked(x3, x1410);
    x3 = x1411;
    /* VAR */ numeric_int_t x1413 = 0;
    numeric_int_t x1414 = x1413;
    numeric_int_t* x1415 = &x1414;
    char* x1416 = strntoi_unchecked(x3, x1415);
    x3 = x1416;
    /* VAR */ numeric_int_t x1418 = 0;
    numeric_int_t x1419 = x1418;
    numeric_int_t* x1420 = &x1419;
    char* x1421 = strntoi_unchecked(x3, x1420);
    x3 = x1421;
    numeric_int_t x1423 = x1409*(10000);
    numeric_int_t x1424 = x1414*(100);
    numeric_int_t x1425 = x1423+(x1424);
    numeric_int_t x1426 = x1425+(x1419);
    /* VAR */ char* x1427 = x3;
    while(1) {
      
      char x1428 = *x3;
      boolean_t x1429 = x1428!=('|');
      /* VAR */ boolean_t ite5709 = 0;
      if(x1429) {
        char x7687 = *x3;
        boolean_t x7688 = x7687!=('\n');
        ite5709 = x7688;
      } else {
        
        ite5709 = 0;
      };
      boolean_t x5384 = ite5709;
      if (!(x5384)) break; 
      
      x3 += 1;
    };
    char* x1435 = x1427;
    numeric_int_t x1436 = x3 - x1435;
    numeric_int_t x1437 = x1436+(1);
    char* x1984 = (char*)malloc(x1437 * sizeof(char));
    memset(x1984, 0, x1437 * sizeof(char));
    char* x1440 = x1427;
    char* x1441 = strncpy(x1984, x1440, x1436);
    x3 += 1;
    /* VAR */ char* x1443 = x3;
    while(1) {
      
      char x1444 = *x3;
      boolean_t x1445 = x1444!=('|');
      /* VAR */ boolean_t ite5730 = 0;
      if(x1445) {
        char x7707 = *x3;
        boolean_t x7708 = x7707!=('\n');
        ite5730 = x7708;
      } else {
        
        ite5730 = 0;
      };
      boolean_t x5398 = ite5730;
      if (!(x5398)) break; 
      
      x3 += 1;
    };
    char* x1451 = x1443;
    numeric_int_t x1452 = x3 - x1451;
    numeric_int_t x1453 = x1452+(1);
    char* x2000 = (char*)malloc(x1453 * sizeof(char));
    memset(x2000, 0, x1453 * sizeof(char));
    char* x1456 = x1443;
    char* x1457 = strncpy(x2000, x1456, x1452);
    x3 += 1;
    /* VAR */ char* x1459 = x3;
    while(1) {
      
      char x1460 = *x3;
      boolean_t x1461 = x1460!=('|');
      /* VAR */ boolean_t ite5751 = 0;
      if(x1461) {
        char x7727 = *x3;
        boolean_t x7728 = x7727!=('\n');
        ite5751 = x7728;
      } else {
        
        ite5751 = 0;
      };
      boolean_t x5412 = ite5751;
      if (!(x5412)) break; 
      
      x3 += 1;
    };
    char* x1467 = x1459;
    numeric_int_t x1468 = x3 - x1467;
    numeric_int_t x1469 = x1468+(1);
    char* x2016 = (char*)malloc(x1469 * sizeof(char));
    memset(x2016, 0, x1469 * sizeof(char));
    char* x1472 = x1459;
    char* x1473 = strncpy(x2016, x1472, x1468);
    x3 += 1;
    struct LINEITEMRecord* x2297 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x2297, 0, 1 * sizeof(struct LINEITEMRecord));
    x2297->L_ORDERKEY = x1321; x2297->L_PARTKEY = x1326; x2297->L_SUPPKEY = x1331; x2297->L_LINENUMBER = x1336; x2297->L_QUANTITY = x1341; x2297->L_EXTENDEDPRICE = x1346; x2297->L_DISCOUNT = x1351; x2297->L_TAX = x1356; x2297->L_RETURNFLAG = x1364; x2297->L_LINESTATUS = x1369; x2297->L_SHIPDATE = x1388; x2297->L_COMMITDATE = x1407; x2297->L_RECEIPTDATE = x1426; x2297->L_SHIPINSTRUCT = x1984; x2297->L_SHIPMODE = x2000; x2297->L_COMMENT = x2016;
    numeric_int_t x26 = x4;
    struct LINEITEMRecord x2023 = *x2297;
    *(x1845 + x26) = x2023;
    struct LINEITEMRecord* x2025 = &(x1845[x26]);
    x2297 = x2025;
    numeric_int_t x28 = x4;
    numeric_int_t x29 = x28+(1);
    x4 = x29;
  };
  char* x1482 = x1312;
  munmap(x1482, x1308);
  numeric_int_t x34 = 0;
  for(; x34 < 1 ; x34 += 1) {
    
    double* x7849 = (double*)malloc(1 * sizeof(double));
    memset(x7849, 0, 1 * sizeof(double));
    struct AGGRecord_String* x7850 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x7850, 0, 1 * sizeof(struct AGGRecord_String));
    x7850->key = "Total"; x7850->aggs = x7849;
    struct timeval x7853 = (struct timeval){0};
    /* VAR */ struct timeval x7854 = x7853;
    struct timeval x7855 = x7854;
    /* VAR */ struct timeval x7856 = x7853;
    struct timeval x7857 = x7856;
    /* VAR */ struct timeval x7858 = x7853;
    struct timeval x7859 = x7858;
    struct timeval* x7860 = &x7857;
    gettimeofday(x7860, NULL);
    /* VAR */ numeric_int_t x7862 = 0;
    /* VAR */ boolean_t x7863 = 0;
    /* VAR */ numeric_int_t x7864 = 0;
    while(1) {
      
      numeric_int_t x7866 = x7862;
      boolean_t x7867 = x7866<(x1295);
      if (!(x7867)) break; 
      
      numeric_int_t x560 = x7862;
      struct LINEITEMRecord* x78 = &(x1845[x560]);
      numeric_int_t x80 = x78->L_SHIPDATE;
      boolean_t x81 = x80>=(19960101);
      /* VAR */ boolean_t ite5882 = 0;
      if(x81) {
        boolean_t x7874 = x80<(19970101);
        /* VAR */ boolean_t x7875 = 0;
        if(x7874) {
          double x7877 = x78->L_DISCOUNT;
          boolean_t x7878 = x7877>=(0.08);
          /* VAR */ boolean_t x7879 = 0;
          if(x7878) {
            boolean_t x7881 = x7877<=(0.1);
            /* VAR */ boolean_t x7882 = 0;
            if(x7881) {
              double x7884 = x78->L_QUANTITY;
              boolean_t x7885 = x7884<(24.0);
              x7882 = x7885;
            } else {
              
              x7882 = 0;
            };
            boolean_t x7889 = x7882;
            x7879 = x7889;
          } else {
            
            x7879 = 0;
          };
          boolean_t x7893 = x7879;
          x7875 = x7893;
        } else {
          
          x7875 = 0;
        };
        boolean_t x7897 = x7875;
        ite5882 = x7897;
      } else {
        
        ite5882 = 0;
      };
      boolean_t x5524 = ite5882;
      if(x5524) {
        double* x97 = x7850->aggs;
        double x111 = x97[0];
        double x112 = x78->L_EXTENDEDPRICE;
        double x113 = x78->L_DISCOUNT;
        double x114 = x112*(x113);
        double x115 = x114+(x111);
        *x97 = x115;
      };
      numeric_int_t x604 = x7862;
      numeric_int_t x123 = x604+(1);
      x7862 = x123;
    };
    if(0) {
      x7863 = 1;
    } else {
      
      double* x134 = x7850->aggs;
      double x135 = x134[0];
      printf("%.4f\n", x135);
      numeric_int_t x619 = x7864;
      numeric_int_t x138 = x619+(1);
      x7864 = x138;
    };
    numeric_int_t x7932 = x7864;
    printf("(%d rows)\n", x7932);
    struct timeval* x7934 = &x7859;
    gettimeofday(x7934, NULL);
    struct timeval* x7936 = &x7855;
    struct timeval* x7937 = &x7859;
    struct timeval* x7938 = &x7857;
    long x7939 = timeval_subtract(x7936, x7937, x7938);
    printf("Generated code run in %ld milliseconds.\n", x7939);
  };
}
/* ----------- FUNCTIONS ----------- */