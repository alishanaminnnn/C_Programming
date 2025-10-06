#include<stdio.h>
int main(){
    char name_initial;    // to store first letter of user's name
    int user_id;          // to store 3-digit ID number

    // --- Input section for encoding ---
    printf("Name's First Letter :");
    scanf("%c",&name_initial);   // take first letter of the name

    printf("Enter Three Digit ID Number :");
    scanf("%d",&user_id);        // take 3-digit ID number

    // --- Breaking the 3-digit number into individual digits ---
    int last = (user_id % 100) % 10;       // extract last digit
    int middle = (user_id / 10) % 10;      // extract middle digit
    int first = (user_id / 100);           // extract first digit

    // --- Encoding digits by adding/subtracting 5 ---
    int enc1 = first + 5, enc2 = middle + 5, enc3 = last + 5;     // for vowels
    int encd1 = first - 5, encd2 = middle - 5, encd3 = last - 5;  // for consonants

    printf("Encoded Result :");

    // --- Switch statement to encode alphabet (A→Z, B→Y, etc.) ---
    switch (name_initial) {
        case 'A': printf("Z"); break;
        case 'B': printf("Y"); break;
        case 'C': printf("X"); break;
        case 'D': printf("W"); break;
        case 'E': printf("V"); break;
        case 'F': printf("U"); break;
        case 'G': printf("T"); break;
        case 'H': printf("S"); break;
        case 'I': printf("R"); break;
        case 'J': printf("Q"); break;
        case 'K': printf("P"); break;
        case 'L': printf("O"); break;
        case 'M': printf("N"); break;
        case 'N': printf("M"); break;
        case 'O': printf("L"); break;
        case 'P': printf("K"); break;
        case 'Q': printf("J"); break;
        case 'R': printf("I"); break;
        case 'S': printf("H"); break;
        case 'T': printf("G"); break;
        case 'U': printf("F"); break;
        case 'V': printf("E"); break;
        case 'W': printf("D"); break;
        case 'X': printf("C"); break;
        case 'Y': printf("B"); break;
        case 'Z': printf("A"); break;
    }

    // --- Encoding numbers based on vowel/consonant rule ---
    if (name_initial=='A'||name_initial=='E'||name_initial=='I'||name_initial=='O'||name_initial=='U') {
        // if first letter is a vowel, add 5 to each digit
        if (enc1>9 || enc2>9 || enc3>9) {    // if result > 9, wrap around
            int e1 = enc1 - 10, e2 = enc2 - 10, e3 = enc3 - 10;
            printf("%d%d%d", e1, e2, e3);
        }
        else if (enc1<0 || enc2<0 || enc3<0) { // if negative, wrap around
            int e1 = enc1 + 10, e2 = enc2 + 10, e3 = enc3 + 10;
            printf("%d%d%d", e1, e2, e3);
        }
        else {
            printf("%d%d%d", enc1, enc2, enc3); // normal output if no wrapping
        }
    }
    else {
        // if the first letter is a consonant, subtract 5
        if (encd1<0||encd2<0||encd3<0) {
            int ed1 = encd1 + 10, ed2 = encd2 + 10, ed3 = encd3 + 10; // handle negatives
            printf("%d%d%d", ed1, ed2, ed3);
        }
        else if (encd1>10 || enc2>10 || enc3<10) { // if values > 10
            int ed1 = enc1 - 10, ed2 = enc2 - 10, ed3 = enc3 - 10;
            printf("%d%d%d", ed1, ed2, ed3);  
        }
        else {
            printf("%d%d%d",encd1,encd2,encd3); // normal case
        }
    }

    // --- Input section for decoding ---
    char name_f;   // for decoded letter
    int name_id;   // for decoded 3-digit number

    printf("\nName's First Letter :");
    scanf(" %c",&name_f);   // space before %c to ignore newline

    printf("Enter Three Digit ID Number :");
    scanf("%d",&name_id);

    // --- Breaking the number again into digits for decoding ---
    int last_digit = (name_id % 100) % 10;
    int middle_digit = (name_id / 10) % 10;
    int first_digit = (name_id / 100);

    // --- Reverse operation for decoding ---
    int dec1 = first_digit + 5, dec2 = middle_digit + 5, dec3 = last_digit + 5;
    int deco1 = first_digit - 5, deco2 = middle_digit - 5, deco3 = last_digit - 5;

    printf("Decoded Result :");

    // --- Reverse switch to decode letters (Z→A, Y→B, etc.) ---
    switch (name_f) {
        case 'Z': printf("A"); break;
        case 'Y': printf("B"); break;
        case 'X': printf("C"); break;
        case 'W': printf("D"); break;
        case 'V': printf("E"); break;
        case 'U': printf("F"); break;
        case 'T': printf("G"); break;
        case 'S': printf("H"); break;
        case 'R': printf("I"); break;
        case 'Q': printf("J"); break;
        case 'P': printf("K"); break;
        case 'O': printf("L"); break;
        case 'N': printf("M"); break;
        case 'M': printf("N"); break;
        case 'L': printf("O"); break;
        case 'K': printf("P"); break;
        case 'J': printf("Q"); break;
        case 'I': printf("R"); break;
        case 'H': printf("S"); break;
        case 'G': printf("T"); break;
        case 'F': printf("U"); break;
        case 'E': printf("V"); break;
        case 'D': printf("W"); break;
        case 'C': printf("X"); break;
        case 'B': printf("Y"); break;
        case 'A': printf("Z"); break;
    }

    // --- Decoding numbers based on vowel/consonant ---
    if (name_f=='A'||name_f=='E'||name_f=='I'||name_f=='O'||name_f=='U') {
        printf("%d%d%d",dec1,dec2,dec3);     // vowel → add 5
    }
    else {
        printf("%d%d%d",deco1,deco2,deco3);  // consonant → subtract 5
    }

    return 0;
}
