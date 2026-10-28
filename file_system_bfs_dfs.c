#include <stdio.h>
#include <string.h>

#define MAX 20

int graph[MAX] [MAX];
int visited[MAX];
int queue[MAX];

char files[MAX][50];

int n;

/* Breadth-First Search */
int BFS(int start, char target[])
{
    int front = 0, rear = 0;
    int found = 0;

    memset(visited, 0, sizeof(visited));

    visited[start] = 1;
    queue[rear++] = start;

    printf("\nBFS Traversal: ");

    while (front < rear)
    {
        int current = queue[front++];

        printf("%s ", files[current]);

        if (strcmp(files[current], target) == 0)
            found = 1;

        for (int i = 0; i < n; i++)
        {
            if (graph[current][i] == 1 && !visited[i])
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    printf("\n");

    if (found)
        printf("BFS: File '%s' found.\n", target);
    else
        printf("BFS: File '%s' not found.\n", target);

    return found;
}

/* Depth-First Search */
void DFS(int current, char target[], int *found)
{
    visited[current] = 1;

    printf("%s ", files[current]);

    if (strcmp(files[current], target) == 0)
        *found = 1;

    for (int i = 0; i < n; i++)
    {
        if (graph[current][i] == 1 && !visited[i])
        {
            DFS(i, target, found);
        }
    }
}

int main()
{
    int start;
    char target[50];

    printf("FILE SYSTEM REPRESENTATION USING BFS AND DFS\n");

    printf("\nEnter number of files/directories (max %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX)
    {
        printf("Invalid number of files/directories.\n");
        return 1;
    }

    printf("\nEnter file/directory names (without spaces):\n");

    for (int i = 0; i < n; i++)
    {
        printf("Node %d: ", i);
        scanf("%49s", files[i]);
    }

    printf("\nEnter adjacency matrix (%d x %d):\n", n, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);

            if (graph[i][j] != 0 && graph[i][j] != 1)
            {
                printf("Invalid matrix value. Use 0 or 1.\n");
                return 1;
            }
        }
    }

    printf("\nAvailable nodes:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d - %s\n", i, files[i]);
    }

    printf("\nEnter starting node index: ");
    scanf("%d", &start);

    if (start < 0 || start >= n)
    {
        printf("Invalid starting node.\n");
        return 1;
    }

    printf("Enter file/directory name to search: ");
    scanf("%49s", target);

    /* Perform BFS */
    BFS(start, target);

    /* Perform DFS */
    memset(visited, 0, sizeof(visited));

    int found = 0;

    printf("\nDFS Traversal: ");
    DFS(start, target, &found);

    printf("\n");

    if (found)
        printf("DFS: File '%s' found.\n", target);
    else
        printf("DFS: File '%s' not found.\n", target);

    return 0;
}
