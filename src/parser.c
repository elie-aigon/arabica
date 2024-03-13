//
// Created by eliea on 12/03/2024.
//

#include "../include/arabica_header.h"

int readLinesFromFile(const char *fileName, char lines[MAX_LINES][MAX_LINE_LENGTH]) {
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        perror("Erreur en ouvrant le fichier");
        return -1;
    }

    int count = 0;
    while (fgets(lines[count], MAX_LINE_LENGTH, file) && count < MAX_LINES) {
        // Supprime le saut de ligne à la fin si présent
        lines[count][strcspn(lines[count], "\n")] = 0;
        count++;
    }

    fclose(file);
    return count;
}
