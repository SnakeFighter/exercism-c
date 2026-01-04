#include "grains.h"
#include <stdio.h>

uint64_t squaremem[63];

static uint64_t
doTotals (void)
{
  uint64_t totaliser = 1;
  squaremem[1] = 1;
  for (int i = 2; i < 65; i++)
    {
      squaremem[i] = squaremem[i - 1] * 2;
      totaliser += squaremem[i];
      /* printf ("SQ:"); */
    }
  return (totaliser);
}

uint64_t
total ()
{
  printf ("SQ:");
  uint64_t totaliser = doTotals ();
  printf ("SQ: %d %lu\n", 64, squaremem[64]);
  /* printf ("Totaliser here: %lu", squaremem[4]); */
  return (totaliser);
}

long unsigned int
square (uint8_t req)
{
  if (req > 64)
    return (0);
  doTotals ();
  //   printf ("Returning square: %lu for req: %d", squaremem[req], req);
  //   printf ("Returning square: %lu for 70", squaremem[67]);

  return (squaremem[req]);
}