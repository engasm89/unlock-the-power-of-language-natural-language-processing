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
int main(void) { // Entry
  printf("Unlock the Power of Language: Natural Language Processing\n"); // Title
  const char *text = "This is sample text"; // Example text
  int words = count_words(text); // Count words
  printf("text='%s' words=%d\n", text, words); // Log result
  return 0; // Exit
} // End main

