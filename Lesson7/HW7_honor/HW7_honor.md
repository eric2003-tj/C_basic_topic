# Homework 7 (Honor)

**Task Description:**

Write a program to extract abbreviations from input. For example, if you are given three strings "national", "taiwan", "university", you must answer "NTU". Note that there are four words that will not appear in the abbreviation - "of", "and", "the", and "at". For example, "the", "united", "states", "of", "america", will become "USA".


**Input**

The input is a sequence of words consisting of lowercase letters and periods only. A set of words to form an abbreviation must ends with the last word having a '.' (period) at the end. For the previous "NTU" example, you will have "national" "taiwan", then "university.". Please note that there is a period '.' at the end of "university". You must process all inputs until EOF. The last word of the input is guaranteed to have an ending '.'. It is also guaranteed that all abbreviations will have at least one character.

**Output**

You must output all abbreviations from the input, one per line.

**Limits**

The number of characters in a word including the ending period is no more than 127. The length of an abbreviation is no more than 127.

