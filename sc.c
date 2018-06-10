#include <stdio.h>
#include <string.h>

#define MAX_VERTICES_NUMBER 1000
#define OUPTPUT_CHAR_SIZE 3
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define TRUE 1
#define FALSE 0

const char YES[] = "YES";
const char NO[] = "NO";

struct vertices {
    int color[MAX_VERTICES_NUMBER];
    int adjacency[MAX_VERTICES_NUMBER][MAX_VERTICES_NUMBER];
};

struct sc_result {
    int number;
    char is_sc[OUPTPUT_CHAR_SIZE];
};

struct vertices vs;
char is_sc[OUPTPUT_CHAR_SIZE];

void clear_vertices(int i) {
    vs.color[i] = WHITE;
}

void clear_edges(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            vs.adjacency[i][j] = FALSE;
        }
    }
}

void add_edge(int from, int to) {
    if (vs.adjacency[from][to] == TRUE) {
        strcpy(is_sc, NO);
    } else {
        vs.adjacency[from][to] = TRUE;
    }
}

void dfs_visit(int size, int vertex) {
    vs.color[vertex] = GRAY;
    for (int i = 0; i < size; i++) {
        if (vs.adjacency[vertex][i] == TRUE) {
            if (vs.color[i] == WHITE) {
                dfs_visit(size, i);
            } else if (vs.color[i] == BLACK) {
                strcpy(is_sc, NO);
                break;
            }
        }
    }
    vs.color[vertex] = BLACK;
}

void dfs(int size) {
   for (int i = 0; i < size; i++) {

        if (strcmp(is_sc, NO) == 0) {
            break;
        }

        if (vs.color[i] == WHITE) {           
            dfs_visit(size, i);
        }

        for (int j = 0; j < size; j++) {
            clear_vertices(j);
        }
    }
}

int main() {
    int input_num;
    scanf("%i", &input_num);

    struct sc_result result[input_num];

    for (int i = 0; i < input_num; i++) {

        strcpy(is_sc, YES);

        int vertex_num;
        scanf("%i", &vertex_num);

        int edge_num;
        scanf("%i", &edge_num);

        for (int j = 0; j < edge_num; j++) {
            int from;
            int to;
            scanf("%d %d", &from, &to);
            add_edge(from, to);
        }
        dfs(vertex_num);

        result[i].number = i + 1;        
        strcpy(result[i].is_sc, is_sc);

        clear_edges(vertex_num); 
    }

    for (int i = 0; i < input_num; i++) {
        printf("%d %s\n", result[i].number, result[i].is_sc);
    }
}
