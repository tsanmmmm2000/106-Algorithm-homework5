# Singly Connected Problem

A directed graph G = (V, E) is singly connected if u ->v implies that G contains at most one simple path from u to v for all vertices u, v ∊ V. Give an efficient algorithm to determine whether or not a directed graph is singly connected.

Input:

First line is N, denotes the amount of test case, then there are Ns graph data followed by N. Second line is V, each graph data is composed of V (the number of vertices, <= 1000). Third line is E, the number of edges, it does no size limitation, then followed by Es edges which are denoted by pair of vertex (e.g., 2 4 is vertex 2->4, the first vertex number is 0 of all the vertex). Each vertex is an integer in [0, n-1], also notes that the input edge is not ordered by the start vertex.

Output:

If the input graph is singly connected, output the ”YES”, or “NO” if not.

The test case number should be printed before the answer.

Please use the blank key to separate test case number and answer. Do not output any extra words and symbols, otherwise the program cannot be judged by e-Tutor.

Remark:

1. The program is submitted directly to the e-Tutor system platform for verification.
2. Documentation (HW5_Student ID.pdf) Please submit to Moodle system platform to score, the content must include:
 A summary of the logic, principles, compiler environment and language used in this program.
 Details of the program content (source code with notes, graphic illustration, and pseudo code explanation.

Example of Input:

1

6

8

0 1

0 4

1 2

2 0

2 1

3 2

4 5

5 4

Output:

1 NO
