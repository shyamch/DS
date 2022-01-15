#include "stdafx.h"
#include "common.h"
#include "Sortings.h"

void SwapItems(int *pA, int *pB)
{
  int Temp = *pA;
  *pA = *pB;
  *pB = Temp;
}

bool BubbleSort(int *pArr, int iNums)
{
  if (pArr == NULL) return false;
  for (int i = 0; i < (iNums - 1); i++) {
    for (int j = 0; j < (iNums - i) - 1; j++) {
      if (pArr[j] > pArr[j + 1])
        SwapItems(&pArr[j], &pArr[j + 1]);
    }
  }
  return true;
}

bool SelectionSort(int *pArr, int iNums)
{
  if (pArr == NULL) return false;
  int iMin = 0;
  for (int i = 0; i < (iNums ); i++) {
    iMin = i;
    for (int j = i + 1; j < (iNums) ; j++) {
      if (pArr[iMin] > pArr[j])
        iMin = j;        
    }
    if (pArr[iMin] != pArr[i])
      SwapItems(&pArr[iMin], &pArr[i]);
  }
  return true;
}

bool CallMergeSort(int *pArr, int iSize)
{
  MergeSort(pArr, iSize);  
  return true;
}

void MergeSort(int *pArr, int iSize)
{
  if (iSize < 2) return;
  int mid = iSize / 2;

}

void PrintArray(int *pArr, int iNums)
{
  for (int i = 0; i < iNums; i++)
    printf("%d  ", pArr[i]);
  printf("%\n");
}

void TestBubblesort()
{
  int iArr[] = {26, 25, 24, 22, 20, 19, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 4, 3, 1};
  if (BubbleSort(iArr,21))
    PrintArray(iArr, 21);

  if (SelectionSort(iArr,21))
    PrintArray(iArr, 21);
}
