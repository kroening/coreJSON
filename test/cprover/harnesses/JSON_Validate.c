// Source: source/core_json.c
// Function: JSON_Validate

#include <core_json.c>

// JSONStatus_t JSON_Validate( const char * buf,
//                             size_t max )

int main()
{
  const char *buf;
  size_t max;
  __CPROVER_assume(__CPROVER_r_ok(buf, max));
  JSON_Validate(buf, max);
}
