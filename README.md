# CJournal

### On 19/09/2018
I am starting this journal to better document C. 


#### Links of the day:
- [C Linked List ZENTUT](http://www.zentut.com/c-tutorial/c-linked-list/)
- [How to create Linked list using C/C++](https://www.codeproject.com/articles/24684/how-to-create-linked-list-using-c-c)
- [Tutorial point Linked list](https://www.tutorialspoint.com/data_structures_algorithms/linked_list_program_in_c.htm)
- [learn-c Linked_lists](https://www.learn-c.org/en/Linked_lists)
- [Lesson 15: Singly linked lists in C](https://www.cprogramming.com/tutorial/c/lesson15.html)
- [Modular online encoding, encryption and conversion tool](https://cryptii.com/)
- [A Simple Makefile Tutorial](http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)
- [How to Allocate Dynamic Memory Safely - barrgroup(important!)](https://barrgroup.com/Embedded-Systems/How-To/Malloc-Free-Dynamic-Memory-Allocation)
- [On programming without malloc](https://news.ycombinator.com/item?id=6848415)
- [Amazing website about c-programming](https://overiq.com/c-programming/101/pointer-arithmetic-in-c/)
- [Pointer mistake](http://www.c4learn.com/c-programming/c-mistakes/pointer/)
- [c-structures-pointers](https://www.programiz.com/c-programming/c-structures-pointers)
- [functions-malloc-and-free](https://www.codingunit.com/c-tutorial-the-functions-malloc-and-free)


### 20/09/2018
Class about gdb at the university.
Check tools: Valgrind, strace

#### Links of the day:
- [Coursera: Find bugs in C](https://www.coursera.org/learn/writing-running-fixing-code/lecture/fwpDK/testing-means-finding-bugs)
- [Book about GDB](https://www.eecs.umich.edu/courses/eecs373/readings/Debugger.pdf)
- [Presentation GDB](https://www.cs.umd.edu/~srhuang/teaching/cmsc212/gdb-tutorial-handout.pdf)
- [How processes get more memory. (mmap, brk) - Jacob Sorber](https://www.youtube.com/watch?v=XV5sRaSVtXQ)


### 21/09/2018
- [Socket Programming in C](https://www.youtube.com/watch?v=LtXEMwSG5-8)

### 23/09/2018
It's sunday and WOrkingon an assignment about reversing a binary file (reversing in the meaning of reversing the content bottom-up), weather sucks raining so much all night long. Deadline tomorrow, pretty chill. For this assignment I used mostly the teacher slides and some youtube video. Here is the code [DLinkedList_reverse_binary](https://github.com/H3xHunter/CJournal/blob/master/DLinkedList_reverse_binary.md).

- [Linked List in C/C++ - Inserting a node at beginning](https://www.youtube.com/watch?v=cAZ8CyDY56s)
- [How to create and display a Linked List in C programming](https://www.youtube.com/watch?v=7Fz7JSvlr9g)

### 01/10/2018
Today is about socket programming in C. I need to do an UDP server. 
resources:
- [Linux-Programming-Interface-System-Handbook-ebook](https://www.amazon.com/Linux-Programming-Interface-System-Handbook-ebook/dp/B004OEJMZM/ref=as_li_ss_tl?ie=UTF8&linkCode=sl1&tag=opstips-20&linkId=19444b8906dbc0f906292a0d5ac47c3c)
- [Unix Network Programming, Volume 1: The Sockets Networking API](https://www.amazon.com/Unix-Network-Programming-Sockets-Networking/dp/0131411551/ref=as_li_ss_tl?ie=UTF8&linkCode=sl1&tag=opstips-20&linkId=b66c8bf01751dc394b6842030c4e3326)
- There  are many resources the plan is to watch few tutorials, read some guide and start to understand what I want to put into the code. I wish to focus on the error handling side. 
- [Server in C](https://ops.tips/blog/a-tcp-server-in-c/#the-overview)
- [IPv6 server & client in C ](https://gist.github.com/inaz2/0e77c276a834ad8e3131)
- [Example of IPv6 TCP client-server application(s) using select() and blocking sockets ](https://gist.github.com/jirihnidek/9c256703a60eb077b6a6)
- [C - Simple ipv6 udp server using select to listen on multiple ports. Receiving message from one port, not the other](https://stackoverflow.com/questions/15260879/c-simple-ipv6-udp-server-using-select-to-listen-on-multiple-ports-receiving-m)
- [Example IPv6 UDP client. Copyright (C) 2010 Russell Bradford](http://people.bath.ac.uk/masrjb/AOCN/uclient6.c)
- [UDP Server-Client implementation in C](https://www.geeksforgeeks.org/udp-server-client-implementation-c/)
- [IBM Example: IPv4 or IPv6 client ](https://www.ibm.com/support/knowledgecenter/ssw_ibm_i_72/rzab6/xip6client.htm)
- [CS 417 Documents Sockets Tutorial](https://www.cs.rutgers.edu/~pxk/417/notes/sockets/udp.html)
- [C Language Examples of IPv4 and IPv6 Raw Sockets for Linux](http://www.pdbuchan.com/rawsock/rawsock.html)
- [[Ebook]: Beej's Guide to Network Programming Using Internet Sockets](https://beej.us/guide/bgnet/pdf/bgnet_A4_2.pdf)


## 02/10/2018 to 04/10/208
Wrote my notes about socket programming 

## 05/10/2018
Start to chop down some code: 
</br>
The plan for the asignment: 

![](https://www.tenouk.com/Module39_files/image008.png)

### UDP Client:</br>
- Create UDP socket.
- Send message to server.
- Wait until response from server is recieved.
- Close socket descriptor and exit.

### UDP Server:</br>
- Create UDP socket.
- instantiates a new server structure that holds the properties of our server;
- creates a socket and makes it passive with server_listen`;
- Bind the socket to server address.
- Wait until datagram packet arrives from client.
- accepts new connections on the server socket.
- Process the datagram packet and send a reply to client.
    

## 07/10/2018 
- [[Ebook]Linux Socket Programming by Example Warren Gay](http://alas.matf.bg.ac.rs/manuals/lspe/0789722410)
- [Man getaddrinfo](http://man7.org/linux/man-pages/man3/getaddrinfo.3.html)
- [Get ip address from hostname in C using Linux sockets](https://www.binarytides.com/hostname-to-ip-address-c-sockets-linux/)
- [winsock2programming](https://www.winsocketdotnetworkprogramming.com/winsock2programming/winsock2advancedInternet3a.html)
- [SYN Flood DOS Attack with C Source Code (Linux)](https://www.binarytides.com/syn-flood-dos-attack/)

## 09/10/2018
After reading and reading, I finally came to the conclusion of which struct to use. Things i need to check:
- [ ] how to make a Makefile
- [x] Error Handling </br>
The C programming language provides [perror() and strerror()](https://www.studytonight.com/c/error-handling-in-c.php) functions which can be used to display the text message associated with errno.
    -  The perror() function displays the string you pass to it, followed by a colon, a space, and then the textual representation of the current errno value.
    - The strerror() function, which returns a pointer to the textual representation of the current errno value.
    
    ```C
     void die(char *s)
     {
        perror(s);
        exit(1);
      }
    ```
- [Built-in Functions Provided by GCC](https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html)
  - [likely() and unlikely()](https://kernelnewbies.org/FAQ/LikelyUnlikely)
  
### Link of the day:
- [C library function - isalnum()](https://www.tutorialspoint.com/c_standard_library/c_function_isalnum.htm)
- [Many interesting C programs](https://www.codingunit.com/c-tutorial-error-handling-exception-handling)
- [networking-part-6-creating-a-udp-server](http://cs241.cs.illinois.edu/wikibook/networking-part-6-creating-a-udp-server.html)
- [CS241 - Networking, Part 6: Creating a UDP server ](https://github.com/angrave/SystemProgramming/wiki/Networking%2C-Part-6%3A-Creating-a-UDP-server)
- [System Programming - University of Illinois ebook git](https://github.com/angrave/SystemProgramming/wiki)
- [Programming udp sockets in C on Linux](https://www.binarytides.com/programming-udp-sockets-c-linux/)
- [Problem setting up udp server based on book  Beej's](https://stackoverflow.com/questions/11476391/problems-while-setting-up-a-simple-udp-server)
- [simple UDP client/server system in a C/Unix environment](https://www.abc.se/%7Em6695/udp.html)

## 11/10/2018
Finally it works, the problem was that I need to use write instead of sendto. From here should be easy to implement the different clients. 
To recap: 
- the server is agnostic ipv4 and ipv6
- the if statement are optimized using __builtin_except  (thing that i will be back on this)
- everything seems to work fine.

- [to check the connection on the terminal](https://www.linuxquestions.org/questions/linux-newbie-8/how-to-check-all-open-tcp-connections-790895/)
```Bash
netstat -anp --udp
```
Now I need to implement the [timer](https://linux.die.net/man/3/clock_gettime) and the timeout using [select](http://man7.org/linux/man-pages/man2/select.2.html)

### Link of the day:
- [Inaz git](https://gist.github.com/inaz2/0e77c276a834ad8e3131)
- [Getaddrinfo WIKI](https://en.wikipedia.org/wiki/Getaddrinfo)
- [Get ip address from hostname in C using Linux sockets](https://www.binarytides.com/hostname-to-ip-address-c-sockets-linux/)

## 12/10/2018
Learn how to do a basic make file
``` Bash
:~# make -f makefile
```
```Bash
CC  =   gcc -o
CFLAGS  =   -Wall -pedantic
SOURCES =   $(wildcard *.c)
PROGS   =   $(patsubst %.c,%,$(SOURCES))

all:	$(PROGS)

%:	%.c
	$(CC)   $(CFLAGS)   -o $@ $<
```

Other useful commands:

``` Bash
tar -cvf <name_of_file>.tar *.c makefile README 
```
### Links of the day: 
- [Introduction to Embedded Systems Software and Development Environments](https://www.coursera.org/learn/introduction-embedded-systems#syllabus)
- [Makefile TutorialPoint](https://www.tutorialspoint.com/makefile/makefile_quick_guide.htm)
- [Q: Makefile compiling multiple times the same sources](https://stackoverflow.com/questions/4111494/makefile-compiling-multiple-times-the-same-sources)
- [Q: Compile all C files in a directory into separate programs](https://stackoverflow.com/questions/2706064/compile-all-c-files-in-a-directory-into-separate-programs)
- [A Simple Makefile Tutorial](http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)
- [Extended Makefile tutorial](https://www.codeproject.com/Articles/31488/Makefiles-in-Linux-An-Overview)

### 16/10/2018
- [Alsa Audio](http://www.equalarea.com/paul/alsa-audio.html)

### 17/10/2018
- [parsing-a-wav-file-in-c/](http://truelogic.org/wordpress/2015/09/04/parsing-a-wav-file-in-c/)
- [YT: Audio Programming 1: WAV file export](https://www.youtube.com/watch?v=5GX-yyxTdgE)
- [processing-an-audio-wav-file-with-c](https://stackoverflow.com/questions/2457482/processing-an-audio-wav-file-with-c)
- [query=stream+wav+files+in+c](https://www.youtube.com/results?search_query=stream+wav+files+in+c)
- [Git: make audio playback work on modern Linux systems](https://github.com/tandriamil/Licence3/blob/master/SYR2/Projet/Partie%201%20-%20Lecteur%20Audio/audio.c)
- [Git:blob/master/audio.c](https://github.com/qqq6301/mobile2/blob/master/audio.c)
- [Git: play.c](https://gist.github.com/WorkOfArtiz/747de07afad352feeeca)
- [Git: WAV-streaming-app/blob/master/audio.h](https://github.com/said026/WAV-streaming-app/blob/master/audio.h)
- [Git:src/audioclient.c ](https://github.com/apinsard/SYR-DeaDBeeF/blob/master/src/audioclient.c)
- [Pasterbin: https://pastebin.com/MNL4qBLG](https://pastebin.com/MNL4qBLG)
- [/c/playc_workofartiz_c](http://www.enhgo.com/snippet/c/playc_workofartiz_c)
- [Server-Client UDP : streaming fichier audio](https://openclassrooms.com/forum/sujet/server-client-udp-streaming-fichier-audio?page=1)
- [Audio Class A Project By: Carl Jason G. Rullan ](http://ohm.ecce.admu.edu.ph/wiki/pub/Main/DSPProjectsOctober2010/documentation-elc152-oct2010-15.pdf)
- []()
- [Q: Transmission of audio file using c sockets](https://stackoverflow.com/questions/9166998/transmission-of-audio-file-using-c-sockets)
- [Q: Send large files over socket in C](https://stackoverflow.com/questions/8679547/send-large-files-over-socket-in-c)
- [send audio stream over socket ](https://www.daniweb.com/programming/software-development/threads/432148/send-audio-stream-over-socket)
- []()
- []()
- []()
- []()


#### other links
- [FB bot](https://gist.github.com/WorkOfArtiz/c874bd3c371805db5710b4ca5363b0fe)

### 18/10/2018
Many new things are popping up.

![](http://soundfile.sapp.org/doc/WaveFormat/wav-sound-format.gif)
- [](http://soundfile.sapp.org/doc/WaveFormat/)
