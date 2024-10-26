# Data Structures Implementation in C

This guide outlines a project for implementing common data structures in C to become more comfortable with pointers and memory management. Each data structure will be implemented using structs and functions, defined in an external file and accessed through a header file. This plan includes detailed steps for each data structure, including memory management, function design, and testing.

## Project Structure

Each data structure will be implemented in its own folder, containing:
- A header file (`.h`) for struct definitions and function prototypes.
- An implementation file (`.c`) with function definitions.
- A main file for testing each data structure (`test_<data_structure>.c`).

This modular setup allows each data structure to be developed independently.

---

## 1. Dynamic Array

### Struct Definition
- `DynamicArray`: A struct with:
  - A pointer to the elements.
  - An integer for current size (number of elements).
  - An integer for capacity (total allocated memory).

### Core Functions
1. **Initialization**: Allocates memory for the initial array and sets size and capacity.
2. **Insert Element**:
   - If at capacity, doubles the capacity using `realloc()`.
   - Inserts the element at the end.
3. **Delete Element**:
   - Removes an element and shifts as needed.
   - Halves the capacity if size is only 1/4 of the capacity.
4. **Resize**: Manages memory reallocation for growth or reduction.
5. **Destructor**: Frees all allocated memory.

---

## 2. Linked List

### Struct Definition
- `Node`: Contains data and a pointer to the next node.
- `LinkedList`: Contains a pointer to the head node and a size variable.

### Core Functions
1. **Insert Node**: Creates a new node, links it to the list.
2. **Delete Node**: Adjusts pointers to remove nodes without memory leaks.
3. **Find Node**: Traverses to locate a specific element.
4. **Destructor**: Frees each node individually.

---

## 3. Stack (Array-Based and Linked List-Based)

### Array-Based Stack
1. Build on the dynamic array with `push`, `pop`, and `peek` functions.

### Linked List-Based Stack
1. `Push` and `pop` manipulate the head of the linked list.
2. **Destructor**: Frees nodes for linked list-based implementation.

---

## 4. Queue (Linked List-Based)

### Struct Definition
- `Queue`: Contains pointers to both head and tail nodes.

### Core Functions
1. **Enqueue**: Inserts element at the end.
2. **Dequeue**: Removes element from the front.
3. **Destructor**: Ensures each node is freed.

---

## 5. Binary Search Tree (BST)

### Struct Definition
- `Node`: Contains data, left, and right child pointers.

### Core Functions
1. **Insert**: Adds nodes in the correct position.
2. **Delete**: Manages cases for leaf, single child, and two children.
3. **Find**: Searches for a specific element.
4. **Traversal**:
   - Implements in-order, pre-order, and post-order traversals.
5. **Destructor**: Frees each node recursively to prevent memory leaks.

---

## 6. Hash Table (With Collision Resolution)

### Struct Definition
- `Entry`: Contains key, value, and pointer to the next entry (for chaining).
- `HashTable`: Contains an array of entry pointers and size.

### Core Functions
1. **Hash Function**: Generates indices.
2. **Insert**: Uses chaining to handle collisions.
3. **Delete**: Removes entry from chain.
4. **Find**: Searches within the chain at the hashed index.
5. **Destructor**: Frees each chain entry.

---

## 7. Graph (Adjacency List and Adjacency Matrix Representations)

### Struct Definition
- **Adjacency List**:
  - `GraphNode`: Contains vertex ID, pointer to the next node (linked list of edges), and optional weight for weighted edges.
  - `Graph`: Contains an array of pointers to `GraphNode` structs, with each representing an adjacency list.
- **Adjacency Matrix**:
  - `Graph`: Contains a 2D array to represent edges, with cell values as weights or 1 for unweighted graphs.

### Core Functions
1. **Initialization**: Allocates memory for adjacency list or matrix, initializing edges.
2. **Add Edge**:
   - For adjacency lists, adds a new node to the vertex’s linked list.
   - For adjacency matrices, sets the matrix cell.
3. **Remove Edge**:
   - Removes the relevant node from adjacency list or resets matrix cell.
4. **Traversal Algorithms**:
   - **Depth-First Search (DFS)**: Recursive, visiting each connected node.
   - **Breadth-First Search (BFS)**: Uses a queue to explore connected nodes level by level.
5. **Shortest Path**:
   - Implement Dijkstra’s algorithm for weighted graphs or Bellman-Ford for graphs with negative weights.
6. **Destructor**:
   - Frees each adjacency list node or deallocates the 2D matrix.

### Testing and Edge Cases
- Test for edge addition/removal on sparse and dense graphs.
- Verify traversals on connected and disconnected graphs.
- Confirm shortest path functionality for weighted graphs with both positive and negative weights.

---

## 8. Documentation and Testing

- **Documentation**: Comment in each header file to describe structs and functions.
- **Testing**: 
  - Write a main testing file for each data structure.
  - Test edge cases, such as:
    - Inserting into a full dynamic array.
    - Deleting from an empty linked list.
    - Traversing a disconnected graph.
  - Confirm that destructors free all allocated memory without leaks.

---

This plan will help master pointer manipulation and memory management in C, especially through implementing dynamic data structures. Each step builds on core C concepts and progressively advances skills in using pointers and structs.
