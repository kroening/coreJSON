// Source: source/core_json.c
// Function: skipUTF8MultiByte

#include <core_json.c>

// void skipUTF8MultiByte( const char * buf,
//                         size_t * start,
//                         size_t max )

int main()
{
  const char *buf;
  size_t start, max;
  __CPROVER_assume(__CPROVER_r_ok(buf, max));
  __CPROVER_assume(max > 0);
  __CPROVER_assume(start < max);
  __CPROVER_assume(!isascii_(buf[start]));
  skipUTF8MultiByte(buf, &start, max);
}
