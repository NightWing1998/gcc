// { dg-do compile }
// { dg-options "-O -std=c++17 -gdwarf-5 -dA" }
// For -gdwarf-6 hopefully DW_LANG_C_plus_plus_17
// DW_LANG_C_plus_plus_14 = 0x0021
// { dg-final { scan-assembler "0x21\[^\n\r]* DW_AT_language" } } */

int version;
