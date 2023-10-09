#include <stdio.h>

int count_lowercase(char *string);
void make_vowels_uppercase(char *string);
void delete_following_words(char *string);

// Manually prints out a string, one character at a time.
// Should behave like printf("%s\n");
void print_string(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

int main (void) {
    char my_string[] =  "Many chars";
    int num_letters = count_lowercase(my_string);
    printf("There are %d characters in the string\n", num_letters);

    char my_string2[] =  "Many chars";
    make_vowels_uppercase(my_string2);
    print_string(my_string2);

    char my_string3[] =  "Many chars";
    delete_following_words(my_string3);
    print_string(my_string3);

    return 0;
}



// Provided char functions

// Returns : 1 if `c` is a lowercase letter
//         : 0 otherwise.
int is_lowercase(char c) {

    return 'a' <= c && c <= 'z';
}

// Returns : 1 if `c` is an uppercase letter
//         : 0 otherwise.
int is_uppercase(char c) {

    return 'A' <= c && c <= 'Z';
}

// Returns : 1 if `c` is a letter
//         : 0 otherwise.
int is_letter(char c) {

    return is_lowercase(c) || is_uppercase(c);
}

// Returns : `c` converted to lowercase, if it was an uppercase letter
//         : `c` unmodified, otherwise
char to_lowercase(char c) {
    if (is_uppercase(c)) {
        return c - 'A' + 'a';
    }

    return c;
}

// Returns : `c` converted to uppercase, if it was a lowercase letter
//         : `c` unmodified, otherwise
char to_uppercase(char c) {
    if (is_lowercase(c)) {
        return c - 'a' + 'A';
    }

    return c;
}

// Returns : 1 if `c` is an uppercase or lowercase vowel
//         : 0 otherwise.
int is_vowel(char c) {
    char lower_c = to_lowercase(c);

    return lower_c == 'a' 
        || lower_c == 'e'
        || lower_c == 'i' 
        || lower_c == 'o' 
        || lower_c == 'u';
}



// Functions to implement:

// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char *string) {
    int i = 0;
    int count = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            count++;
        }
        i++;
    }
    return count;
}

// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        if (is_vowel(string[i])) {
            string[i] = to_uppercase(string[i]);
        }
        i++;
    }
}

// 3..
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
// 
// (hint. what defines when a string ends?)
void delete_following_words(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == ' ') {
            string[i] = '\0';
            return;
        }
        i++;
    }
}