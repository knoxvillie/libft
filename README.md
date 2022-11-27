<div align="center">
  <!-- Logo -->
  <a href="https://github.com/knoxvillie/libft">
  <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

  <!-- Project Name -->
  <h1>Libft Project</h1>

  <!-- Short Description -->
  <p>42 Porto Libft</p>
</br>

  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?style=for-the-badge" />
    <img src="https://img.shields.io/github/repo-size/knoxvillie/libft?style=for-the-badge&logo=github">
    <img src="https://img.shields.io/github/languages/count/knoxvillie/libft?style=for-the-badge&logo=" />
    <img src="https://img.shields.io/github/languages/top/knoxvillie/libft?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/knoxvillie/libft?style=for-the-badge" />
    <img src="https://img.shields.io/badge/NORMINETTE-3.3.51-blue?style=for-the-badge&logo=" />
  </p>

  <!-- Tree -->
<h4>
    <a href="https://github.com/knoxvillie/libft">:large_blue_diamond: View Demo</a>
  <span> · </span>
    <a href="https://github.com/knoxvillie/libft">:beetle: Report Bug</a>
  <span> · </span>
    <a href="https://github.com/knoxvillie/libft">:speech_balloon: Request Feature</a>
</h4>

  <!-- Subject -->
</br>
  <a href="subject.pdf"><strong>Explore the Subjetc »</strong></a>
</br>
</br>

  <h2>:star2: About The Project</h2>
  <p>
    The main goal of this project is to build a library containing a variety of functions that will be used throughout the 42 Cursus. Most of the functions are low-level and work directly with memory management and allocation, key concepts of the C language. Learning about the building and implementation of the Makefile is the core of the project.
  </p>
</div>

<div>
  <h2>:dart: Table of Contents</h2>
<details>
  <summary>Mandatory Part One</summary>
  <ul>
  <details>
    <summary>ft_atoi.c</summary>
    <p>The ft_atoi() function converts the initial portion of the string pointed to by ptr to int representation. Not overflow protected.</p>
    </details>
  <details>
    <summary>ft_bzero.c</summary>
    <p>The ft_bzero() function writes n null bytes to the buffer. If n is zero, nothing is done.</p>
    </details>
  <details>
    <summary>ft_calloc.c</summary>
    <p>The ft_calloc() function contiguously allocates enough space for count objects that are size bytes of memory each. The allocated memory is filled with bytes of value zero.</p>
    </details>
  <details>
    <summary>ft_isalnum.c</summary>
    <p>The ft_isalnum() function tests for any character for which ft_isalpha or ft_isdigit is true.</p>
    </details>
  <details>
    <summary>ft_isascii.c</summary>
    <p>The ft_isascii() function tests for an ASCII character, which is any char between 0 and decimal 127(inclusive).</p>
    </details>
  <details>
    <summary>ft_isdigit.c</summary>
    <p>The ft_isdigit()function tests for a decimal digit character.</p>
    </details>
  <details>
    <summary>ft_isprint.c</summary>
    <p>The ft_isprint() function tests for any printing character including space (' ').</p>
    </details>
  <details>
    <summary>ft_memchr.c</summary>
    <p>The ft_memchr() function locates the first occurrence of a c in the string str.</p>
    </details>
  <details>
    <summary>ft_memcmp.c</summary>
    <p>The ft_memcmp() function compares byte string s1 against byte string s2.</p>
    </details>
  <details>
    <summary>ft_memcpy.c</summary>
    <p>The ft_memcpy() function copies n bytes from memory area src to memory area dest.</p>
    </details>
  <details>
    <summary>ft_memmove.c</summary>
    <p>The ft_memmove() function copies len bytes from string src to string dest.</p>
    </details>
  <details>
    <summary>ft_memset.c</summary>
    <p>The ft_memset() function writes n bytes of value c(converted to an unsigned char) to buffer.</p>
    </details>
  <details>
    <summary>ft_strchr.c</summary>
    <p>The ft_strchr() function locates the first occurrence of c(converted to a char) in the string pointed to by str.</p>
    </details>
  <details>
    <summary>ft_strdup.c</summary>
    <p>The ft_strdup() function allocates sufficient memory for a copy of the string str, does the copy, and returns a pointer to it.</p>
    </details>
  <details>
    <summary>ft_strdup.c</summary>
    <p>The ft_strdup() function allocates sufficient memory for a copy of the string str, does the copy, and returns a pointer to it.</p>
    </details>
  <details>
    <summary>ft_strlcat.c</summary>
    <p>The ft_strlcat() function concatenate strings with the same input parameters and output result as snprintf(3).</p>
    </details>
  <details>
    <summary>ft_strlcpy.c</summary>
    <p>The ft_strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.</p>
    </details>
  <details>
    <summary>ft_strlen.c</summary>
    <p>The ft_strlen() function computes the length of the string str.</p>
    </details>
  <details>
    <summary>ft_strncmp.c</summary>
    <p>The  ft_strncmp()  function  is similar, except it compares only the first (at most) n bytes of s1 and s2.</p>
    </details>
  <details>
    <summary>ft_strnstr.c</summary>
    <p>The ft_strnstr() function locates the first occurrence of the null-terminated string little in the string big.</p>
    </details>
  <details>
    <summary>ft_strrchr.c</summary>
    <p>The ft_strrchr() function is identical to ft_strchr(), except it locates the last occurrence of c.</p>
    </details>
  <details>
    <summary>ft_tolower.c</summary>
    <p>The tolower() function converts an upper-case letter to the corresponding lower-case letter.</p>
    </details>
  <details>
    <summary>ft_tolower.c</summary>
    <p>The toupper() function converts a lower-case letter to the corresponding upper-case letter.</p>
    </details>
  </ul>
