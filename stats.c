/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */

#include <stdio.h>
#include <math.h>
// #include <check.h>

#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{

  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */

  int find_median(unsigned char *ptr, int len);

  int find_mean(unsigned char *ptr, int len);
  int find_maximum(unsigned char *ptr, int len);
  int find_minimum(unsigned char *ptr, int len);
  void sort_array(unsigned char *ptr, int len);

  void print_statistics(unsigned char *ptr, int len);
  void print_array(unsigned char *ptr, int len);

  // unsigned char *ptr = test;
  int result = find_median(test, SIZE);

  printf("median: %d\n\n", result);
}

/* Add other Implementation File Code Here */

int find_median(unsigned char *test, int len)
{
  int median;
  // find mid point
  if (len % 2 == 0)
  {
    printf("need to work out mean of the middle 2 numbers!\n");
    // median = round(len / 2);
    int a = test[len / 2];
    int b = test[(len / 2) + 1];
    printf("\n%d\n\n", a);
    printf("\n%d\n\n", b);
    median = (a + b) / 2;
  }
  else
  {
    printf("need to work out what the middle number is!\n");
    // / 2 and round down, + 1.
    median = test[len / 2 + 1];
  }

  return median;
};

int find_mean(unsigned char *test, int len)
{
  int i;
  for (i = 0; i < len; i++)
  {
    printf(":: %d::\n", test[i]);
  }
  return 10;
};

// START_TEST("some test")
// {
//   ck_assert_int_eq(money_amount(m), 5);
// }
// END_TEST