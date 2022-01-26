#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct
{
    int x, y;
} Point;

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

typedef struct
{
    Point pt;
    int r1;
} Circle;

bool is_in_circle(Circle circle, Point pt) {
    return distance(circle.pt, pt) <= circle.r1;
}

int main() {
    Circle circles[3] = {
        {1, 2, 3},
        {10, 10, 2},
        {100, 100, 9}
    };

    Point pt;

    scanf("%d %d", &pt.x, &pt.y);

    for (int i = 0; i < 3; i++) {
        if (is_in_circle(circles[i], pt)) {
            printf("p1 belongs to circle: x: %d y: %d r: %d\n", circles[i].pt.x, circles[i].pt.y, circles[i].r1);
        }
    }

    return 0;
}
