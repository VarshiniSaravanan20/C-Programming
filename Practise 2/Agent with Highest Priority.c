#include <stdio.h>

int main() {
    float agent1, agent2, agent3;

    printf("Enter success rate of Agent 1: ");
    scanf("%f", &agent1);
    printf("Enter success rate of Agent 2: ");
    scanf("%f", &agent2);
    printf("Enter success rate of Agent 3: ");
    scanf("%f", &agent3);

    if(agent1 >= agent2 && agent1 >= agent3)
        printf("Agent 1 has highest priority.\n");
    else if(agent2 >= agent1 && agent2 >= agent3)
        printf("Agent 2 has highest priority.\n");
    else
        printf("Agent 3 has highest priority.\n");

    return 0;
}