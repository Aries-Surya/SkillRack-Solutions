#include <stdio.h>
#include<string.h>
int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    
    int distance, time;
    int total_distance = 0, total_time = 0;
    
    char* token = strtok(input, " ");
    while(token != NULL) {
        sscanf(token, "%d@%d", &distance, &time);
        total_distance += distance;
        total_time += time;
        token = strtok(NULL, " ");
    }
    
    float average_speed = (float)total_distance / total_time;
    
    printf("%.2f kmph", average_speed);
    
    return 0;
}
