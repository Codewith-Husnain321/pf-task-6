#include<stdio.h>
int main(){
    int n ;
    float score, total_score = 0,average;
    printf("enter total students of the class");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter your score out of 100");
        scanf("%f",&score);
        total_score = total_score + score;
    }
    average = total_score/n;
    printf("total score of the class %f",total_score);
    printf("average of the class %f",average);

    

}