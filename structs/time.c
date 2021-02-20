
struct time
{
  int h,m,s;
};

void print(struct time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

struct time zerotime()
{
   struct time t = {0,0,0};

   return t;
}

void main()
{
  struct time t1 = {10,20,30}, t2;

     print(t1);
     t2 = zerotime();
     printf("\n");
     print(t2);

}
