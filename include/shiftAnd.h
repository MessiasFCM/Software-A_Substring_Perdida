#ifndef SHIFTAND_H
#define SHIFTAND_H

#include <stdint.h>
#include <stdio.h>

void shift_and_with_indices(const char *text, const char *pattern, int num_intervals, int intervals[][2], FILE *outputFile);

#endif