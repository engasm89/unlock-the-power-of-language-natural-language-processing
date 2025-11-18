/*
 * Course: Unlock The Power Of Language Natural Language Processing
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Unlock The Power Of Language Natural Language Processing" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Embedded Systems)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/unlock-the-power-of-language-natural-language-processing/
 * Repository: https://github.com/engasm89/unlock-the-power-of-language-natural-language-processing
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Unlock The Power Of Language Natural Language Processing
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Unlock The Power Of Language Natural Language Processing
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for NLP logs
#include <string.h> // Include string utilities

int count_words(const char *s) { // Count words in string
  int count = 0; // Initialize count
  int in_word = 0; // Track inside word
  for (const char *p = s; *p; ++p) { // Iterate characters
    if (*p != ' ' && *p != '\n' && *p != '\t') { // Non-space
      if (!in_word) { // Start of word
        in_word = 1; // Mark in word
        count++; // Increment count
      } // End start check
    } else { // Space
      in_word = 0; // End of word
    } // End else
  } // End loop
  return count; // Return count
} // End count_words

// Main routine: orchestrates the unlock the power of language natural language processing scenario
int main(void) { // Program entry point
  printf("Unlock the Power of Language: Natural Language Processing\n"); // Title
  const char *text = "This is sample text"; // Example text
  int words = count_words(text); // Count words
  printf("text='%s' words=%d\n", text, words); // Log result
  return 0; // Exit
} // End of main function

