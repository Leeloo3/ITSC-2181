// #include <stdio.h>

// int volume (struct box *c){
//     return c->side * c->side * c->side;
//     return 0;
// }

// struct box (){
//     *side = 5;
//     volume(side);
//     // scanf()
// }

#include <stdio.h>
#include <string.h>

// Define the box struct
struct box {
    int side;
    int position[3]; // x, y, z coordinates
    char color[20];  // Color of the box
};

// Function to calculate the volume of a box
int volume(struct box *b) {
    return b->side * b->side * b->side;
}

// Function to update the box with the greater volume
void updateBox(struct box *box1, struct box *box2) {
    int vol1 = volume(box1);
    int vol2 = volume(box2);
    
    // Check which box has the greater volume
    if (vol1 > vol2) {
        box1->position[0] = 0;
        box1->position[1] = 0;
        box1->position[2] = 0;
        strcpy(box1->color, "green");
    } else {
        box2->position[0] = 0;
        box2->position[1] = 0;
        box2->position[2] = 0;
        strcpy(box2->color, "green");
    }
}

int main() {
    struct box box1 = {3, {1, 1, 1}, "red"};
    struct box box2 = {4, {2, 2, 2}, "blue"};

    updateBox(&box1, &box2);

    printf("Box 1 - Position: (%d, %d, %d), Color: %s\n", box1.position[0], box1.position[1], box1.position[2], box1.color);
    printf("Box 2 - Position: (%d, %d, %d), Color: %s\n", box2.position[0], box2.position[1], box2.position[2], box2.color);

    return 0;
}
