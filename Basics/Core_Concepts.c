/*
 * ======================================================================================
 * 📘 C LANGUAGE MASTER REVISION CODEBASE
 * ======================================================================================
 * Author: [HARSH HAJARE]
 * Description: A complete compilation of C concepts in one file.
 * Topics Covered:
 * 1. Variables & Data Types
 * 2. Control Flow (If/Switch)
 * 3. Loops & Math
 * 4. Arrays (1D & 2D)
 * 5. String Manipulation
 * 6. Functions & Recursion
 * 7. Pointers & Memory Addressing
 * 8. Dynamic Memory Allocation (malloc/free)
 * 9. Structures & Enums
 * 10. File Handling
 * ========================================================================================
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// --- CONSTANTS & MACROS ---
#define PI 3.14159
#define MAX_BUFFER 100

// --- ENUMS ---
enum Day { SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

// --- STRUCTS ---
typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

// --- FUNCTION PROTOTYPES ---
void mathOperations();
void stringMagic();
void pointerLogic(int *a, int *b);
void dynamicMemoryDemo();
void fileHandlingDemo();
void array2DDemo();

int main() {
    printf("🚀 STARTING C MASTER REVISION...\n\n");

    // 1. BASIC I/O & MATH
    printf("--- [1] MATH & LOGIC ---\n");
    mathOperations();

    // 2. STRINGS
    printf("\n--- [2] STRING MANIPULATION ---\n");
    stringMagic();

    // 3. POINTERS (The Hard Part)
    printf("\n--- [3] POINTERS & SWAPPING ---\n");
    int x = 10, y = 20;
    printf("Before Swap: x=%d, y=%d\n", x, y);
    pointerLogic(&x, &y); // Passing addresses
    printf("After Swap:  x=%d, y=%d\n", x, y);

    // 4. ARRAYS
    printf("\n--- [4] 2D ARRAYS ---\n");
    array2DDemo();

    // 5. MEMORY MANAGEMENT (Stack vs Heap)
    printf("\n--- [5] DYNAMIC MEMORY (MALLOC) ---\n");
    dynamicMemoryDemo();

    // 6. STRUCTS & ENUMS
    printf("\n--- [6] STRUCTS & ENUMS ---\n");
    Student s1 = {101, "Future HFT Dev", 9.8};
    enum Day today = SATURDAY;
    printf("Student: %s | ID: %d | GPA: %.2f\n", s1.name, s1.id, s1.gpa);
    if(today == SATURDAY || today == SUNDAY) {
        printf("It's the weekend! Time to code C++.\n");
    }

    // 7. FILE HANDLING
    printf("\n--- [7] FILE SYSTEM ---\n");
    fileHandlingDemo();

    printf("\n✅ REVISION COMPLETE.\n");
    return 0;
}

// --- FUNCTION IMPLEMENTATIONS ---

void mathOperations() {
    double result = sqrt(25);
    double power = pow(2, 5);
    int randomNum;
    
    // Random Number Logic
    srand(time(0)); 
    randomNum = (rand() % 6) + 1; // 1 to 6

    printf("Sqrt(25): %.2f\n", result);
    printf("2^5: %.2f\n", power);
    printf("Random Dice Roll: %d\n", randomNum);
}

void stringMagic() {
    char str1[MAX_BUFFER] = "Bro";
    char str2[] = "Code";
    
    // String Concatenation
    strcat(str1, " "); // Add space
    strcat(str1, str2); // Add Code
    
    printf("Combined: %s\n", str1);
    printf("Length: %lu\n", strlen(str1));
    
    // String Compare
    if(strcmp(str1, "Bro Code") == 0) {
        printf("Strings match!\n");
    }
}

// Swaps two numbers using Memory Addresses (Call by Reference)
void pointerLogic(int *a, int *b) {
    int temp = *a; // Store value at address 'a'
    *a = *b;       // Put value of 'b' into address 'a'
    *b = temp;     // Put temp into address 'b'
}

void array2DDemo() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Nested Loop for Matrix
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// CRITICAL FOR HFT: Understanding Heap Memory
void dynamicMemoryDemo() {
    int *arr;
    int n = 5;

    // Allocate memory manually in Heap
    arr = (int*) calloc(n, sizeof(int)); 

    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return;
    }

    // Assign values
    for(int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("Heap Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // FREE MEMORY (Prevent Memory Leak)
    free(arr);
    printf("Memory Freed.\n");
}

void fileHandlingDemo() {
    FILE *pF = fopen("test.txt", "w"); // Write mode
    
    if(pF == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    fprintf(pF, "This is a log file created by C.\n");
    fprintf(pF, "Status: Success\n");
    
    fclose(pF);
    printf("File 'test.txt' written successfully.\n");
    
    // Reading logic (Optional)
    char buffer[255];
    pF = fopen("test.txt", "r");
    if(pF != NULL) {
        printf("Reading from file:\n");
        while(fgets(buffer, 255, pF)) {
            printf("%s", buffer);
        }
        fclose(pF);
    }
}
