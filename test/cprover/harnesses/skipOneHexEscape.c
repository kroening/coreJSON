// Source: source/core_json.c
// Function: skipOneHexEscape

#include <core_json.c>

// bool skipOneHexEscape( const char * buf,
//                        size_t * start,
//                        size_t max,
//                        uint16_t * outValue )


int main()
{
  const char *buf;
  size_t start, max;
  uint16_t outValue;
  __CPROVER_assume(__CPROVER_r_ok(buf, max));
  __CPROVER_assume(max > 0);
  skipOneHexEscape(buf, &start, max, &outValue);
}
