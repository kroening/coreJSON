// Source: source/core_json.c
// Function: skipSpace

#include <core_json.c>

// void skipSpace( const char * buf,
//                 size_t * start,
//                 size_t max )

int main()
{
  const char *buf;
  size_t start, max;
  __CPROVER_assume(__CPROVER_r_ok(buf, max));
  __CPROVER_assume(max > 0);
  skipSpace(buf, &start, max);
}
