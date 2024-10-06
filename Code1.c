#include <stdio.h>
/* Name second program Code2.c, this one is going to be the football one*/
void rec_possibilities(int score, int touchdown_8, int touchdown_7, int touchdown_6, int field_goal_3, int safety_2);
int main(){
    int score;
    while (1){
        printf("enter score: ");
        scanf("%d", &score);

        if (score <= 1){
            break;
        }
        printf("\nCombinations for score of %d:\n", score);
        rec_possibilities(score, 0,0,0,0,0);

    } 

    return 0;
}

void rec_possibilities(int score, int touchdown_8, int touchdown_7, int touchdown_6, int field_goal_3, int safety_2){
    if (score == 0){
        printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", touchdown_8, touchdown_7, touchdown_6, field_goal_3, safety_2);
        return;
    }
    if (score >= 8)
        rec_possibilities(score - 8, touchdown_8 + 1, touchdown_7, touchdown_6, field_goal_3, safety_2);
    if (score >= 7)
        rec_possibilities(score - 7, touchdown_8, touchdown_7 + 1, touchdown_6, field_goal_3, safety_2);
    if (score >= 6)
        rec_possibilities(score - 6, touchdown_8, touchdown_7, touchdown_6+1, field_goal_3, safety_2);
    if (score >= 3)
        rec_possibilities(score - 3, touchdown_8, touchdown_7, touchdown_6, field_goal_3 + 1, safety_2);
    if (score >= 2)
        rec_possibilities(score - 2, touchdown_8, touchdown_7, touchdown_6, field_goal_3, safety_2 + 1);
} 

