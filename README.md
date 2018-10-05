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
- [EBOOK: Beej's Guide to Network Programming Using Internet Sockets](https://beej.us/guide/bgnet/pdf/bgnet_A4_2.pdf)


## 02/10/2018 to 04/10/208
Wrote my notes about socket programming 

# 05/10/2018
Start to chop down some code: 
</br>
The plan for the asignment: 

UDP Client :
    Create UDP socket.
    Send message to server.
    Wait until response from server is recieved.
    Close socket descriptor and exit.

UDP Server :
    Create UDP socket.
    instantiates a new server structure that holds the properties of our server;
    creates a socket and makes it passive with server_listen`;
    Bind the socket to server address.
    Wait until datagram packet arrives from client.
    accepts new connections on the server socket.
    Process the datagram packet and send a reply to client.
    


### Other Links:
[C library function - isalnum()](https://www.tutorialspoint.com/c_standard_library/c_function_isalnum.htm)
