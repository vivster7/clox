#if !defined(clox_value_h)
#define clox_value_h

#include "common.h"

typedef double Value;

typedef struct Value {
  int count;
  int capacity;
  Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);
void printValue(Value value);



#endif // clox_value_h
