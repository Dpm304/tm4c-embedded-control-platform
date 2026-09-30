#include <stdio.h>

typedef struct{
    int x;
    int y;
} Position;

typedef struct{
    Position position;
    int speed;
} RobotState;

int main(void){
    RobotState robot = {
        {10, 20},
        50
    };

    printf("Robot position: (%d, %d)\n",
        robot.position.x,
        robot.position.y);

    printf("Robot speed: %d\n", robot.speed);

    return 0;
}