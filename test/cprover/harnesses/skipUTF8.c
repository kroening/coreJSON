// Source: source/core_json.c
// Function: skipUTF8

#include <core_json.c>

// void skipUTF8( const char * buf,
//                size_t * start,
//                size_t max )

int main()
{
  const char *buf;
  size_t start, max;
  __CPROVER_assume(__CPROVER_r_ok(buf, max));
  __CPROVER_assume(max > 0);
  skipUTF8(buf, &start, max);
}
