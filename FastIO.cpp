// IO only for benchmarking purposes
#include <cstdio>
#include "IO.h"

const int MAXV = 1000000;
const int MAXE = 6000000;
const int QUERYBUFFER = 6000000;

int E, V;

void datain() {
  int u, v, s;
  IO::read(V);
  IO::read(E);
  for(int i = 0; i < E; ++i) {
    IO::read(u);
    IO::read(v);
    s += u + v;
  }
  printf("checksum: %d\n", s);
}

int main() {
  datain();
  return 0;
}

