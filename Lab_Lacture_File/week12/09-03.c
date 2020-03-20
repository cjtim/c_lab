#include <stdio.h>
#include <math.h>
struct Point
{
    double x;
    double y;
};

int main(){
    int n;
    scanf("%d", &n);
    struct Point points[100];
    int display_i = 1;
    for(int i = 0; i < n; i++,display_i++){
        printf("P%d.X: ", display_i);
        scanf("%lf", points[i].x);
        printf("P%d.Y: ", display_i);
        scanf("%lf", points[i].y);
    }
    for(int j = 0; j < n; j++){
        if(j != n-1){
            printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is ", j, points[j].x, points[j].y, j+1, points[j+1].x, points[j+1].y);
            printf("%lf\n", sqrtf(powl(points[j].x - points[j+1].x, 2) + powl(points[j].y - points[j+1].y, 2) ) );
        }
    }
    printf("Length:");
}