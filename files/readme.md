Opening Files


use fopeN()

FILE *fopen( const char * filename, const char * mode );

r 	Opens an existing text file for reading purpose.

w 	Opens a text file for writing. If it does not exist, then a new file is created. Here your program will start writing content from the beginning of the file.
a 	Opens a text file for writing in appending mode. If it does not exist, then a new file is created. Here your program will start appending content in the existing file content.


r+ 	Opens a text file for both reading and writing.


w+ 	Opens a text file for both reading and writing. It first truncates the file to zero 
length if it exists, otherwise creates a file if it does not exist.

a+ 	Opens a text file for both reading and writing. It creates the file if it does not exist. The reading will start from the beginning but writing can only be appended.





closing a file
int fclose( FILE *fp );