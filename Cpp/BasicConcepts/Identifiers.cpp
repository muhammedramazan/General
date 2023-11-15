// int 12asd; first character can't be digit
int asda;

/**
An identifier is an arbitrarily long sequence of digits, underscores, lowercase and uppercase Latin letters, and most Unicode characters.

The first character of a valid identifier must be one of the following:

uppercase Latin letters A-Z
lowercase Latin letters a-z
underscore
any Unicode character with the Unicode property XID_Start
Any other character of a valid identifier must be one of the following:

digits 0-9
uppercase Latin letters A-Z
lowercase Latin letters a-z
underscore
any Unicode character with the Unicode property XID_Continue
The lists of characters with properties XID_Start and XID_Continue can be found in DerivedCoreProperties.txt.

Identifiers are case-sensitive (lowercase and uppercase letters are distinct), and every character is significant. Every identifier must conform to Normalization Form C.

Note: Support of Unicode identifiers is limited in most implementations, e.g. gcc (until 10).
*/