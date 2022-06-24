// Source: source/core_json.c
// Function: skipDigits

#include <core_json.c>

// void skipDigits( const char * buf,
//                  size_t * start,
//                  size_t max )

int main()
{
  const char *buf;
  size_t start, max;
  int32_t *outValue;
  __CPROVER_assume(__CPROVER_r_ok(buf, max));
  __CPROVER_assume(max > 0);
  __CPROVER_assume(outValue == NULL || __CPROVER_w_ok(outValue));
  skipDigits(buf, &start, max, outValue);
}
