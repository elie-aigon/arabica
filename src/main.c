#include "../include/arabica_header.h"


// tools
char** split(const char* str, const char* delim, int* num_tokens) {
    // Compter le nombre de délimiteurs pour allouer la mémoire
    int count = 0;
    const char* ptr = str;
    while (*ptr) {
        if (strstr(delim, ptr) != NULL) {
            count++;
            ptr += strlen(delim) - 1;
        }
        ptr++;
    }
    *num_tokens = count + 1; // Nombre de tokens = nombre de délimiteurs + 1

    // Allouer de la mémoire pour le tableau de pointeurs de chaînes de caractères
    char** tokens = (char**)malloc((*num_tokens + 1) * sizeof(char*));
    if (tokens == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire.\n");
        exit(EXIT_FAILURE);
    }

    // Copier chaque token dans le tableau
    int i = 0;
    char* token = strtok((char*)str, delim);
    while (token != NULL) {
        tokens[i] = strdup(token); // Allouer de la mémoire pour chaque token et le copier
        if (tokens[i] == NULL) {
            fprintf(stderr, "Erreur d'allocation de mémoire pour le token.\n");
            exit(EXIT_FAILURE);
        }
        i++;
        token = strtok(NULL, delim);
    }
    tokens[i] = NULL; // Terminer le tableau avec un pointeur NULL

    return tokens;
}

void free_tokens(char** tokens) {
    char** current_token = tokens;
    while (*current_token != NULL) {
        free(*current_token);
        current_token++;
    }
    free(tokens);
}

unsigned char* add_Element_To_Output(unsigned char* liste, unsigned char taille, unsigned char nouvelElement) {
    // Réallouer la mémoire pour agrandir la liste
    liste = (unsigned char*)realloc(liste, (taille + 1) * sizeof(unsigned char));
    if (liste == NULL) {
        printf("Allocation mémoire a échoué.\n");
        exit(1);
    }

    // Ajouter le nouvel élément à la fin de la liste
    liste[taille] = nouvelElement;
    return liste;
}

int main(int argc, char *argv[]) {
    char lines[MAX_LINES][MAX_LINE_LENGTH]; // Tableau statique pour stocker les lignes

    // Vérifie si un argument a été passé au programme
    if (argc < 2) {
        fprintf(stderr, "Utilisation: %s <nom_de_fichier>\n", argv[0]);
        return 1;
    }

    int linesLen = readLinesFromFile(argv[1], lines);
    if (linesLen == -1) {
        return 1;
    }

    // Affiche les lignes
    for (int i = 0; i < linesLen; i++) {
        printf("Ligne %d : %s\n", i + 1, lines[i]);
    }
    // Debugger

    // Compiler
    int current_line_index = 0;
    while(current_line_index < linesLen){
        int current_line_len = 0;
        char** current_line = split(lines[current_line_index], " ", &current_line_len);
        switch (current_line[0]) {
            case "LOAD_VAL":

                break;
            case "READ_VAR":

                break;
            case "STORE_VAR":

                break;
            case "ADD":

                break;
            case "SUB":

                break;
            case "MUL":

                break;
            case "DIV":

                break;
            case "MOD":

                break;
            case "JMP":
                break;
            case "JMP_IF_TRUE":
                break;
            case "JMP_IF_ZERO":
                break;
            case "EQ":
                break;
            case "NEQ":
                break;
            case "GT":
                break;
            case "LT":
                break;
            case "GTE":
                break;
            case "LTE":
                break;
            case "PRINT_STR":
                break;
            case "INPUT_STR":
                break;
            case "STR_LEN":
                break;
            case "CONCAT":
                break;
            case "GET_CHAR":
                break;
            case "SET_CHAR":
                break;
            case "STR_CMP":
                break;
            default:
                break;
        }

    }

    return 0;
}
