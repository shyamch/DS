#include "stdafx.h"
#include "common.h"

int BinarySearch(int *pArr, int iNums, int iItemToBeSearch)
{
  if (pArr == NULL) return -1;
  int start, end, mid;
  start = 0, end = iNums - 1;
  while (start <= end) {
    mid = (start + end) / 2;
    if (pArr[mid] == iItemToBeSearch) return mid;
    else if (iItemToBeSearch < pArr[mid])
      end = mid - 1;
    else 
      start = mid + 1;
  }
  return -1;
}

void TestBinarySearch()
{
  int iArr[] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 19, 20, 22, 24, 25, 26};
  if (BinarySearch(iArr,21, 22) > -1)
    printf("PASS");
  else
    printf("Fail");

  int iArr1[] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 19, 20, 22, 24, 25, 26};
  if (BinarySearch(iArr1,21, 0) > -1)
    printf("PASS");
  else
    printf("Fail");

  int iArr2[] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 19, 20, 22, 24, 25, 26};
  if (BinarySearch(iArr2,21, 11) > -1)
    printf("PASS");
  else
    printf("Fail");
}
