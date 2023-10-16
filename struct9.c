// printing the sum of vectors ahah
#include <stdio.h>
#include<string.h>
struct vector
{int x;
int y;
    /* data */
};
void total(struct vector v1,struct vector v2,struct vector  sum );
int main (){
    struct vector v1={2,5};
    struct vector v2={3,5};
    struct vector sum={0};
    total(v1,v2,sum);
    return 0;
}
void total(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("%d\n",sum.x);
    printf("%d",sum.y);

}
