/*
 * Read four numbers (N1, N2, N3, N4), which one with 1 digit 
 * after the decimal point, corresponding to 4 scores obtained 
 * by a student. Calculate the average with weights 2, 3, 4 e 1 
 * respectively, for these 4 scores and print the message 
 * "Media: " (Average), followed by the calculated result. 
 * If the average was 7.0 or more, print the message 
 * "Aluno aprovado." (Approved Student). If the average was less 
 * than 5.0, print the message: "Aluno reprovado." (Reproved Student). 
 * If the average was between 5.0 and 6.9, including these, the program 
 * must print the message "Aluno em exame." (In exam student).
 *
 * In case of exam, read one more score. Print the message 
 * "Nota do exame: " (Exam score) followed by the typed score. 
 * Recalculate the average (sum the exam score with the previous calculated 
 * average and divide by 2) and print the message “Aluno aprovado.” 
 * (Approved student) in case of average 5.0 or more) or "Aluno reprovado." 
 * (Reproved student) in case of average 4.9 or less. For these 2 cases 
 * (approved or reproved after the exam) print the message 
 * "Media final: " (Final average) followed by the final average for this 
 * student in the last line.
 *
 * ------------------------------------------------------------
 *       Input Smaple     |       Output Sample
 *  2.0 4.0 7.5 8.0       | Media: 5.4
 *  6.4                   | Aluno em exame.
 *                        | Nota do exame: 6.4
 *                        | Aluno aprovado.
 *                        | Media final: 5.9
 * ------------------------------------------------------------
 *  2.0 6.5 4.0 9.0       | Media: 4.8
 *                        | Aluno reprovado.
 * ------------------------------------------------------------
 *  9.0 4.0 8.0 9.0       | Media: 7.3
 *                        | Aluno aprovado.
 */

#include <stdio.h>

int main(void) {
    double numbers[5] = {0.};
    double sum = 0.;
    double average[2] = {0.};
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i] * ((i+1)%4 + 1.);
    }
    average[0] = sum / 10.;
    if (average[0] >= 5.0 && average[0] <= 6.9) {
        scanf("%lf", &numbers[4]);
        average[1] = (average[0]+numbers[4])/2.;
        printf("Media: %.1lf\n", average[0]);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", numbers[4]);
        if (average[1] >= 5.0) {
            printf("Aluno aprovado.\n");
        } else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", average[1]);
    } else if (average[0] >= 7.0) {
        printf("Media: %.1lf\n", average[0]);
        printf("Aluno aprovado.\n");
    } else {
        printf("Media: %.1lf\n", average[0]);
        printf("Aluno reprovado.\n");
    }
    return 0;
}
