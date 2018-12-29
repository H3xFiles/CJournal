## Fopen - open
fopen and open do most of things at the same way, but fopen is a standard library function and open is a syscall .
Therefore open is much much faster. 

#### fopen
```C

  FILE *file_to_read = fopen ("file.txt", "r");
  FILE *file_to_write = fopen ("otherFile.txt", "w");

  if (file_to_read == NULL | file_to_write == NULL) {
      printf ("One file wouldn't open.\n");
      return -1;
    }

  char c;
  while ((c = fgetc (file_to_read) != EOF)
	 {
	 if (c == '.')
	 {
	 c = '!';}
	 fputc (c, file_to_write);
   }
	 fclose (file_to_read); 
   fclose (flie_to_write);
   
```

#### open
```C
int fd_to_read = open("file.txt", O_RDONLY);
int fd_to_write = open("fileToWrite.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

if (fd_to_read == -1 || fd_to_write == -1){
printf("One file wouldn't open\n");
return -1
}

char c;
int bytes;
while((bytes = read(fd_to_read, &c, sizeof(c))) > 0) {
if (c == '.'){
  c = '!';
}
 write(fd_to_write, &c, sizeof(c));
}

close(fd_to_read);
close(fd_to_write);

```
