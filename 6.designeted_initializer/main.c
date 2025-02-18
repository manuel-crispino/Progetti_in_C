#include <stdio.h>

struct point{int x,y;};
int main(){
struct point pts[5]={ 
    [0].x=1, [1].y=2 , [2].x=3 , [3].y=4,[3].x=4
};
for(int i = 0 ; i < 5 ; i++){
printf("x = %d  y= %d\n", pts[i].x, pts[i].y);
};
 int in = 55 < 53;
    printf("%d\n", in);
printf("ready\n");
    return 0;
}