File System Representation and Search Using BFS and DFS

📌 Project Overview

This project implements a file system representation using a graph and searches for files using Breadth-First Search (BFS) and Depth-First Search (DFS).

The file system is represented using an adjacency matrix, where each node represents a file or directory and each edge represents a connection between them.

🎯 Objectives

- Represent a file system as a graph.
- Implement BFS and DFS traversal algorithms.
- Search for a specified file from a given starting node.
- Display the traversal order and search result.

🛠️ Technologies Used

- Programming Language: C
- Data Structure: Graph
- Graph Representation: Adjacency Matrix
- Algorithms: BFS and DFS

⚙️ Features

- Accepts file and directory names as input.
- Accepts an adjacency matrix to represent connections.
- Allows the user to select a starting node.
- Searches for a target file using BFS and DFS.
- Displays traversal orders and whether the target file is found.
- Validates the number of nodes and matrix values.

🚀 How to Run

1. Compile the program

Make sure a C compiler such as GCC is installed.

gcc main.c -o main

2. Run the program

On Windows:

.\main.exe

On Linux or macOS:

./main

🧪 Sample Input

5
Root
Documents
Pictures
Resume
Photo
0 1 1 0 0
1 0 0 1 0
1 0 0 0 1
0 1 0 0 0
0 0 1 0 0
0
Photo

📊 Sample Output

BFS Traversal: Root Documents Pictures Resume Photo
BFS: File 'Photo' found.

DFS Traversal: Root Documents Resume Pictures Photo
DFS: File 'Photo' found.

📚 Concepts Learned

- Graph representation using an adjacency matrix
- Breadth-First Search (BFS)
- Depth-First Search (DFS)
- Queue operations
- Recursion
- Searching and graph traversal

👩‍💻 Project Information

Activity: File System Representation and Search Using BFS and DFS
Course: Data Structures and Algorithms
Language: C

📝 Conclusion

This project demonstrates how a graph can represent a file system and how BFS and DFS can be used to traverse connected nodes and search for a specified file or directory.
