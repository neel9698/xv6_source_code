#include "types.h"
#include "stat.h"
#include "user.h"


int main(int n, char *chr[])
{
int p,m;
p=atoi(chr[1]);
m=p*1000/14;
printf(1,"wait for %d seconds\n",p);
sleep(m);
printf(1," so wait is over");
exit();
}