</details>

<details>
  <summary>Mandatory Part Two</summary>
  <ul>
  <details>
    <summary>ft_itoa.c</summary>
    <p>Allocates (with malloc(3)) and returns a string representing the integer received as an argument.Negative numbers must be handled.</p>
    </details>
  <details>
    <summary>ft_putchar_fd.c</summary>
    <p>Outputs the character 'c' to the given file descriptor.</p>
    </details>
  <details>
    <summary>ft_putendl_fd.c</summary>
    <p>Outputs the string 's' to the given file descriptor followed by a newline.</p>
    </details>
  <details>
    <summary>ft_putnbr_fd.c</summary>
    <p>Outputs the integer 'n' to the given file descriptor.</p>
    </details>
  <details>
    <summary>ft_putstr_fd.c</summary>
    <p>Outputs the string 's' to the given file descriptor.</p>
    </details>
  <details>
    <summary>ft_split.c</summary>
    <p>Allocates (with malloc(3)) and returns an array of string obtained by splitting 's' using the character 'c' as a delimiter. The array must end with a NULL pointer.</p>
    </details>
  <details>
    <summary>ft_striteri.c</summary>
    <p>Applies the function 'f' on each character of the string 's' passed as argument, passing its index as first argument. Each character is passed by address to 'f' to be modified if necessary.</p>
    </details>
  <details>
    <summary>ft_strjoin.c</summary>
    <p>Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of 's1' and 's2'.</p>
    </details>
  <details>
    <summary>ft_strmapi.c</summary>
    <p>Applies the function 'f' to each character of the string 's', and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of 'f'.</p>
    </details>
  <details>
    <summary>ft_strtrim.c</summary>
    <p>Allocates (with malloc(3)) and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the strin</p>
    </details>
  <details>
    <summary>ft_substr.c</summary>
    <p>Allocates (with malloc(3)) and returns a substring from the string 's' The substring begins at index 'start' and is of maximum size 'len'.</p>
    </details>
  </ul>
</details>

<details>
  <summary>Bonus Part</summary>
  <ul>
  <details>
    <summary>ft_lstadd_back.c</summary>
    <p>Adds the node 'new' at the end of the list.</p>
    </details>
  <details>
    <summary>ft_lstadd_front.c</summary>
    <p>Adds the node 'new' at the beginning of the list.</p>
    </details>
  <details>
    <summary>ft_lstclear.c</summary>
    <p>Deletes the given node and every successor of that node, usign the function 'del'. Finally, the pointer to the list must be set to NULL.</p>
    </details>
  <details>
    <summary>ft_lstdelone.c</summary>
    <p>Takes as a parameter a node and frees the memory of the node's content usign the function 'del' given as a parameter and free the node.</p>
    </details>
  <details>
    <summary>ft_lstiter.c</summary>
    <p>Iterates the list 'lst' and applies the function 'f' on the content of each node.</p>
    </details>
  <details>
    <summary>ft_lstlast.c</summary>
    <p>Return the last node of the list.</p>
    </details>
  <details>
    <summary>ft_lstmap.c</summary>
    <p>Iterates the list 'lst' and applies the function 'f' on the content of each node.</p>
    </details>
  <details>
    <summary>ft_lstnew.c</summary>
    <p>Allocates (with malloc(3)) and returns a new node. The member variable 'content' is initialized with the value of the parameter 'content'.</p>
    </details>
  <details>
    <summary>ft_lstsize.c</summary>
    <p>Counts the number of nodes in a list.</p>
    </details>
  </ul>
</details>
</div>

 <!-- Contributing -->
<h2>:wave: Contributing</h2>
<p>Special thanks to <a href="https://github.com/AlexMitcul" target="_blank"><strong>AlexMitcul</strong></a> for helping with the documentation.</p>
</br>
Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request


<h2 align="center">:wrench: Running Tests</h2>
<h4 align="center">
  <a href="https://github.com/alelievr/libft-unit-test" target="_blank">:paperclip: Libft-Unit-Test</a>
<span> · </span>
  <a href="https://github.com/knoxvillie/libft" target="_blank">:paperclip: Libft-War-Machine</a>
<span> · </span>
  <a href="https://github.com/knoxvillie/libft" target="_blank">:paperclip: Libftest</a>
<br/>
<br/>
</h4>
<h3 align="center">:camera: Screenshots</h3>
<p align="center">
<img src="images/pic3.png" alt="Libft-Unit-Test" width="250" height="550"/>
<img src="images/pic4.png" alt="Libft-Unit-Test" width="250" height="550"/>
<img src="images/pic5.png" alt="Libft-Unit-Test" width="250" height="550"/>
</p>



