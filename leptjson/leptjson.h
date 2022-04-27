#pragma once

typedef enum {
  LEPT_NULL,
  LEPT_TRUE,
  LEPT_FALSE,
  LEPT_NUMBER,
} lept_type;

enum {
  LEPT_PARSE_OK = 0,
  LEPT_PARSE_EXPECT_VALUE,
  LEPT_PARSE_INVALID_VALUE,
  LEPT_PARSE_ROOT_NOT_SINGULAR,
  LEPT_PARSE_NUMBER_TOO_BIG
};

typedef struct {
  lept_type type;
  double n;
} lept_value;

typedef struct {
  const char* json;
} lept_context;

int lept_parse(lept_value* v, const char* json);

lept_type lept_get_type(const lept_value* v);

double lept_get_number(const lept_value* v);
