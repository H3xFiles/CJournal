## How to Map Files into Memory in C ([Video Link](https://www.youtube.com/watch?v=m7E9piHcfr4))
[mmap()](http://man7.org/linux/man-pages/man2/mmap.2.html) creates a new mapping in the virtual address space of the
calling process.  The starting address for the new mapping is specified in addr. The length argument specifies the length of the
 mapping (which must be greater than 0). void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
```C
#include <sys/mman.h>

int fd = open("./somefile.txt", 0_RDWR, S_IRUSR | S_IWUSR);
struct stat sb;
if(fstat(fd, &sb) == -1){
  perror("Couldn't get file size.\n");
}
char* file_in_memory = mmap(NULL, PAGESIZE, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, fd,0);

```

