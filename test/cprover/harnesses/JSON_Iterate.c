// Source: source/core_json.c
// Function: JSON_Iterate

#include <core_json.c>

// JSONStatus_t JSON_Iterate( const char * buf,
//                            size_t max,
//                            size_t * start,
//                            size_t * next,
//                            JSONPair_t * outPair )

int main()
{
  const char *buf;
  size_t max, start, next;
  JSONPair_t outPair;

  JSON_Iterate(buf, max, &start, &next, &outPair);
}
