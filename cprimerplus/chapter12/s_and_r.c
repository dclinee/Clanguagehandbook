// s_and_r.c -- the file includes rand1() and srand1()
static unsigned long int next = 1; // seed

int rand1(void)
{
  next = next * 1103515245 + 12345;
  return (unsigned int) (next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
  next = seed;
}
