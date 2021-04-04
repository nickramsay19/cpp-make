#include "../include/funcs.h"
#include "funcs_dep.cpp"

int func(int a, int b) {
    return a * b + special_add(a, b);
}