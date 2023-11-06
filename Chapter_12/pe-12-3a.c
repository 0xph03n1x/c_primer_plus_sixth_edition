#include <stdio.h>

#include "pe12-3a.h"

void check_mode(int* pm) {
  if (*pm != METRIC && *pm != US) {
    printf("Invalid mode specified. Mode %d\n", *pm);
    printf("Using previous mode.\n");
    *pm = RECENT;
  }
}

void get_info(int mode, double* pd, double* pf) {
  if (mode == METRIC) {
    printf("Enter distance traveled in kilometer: ");
  } else {
    printf("Enter distance traveled in miles: ");
  }
  scanf("%lf", pd);
  if (mode == METRIC) {
    printf("Enter fuel consumed in liters: ");
  } else {
    printf("Enter fuel consumed in gallons: ");
  }
  scanf("%lf", pf);
}

void show_info(int mode, double distance, double fuel) {
  if (mode == METRIC) {
    printf("Fuel consumption is %.2lf per 100 km.\n", fuel * 100 / distance);
  } else {
    printf("Fueld consumption is %.1lf miles per gallon.\n", distance / fuel);
  }
}
