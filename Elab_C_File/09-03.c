#include <stdio.h>
#include <math.h>
struct Point
{
    double x;
    double y;
};

int main(){
    int n;
    printf("Number of Points: ");
    scanf("%d", &n);
    struct Point points[100];
    int display_i = 1;
    for(int i = 0; i < n; i++,display_i++){
        printf("P%d.X: ", display_i);
        scanf("%lf", &points[i].x);
        printf("P%d.Y: ", display_i);
        scanf("%lf", &points[i].y);
    }
    printf("Length:\n");
    for(int j = 0; j < n; j++){
        if(j != n-1){  
                printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is ", j+1, points[j].x, points[j].y, j+2, points[j+1].x, points[j+1].y);
                printf("%.2lf\n", sqrtf(powf(points[j].x - points[j+1].x, 2) + powf(points[j].y - points[j+1].y, 2) ) );
        }
        
    }
    
}