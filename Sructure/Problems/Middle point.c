#include<stdio.h>

struct Point
{
    float x;
    float y;

};
struct Point middlePoint(struct Point p1, struct Point p2)
{
    struct Point ans;
    ans.x = (p1.x + p2.x)/2;
    ans.y = (p1.y + p2.y)/2;

    return ans;
}
int main()
{
    struct Point p1 = {1,1};
    struct Point p2 = {4,5};

    struct Point p3;
    p3 = middlePoint(p1,p2);

    printf("%0.2f , %0.2f",p3.x,p3.y);



    return 0;
}
