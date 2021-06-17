#include "map.h"
#include <stdlib.h>
#include <stdint.h>

short* smap(short* arr, short (*func)(short)) {
  unsigned j = 0;
  while(arr[++j]);
  
  short *result = malloc(sizeof(short) * j);
  unsigned i = 0;
  do {
    result[i++] = func(*arr);
  } while (*++arr);
  return result;
}

int* imap(int* arr, int (*func)(int)) {
  unsigned j = 0;
  while(arr[++j]);
  
  int *result = malloc(sizeof(int) * j);
  unsigned i = 0;
  do {
    result[i++] = func(*arr);
  } while (*++arr);
  return result;
}

long* lmap(long* arr, long (*func)(long)) {
  unsigned j = 0;
  while(arr[++j]);
  
  long *result = malloc(sizeof(long) * j);
  unsigned i = 0;
  do {
    result[i++] = func(*arr);
  } while (*++arr);
  return result;
}

float* fmap(float* arr, float (*func)(float)) {
  unsigned j = 0;
  while(arr[++j]);
 
  float *result = malloc(sizeof(float) * j);
  unsigned i = 0;
  do {
    result[i++] = func(*arr);
  } while (*++arr);
  return result;
}

double* dmap(double* arr, double (*func)(double)) {
  unsigned j = 0;
  while(arr[++j]);

  double *result = malloc(sizeof(double) * j);
  unsigned i = 0;
  do {
    result[i++] = func(*arr);
  } while (*++arr);
  return result;
}

char* cmap(char* arr, char (*func)(char)) {
  unsigned j = 0;
  while(arr[++j]);

  char *result = malloc(sizeof(char) * j);
  unsigned i = 0;
  do {
    result[i++] = func(*arr);
  } while (*++arr);
  return result;
}
